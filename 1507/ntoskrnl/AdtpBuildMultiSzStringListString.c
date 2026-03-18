/*
 * XREFs of AdtpBuildMultiSzStringListString @ 0x140164B58
 * Callers:
 *     AdtpPackageParameters @ 0x1401643D0 (AdtpPackageParameters.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     AdtpEtwBuildDashString @ 0x14054FEC4 (AdtpEtwBuildDashString.c)
 */

__int64 __fastcall AdtpBuildMultiSzStringListString(unsigned __int16 *a1, _QWORD *a2, _BYTE *a3)
{
  unsigned int v6; // ebp
  int v7; // r12d
  __int64 v8; // r9
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  unsigned int i; // edx
  unsigned int v12; // ecx
  unsigned __int64 v13; // rsi
  _QWORD *PoolWithTag; // rax
  unsigned int v16; // ecx
  __int64 v17; // r8
  __int16 v18; // r9

  v6 = 0;
  v7 = 0;
  if ( !a1 || (v8 = *((_QWORD *)a1 + 1)) == 0 )
  {
    if ( a2 )
      AdtpEtwBuildDashString(a2);
    return 0LL;
  }
  v9 = *a1 >> 1;
  v10 = 1;
  for ( i = 0; i < v9; v10 = v12 )
  {
    v12 = v10 + (*(_WORD *)(v8 + 2LL * i) != 0 ? 1 : 4);
    if ( v12 < v10 )
      return 3221225621LL;
    ++i;
  }
  if ( v10 - 1 > v9 )
  {
    if ( v10 + 4 < v10 )
      return 3221225621LL;
    v10 += 4;
    v7 = 1;
  }
  v13 = 2LL * v10;
  if ( v13 > 0xFFFFFFFF )
    return 3221225621LL;
  if ( (unsigned int)v13 > 0xFFFF )
    return 3221225485LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x6B416553u);
  if ( !PoolWithTag )
    return 3221225495LL;
  *a3 = 1;
  if ( v7 )
  {
    v6 = 4;
    *PoolWithTag = *(_QWORD *)L"\r\n\t\t";
  }
  v16 = 0;
  if ( v9 )
  {
    v17 = 0LL;
    do
    {
      v18 = *(_WORD *)(v17 + *((_QWORD *)a1 + 1));
      if ( v18 )
      {
        *((_WORD *)PoolWithTag + v6++) = v18;
      }
      else
      {
        *(_QWORD *)((char *)PoolWithTag + 2 * v6) = *(_QWORD *)L"\r\n\t\t";
        if ( v6 + 4 < v6 )
          return 3221225621LL;
        v6 += 4;
      }
      ++v16;
      v17 += 2LL;
    }
    while ( v16 < v9 );
  }
  *((_WORD *)PoolWithTag + v10 - 1) = 0;
  *a2 = PoolWithTag;
  a2[1] = (unsigned int)v13;
  return 0LL;
}
