/*
 * XREFs of RaUnitRegisterForIdleDetection @ 0x1C0058AB4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0001D30 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0003544 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C000EF80 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidSetD3Cold @ 0x1C0010434 (RaidSetD3Cold.c)
 *     RaidIsUnitControlSupported @ 0x1C00110A8 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0011128 (RaCallMiniportUnitControl.c)
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C0018400 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0030DE0 (RaidUnitAdaptiveIdleTimeout.c)
 *     Template_pqcccqttqqttq @ 0x1C00326FC (Template_pqcccqttqqttq.c)
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
  _QWORD *Pool; // rax
  _QWORD *v16; // rsi
  unsigned int v17; // ecx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  _DWORD *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 *v24; // rcx
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // r8
  int v28; // edx
  PVOID *Handle; // [rsp+20h] [rbp-79h]
  unsigned int v30; // [rsp+48h] [rbp-51h]
  int v31; // [rsp+80h] [rbp-19h]
  int v32; // [rsp+84h] [rbp-15h]

  v2 = *((_QWORD *)Context + 3);
  v3 = 0;
  v32 = 0;
  v31 = -1;
  v6 = 0;
  if ( !v2 || (*(_BYTE *)(v2 + 109) & 4) != 0 || *((_DWORD *)Context + 382) == 1 )
    goto LABEL_52;
  if ( !RaidUnitCheckAndAcquirePoFx((__int64)Context) )
  {
    if ( (Context[153] & 0x80u) != 0 )
    {
      v6 = -1073741738;
      goto LABEL_16;
    }
    v7 = _interlockedbittestandset((volatile signed __int32 *)Context + 40, 0);
    v32 = v7;
    if ( !v7 )
    {
      Context[153] ^= (Context[153] ^ (4 * (*(_DWORD *)(a2 + 8) >> 1))) & 4;
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
      v16 = Pool;
      if ( !Pool )
      {
        v6 = -1073741670;
        goto LABEL_13;
      }
      memset(Pool, 0, 0xE8uLL);
      v17 = v16[4] & 0xFFFFFFFB;
      *((_DWORD *)v16 + 4) = 0;
      *((_DWORD *)v16 + 8) = v17 | 0xA;
      v16[10] = v16 + 9;
      v16[9] = v16 + 9;
      KeInitializeSpinLock(v16 + 11);
      v16[1] = v16 + 19;
      *((_DWORD *)v16 + 39) = 16;
      *((_DWORD *)v16 + 38) = 1;
      *((_DWORD *)v16 + 40) = 1;
      *((_DWORD *)v16 + 42) = 1;
      *((_DWORD *)v16 + 43) = 32;
      *((_DWORD *)v16 + 44) = 1;
      *(_OWORD *)(v16 + 23) = xmmword_1C00457E0;
      *((_DWORD *)v16 + 50) = 1;
      *((_DWORD *)v16 + 51) = 32;
      v16[26] = 0LL;
      v16[27] = 0LL;
      *((_DWORD *)v16 + 56) = -1;
      v6 = RaidRegisterForRuntimePowerManagement(
             *((_QWORD *)Context + 1),
             (unsigned __int64)(v16 + 19),
             (__int64)Context,
             (const unsigned __int16 *)v16);
      if ( v6 >= 0 )
      {
        if ( *v16 )
        {
          PoFxSetComponentLatency(*v16, 0LL, -1LL);
          PoFxSetComponentResidency(*v16, 0LL, -1LL);
          v18 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)Context + 181);
          *((_QWORD *)Context + 182) = v16;
          ExReInitializeRundownProtectionCacheAware(v18);
          Context[153] |= 0x80u;
LABEL_13:
          if ( v6 >= 0 )
          {
            *(_DWORD *)(*((_QWORD *)Context + 182) + 32LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*((_QWORD *)Context
                                                                                                 + 182)
                                                                                               + 32LL)) & 1;
            v19 = *((_DWORD *)Context + 383);
            if ( v19 == -1 )
            {
              v20 = *((_QWORD *)Context + 182);
              v21 = *(_DWORD **)(v20 + 8);
              if ( *v21 >= 2u && (v21[3] & 0x10) != 0 )
              {
                *(_DWORD *)(v20 + 24) = v21[4];
              }
              else if ( *v21 >= 3u && (v21[3] & 0x20) != 0 )
              {
                *(_DWORD *)(v20 + 24) = 0;
              }
              else
              {
                *(_DWORD *)(v20 + 24) = 300000;
              }
            }
            else
            {
              *(_DWORD *)(*((_QWORD *)Context + 182) + 24LL) = v19;
            }
            *(_DWORD *)(*((_QWORD *)Context + 182) + 20LL) = *(_DWORD *)(a2 + 12);
            RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12));
            PoFxStartDevicePowerManagement(**((_QWORD **)Context + 182));
            v23 = *((_QWORD *)Context + 182);
            if ( (*(_DWORD *)(v23 + 32) & 0x80u) != 0 )
            {
              LOBYTE(v22) = 1;
              PoRegisterCoalescingCallback(RaidUnitIoCoalescingCallback, v22, v23 + 104, Context);
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
            Context[153] &= ~4u;
          }
          RaidSetD3Cold(*((struct _DEVICE_OBJECT **)Context + 1), (Context[153] & 4) != 0);
          goto LABEL_16;
        }
        v6 = -1073741823;
      }
      ExFreePoolWithTag(v16, 0x4F506152u);
      goto LABEL_13;
    }
LABEL_52:
    v6 = -1073741823;
    goto LABEL_16;
  }
  v25 = *((_QWORD *)Context + 182);
  v26 = *(_DWORD *)(a2 + 12);
  if ( v26 != *(_DWORD *)(v25 + 20) )
  {
    *(_DWORD *)(v25 + 20) = v26;
    if ( (*(_DWORD *)(*((_QWORD *)Context + 182) + 32LL) & 0x80u) == 0 )
      RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12));
    else
      RaidUnitAdaptiveIdleTimeout((__int64)Context);
  }
  v27 = *((_QWORD *)Context + 182);
  v28 = *(_DWORD *)(a2 + 8) & 1;
  if ( v28 != (*(_DWORD *)(v27 + 32) & 1) )
    *(_DWORD *)(v27 + 32) = v28 | *(_DWORD *)(v27 + 32) & 0xFFFFFFFE;
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 181));
LABEL_16:
  if ( StorEtwLoggingEnabled )
  {
    v9 = *((_QWORD *)Context + 3);
    v10 = 0LL;
    v11 = 0;
    v12 = 0;
    if ( v9 )
      v31 = *(_DWORD *)(v9 + 56);
    if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    {
      v24 = (__int64 *)*((_QWORD *)Context + 182);
      v10 = *v24;
      v12 = v24[4] & 1;
      v3 = *((_DWORD *)v24 + 5);
      v11 = *(_DWORD *)(v24[1] + 24);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 181));
    }
    if ( (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
    {
      v30 = (*(_DWORD *)(a2 + 8) >> 1) & 1;
      LODWORD(Handle) = v31;
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
        (Context[153] >> 2) & 1,
        v12,
        v3);
    }
  }
  if ( !v32 )
    *((_DWORD *)Context + 40) &= ~1u;
  return (unsigned int)v6;
}
