/*
 * XREFs of MiReturnReservedEnclavePages @ 0x14065F89C
 * Callers:
 *     MiDeleteEnclavePages @ 0x14065F308 (MiDeleteEnclavePages.c)
 *     MiInitializeEnclave @ 0x14065F568 (MiInitializeEnclave.c)
 * Callees:
 *     MiReturnEnclavePage @ 0x1401F06EC (MiReturnEnclavePage.c)
 */

__int64 __fastcall MiReturnReservedEnclavePages(__int64 a1)
{
  _QWORD *v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 result; // rax

  for ( ; *(_QWORD *)(a1 + 72); result = MiReturnEnclavePage(v3 + (v3 >> 63)) )
  {
    v2 = *(_QWORD **)(a1 + 72);
    *(_QWORD *)(a1 + 72) = *v2;
    v3 = (__int64)((unsigned __int128)((__int64)(v2 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  }
  *(_QWORD *)(a1 + 80) = 0LL;
  return result;
}
