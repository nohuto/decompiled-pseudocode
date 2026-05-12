/*
 * XREFs of StorpUnitInitializePoFxPower @ 0x1C002F9A8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C000EF80 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidGetStorPoFxComponent @ 0x1C000F4A4 (RaidGetStorPoFxComponent.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C0019368 (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C001938C (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C0019434 (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     memmove @ 0x1C001AA40 (memmove.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

__int64 __fastcall StorpUnitInitializePoFxPower(__int64 a1, __int64 a2, int *a3, _BYTE *a4)
{
  __int64 v6; // rcx
  __int64 Unit; // rax
  __int64 v8; // rbx
  int *v10; // rcx
  int *StorPoFxComponent; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v16; // r15
  SIZE_T v17; // rbp
  char *Pool; // rax
  char *v19; // rsi
  __int64 v20; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v21; // rcx
  __int64 v22; // [rsp+60h] [rbp+18h] BYREF

  if ( a4 )
    *a4 = 0;
  if ( !a3 )
    return 3238002694LL;
  v6 = **(_QWORD **)(a1 - 16);
  if ( !v6 )
    return 3238002694LL;
  if ( !a2 )
    return 3238002694LL;
  if ( *(_WORD *)a2 != 1 )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 4) < 4u )
    return 3238002694LL;
  LOWORD(v22) = *(_WORD *)(a2 + 8);
  BYTE2(v22) = *(_BYTE *)(a2 + 10);
  Unit = RaidAdapterFindUnit(v6, (unsigned int)v22, (__int64)a3, (__int64)a4);
  v8 = Unit;
  if ( !Unit )
    return 3238002694LL;
  if ( *(char *)(Unit + 153) < 0 )
    return 3238002689LL;
  if ( !RaidStorPoFxDeviceVersionAndSizeIsValid(a3) )
    return 3238002694LL;
  if ( a3[2] != 1 )
    return 3238002694LL;
  StorPoFxComponent = (int *)RaidGetStorPoFxComponent(v10, 0);
  if ( !StorPoFxComponent
    || !RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent)
    || (unsigned int)(*(_DWORD *)(v13 + 8) - 1) > 1 )
  {
    return 3238002694LL;
  }
  v14 = *(_QWORD *)(v13 + 16) - 0x40880B3A585D326BLL;
  if ( *(_QWORD *)(v13 + 16) == 0x40880B3A585D326BLL )
    v14 = *(_QWORD *)(v13 + 24) + 0x41A796F04F77C677LL;
  if ( v14 )
    return 3238002694LL;
  v22 &= v12;
  if ( (int)RaidRegisterForRuntimePowerManagement(
              *(_QWORD *)(v8 + 8),
              (unsigned __int64)a3,
              v8,
              (const unsigned __int16 *)&v22) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize(a3);
  v16 = TotalStorPoFxDeviceSize;
  v17 = TotalStorPoFxDeviceSize + 152;
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, v17, 0x4F506152u, *(_QWORD *)(v8 + 8));
  v19 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v17);
    v20 = v22;
    *((_DWORD *)v19 + 4) = 0;
    *((_DWORD *)v19 + 8) |= 0xEu;
    *(_QWORD *)v19 = v20;
    *((_QWORD *)v19 + 10) = v19 + 72;
    *((_QWORD *)v19 + 9) = v19 + 72;
    KeInitializeSpinLock((PKSPIN_LOCK)v19 + 11);
    if ( (a3[3] & 8) != 0 )
      *(_BYTE *)(v8 + 153) |= 0x40u;
    if ( (a3[3] & 0x200) != 0 )
      *(_BYTE *)(v8 + 154) |= 4u;
    *((_QWORD *)v19 + 1) = v19 + 152;
    memmove(v19 + 152, a3, v16);
    if ( a4 )
      *a4 = 1;
    if ( *a3 == 3 && (a3[3] & 0x20) != 0 )
      *((_DWORD *)v19 + 8) |= 0x80u;
    v21 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v8 + 1448);
    *(_QWORD *)(v8 + 1456) = v19;
    ExReInitializeRundownProtectionCacheAware(v21);
    *(_BYTE *)(v8 + 153) |= 0x80u;
    return 0LL;
  }
  else
  {
    PoFxUnregisterDevice(v22);
    return 3238002691LL;
  }
}
