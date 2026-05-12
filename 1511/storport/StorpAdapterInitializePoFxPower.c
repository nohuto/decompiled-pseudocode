/*
 * XREFs of StorpAdapterInitializePoFxPower @ 0x1C002AA9C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     RaidSetD3Cold @ 0x1C000BFB8 (RaidSetD3Cold.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     Template_pqtqq @ 0x1C0027374 (Template_pqtqq.c)
 *     RaidGetStorPoFxComponent @ 0x1C0029344 (RaidGetStorPoFxComponent.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C00293E8 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C00294A8 (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C00294CC (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C002CEAC (RaidRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall StorpAdapterInitializePoFxPower(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v5; // rbx
  char v6; // al
  __int64 v8; // rdx
  int *v9; // rcx
  int *StorPoFxComponent; // rax
  int *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v16; // r15
  SIZE_T v17; // r12
  _QWORD *Pool; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r8
  bool v22; // zf
  __int64 v23; // rdx
  unsigned int v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF

  *a3 = 0;
  if ( !a2 )
    return 3238002694LL;
  v5 = **(_QWORD **)(a1 - 16);
  if ( !v5 )
    return 3238002694LL;
  v6 = *(_BYTE *)(v5 + 108);
  if ( (v6 & 0x10) != 0 )
    return 3221225473LL;
  if ( *(_QWORD *)(v5 + 5088) )
  {
    *a3 = (v6 & 8) != 0;
    return 0LL;
  }
  if ( !RaidStorPoFxDeviceVersionAndSizeIsValid((int *)a2) )
    return 3238002694LL;
  if ( *(_DWORD *)(v8 + 8) != 1 )
    return 3238002694LL;
  StorPoFxComponent = (int *)RaidGetStorPoFxComponent(v9, 0);
  v11 = StorPoFxComponent;
  if ( !StorPoFxComponent
    || !RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent)
    || (unsigned int)(*(_DWORD *)(v13 + 8) - 1) > 7 )
  {
    return 3238002694LL;
  }
  v14 = *(_QWORD *)(v13 + 16) - 0x481F895FDCAF9C10LL;
  if ( *(_QWORD *)(v13 + 16) == 0x481F895FDCAF9C10LL )
    v14 = *(_QWORD *)(v13 + 24) - 0x3356F5D2CED492A4LL;
  if ( v14 )
    return 3238002694LL;
  v25 &= v12;
  if ( (int)RaidRegisterForRuntimePowerManagement(*(_QWORD *)(v5 + 8), a2, v5, &v25) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize((int *)a2);
  v16 = TotalStorPoFxDeviceSize;
  v17 = TotalStorPoFxDeviceSize + 96;
  Pool = RaidAllocatePool(NonPagedPoolNx, v17, 0x4F506152u, *(_QWORD *)(v5 + 8));
  v19 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v17);
    v20 = v25;
    *((_DWORD *)v19 + 4) = 0;
    *((_DWORD *)v19 + 5) |= 3u;
    *v19 = v20;
    v19[1] = v19 + 12;
    memmove(v19 + 12, (const void *)a2, v16);
    if ( (((*(_BYTE *)(a2 + 12) & 4) != 0) & (*(_BYTE *)(v5 + 108) >> 2)) != 0 )
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
    PoFxSetComponentLatency(*v19, 0LL, -1LL);
    PoFxSetComponentResidency(*v19, 0LL, -1LL);
    if ( (*(_BYTE *)(v5 + 108) & 0x40) == 0 && *(_DWORD *)a2 >= 2u && (*(_DWORD *)(a2 + 12) & 0x10) != 0 )
      *(_DWORD *)(v5 + 5104) = *(_DWORD *)(a2 + 16);
    PoFxSetDeviceIdleTimeout(*v19, 10000LL * *(unsigned int *)(v5 + 5104));
    v22 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(v5 + 5088) = v19;
    if ( !v22 )
    {
      v23 = *(unsigned int *)(v5 + 56);
      if ( (_DWORD)v23 != -1 && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      {
        v24 = (*(unsigned __int8 *)(v5 + 108) >> 3) & 1;
        Template_pqtqq(v24, v23, v21, *v19, v23, v24, *(_DWORD *)(v5 + 5104), v11[2]);
      }
    }
    PoFxStartDevicePowerManagement(**(_QWORD **)(v5 + 5088));
    return 0LL;
  }
  PoFxUnregisterDevice(v25);
  return 3238002691LL;
}
