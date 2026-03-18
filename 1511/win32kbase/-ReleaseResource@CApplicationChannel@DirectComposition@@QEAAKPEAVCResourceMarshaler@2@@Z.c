/*
 * XREFs of ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534
 * Callers:
 *     ?ReleaseAllReferences@CFilterEffectMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0003C80 (-ReleaseAllReferences@CFilterEffectMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 *     ?SetInput@CEffectInputSet@DirectComposition@@QEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@@Z @ 0x1C0003F20 (-SetInput@CEffectInputSet@DirectComposition@@QEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarsha.c)
 *     ?Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel@2@@Z @ 0x1C0004458 (-Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0012004 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0012928 (-AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0013040 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?SetReferenceProperty@CEffectGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00141A0 (-SetReferenceProperty@CEffectGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?ReleaseAllReferences@CEffectGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0014250 (-ReleaseAllReferences@CEffectGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CTransformGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00162C0 (-ReleaseAllReferences@CTransformGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C0016DDC (-ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAX_KPEA_N@Z @ 0x1C0016E60 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAX_.c)
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAX_KPEA_N@Z @ 0x1C0016F60 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEA.c)
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C0017030 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@_NPEAPEAVC.c)
 *     ?RemoveChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C00171D0 (-RemoveChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z.c)
 *     ?RemoveAllChildren@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEA_N@Z @ 0x1C0017290 (-RemoveAllChildren@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEA_N@Z.c)
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0017A10 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0017CB0 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0018660 (-ReleaseAllReferences@CAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?SetReferenceProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0018980 (-SetReferenceProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEA.c)
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C0018B50 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     ?SetReferenceProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0019030 (-SetReferenceProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?ReleaseAllReferences@CPrimitiveGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0019120 (-ReleaseAllReferences@CPrimitiveGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C001A344 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C001B1C0 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z @ 0x1C001D330 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C001DC2C (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0071DDC (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?UpdateRootVisual@CTargetVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C0073B18 (-UpdateRootVisual@CTargetVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVC.c)
 *     ?ReleaseAllReferences@CRenderTargetGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0079D60 (-ReleaseAllReferences@CRenderTargetGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChanne.c)
 *     ?SetReferenceProperty@CDesktopTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C007A2D0 (-SetReferenceProperty@CDesktopTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 *     ?ReleaseAllReferences@CDesktopTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007A3A0 (-ReleaseAllReferences@CDesktopTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@.c)
 *     ?ReleaseAllReferences@CEffectBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D82D0 (-ReleaseAllReferences@CEffectBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00D8360 (-SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?EmitUpdateCommands@CSnapshotMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D8550 (-EmitUpdateCommands@CSnapshotMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetReferenceProperty@CSnapshotMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00D8650 (-SetReferenceProperty@CSnapshotMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAV.c)
 *     ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D89E0 (-ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChanne.c)
 *     ?SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00D8CD0 (-SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?ReleaseAllReferences@CAnalogExclusiveViewMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00DA920 (-ReleaseAllReferences@CAnalogExclusiveViewMarshaler@DirectComposition@@MEAAXPEAVCApplicationChan.c)
 *     ?SetReferenceProperty@CAnalogExclusiveViewMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00DA9A0 (-SetReferenceProperty@CAnalogExclusiveViewMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?SetReferenceProperty@CAnalogTextureTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00DAB50 (-SetReferenceProperty@CAnalogTextureTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?ReleaseAllReferences@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00DAD60 (-ReleaseAllReferences@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAXPEAVCApplicationC.c)
 *     ?SetReferenceProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00DADD0 (-SetReferenceProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 *     ?ReleaseAllReferences@CClipGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00DB4D0 (-ReleaseAllReferences@CClipGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CSpriteVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00DBE80 (-ReleaseAllReferences@CSpriteVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 *     ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00DBED0 (-SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?ReleaseAllReferences@CSurfaceBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00DC190 (-ReleaseAllReferences@CSurfaceBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 *     ?SetReferenceProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00DC2B0 (-SetReferenceProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00DC660 (-ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?SetReferenceProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00DC790 (-SetReferenceProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 *     ?SetReferenceProperty@CYCbCrSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00DF750 (-SetReferenceProperty@CYCbCrSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 * Callees:
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C0016044 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?FindAndDequeue@CApplicationChannel@DirectComposition@@KAXPEAVCResourceMarshaler@2@PEAPEAV32@@Z @ 0x1C0018A70 (-FindAndDequeue@CApplicationChannel@DirectComposition@@KAXPEAVCResourceMarshaler@2@PEAPEAV32@@Z.c)
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001B328 (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseHandle@CLinearHandleTableBase@DirectComposition@@QEAAXI@Z @ 0x1C001E03C (-ReleaseHandle@CLinearHandleTableBase@DirectComposition@@QEAAXI@Z.c)
 *     ?RemoveObject@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@QEAAPEAVCWeakReferenceBase@2@PEAVCResourceMarshaler@2@@Z @ 0x1C0079BD0 (-RemoveObject@-$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReleaseResource(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  unsigned int v2; // esi
  struct DirectComposition::CResourceMarshaler *v3; // rbx
  int v5; // eax
  __int64 v6; // rax
  char v8; // al
  struct DirectComposition::CResourceMarshaler ***v9; // rdx
  __int64 v10; // rcx
  _QWORD *i; // rdx
  __int64 v12; // rax

  v2 = 0;
  v3 = a2;
  if ( a2 )
  {
    v2 = --*((_DWORD *)a2 + 5);
    if ( v2 == 1 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a2 + 48LL))(a2) )
        (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)v3 + 40LL))(
          v3,
          (char *)this + 472);
    }
    else if ( !v2 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)a2 + 40LL))(
        a2,
        (char *)this + 472);
      if ( (*((_DWORD *)v3 + 4) & 8) != 0 )
      {
        v12 = DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::RemoveObject((PRTL_GENERIC_TABLE)((char *)this + 264));
        *((_DWORD *)v3 + 4) &= ~8u;
        *(_QWORD *)(v12 + 16) = 0LL;
      }
      if ( *((_QWORD *)v3 + 4) )
        DirectComposition::CApplicationChannel::UnbindAllAnimations(this, v3);
      v5 = *((_DWORD *)v3 + 4);
      if ( (v5 & 2) != 0 )
      {
        if ( (v5 & 4) != 0 )
        {
          v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v3 + 112LL))(
                 v3,
                 90LL);
          v9 = (struct DirectComposition::CResourceMarshaler ***)((char *)this + 416);
          if ( !v8 )
            v9 = (struct DirectComposition::CResourceMarshaler ***)((char *)this + 408);
          DirectComposition::CApplicationChannel::FindAndDequeue(
            (struct DirectComposition::CResourceMarshaler **)v3,
            v9);
          *((_DWORD *)v3 + 4) &= ~4u;
        }
      }
      else if ( *((int *)this + 6) <= 2 )
      {
        DirectComposition::CApplicationChannel::FindAndDequeue(
          (struct DirectComposition::CResourceMarshaler **)v3,
          (struct DirectComposition::CResourceMarshaler ***)this + 50);
      }
      if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v3 + 112LL))(
             v3,
             83LL) )
      {
        v10 = *((_QWORD *)v3 + 7);
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10 + 24) & 3) == 1 )
          {
            for ( i = (_QWORD *)((char *)this + 432); *i != v10; i = (_QWORD *)(*i + 8LL) )
              ;
            *i = *(_QWORD *)(v10 + 8);
            *(_QWORD *)(v10 + 8) = 0LL;
            DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v10);
          }
        }
      }
      DirectComposition::CLinearHandleTableBase::ReleaseHandle(
        (DirectComposition::CApplicationChannel *)((char *)this + 56),
        *((_DWORD *)v3 + 6));
      v6 = *((_QWORD *)this + 58);
      if ( v6 )
      {
        *(_QWORD *)(v6 + 8) = v3;
        *((_QWORD *)this + 58) = v3;
      }
      else
      {
        *((_QWORD *)this + 58) = v3;
        *((_QWORD *)this + 57) = v3;
        do
        {
          (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v3 + 104LL))(
            v3,
            this);
          *((_QWORD *)this + 57) = *((_QWORD *)v3 + 1);
          if ( (*((_DWORD *)v3 + 4) & 2) != 0 )
          {
            *((_QWORD *)v3 + 1) = *((_QWORD *)this + 53);
            *((_QWORD *)this + 53) = v3;
          }
          else
          {
            *((_QWORD *)v3 + 1) = 0LL;
            (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v3 + 96LL))(
              v3,
              1LL);
          }
          v3 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 57);
        }
        while ( v3 );
        *((_QWORD *)this + 58) = 0LL;
      }
    }
  }
  return v2;
}
