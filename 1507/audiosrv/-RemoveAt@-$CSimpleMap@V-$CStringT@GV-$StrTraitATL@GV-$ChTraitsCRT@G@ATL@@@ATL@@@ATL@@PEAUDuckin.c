/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAAHH@Z @ 0x18009F880
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x18009EAD4 (--1TSSession@@QEAA@XZ.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x18000C5E0 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     _recalloc @ 0x180043990 (_recalloc.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::RemoveAt(
        __int64 a1)
{
  __int64 v2; // rax
  errno_t v3; // eax
  errno_t v4; // eax
  void *v5; // rax
  void *v6; // rax

  if ( *(int *)(a1 + 16) <= 0 )
    return 0LL;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'(*(_QWORD **)a1);
  v2 = *(int *)(a1 + 16);
  if ( (_DWORD)v2 != 1 )
  {
    v3 = memmove_s(*(void *const *)a1, 8 * v2, (const void *const)(*(_QWORD *)a1 + 8LL), 8LL * ((int)v2 - 1));
    if ( v3 )
    {
      if ( v3 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v3 == 22 || v3 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v3 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
    v4 = memmove_s(
           *(void *const *)(a1 + 8),
           8LL * *(int *)(a1 + 16),
           (const void *const)(*(_QWORD *)(a1 + 8) + 8LL),
           8LL * (*(_DWORD *)(a1 + 16) - 1));
    if ( v4 )
    {
      if ( v4 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v4 == 22 || v4 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v4 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
  }
  v5 = _recalloc(*(void **)a1, *(_DWORD *)(a1 + 16) - 1, 8uLL);
  if ( v5 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)a1 = v5;
  v6 = _recalloc(*(void **)(a1 + 8), *(_DWORD *)(a1 + 16) - 1, 8uLL);
  if ( v6 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)(a1 + 8) = v6;
  --*(_DWORD *)(a1 + 16);
  return 1LL;
}
