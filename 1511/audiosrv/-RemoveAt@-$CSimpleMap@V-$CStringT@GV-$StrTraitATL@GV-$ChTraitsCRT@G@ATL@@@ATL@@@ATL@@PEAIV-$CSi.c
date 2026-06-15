/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHH@Z @ 0x18002ECD4
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x1800297C0 (--1CProcess@@MEAA@XZ.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x180018C84 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     _recalloc @ 0x1800478E0 (_recalloc.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt(
        __int64 a1)
{
  __int64 v2; // rax
  void *v3; // rax
  void *v4; // rax
  errno_t v6; // eax
  errno_t v7; // eax

  if ( *(int *)(a1 + 16) <= 0 )
    return 0LL;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'(*(_QWORD **)a1);
  v2 = *(int *)(a1 + 16);
  if ( (_DWORD)v2 != 1 )
  {
    v6 = memmove_s(*(void *const *)a1, 8 * v2, (const void *const)(*(_QWORD *)a1 + 8LL), 8LL * ((int)v2 - 1));
    if ( v6 )
    {
      if ( v6 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v6 == 22 || v6 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v6 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
    v7 = memmove_s(
           *(void *const *)(a1 + 8),
           8LL * *(int *)(a1 + 16),
           (const void *const)(*(_QWORD *)(a1 + 8) + 8LL),
           8LL * (*(_DWORD *)(a1 + 16) - 1));
    if ( v7 )
    {
      if ( v7 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v7 == 22 || v7 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v7 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
  }
  v3 = _recalloc(*(void **)a1, *(_DWORD *)(a1 + 16) - 1, 8uLL);
  if ( v3 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)a1 = v3;
  v4 = _recalloc(*(void **)(a1 + 8), *(_DWORD *)(a1 + 16) - 1, 8uLL);
  if ( v4 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)(a1 + 8) = v4;
  --*(_DWORD *)(a1 + 16);
  return 1LL;
}
