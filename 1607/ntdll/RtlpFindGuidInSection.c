/*
 * XREFs of RtlpFindGuidInSection @ 0x18001A0B4
 * Callers:
 *     RtlFindActivationContextSectionGuid @ 0x180019EE0 (RtlFindActivationContextSectionGuid.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     bsearch @ 0x180099410 (bsearch.c)
 *     RtlCompareMemory @ 0x1800AA6B0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlpFindGuidInSection(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  const void *v8; // rdx
  _DWORD *i; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // r13
  unsigned int *v16; // r15
  __int64 v17; // [rsp+38h] [rbp-70h]
  __int128 Key; // [rsp+40h] [rbp-68h] BYREF

  if ( *(_DWORD *)a1 != 1682469703 )
    return (unsigned int)-1072365565;
  v6 = *(_DWORD *)(a1 + 20);
  v7 = 0;
  if ( !v6 )
    return (unsigned int)-1072365560;
  if ( ((*(_DWORD *)(a1 + 8) == 1) & (unsigned __int8)-(*(_DWORD *)(a1 + 28) != 0)) != 0 )
  {
    v12 = *(unsigned int *)(a1 + 28);
    v13 = 0;
    v14 = (unsigned int)(*a2 % *(_DWORD *)(v12 + a1));
    v15 = (unsigned int)(*a2 % *(_DWORD *)(v12 + a1));
    v17 = a1 + *(unsigned int *)(v12 + a1 + 4);
    v16 = (unsigned int *)(a1 + *(unsigned int *)(v17 + 8 * v14 + 4));
    if ( !*(_DWORD *)(v17 + 8LL * (unsigned int)v14) )
      return (unsigned int)-1072365560;
    while ( 1 )
    {
      i = (_DWORD *)(a1 + *v16++);
      if ( RtlCompareMemory(i, a2, 0x10uLL) == 16 )
        break;
      if ( (unsigned int)++v13 >= *(_DWORD *)(v17 + 8 * v15) )
        return (unsigned int)-1072365560;
    }
  }
  else if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    v8 = (const void *)(a1 + *(unsigned int *)(a1 + 24));
    Key = *(_OWORD *)a2;
    i = bsearch(&Key, v8, v6, 0x1CuLL, RtlpCompareProtectedPolicyEntry);
  }
  else
  {
    for ( i = (_DWORD *)(a1 + *(unsigned int *)(a1 + 24)); RtlCompareMemory(i, a2, 0x10uLL) != 16; i += 7 )
    {
      if ( !--v6 )
        return (unsigned int)-1072365560;
    }
  }
  if ( !i || !i[4] )
    return (unsigned int)-1072365560;
  if ( a3 )
  {
    v11 = *a3;
    a3[1] = *(_DWORD *)(a1 + 12);
    *((_QWORD *)a3 + 1) = a1 + (unsigned int)i[4];
    a3[4] = i[5];
    if ( a3 + 17 <= (unsigned int *)((char *)a3 + v11) )
      a3[16] = i[6];
  }
  return v7;
}
