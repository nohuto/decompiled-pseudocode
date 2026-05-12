/*
 * XREFs of RaidAdapterQueryDeviceRelationsIrp @ 0x1C000FB0C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C000F7B0 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0002CE0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaForwardIrp @ 0x1C000F9EC (RaForwardIrp.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C000FC94 (RaidpBuildAdapterBusRelations.c)
 *     RaidAdapterRescanBus @ 0x1C000FF70 (RaidAdapterRescanBus.c)
 *     RaidNtStatusToStorStatus @ 0x1C00199C4 (RaidNtStatusToStorStatus.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C0019FB4 (RaidAdapterAcquireStartIoLock.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     Template_pq @ 0x1C002A68C (Template_pq.c)
 *     WPP_SF_qq @ 0x1C002B074 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C002B0BC (WPP_SF_qqD.c)
 */

NTSTATUS __fastcall RaidAdapterQueryDeviceRelationsIrp(__int64 a1, IRP *a2)
{
  void (__fastcall *v2)(__int64, __int64, _QWORD, unsigned __int16 *, int); // r15
  unsigned __int16 v4; // r12
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  signed int v7; // esi
  __int64 v8; // rcx
  _IO_STACK_LOCATION *v9; // rax
  int v10; // eax
  int v11; // esi
  __int64 v13; // rcx
  unsigned __int16 *v14; // r14
  __int64 v15; // r13
  int v16; // eax
  _BYTE v17[4]; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  int v21; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+5Ch] [rbp-24h]
  int v23; // [rsp+64h] [rbp-1Ch]
  int v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+6Ch] [rbp-14h]
  int v26; // [rsp+74h] [rbp-Ch]

  LODWORD(v2) = 0;
  v18 = 0;
  v4 = 0;
  v17[0] = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_222db84838ff3f85fffe5432ece91366_Traceguids, a1, a2);
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v19 = 0LL;
  if ( CurrentStackLocation->Parameters.Read.Length )
  {
    if ( StorEtwLoggingEnabled )
    {
      v21 = 0;
      v22 = 0LL;
      v23 = 0;
      IoGetActivityIdIrp(a2, &v21);
      if ( (Microsoft_Windows_StorPortEnableBits & 0x200000) != 0 )
        Template_pq(v13, &EventPnpRequestComplete, &v21, a2, a2->IoStatus.Status);
    }
    return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0
      && (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 4344)) > 300000000 )
    {
      *(_BYTE *)(a1 + 106) = 1;
    }
    v7 = RaidAdapterRescanBus(a1, &v18, v17);
    if ( v7 >= 0 )
    {
      v7 = RaidpBuildAdapterBusRelations(a1, &v19);
      v18 = v7;
    }
    if ( v17[0] )
    {
      v14 = *(unsigned __int16 **)(a1 + 4936);
      *(_BYTE *)(a1 + 104) &= ~0x40u;
      *(_QWORD *)(a1 + 4936) = 0LL;
      if ( v14 )
        v4 = *v14;
      v15 = *(_QWORD *)(a1 + 4952);
      *(_QWORD *)(a1 + 4952) = 0LL;
      v2 = *(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int16 *, int))(a1 + 4944);
      *(_QWORD *)(a1 + 4944) = 0LL;
      *(_QWORD *)(a1 + 4924) = 0LL;
      _InterlockedExchange((volatile __int32 *)(a1 + 4920), 0);
      if ( v2 )
      {
        RaidAdapterAcquireStartIoLock(a1, &LockHandle);
        v16 = RaidNtStatusToStorStatus(v18);
        v2(*(_QWORD *)(a1 + 536) + 16LL, v15, v4, v14, v16);
        LODWORD(v2) = 0;
        if ( *(_DWORD *)(a1 + 688) )
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        else
          RaidAdapterReleaseInterruptLock(a1, (KIRQL)LockHandle.LockQueue.Next);
      }
    }
    a2->IoStatus.Information = v19;
    a2->IoStatus.Status = v7;
    if ( v7 < 0 )
    {
      v10 = RaidCompleteRequestEx(a2, 0, v7);
    }
    else
    {
      if ( StorEtwLoggingEnabled != (_BYTE)v2 )
      {
        v24 = (int)v2;
        v25 = 0LL;
        v26 = 0;
        IoGetActivityIdIrp(a2, &v24);
        if ( (Microsoft_Windows_StorPortEnableBits & 0x200000) != 0 )
          Template_pq(v8, &EventPnpRequestComplete, &v24, a2, v7);
      }
      v9 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v9[-1].MajorFunction = *(_OWORD *)&v9->MajorFunction;
      *(_OWORD *)&v9[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v9->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&v9[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v9->Parameters.QueryDeviceRelations + 6);
      v9[-1].FileObject = v9->FileObject;
      v9[-1].Control = (unsigned __int8)v2;
      v10 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
    }
    v11 = v10;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        15LL,
        &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
        a1,
        a2,
        v10);
    }
    return v11;
  }
}
