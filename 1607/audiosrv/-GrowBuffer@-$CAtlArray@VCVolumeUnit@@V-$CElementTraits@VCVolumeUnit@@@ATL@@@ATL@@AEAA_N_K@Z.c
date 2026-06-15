/*
 * XREFs of ?GrowBuffer@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18002691C
 * Callers:
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x1800269F0 (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::GrowBuffer(__int64 a1, size_t a2)
{
  size_t v4; // rdx
  void *v5; // rax
  size_t v7; // rcx
  void *v8; // rax
  __int64 v9; // rcx
  void *v10; // rsi
  size_t v11; // r8
  const void *v12; // rdx

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  if ( *(_QWORD *)a1 )
  {
    v7 = *(int *)(a1 + 24);
    if ( !v7 )
    {
      v7 = v4 >> 1;
      if ( a2 - v4 > v4 >> 1 )
        v7 = a2 - v4;
    }
    if ( a2 < v4 + v7 )
      a2 = v4 + v7;
    v8 = calloc(a2, 0x38uLL);
    v10 = v8;
    if ( v8 )
    {
      v11 = 56LL * *(_QWORD *)(a1 + 8);
      v12 = *(const void **)a1;
      if ( v11 )
      {
        if ( !v12 )
        {
          *(_DWORD *)_o__errno(v9, 0LL) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memmove(v8, v12, v11);
      }
      free(*(void **)a1);
      *(_QWORD *)a1 = v10;
      goto LABEL_6;
    }
  }
  else
  {
    if ( *(int *)(a1 + 24) > a2 )
      a2 = *(int *)(a1 + 24);
    v5 = calloc(a2, 0x38uLL);
    *(_QWORD *)a1 = v5;
    if ( v5 )
    {
LABEL_6:
      *(_QWORD *)(a1 + 16) = a2;
      return 1;
    }
  }
  return 0;
}
