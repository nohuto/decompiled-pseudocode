/*
 * XREFs of ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x1800125A0
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180011930 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18002A440 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180065AB0 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 * Callees:
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18000DBA0 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012BE0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012C68 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
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
  __int64 v13; // rsi
  unsigned int v14; // r13d
  __int64 v15; // rdx
  const wchar_t *v16; // r12
  wchar_t *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rsi
  wchar_t *v20; // rdx
  size_t v21; // r8
  size_t v22; // r8
  wchar_t *v23; // rax
  wchar_t *v24; // [rsp+20h] [rbp-68h]
  const wchar_t *v25; // [rsp+28h] [rbp-60h]
  unsigned __int64 v26; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+98h] [rbp+10h]
  int v30; // [rsp+A8h] [rbp+20h]

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
      v13 = *((int *)*a1 - 4);
      v14 = v13 + v7 * (v5 - v4);
      v28 = *((_DWORD *)*a1 - 4);
      v15 = (unsigned int)v13;
      if ( (int)v14 > (int)v13 )
        v15 = v14;
      if ( (int)((*((_DWORD *)*a1 - 3) - v15) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v15);
      v25 = *a1;
      v16 = *a1;
      v26 = (unsigned __int64)&(*a1)[v13];
      if ( (unsigned __int64)*a1 < v26 )
      {
        do
        {
          v24 = wcsstr(v16, a2);
          v17 = v24;
          if ( v24 )
          {
            v18 = (int)v4;
            v19 = (int)v5;
            do
            {
              v16 = &v17[v19];
              v30 = v28 - (v17 - v25) - v4;
              v20 = &v17[v18];
              v21 = 2LL * v30;
              if ( v21 )
              {
                if ( !v16 || !v20 )
                {
                  *(_DWORD *)_o__errno(v17, v20) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove(&v17[v19], v20, v21);
                v17 = v24;
              }
              if ( v19 * 2 )
              {
                if ( !v17 )
                  goto LABEL_42;
                v22 = 2LL * (int)v5;
                if ( !a3 )
                {
                  memset(v17, 0, v22);
LABEL_42:
                  *(_DWORD *)_o__errno(v17, v20) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memcpy_0(v17, a3, v22);
              }
              v24[(int)v5 + v30] = 0;
              v28 += v5 - v4;
              v23 = wcsstr(v16, a2);
              v18 = (int)v4;
              v17 = v23;
              v24 = v23;
            }
            while ( v23 );
          }
          v16 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen((__int64)v16) + 1);
        }
        while ( (unsigned __int64)v16 < v26 );
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v14);
    }
  }
  return (unsigned int)v7;
}
