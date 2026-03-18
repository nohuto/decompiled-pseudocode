/*
 * XREFs of PipCreateEntry @ 0x1407B99F8
 * Callers:
 *     PipLookupGroupName @ 0x1407B9904 (PipLookupGroupName.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall PipCreateEntry(const void **a1)
{
  _WORD *result; // rax
  _WORD *v3; // rbx

  result = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a1 + 48LL, 0x6E697050u);
  v3 = result;
  if ( result )
  {
    memset(result, 0, 0x30uLL);
    v3[16] = *(_WORD *)a1;
    v3[17] = *(_WORD *)a1;
    *((_QWORD *)v3 + 5) = v3 + 24;
    memmove(v3 + 24, a1[1], *(unsigned __int16 *)a1);
    return v3;
  }
  return result;
}
