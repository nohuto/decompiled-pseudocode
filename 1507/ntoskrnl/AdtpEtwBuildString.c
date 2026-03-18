/*
 * XREFs of AdtpEtwBuildString @ 0x1405A1914
 * Callers:
 *     AdtpPackageParameters @ 0x1401643D0 (AdtpPackageParameters.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpEtwBuildString(__int64 a1, unsigned __int16 *a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  unsigned int v7; // edi
  __int64 v8; // rax
  _WORD *PoolWithTag; // rbx
  __int64 result; // rax

  v7 = (*a2 >> 1) + 1;
  if ( a2[1] > *a2 )
  {
    PoolWithTag = (_WORD *)*((_QWORD *)a2 + 1);
    if ( !PoolWithTag[*a2 >> 1] )
      goto LABEL_5;
  }
  v8 = (unsigned int)*a4;
  if ( (unsigned int)v8 + v7 < 0x400 )
  {
    PoolWithTag = (_WORD *)(a3 + 2 * v8);
    *a4 = v8 + v7;
LABEL_4:
    memmove(PoolWithTag, *((const void **)a2 + 1), *a2);
    PoolWithTag[v7 - 1] = 0;
LABEL_5:
    *(_QWORD *)a1 = PoolWithTag;
    *(_DWORD *)(a1 + 8) = 2 * v7;
    result = 0LL;
    *(_DWORD *)(a1 + 12) = 0;
    return result;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v7, 0x6B416553u);
  if ( PoolWithTag )
  {
    *a5 = 1;
    goto LABEL_4;
  }
  return 3221225495LL;
}
