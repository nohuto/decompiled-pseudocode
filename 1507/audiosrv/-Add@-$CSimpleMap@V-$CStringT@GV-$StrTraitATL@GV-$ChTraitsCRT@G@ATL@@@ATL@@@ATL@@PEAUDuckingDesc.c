/*
 * XREFs of ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAUDuckingDescriptor@@@Z @ 0x180040AF8
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18004070C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A920 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     _recalloc @ 0x180043990 (_recalloc.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  void *v6; // rax
  void *v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // rdx

  v6 = _recalloc(*(void **)a1, *(_DWORD *)(a1 + 16) + 1, 8uLL);
  if ( !v6 )
    return 0LL;
  *(_QWORD *)a1 = v6;
  v7 = _recalloc(*(void **)(a1 + 8), *(_DWORD *)(a1 + 16) + 1, 8uLL);
  if ( !v7 )
    return 0LL;
  *(_QWORD *)(a1 + 8) = v7;
  v8 = *(int *)(a1 + 16);
  v9 = (_QWORD *)(*(_QWORD *)a1 + 8 * v8);
  if ( v9 )
    *v9 = ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)(*a2 - 24LL)) + 6;
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v8);
  if ( v10 )
    *v10 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
