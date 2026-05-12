/*
 * XREFs of RaUnitRegisterForIdleDetection @ 0x1C0052234
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00044D0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C0007234 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     RaidSetD3Cold @ 0x1C000BFB8 (RaidSetD3Cold.c)
 *     RaidIsUnitControlSupported @ 0x1C00102BC (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C001033C (RaCallMiniportUnitControl.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C002CEAC (RaidRegisterForRuntimePowerManagement.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C002D59C (RaidUnitAdaptiveIdleTimeout.c)
 *     Template_pqcccqttqqttq @ 0x1C002F640 (Template_pqcccqttqqttq.c)
 */

__int64 __fastcall RaUnitRegisterForIdleDetection(unsigned __int8 *Context, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // r13d
  int v6; // edi
  unsigned __int8 v7; // al
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // r12d
  int v12; // esi
  __int64 v13; // r8
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // r8
  int v18; // edx
  _QWORD *Pool; // rax
  _QWORD *v20; // rsi
  unsigned int v21; // ecx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v22; // rcx
  int v23; // ecx
  __int64 v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // rdx
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
  if ( !v2 || (*(_BYTE *)(v2 + 109) & 4) != 0 || *((_DWORD *)Context + 382) == 1 )
    goto LABEL_52;
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
      v8 = *((_QWORD *)Context + 182);
      if ( v8 || (*(_BYTE *)(v2 + 104) & 0x20) == 0 )
      {
        if ( !v8 )
          v6 = -1073741637;
        goto LABEL_13;
      }
      Pool = RaidAllocatePool(NonPagedPoolNx, 0xE8uLL, 0x4F506152u, *((_QWORD *)Context + 1));
      v20 = Pool;
      if ( !Pool )
      {
        v6 = -1073741670;
        goto LABEL_13;
      }
      memset(Pool, 0, 0xE8uLL);
      v21 = v20[4] & 0xFFFFFFFB;
      *((_DWORD *)v20 + 4) = 0;
      *((_DWORD *)v20 + 8) = v21 | 0xA;
      v20[10] = v20 + 9;
      v20[9] = v20 + 9;
      KeInitializeSpinLock(v20 + 11);
      v20[1] = v20 + 19;
      *((_DWORD *)v20 + 39) = 16;
      *((_DWORD *)v20 + 38) = 1;
      *((_DWORD *)v20 + 40) = 1;
      *((_DWORD *)v20 + 42) = 1;
      *((_DWORD *)v20 + 43) = 32;
      *((_DWORD *)v20 + 44) = 1;
      *(_OWORD *)(v20 + 23) = xmmword_1C0041DE0;
      *((_DWORD *)v20 + 50) = 1;
      *((_DWORD *)v20 + 51) = 32;
      v20[26] = 0LL;
      v20[27] = 0LL;
      *((_DWORD *)v20 + 56) = -1;
      v6 = RaidRegisterForRuntimePowerManagement(
             *((_QWORD *)Context + 1),
             (int *)v20 + 38,
             (unsigned __int64)Context,
             (const unsigned __int16 *)v20);
      if ( v6 >= 0 )
      {
        if ( *v20 )
        {
          PoFxSetComponentLatency(*v20, 0LL, -1LL);
          PoFxSetComponentResidency(*v20, 0LL, -1LL);
          v22 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)Context + 181);
          *((_QWORD *)Context + 182) = v20;
          ExReInitializeRundownProtectionCacheAware(v22);
          Context[145] |= 0x80u;
LABEL_13:
          if ( v6 >= 0 )
          {
            *(_DWORD *)(*((_QWORD *)Context + 182) + 32LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*((_QWORD *)Context
                                                                                                 + 182)
                                                                                               + 32LL)) & 1;
            v23 = *((_DWORD *)Context + 383);
            if ( v23 == -1 )
            {
              v24 = *((_QWORD *)Context + 182);
              v25 = *(_DWORD **)(v24 + 8);
              if ( *v25 >= 2u && (v25[3] & 0x10) != 0 )
              {
                *(_DWORD *)(v24 + 24) = v25[4];
              }
              else if ( *v25 >= 3u && (v25[3] & 0x20) != 0 )
              {
                *(_DWORD *)(v24 + 24) = 0;
              }
              else
              {
                *(_DWORD *)(v24 + 24) = 300000;
              }
            }
            else
            {
              *(_DWORD *)(*((_QWORD *)Context + 182) + 24LL) = v23;
            }
            *(_DWORD *)(*((_QWORD *)Context + 182) + 20LL) = *(_DWORD *)(a2 + 12);
            RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12));
            PoFxStartDevicePowerManagement(**((_QWORD **)Context + 182));
            v27 = *((_QWORD *)Context + 182);
            if ( (*(_DWORD *)(v27 + 32) & 0x80u) != 0 )
            {
              LOBYTE(v26) = 1;
              PoRegisterCoalescingCallback(RaidUnitIoCoalescingCallback, v26, v27 + 104, Context);
              PoRegisterPowerSettingCallback(
                *((PDEVICE_OBJECT *)Context + 1),
                &GUID_ACDC_POWER_SOURCE,
                (PPOWER_SETTING_CALLBACK)RaidUnitPowerSettingCallback,
                Context,
                (PVOID *)(*((_QWORD *)Context + 182) + 112LL));
              *(_QWORD *)(*((_QWORD *)Context + 182) + 120LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, Context, 0LL);
              *(_QWORD *)(*((_QWORD *)Context + 182) + 128LL) = ExAllocateTimer(
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
      ExFreePoolWithTag(v20, 0x4F506152u);
      goto LABEL_13;
    }
LABEL_52:
    v6 = -1073741823;
    goto LABEL_16;
  }
  v15 = *((_QWORD *)Context + 182);
  v16 = *(_DWORD *)(a2 + 12);
  if ( v16 != *(_DWORD *)(v15 + 20) )
  {
    *(_DWORD *)(v15 + 20) = v16;
    if ( (*(_DWORD *)(*((_QWORD *)Context + 182) + 32LL) & 0x80u) == 0 )
      RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12));
    else
      RaidUnitAdaptiveIdleTimeout((__int64)Context);
  }
  v17 = *((_QWORD *)Context + 182);
  v18 = *(_DWORD *)(a2 + 8) & 1;
  if ( v18 != (*(_DWORD *)(v17 + 32) & 1) )
    *(_DWORD *)(v17 + 32) = v18 | *(_DWORD *)(v17 + 32) & 0xFFFFFFFE;
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 181));
LABEL_16:
  if ( StorEtwLoggingEnabled )
  {
    v9 = *((_QWORD *)Context + 3);
    v10 = 0LL;
    v11 = 0;
    v12 = 0;
    if ( v9 )
      v32 = *(_DWORD *)(v9 + 56);
    if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    {
      v28 = (__int64 *)*((_QWORD *)Context + 182);
      v10 = *v28;
      v12 = v28[4] & 1;
      v3 = *((_DWORD *)v28 + 5);
      v11 = *(_DWORD *)(v28[1] + 24);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 181));
    }
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    {
      v30 = (*(_DWORD *)(a2 + 8) >> 1) & 1;
      LODWORD(Handle) = v32;
      Template_pqcccqttqqttq(
        *(_DWORD *)(a2 + 8) & 1,
        v30,
        v13,
        v10,
        Handle,
        Context[88],
        Context[89],
        Context[90],
        v6,
        v30,
        *(_DWORD *)(a2 + 8) & 1,
        *(_DWORD *)(a2 + 12),
        v11,
        (Context[145] >> 2) & 1,
        v12,
        v3);
    }
  }
  if ( !v31 )
    *((_DWORD *)Context + 38) &= ~1u;
  return (unsigned int)v6;
}
