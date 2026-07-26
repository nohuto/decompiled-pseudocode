/*
 * XREFs of NdisCmNotifyCloseAddressFamily @ 0x1C004C9D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C004C440 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCoRequestComplete @ 0x1C00F2A10 (NdisCoRequestComplete.c)
 *     ndisReferenceAf @ 0x1C00F3E4C (ndisReferenceAf.c)
 */

NDIS_STATUS __stdcall NdisCmNotifyCloseAddressFamily(NDIS_HANDLE NdisAfHandle)
{
  NDIS_STATUS result; // eax
  KIRQL v3; // al
  KSPIN_LOCK *v4; // rcx
  KIRQL v5; // dl
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD, char *); // r14
  NDIS_STATUS v7; // edx
  KIRQL v8; // al

  if ( !(unsigned __int8)ndisReferenceAf() )
    return -1073741823;
  if ( *((_DWORD *)NdisAfHandle + 99) < 6u )
  {
    memset((char *)NdisAfHandle + 408, 0, 0xB0uLL);
    *((_DWORD *)NdisAfHandle + 110) = 1;
    *((_DWORD *)NdisAfHandle + 112) = -33554422;
    *((_QWORD *)NdisAfHandle + 57) = 0LL;
    *((_DWORD *)NdisAfHandle + 116) = 0;
    v6 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *))*((_QWORD *)NdisAfHandle + 10);
    *((_QWORD *)NdisAfHandle + 62) = *((_QWORD *)NdisAfHandle + 6);
    if ( !v6 )
    {
      v7 = -1073741637;
LABEL_16:
      NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, v7);
      return 259;
    }
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
    v4 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
    v5 = v8;
    if ( (*((_DWORD *)NdisAfHandle + 2) & 0x40000000) != 0 )
    {
      *((_QWORD *)NdisAfHandle + 73) = (char *)NdisAfHandle + 408;
      goto LABEL_6;
    }
    KeReleaseSpinLock(v4, v8);
    result = v6(*((_QWORD *)NdisAfHandle + 47), 0LL, 0LL, (char *)NdisAfHandle + 408);
    if ( result == 259 )
      return result;
    NdisCoRequestComplete(result, NdisAfHandle, 0LL, 0LL, (char *)NdisAfHandle + 408);
    result = 259;
LABEL_14:
    if ( result == 259 )
      return result;
    v7 = result;
    goto LABEL_16;
  }
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
  v4 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
  v5 = v3;
  if ( (*((_DWORD *)NdisAfHandle + 2) & 0x40000000) == 0 )
  {
    KeReleaseSpinLock(v4, v3);
    result = (*((__int64 (__fastcall **)(_QWORD))NdisAfHandle + 45))(*((_QWORD *)NdisAfHandle + 47));
    goto LABEL_14;
  }
  *((_QWORD *)NdisAfHandle + 73) = 0LL;
LABEL_6:
  *((_BYTE *)NdisAfHandle + 592) = 1;
  KeReleaseSpinLock(v4, v5);
  return 259;
}
