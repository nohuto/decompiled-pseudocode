/*
 * XREFs of ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C002D8A4
 * Callers:
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C0029700 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@PE.c)
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C002ABA0 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 * Callees:
 *     ?RemoveObject@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@QEAAPEAVCWeakReferenceBase@2@PEAVCResourceMarshaler@2@@Z @ 0x1C0016B40 (-RemoveObject@-$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseWeakReference(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CWeakReferenceBase *a2)
{
  bool v2; // zf
  __int64 v4; // rbx

  v2 = (*((_DWORD *)a2 + 2))-- == 1;
  v4 = *((_QWORD *)a2 + 2);
  if ( v2 )
  {
    Win32FreePool(a2);
    if ( v4 )
    {
      DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::RemoveObject(
        (PRTL_GENERIC_TABLE)((char *)this + 264),
        v4);
      *(_DWORD *)(v4 + 16) &= ~8u;
    }
  }
}
