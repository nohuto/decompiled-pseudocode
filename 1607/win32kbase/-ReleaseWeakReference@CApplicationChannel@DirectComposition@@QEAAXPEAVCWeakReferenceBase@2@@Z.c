/*
 * XREFs of ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C003EA80
 * Callers:
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C003CAB0 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C003CB40 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C003D380 (-ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C003D640 (-SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@_NPEA_N@Z @ 0x1C0042B08 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@_N.c)
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0044120 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00E8CD0 (-ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 *     ?SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C00E977C (-SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplica.c)
 *     ?SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C00E9830 (-SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicatio.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?RemoveObject@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@QEAAPEAVCWeakReferenceBase@2@PEAVCResourceMarshaler@2@@Z @ 0x1C003B244 (-RemoveObject@-$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0.c)
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
    Win32FreePool();
    if ( v4 )
    {
      DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::RemoveObject(
        (PRTL_GENERIC_TABLE)((char *)this + 272),
        v4);
      *(_DWORD *)(v4 + 16) &= ~4u;
    }
  }
}
