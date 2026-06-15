/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEAAHH@Z @ 0x180075520
 * Callers:
 *     ?Cleanup@CSaProvider@@IEAAXXZ @ 0x180073FA8 (-Cleanup@CSaProvider@@IEAAXXZ.c)
 *     ?Remove@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x180075448 (-Remove@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x18000C5E0 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     _recalloc @ 0x180043990 (_recalloc.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  int v4; // edx
  errno_t v5; // eax
  errno_t v6; // eax
  void *v7; // rax
  void *v8; // rax

  v2 = a2;
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 16) )
    return 0LL;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'((_QWORD *)(*(_QWORD *)a1 + 8LL * a2));
  v4 = *(_DWORD *)(a1 + 16);
  if ( (_DWORD)v2 != v4 - 1 )
  {
    v5 = memmove_s(
           (void *const)(*(_QWORD *)a1 + 8 * v2),
           8LL * (v4 - (int)v2),
           (const void *const)(*(_QWORD *)a1 + 8 * v2 + 8),
           8LL * (v4 - (int)v2 - 1));
    if ( v5 )
    {
      if ( v5 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v5 == 22 || v5 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v5 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
    v6 = memmove_s(
           (void *const)(*(_QWORD *)(a1 + 8) + 8 * v2),
           8LL * (*(_DWORD *)(a1 + 16) - (int)v2),
           (const void *const)(*(_QWORD *)(a1 + 8) + 8 * v2 + 8),
           8LL * (*(_DWORD *)(a1 + 16) - (int)v2 - 1));
    if ( v6 )
    {
      if ( v6 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v6 == 22 || v6 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v6 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
  }
  v7 = _recalloc(*(void **)a1, *(_DWORD *)(a1 + 16) - 1, 8uLL);
  if ( v7 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)a1 = v7;
  v8 = _recalloc(*(void **)(a1 + 8), *(_DWORD *)(a1 + 16) - 1, 8uLL);
  if ( v8 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)(a1 + 8) = v8;
  --*(_DWORD *)(a1 + 16);
  return 1LL;
}
