/*
 * XREFs of RaUnitRegisterForIdleDetection @ 0x1C004D334
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00036E0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 *     RaidSetD3Cold @ 0x1C0009D80 (RaidSetD3Cold.c)
 *     RaidIsUnitControlSupported @ 0x1C000E04C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C000E0CC (RaCallMiniportUnitControl.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C002AEEC (RaidRegisterForRuntimePowerManagement.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C002B5DC (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C002BB30 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     Template_pqcccqttqqttq @ 0x1C002DA0C (Template_pqcccqttqqttq.c)
 */

__int64 __fastcall RaUnitRegisterForIdleDetection(unsigned __int8 *Context, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // r13d
  int v6; // edi
  unsigned __int8 v7; // al
  __int64 v8; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // r8
  int v13; // edx
  _QWORD *Pool; // rax
  _QWORD *v15; // rsi
  unsigned int v16; // ecx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r15
  int v25; // r12d
  int v26; // esi
  __int64 v27; // r8
  __int64 *v28; // rcx
  PVOID *Handle; // [rsp+20h] [rbp-79h]
  unsigned int v30; // [rsp+48h] [rbp-51h]
  int v31; // [rsp+80h] [rbp-19h]
  int v32; // [rsp+84h] [rbp-15h]

  v2 = *((_QWORD *)Context + 3);
  v3 = 0;
  v31 = 0;
  v32 = -1;
  v6 = 0;
  if ( !v2 || (*(_BYTE *)(v2 + 109) & 4) != 0 || *((_DWORD *)Context + 378) == 1 )
    goto LABEL_46;
  if ( !RaidUnitCheckAndAcquirePoFx((__int64)Context) )
  {
    if ( (Context[145] & 0x80u) != 0 )
    {
      v6 = -1073741738;
      goto LABEL_16;
    }
    v7 = _interlockedbittestandset((volatile signed __int32 *)Context + 38, 0);
    v31 = v7;
    if ( !v7 )
    {
      Context[145] ^= (Context[145] ^ (4 * (*(_DWORD *)(a2 + 8) >> 1))) & 4;
      if ( RaidIsUnitControlSupported((__int64)Context, 4) )
        v6 = RaCallMiniportUnitControl(*((_QWORD *)Context + 3) + 296LL);
      v8 = *((_QWORD *)Context + 180);
      if ( v8 || (*(_BYTE *)(v2 + 104) & 0x20) == 0 )
      {
        if ( !v8 )
          v6 = -1073741637;
        goto LABEL_13;
      }
      Pool = RaidAllocatePool(NonPagedPoolNx, 0xE8uLL, 0x4F506152u, *((_QWORD *)Context + 1));
      v15 = Pool;
      if ( !Pool )
      {
        v6 = -1073741670;
        goto LABEL_13;
      }
      memset(Pool, 0, 0xE8uLL);
      v16 = v15[4] & 0xFFFFFFFB;
      *((_DWORD *)v15 + 4) = 0;
      *((_DWORD *)v15 + 8) = v16 | 0xA;
      v15[10] = v15 + 9;
      v15[9] = v15 + 9;
      KeInitializeSpinLock(v15 + 11);
      v15[1] = v15 + 19;
      *((_DWORD *)v15 + 39) = 16;
      *((_DWORD *)v15 + 38) = 1;
      *((_DWORD *)v15 + 40) = 1;
      *((_DWORD *)v15 + 42) = 1;
      *((_DWORD *)v15 + 43) = 32;
      *((_DWORD *)v15 + 44) = 1;
      *(_OWORD *)(v15 + 23) = xmmword_1C003EC40;
      *((_DWORD *)v15 + 50) = 1;
      *((_DWORD *)v15 + 51) = 32;
      v15[26] = 0LL;
      v15[27] = 0LL;
      *((_DWORD *)v15 + 56) = -1;
      v6 = RaidRegisterForRuntimePowerManagement(
             *((_QWORD *)Context + 1),
             (int *)v15 + 38,
             (unsigned __int64)Context,
             (const unsigned __int16 *)v15);
      if ( v6 >= 0 )
      {
        if ( *v15 )
        {
          PoFxSetComponentLatency(*v15, 0LL, -1LL);
          PoFxSetComponentResidency(*v15, 0LL, -1LL);
          v17 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)Context + 179);
          *((_QWORD *)Context + 180) = v15;
          ExReInitializeRundownProtectionCacheAware(v17);
          Context[145] |= 0x80u;
LABEL_13:
          if ( v6 >= 0 )
          {
            *(_DWORD *)(*((_QWORD *)Context + 180) + 32LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*((_QWORD *)Context
                                                                                                 + 180)
                                                                                               + 32LL)) & 1;
            v18 = *((_DWORD *)Context + 379);
            if ( v18 == -1 )
            {
              v19 = *((_QWORD *)Context + 180);
              v20 = *(_DWORD **)(v19 + 8);
              if ( *v20 >= 2u && (v20[3] & 0x10) != 0 )
              {
                *(_DWORD *)(v19 + 24) = v20[4];
              }
              else if ( *v20 >= 3u && (v20[3] & 0x20) != 0 )
              {
                *(_DWORD *)(v19 + 24) = 0;
              }
              else
              {
                *(_DWORD *)(v19 + 24) = 300000;
              }
            }
            else
            {
              *(_DWORD *)(*((_QWORD *)Context + 180) + 24LL) = v18;
            }
            *(_DWORD *)(*((_QWORD *)Context + 180) + 20LL) = *(_DWORD *)(a2 + 12);
            RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12));
            PoFxStartDevicePowerManagement(**((_QWORD **)Context + 180));
            v22 = *((_QWORD *)Context + 180);
            if ( (*(_DWORD *)(v22 + 32) & 0x80u) != 0 )
            {
              LOBYTE(v21) = 1;
              PoRegisterCoalescingCallback(RaidUnitIoCoalescingCallback, v21, v22 + 104, Context);
              PoRegisterPowerSettingCallback(
                *((PDEVICE_OBJECT *)Context + 1),
                &GUID_ACDC_POWER_SOURCE,
                (PPOWER_SETTING_CALLBACK)RaidUnitPowerSettingCallback,
                Context,
                (PVOID *)(*((_QWORD *)Context + 180) + 112LL));
              *(_QWORD *)(*((_QWORD *)Context + 180) + 120LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, Context, 0LL);
              *(_QWORD *)(*((_QWORD *)Context + 180) + 128LL) = ExAllocateTimer(
                                                                  RaidUnitEndMaintenanceTime,
                                                                  Context,
                                                                  0LL);
            }
          }
          else
          {
            Context[145] &= ~4u;
          }
          RaidSetD3Cold(*((struct _DEVICE_OBJECT **)Context + 1), (Context[145] & 4) != 0);
          goto LABEL_16;
        }
        v6 = -1073741823;
      }
      ExFreePoolWithTag(v15, 0x4F506152u);
      goto LABEL_13;
    }
