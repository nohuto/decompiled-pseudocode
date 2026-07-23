/*
 * XREFs of CcAllocateInitializeMbcb @ 0x1400705CC
 * Callers:
 *     CcSetDirtyInMask @ 0x14006F1E0 (CcSetDirtyInMask.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_QWORD *CcAllocateInitializeMbcb()
{
  _QWORD *result; // rax
  _QWORD *v1; // rbx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x624D6343u);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0xC0uLL);
    *(_WORD *)v1 = 763;
    v1[3] = v1 + 2;
    v1[2] = v1 + 2;
    v1[6] = v1 + 2;
    v1[7] = v1 + 2;
    v1[2] = v1 + 6;
    v1[3] = v1 + 6;
    *((_DWORD *)v1 + 18) = -1;
    v1[5] = -1LL;
    v1[11] = v1 + 12;
    return v1;
  }
  return result;
}
