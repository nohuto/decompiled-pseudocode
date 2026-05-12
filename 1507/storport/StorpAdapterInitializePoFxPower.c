/*
 * XREFs of StorpAdapterInitializePoFxPower @ 0x1C00288C4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 *     RaidSetD3Cold @ 0x1C0009D80 (RaidSetD3Cold.c)
 *     memmove @ 0x1C0012FC0 (memmove.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     Template_pqtqq @ 0x1C0025294 (Template_pqtqq.c)
 *     RaidGetStorPoFxComponent @ 0x1C00270A0 (RaidGetStorPoFxComponent.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C0027144 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C0027204 (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C0027228 (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C002AEEC (RaidRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall StorpAdapterInitializePoFxPower(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v5; // rbx
  __int64 v7; // rdx
  int *v8; // rcx
  int *StorPoFxComponent; // rax
  int *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v15; // r15
  SIZE_T v16; // r12
  _QWORD *Pool; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  bool v21; // zf
  __int64 v22; // rdx
  unsigned int v23; // [rsp+28h] [rbp-40h]
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF

  *a3 = 0;
  if ( !a2 )
    return 3238002694LL;
  v5 = **(_QWORD **)(a1 - 16);
  if ( !v5 )
    return 3238002694LL;
  if ( *(_QWORD *)(v5 + 5088) )
  {
    *a3 = (*(_BYTE *)(v5 + 108) & 8) != 0;
    return 0LL;
  }
  if ( !RaidStorPoFxDeviceVersionAndSizeIsValid((int *)a2) )
    return 3238002694LL;
  if ( *(_DWORD *)(v7 + 8) != 1 )
    return 3238002694LL;
  StorPoFxComponent = (int *)RaidGetStorPoFxComponent(v8, 0);
  v10 = StorPoFxComponent;
  if ( !StorPoFxComponent
    || !RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent)
    || (unsigned int)(*(_DWORD *)(v12 + 8) - 1) > 7 )
  {
    return 3238002694LL;
  }
  v13 = *(_QWORD *)(v12 + 16) - 0x481F895FDCAF9C10LL;
  if ( *(_QWORD *)(v12 + 16) == 0x481F895FDCAF9C10LL )
    v13 = *(_QWORD *)(v12 + 24) - 0x3356F5D2CED492A4LL;
  if ( v13 )
    return 3238002694LL;
  v24 &= v11;
  if ( (int)RaidRegisterForRuntimePowerManagement(*(_QWORD *)(v5 + 8), a2, v5, &v24) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize((int *)a2);
  v15 = TotalStorPoFxDeviceSize;
  v16 = TotalStorPoFxDeviceSize + 96;
  Pool = RaidAllocatePool(NonPagedPoolNx, v16, 0x4F506152u, *(_QWORD *)(v5 + 8));
  v18 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v16);
    v19 = v24;
    *((_DWORD *)v18 + 4) = 0;
    *((_DWORD *)v18 + 5) |= 3u;
    *v18 = v19;
    v18[1] = v18 + 12;
    memmove(v18 + 12, (const void *)a2, v15);
    if ( ((*(_BYTE *)(v5 + 108) >> 2) & ((*(_BYTE *)(a2 + 12) & 4) != 0)) != 0 )
    {
      if ( (int)RaidSetD3Cold(*(struct _DEVICE_OBJECT **)(v5 + 8), 1) < 0 )
      {
        *(_BYTE *)(v5 + 108) &= ~8u;
      }
      else
      {
        *(_BYTE *)(v5 + 108) |= 8u;
        *a3 = 1;
      }
    }
    else
    {
      *(_BYTE *)(v5 + 108) &= ~8u;
    }
    if ( (*(_DWORD *)(a2 + 12) & 8) != 0 )
      *(_BYTE *)(v5 + 108) |= 0x20u;
    if ( (*(_DWORD *)(a2 + 12) & 0x40) != 0 )
      *(_BYTE *)(v5 + 109) |= 4u;
    PoFxSetComponentLatency(*v18, 0LL, -1LL);
    PoFxSetComponentResidency(*v18, 0LL, -1LL);
    if ( (*(_BYTE *)(v5 + 108) & 0x40) == 0 && *(_DWORD *)a2 >= 2u && (*(_DWORD *)(a2 + 12) & 0x10) != 0 )
      *(_DWORD *)(v5 + 5104) = *(_DWORD *)(a2 + 16);
    PoFxSetDeviceIdleTimeout(*v18, 10000LL * *(unsigned int *)(v5 + 5104));
    v21 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(v5 + 5088) = v18;
    if ( !v21 )
    {
      v22 = *(unsigned int *)(v5 + 56);
      if ( (_DWORD)v22 != -1 && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      {
        v23 = (*(unsigned __int8 *)(v5 + 108) >> 3) & 1;
        Template_pqtqq(v23, v22, v20, *v18, v22, v23, *(_DWORD *)(v5 + 5104), v10[2]);
      }
    }
    PoFxStartDevicePowerManagement(**(_QWORD **)(v5 + 5088));
    return 0LL;
  }
  PoFxUnregisterDevice(v24);
  return 3238002691LL;
}
