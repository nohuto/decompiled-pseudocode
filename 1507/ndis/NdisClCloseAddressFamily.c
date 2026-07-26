/*
 * XREFs of NdisClCloseAddressFamily @ 0x1C00F6130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00F6940 (NdisCmCloseAddressFamilyComplete.c)
 */

NDIS_STATUS __stdcall NdisClCloseAddressFamily(NDIS_HANDLE NdisAfHandle)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v3; // al
  NDIS_STATUS v4; // edi
  __int64 v5; // rax
  NDIS_STATUS v6; // eax

  v1 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
  v4 = 0;
  if ( *((int *)NdisAfHandle + 2) < 0 )
    v4 = -1073741823;
  *((_DWORD *)NdisAfHandle + 2) |= 0x80000000;
  KeReleaseSpinLock(v1, v3);
  if ( !v4 )
  {
    if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
      v5 = *((_QWORD *)NdisAfHandle + 4);
    else
      v5 = *((_QWORD *)NdisAfHandle + 3);
    v6 = (*(__int64 (__fastcall **)(_QWORD))(v5 + 32))(*((_QWORD *)NdisAfHandle + 6));
    v4 = v6;
    if ( v6 != 259 )
    {
      NdisCmCloseAddressFamilyComplete(v6, NdisAfHandle);
      return 259;
    }
  }
  return v4;
}
