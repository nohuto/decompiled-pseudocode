/*
 * XREFs of ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAA@XZ @ 0x18000FAF4
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x18000DEA8 (--1CProcess@@MEAA@XZ.c)
 *     ??1TSSession@@QEAA@XZ @ 0x180018868 (--1TSSession@@QEAA@XZ.c)
 *     _CProcess::CProcess_::_1_::dtor$6 @ 0x180022401 (_CProcess--CProcess_--_1_--dtor$6.c)
 *     _CProcess::CProcess_::_1_::dtor$7 @ 0x180022414 (_CProcess--CProcess_--_1_--dtor$7.c)
 *     _CProcess::_CProcess_::_1_::dtor$6 @ 0x1800224F4 (_CProcess--_CProcess_--_1_--dtor$6.c)
 *     _CProcess::_CProcess_::_1_::dtor$7 @ 0x180022507 (_CProcess--_CProcess_--_1_--dtor$7.c)
 *     _TSSession::_TSSession_::_1_::dtor$2 @ 0x18002292A (_TSSession--_TSSession_--_1_--dtor$2.c)
 *     _TSSession::_TSSession_::_1_::dtor$8 @ 0x18002299C (_TSSession--_TSSession_--_1_--dtor$8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>(
        __int64 a1)
{
  int v2; // edi
  __int64 v3; // rsi
  volatile signed __int32 *v4; // rdx
  void *v5; // rcx

  if ( *(_QWORD *)a1 )
  {
    v2 = 0;
    if ( *(int *)(a1 + 16) > 0 )
    {
      v3 = 0LL;
      do
      {
        v4 = (volatile signed __int32 *)(*(_QWORD *)(v3 + *(_QWORD *)a1) - 24LL);
        if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
        ++v2;
        v3 += 8LL;
      }
      while ( v2 < *(_DWORD *)(a1 + 16) );
    }
    free(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
  }
  v5 = *(void **)(a1 + 8);
  if ( v5 )
  {
    free(v5);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
}
