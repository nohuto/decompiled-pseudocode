/*
 * XREFs of ??1?$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V?$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInstance@@@ATL@@@ATL@@QEAA@XZ @ 0x140026588
 * Callers:
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$6 @ 0x14001B087 (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$6.c)
 *     ??1?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAA@XZ @ 0x140035D78 (--1-$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1CExpansionVector@ATL@@QEAA@XZ @ 0x140035E74 (--1CExpansionVector@ATL@@QEAA@XZ.c)
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x140035ED0 (--1CRegObject@ATL@@UEAA@XZ.c)
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x140036D4C (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>::~CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>(
        __int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    free(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
}
