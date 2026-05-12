/*
 * XREFs of RaidAdapterSetSystemPowerCompletion @ 0x1C0008F40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C002796C (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00279B4 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterSetSystemPowerCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char v4; // r14
  PDEVICE_OBJECT v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rax
  POWER_STATE v8; // ebx
  REQUEST_POWER_COMPLETE *v9; // r9
  void *Context; // r8
  NTSTATUS v11; // esi
  bool v12; // cl

  v2 = *(_QWORD *)(a1 + 64);
  v4 = 1;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 42LL, &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids, v2, a2);
    v5 = WPP_GLOBAL_Control;
  }
  v6 = *(_QWORD *)(a2 + 184);
  v7 = *(int *)(v6 + 24);
  v8.SystemState = (_SYSTEM_POWER_STATE)DeviceStateTable[v7];
  if ( *(_DWORD *)(v2 + 264) < (int)v7 )
  {
    v4 = 0;
LABEL_5:
    v9 = RaidAdapterSetDevicePowerCompletionRoutine;
    Context = (void *)a2;
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(v2 + 5088) )
    goto LABEL_5;
  v9 = StorPortAdapterPoFxD0Completion;
  Context = (void *)v2;
LABEL_6:
  if ( *(_BYTE *)(a2 + 65) )
  {
    *(_BYTE *)(v6 + 3) |= 1u;
    v5 = WPP_GLOBAL_Control;
  }
  v11 = *(_DWORD *)(a2 + 48);
  if ( v11 >= 0 )
  {
    v12 = (_DWORD)v7 != 1 && *(_DWORD *)(v2 + 264) < (int)v7;
    *(_DWORD *)(v2 + 272) = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 32LL);
    *(_BYTE *)(v2 + 276) = v12;
    *(_DWORD *)(v2 + 264) = v7;
    v11 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(v2 + 8), 2u, v8, v9, Context, 0LL);
    if ( v11 == 259 )
    {
      if ( v8.SystemState == PowerSystemWorking )
        *(_BYTE *)(v2 + 108) |= 1u;
      else
        *(_BYTE *)(v2 + 108) |= 2u;
      v11 = 0;
    }
    v5 = WPP_GLOBAL_Control;
  }
  if ( v4 || v11 < 0 )
  {
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 256));
    v5 = WPP_GLOBAL_Control;
  }
  else
  {
    v11 = -1073741802;
  }
  if ( v5 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v5->Timer) & 4) != 0 && BYTE1(v5->Timer) >= 4u )
    WPP_SF_qqD(v5->AttachedDevice, 43LL, &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids, v2, a2, v11);
  return (unsigned int)v11;
}
