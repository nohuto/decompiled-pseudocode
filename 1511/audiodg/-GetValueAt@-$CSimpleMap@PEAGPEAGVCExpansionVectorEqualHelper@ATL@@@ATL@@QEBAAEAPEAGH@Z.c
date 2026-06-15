/*
 * XREFs of ?GetValueAt@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEBAAEAPEAGH@Z @ 0x140037A54
 * Callers:
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x140036D4C (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 *     ?StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z @ 0x1400390AC (-StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::GetValueAt(
        __int64 a1,
        int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 16) )
  {
    RaiseException(0xC000008C, 1u, 0, 0LL);
    JUMPOUT(0x140037A86LL);
  }
  return *(_QWORD *)(a1 + 8) + 8LL * a2;
}