LABEL_46:
    v6 = -1073741823;
    goto LABEL_16;
  }
  v10 = *((_QWORD *)Context + 180);
  v11 = *(_DWORD *)(a2 + 12);
  if ( v11 != *(_DWORD *)(v10 + 20) )
  {
    *(_DWORD *)(v10 + 20) = v11;
    if ( (*(_DWORD *)(*((_QWORD *)Context + 180) + 32LL) & 0x80u) == 0 )
      RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12));
    else
      RaidUnitAdaptiveIdleTimeout((__int64)Context);
  }
  v12 = *((_QWORD *)Context + 180);
  v13 = *(_DWORD *)(a2 + 8) & 1;
  if ( v13 != (*(_DWORD *)(v12 + 32) & 1) )
    *(_DWORD *)(v12 + 32) = v13 | *(_DWORD *)(v12 + 32) & 0xFFFFFFFE;
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 179));
LABEL_16:
  if ( StorEtwLoggingEnabled )
  {
    v23 = *((_QWORD *)Context + 3);
    v24 = 0LL;
    v25 = 0;
    v26 = 0;
    if ( v23 )
      v32 = *(_DWORD *)(v23 + 56);
    if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    {
      v28 = (__int64 *)*((_QWORD *)Context + 180);
      v24 = *v28;
      v26 = v28[4] & 1;
      v3 = *((_DWORD *)v28 + 5);
      v25 = *(_DWORD *)(v28[1] + 24);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 179));
    }
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    {
      v30 = (*(_DWORD *)(a2 + 8) >> 1) & 1;
      LODWORD(Handle) = v32;
      Template_pqcccqttqqttq(
        *(_DWORD *)(a2 + 8) & 1,
        v30,
        v27,
        v24,
        Handle,
        Context[88],
        Context[89],
        Context[90],
        v6,
        v30,
        *(_DWORD *)(a2 + 8) & 1,
        *(_DWORD *)(a2 + 12),
        v25,
        (Context[145] >> 2) & 1,
        v26,
        v3);
    }
  }
  if ( !v31 )
    *((_DWORD *)Context + 38) &= ~1u;
  return (unsigned int)v6;
}
