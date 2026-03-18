/*
 * XREFs of CcDeductDirtyPages @ 0x1400CC864
 * Callers:
 *     CcDeleteMbcb @ 0x140088410 (CcDeleteMbcb.c)
 *     CcAcquireByteRangeForWrite @ 0x1400CBDC0 (CcAcquireByteRangeForWrite.c)
 *     CcUnpinFileDataEx @ 0x1400CF860 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x140111D74 (CcDeleteBcbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDeductDirtyPages(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  CcGlobalDirtyPageStatistics -= a2;
  if ( a1 )
  {
    if ( a2 == -1 )
      KeBugCheckEx(0x34u, 0x1073uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 112) -= a2;
    result = *(_QWORD *)(a1 + 504);
    *(_QWORD *)(result + 32) -= a2;
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      result = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(result + 24) -= a2;
    }
  }
  return result;
}
