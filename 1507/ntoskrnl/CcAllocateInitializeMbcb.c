/*
 * XREFs of CcAllocateInitializeMbcb @ 0x140030EBC
 * Callers:
 *     CcSetDirtyInMask @ 0x14002FE40 (CcSetDirtyInMask.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_QWORD *CcAllocateInitializeMbcb()
{
  _QWORD *result; // rax
  _QWORD *v1; // rbx
  char *v2; // rcx
  _QWORD *v3; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x624D6343u);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0xC0uLL);
    v2 = (char *)(v1 + 6);
    *(_WORD *)v1 = 763;
    v3 = v1 + 2;
    v1[3] = v1 + 2;
    v1[2] = v1 + 2;
    v1[6] = v1 + 2;
    v1[7] = v1 + 2;
    if ( (_QWORD *)*v3 != v3 )
      __fastfail(3u);
    *v3 = v2;
    v1[3] = v2;
    *((_DWORD *)v1 + 18) = -1;
    v1[5] = -1LL;
    v1[11] = v1 + 12;
    return v1;
  }
  return result;
}
