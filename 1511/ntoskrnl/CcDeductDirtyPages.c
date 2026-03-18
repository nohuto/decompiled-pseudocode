/*
 * XREFs of CcDeductDirtyPages @ 0x14000E4E0
 * Callers:
 *     CcDeleteMbcb @ 0x14000D6AC (CcDeleteMbcb.c)
 *     CcAcquireByteRangeForWrite @ 0x14000DA70 (CcAcquireByteRangeForWrite.c)
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x140107150 (CcDeleteBcbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDeductDirtyPages(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  CcGlobalDirtyPageStatistics -= a2;
  if ( a1 )
  {
    if ( a2 == -1 )
      KeBugCheckEx(0x34u, 0x1071uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
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
