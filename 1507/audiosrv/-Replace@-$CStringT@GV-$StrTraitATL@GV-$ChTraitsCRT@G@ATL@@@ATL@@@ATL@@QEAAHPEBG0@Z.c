/*
 * XREFs of ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x18000C720
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18000BF90 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180032228 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017740 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017890 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x180037F4C (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
        const wchar_t **a1,
        const wchar_t *a2,
        _WORD *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  const wchar_t *v6; // rsi
  int v7; // r15d
  unsigned __int64 v8; // r12
  wchar_t *v9; // rcx
  __int64 v10; // rax
  __int64 v12; // r13
  const wchar_t **v13; // r8
  __int64 v14; // r13
  unsigned int v15; // esi
  __int64 v16; // rdx
  const wchar_t *v17; // r12
  wchar_t *v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  errno_t v21; // eax
  errno_t v22; // eax
  wchar_t *v23; // rax
  const wchar_t *v24; // [rsp+28h] [rbp-70h]
  __int64 v25; // [rsp+30h] [rbp-68h]
  unsigned __int64 v26; // [rsp+40h] [rbp-58h]
  wchar_t *Destination; // [rsp+A8h] [rbp+10h]

  if ( !a2 )
    return 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( !(_DWORD)v4 )
    return 0LL;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
  }
  else
  {
    LODWORD(v5) = 0;
  }
  v6 = *a1;
  v7 = 0;
  v8 = (unsigned __int64)&(*a1)[*((int *)*a1 - 4)];
  if ( (unsigned __int64)*a1 < v8 )
  {
    do
    {
      v9 = wcsstr(v6, a2);
      if ( v9 )
      {
        v12 = (int)v4;
        do
        {
          v6 = &v9[v12];
          ++v7;
          v9 = wcsstr(&v9[v12], a2);
        }
        while ( v9 );
      }
      if ( v6 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( v6[v10] );
      }
      else
      {
        LODWORD(v10) = 0;
      }
      v6 += (int)v10 + 1;
    }
    while ( (unsigned __int64)v6 < v8 );
    if ( v7 > 0 )
    {
      v13 = a1;
      v14 = *((int *)*a1 - 4);
      v15 = v14 + v7 * (v5 - v4);
      v16 = *((unsigned int *)*a1 - 4);
      if ( (int)v15 > (int)v14 )
        v16 = v15;
      if ( (int)((*((_DWORD *)*a1 - 3) - v16) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v16);
        v13 = a1;
      }
      v24 = *v13;
      v17 = *v13;
      v26 = (unsigned __int64)&(*v13)[v14];
      if ( (unsigned __int64)*v13 < v26 )
      {
        do
        {
          Destination = wcsstr(v17, a2);
          v18 = Destination;
          if ( Destination )
          {
            v19 = (int)v5;
            v20 = (int)v4;
            do
            {
              v17 = &v18[v19];
              v25 = (int)(v14 - (v18 - v24) - v4);
              v21 = memmove_s(&v18[v19], 2 * v25, &v18[v20], 2 * v25);
              if ( v21 )
              {
                if ( v21 == 12 )
                  ATL::AtlThrowImpl(-2147024882);
                if ( v21 == 22 || v21 == 34 )
                  ATL::AtlThrowImpl(-2147024809);
                if ( v21 != 80 )
                  ATL::AtlThrowImpl(-2147467259);
              }
              v22 = memcpy_s(Destination, 2LL * (int)v5, a3, 2LL * (int)v5);
              if ( v22 )
              {
                if ( v22 == 12 )
                  ATL::AtlThrowImpl(-2147024882);
                if ( v22 == 22 || v22 == 34 )
                  ATL::AtlThrowImpl(-2147024809);
                if ( v22 != 80 )
                  ATL::AtlThrowImpl(-2147467259);
              }
              Destination[v25 + (int)v5] = 0;
              LODWORD(v14) = v5 - v4 + v14;
              v23 = wcsstr(v17, a2);
              v19 = (int)v5;
              v18 = v23;
              v20 = (int)v4;
              Destination = v23;
            }
            while ( v23 );
          }
          v17 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v17) + 1);
        }
        while ( (unsigned __int64)v17 < v26 );
        v13 = a1;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(v13, v15);
    }
  }
  return (unsigned int)v7;
}
