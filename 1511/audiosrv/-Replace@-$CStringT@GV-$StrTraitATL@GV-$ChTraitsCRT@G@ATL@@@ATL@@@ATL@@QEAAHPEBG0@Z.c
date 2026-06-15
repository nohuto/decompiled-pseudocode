/*
 * XREFs of ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x180018CB0
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180014360 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180039E6C (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018814 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18003A530 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
        __int64 *a1,
        const wchar_t *a2,
        _WORD *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  const wchar_t *v6; // rsi
  int v7; // r15d
  unsigned __int64 v8; // r12
  wchar_t *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v13; // r13
  __int64 *v14; // r8
  __int64 v15; // r13
  int v16; // esi
  unsigned int v17; // edx
  const wchar_t *v18; // r12
  wchar_t *v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  errno_t v22; // eax
  errno_t v23; // eax
  wchar_t *v24; // rax
  __int64 v25; // [rsp+28h] [rbp-70h]
  __int64 v26; // [rsp+30h] [rbp-68h]
  unsigned __int64 v27; // [rsp+40h] [rbp-58h]
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
  v6 = (const wchar_t *)*a1;
  v7 = 0;
  v8 = *a1 + 2LL * *(int *)(*a1 - 16);
  if ( *a1 < v8 )
  {
    do
    {
      v9 = wcsstr(v6, a2);
      if ( v9 )
      {
        v13 = (int)v4;
        do
        {
          v6 = &v9[v13];
          ++v7;
          v9 = wcsstr(&v9[v13], a2);
        }
        while ( v9 );
      }
      if ( v6 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( v6[v11] );
      }
      else
      {
        LODWORD(v11) = 0;
      }
      v6 += (int)v11 + 1;
    }
    while ( (unsigned __int64)v6 < v8 );
    if ( v7 > 0 )
    {
      v14 = a1;
      v15 = *(int *)(*a1 - 16);
      v16 = v15 + v7 * (v5 - v4);
      v17 = *(_DWORD *)(*a1 - 16);
      if ( v16 > (int)v15 )
        v17 = v15 + v7 * (v5 - v4);
      if ( (((*(_DWORD *)(*a1 - 12) - v17) | (1 - *(_DWORD *)(*a1 - 8))) & 0x80000000) != 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v17, (__int64)a1, v10);
        v14 = a1;
      }
      v25 = *v14;
      v18 = (const wchar_t *)*v14;
      v27 = *v14 + 2 * v15;
      if ( *v14 < v27 )
      {
        do
        {
          Destination = wcsstr(v18, a2);
          v19 = Destination;
          if ( Destination )
          {
            v20 = (int)v5;
            v21 = (int)v4;
            do
            {
              v18 = &v19[v20];
              v26 = (int)(v15 - (((__int64)v19 - v25) >> 1) - v4);
              v22 = memmove_s(&v19[v20], 2 * v26, &v19[v21], 2 * v26);
              if ( v22 )
              {
                if ( v22 == 12 )
                  ATL::AtlThrowImpl(-2147024882);
                if ( v22 == 22 || v22 == 34 )
                  ATL::AtlThrowImpl(-2147024809);
                if ( v22 != 80 )
                  ATL::AtlThrowImpl(-2147467259);
              }
              v23 = memcpy_s(Destination, 2LL * (int)v5, a3, 2LL * (int)v5);
              if ( v23 )
              {
                if ( v23 == 12 )
                  ATL::AtlThrowImpl(-2147024882);
                if ( v23 == 22 || v23 == 34 )
                  ATL::AtlThrowImpl(-2147024809);
                if ( v23 != 80 )
                  ATL::AtlThrowImpl(-2147467259);
              }
              Destination[v26 + (int)v5] = 0;
              LODWORD(v15) = v5 - v4 + v15;
              v24 = wcsstr(v18, a2);
              v20 = (int)v5;
              v19 = v24;
              v21 = (int)v4;
              Destination = v24;
            }
            while ( v24 );
          }
          v18 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v18) + 1);
        }
        while ( (unsigned __int64)v18 < v27 );
        v14 = a1;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(v14, v16);
    }
  }
  return (unsigned int)v7;
}
