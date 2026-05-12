/*
 * XREFs of RaidUnitSetSystemPowerIrp @ 0x1C00061A0
 * Callers:
 *     RaidUnitSetPowerIrp @ 0x1C0006024 (RaidUnitSetPowerIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0003998 (RaUnitAcquireRemoveLock.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidUnitSetSystemPowerIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 LowPart; // rax
  unsigned int EaLength; // edx
  POWER_STATE v7; // ebx
  bool v8; // cl
  REQUEST_POWER_COMPLETE *v9; // rbp
  void *Context; // r14
  NTSTATUS v11; // eax
  unsigned int v12; // r14d
  signed int v13; // ebp

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v7.SystemState = (_SYSTEM_POWER_STATE)DeviceStateTable[LowPart];
  v8 = (_DWORD)LowPart != 1 && *(_DWORD *)(a1 + 184) < (int)LowPart;
  *(_BYTE *)(a1 + 196) = v8;
  *(_DWORD *)(a1 + 184) = LowPart;
  *(_DWORD *)(a1 + 192) = EaLength;
  if ( v8 )
  {
    v9 = RaidUnitSetDevicePowerCompletionRoutine;
    Context = a2;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  else
  {
    v9 = RaidUnitDeviceStackPowerUpCompletion;
    Context = (void *)a1;
  }
  RaUnitAcquireRemoveLock(a1);
  v11 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, v7, v9, Context, 0LL);
  v12 = 259;
  v13 = v11;
  if ( v11 == 259 )
  {
    if ( v7.SystemState == PowerSystemWorking )
      *(_BYTE *)(a1 + 144) |= 0x80u;
    else
      *(_BYTE *)(a1 + 145) |= 1u;
    v13 = 0;
  }
  if ( !*(_BYTE *)(a1 + 196) || v13 < 0 )
  {
    RaUnitReleaseRemoveLock(a1);
    v12 = RaidCompleteRequestEx(a2, 0, v13);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 57LL, &WPP_e109923e46317c4616adabc68839fe07_Traceguids, a1, a2, v12);
  }
  return v12;
}
