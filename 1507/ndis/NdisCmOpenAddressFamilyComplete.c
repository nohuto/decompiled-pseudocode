/*
 * XREFs of NdisCmOpenAddressFamilyComplete @ 0x1C00F7040
 * Callers:
 *     NdisClOpenAddressFamilyEx @ 0x1C004BC70 (NdisClOpenAddressFamilyEx.c)
 *     NdisClOpenAddressFamily @ 0x1C00F2770 (NdisClOpenAddressFamily.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000FB80 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C004BC00 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCoRequestComplete @ 0x1C00F8A10 (NdisCoRequestComplete.c)
 */

void __stdcall NdisCmOpenAddressFamilyComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE CallMgrAfContext)
{
  __int64 v3; // r14
  __int64 v5; // rbp
  KIRQL v8; // r12
  __int64 v9; // rcx
  NDIS_HANDLE v10; // r8
  NDIS_HANDLE v11; // rdx
  KIRQL v12; // al
  KSPIN_LOCK *v13; // rcx
  void *v14; // rbp
  __int64 v15; // rcx
  NDIS_STATUS v16; // eax

  v3 = *((_QWORD *)NdisAfHandle + 2);
  v5 = *((_QWORD *)NdisAfHandle + 46);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 1573861;
  *((_QWORD *)NdisAfHandle + 6) = CallMgrAfContext;
  if ( Status )
  {
    v9 = *((_QWORD *)NdisAfHandle + 5);
    if ( v9 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 376));
      ndisMDereferenceOpenLocked(*((_QWORD *)NdisAfHandle + 5), 0x10u);
    }
    else
    {
      ndisDereferenceMiniport(v3, 0x4Fu);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 376));
    ndisMDereferenceOpenLocked(v5, 0xFu);
  }
  else
  {
    *(_QWORD *)NdisAfHandle = *(_QWORD *)(v5 + 1008);
    *(_QWORD *)(v5 + 1008) = NdisAfHandle;
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v8);
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
  {
    v11 = 0LL;
    if ( !Status )
      v11 = NdisAfHandle;
    (*((void (__fastcall **)(_QWORD, NDIS_HANDLE, _QWORD))NdisAfHandle + 31))(
      *((_QWORD *)NdisAfHandle + 47),
      v11,
      (unsigned int)Status);
  }
  else
  {
    v10 = 0LL;
    if ( !Status )
      v10 = NdisAfHandle;
    (*((void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE))NdisAfHandle + 12))(
      (unsigned int)Status,
      *((_QWORD *)NdisAfHandle + 47),
      v10);
  }
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
  *((_DWORD *)NdisAfHandle + 2) &= ~0x40000000u;
  v13 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
  if ( *((_BYTE *)NdisAfHandle + 592) )
  {
    v14 = (void *)*((_QWORD *)NdisAfHandle + 73);
    *((_BYTE *)NdisAfHandle + 592) = 0;
    KeReleaseSpinLock(v13, v12);
    if ( !Status )
    {
      v15 = *((_QWORD *)NdisAfHandle + 47);
      if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
        v16 = (*((__int64 (__fastcall **)(__int64))NdisAfHandle + 45))(v15);
      else
        v16 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *))NdisAfHandle + 10))(v15, 0LL, 0LL, v14);
      if ( v16 != 259 )
      {
        if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
          NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, v16);
        else
          NdisCoRequestComplete(v16, NdisAfHandle, 0LL, 0LL, *((PVOID *)NdisAfHandle + 73));
      }
      return;
    }
    if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
      NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, Status);
    else
      NdisCoRequestComplete(Status, NdisAfHandle, 0LL, 0LL, v14);
  }
  else
  {
    KeReleaseSpinLock(v13, v12);
  }
  if ( Status )
    ExFreePoolWithTag(NdisAfHandle, 0);
}
