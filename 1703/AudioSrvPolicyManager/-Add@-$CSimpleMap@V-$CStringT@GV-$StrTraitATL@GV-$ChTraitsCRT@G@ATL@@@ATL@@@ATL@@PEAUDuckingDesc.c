/*
 * XREFs of ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAUDuckingDescriptor@@@Z @ 0x18001C534
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x180019BB4 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000A154 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
        __int64 a1,
        const void **a2,
        _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx

  v6 = _o__recalloc(*(_QWORD *)a1, *(_DWORD *)(a1 + 16) + 1, 8LL);
  if ( !v6 )
    return 0LL;
  *(_QWORD *)a1 = v6;
  v8 = _o__recalloc(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16) + 1, 8LL);
  if ( !v8 )
    return 0LL;
  *(_QWORD *)(a1 + 8) = v8;
  v9 = *(int *)(a1 + 16);
  v10 = (_QWORD *)(*(_QWORD *)a1 + 8 * v9);
  if ( v10 )
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      v10,
      a2);
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v9);
  if ( v11 )
    *v11 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
