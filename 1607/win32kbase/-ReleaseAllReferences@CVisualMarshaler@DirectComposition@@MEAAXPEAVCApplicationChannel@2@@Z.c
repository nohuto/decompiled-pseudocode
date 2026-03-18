/*
 * XREFs of ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0044120
 * Callers:
 *     ?ReleaseAllReferences@CHostVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00041E0 (-ReleaseAllReferences@CHostVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CCrossChannelParentVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007F030 (-ReleaseAllReferences@CCrossChannelParentVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicatio.c)
 *     ?ReleaseAllReferences@CCrossChannelChildVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007F400 (-ReleaseAllReferences@CCrossChannelChildVisualMarshaler@DirectComposition@@UEAAXPEAVCApplication.c)
 *     ?ReleaseAllReferences@CSpriteVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00EAFB0 (-ReleaseAllReferences@CSpriteVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C003EA80 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CWeakReferenceBase *v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rdx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  __int64 v11; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 17) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 12);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 12) = 0LL;
  }
  v6 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 13);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v6);
    *((_QWORD *)this + 13) = 0LL;
  }
  v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 14);
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    *((_QWORD *)this + 14) = 0LL;
  }
  v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 15);
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v8);
    *((_QWORD *)this + 15) = 0LL;
  }
  v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 16);
  if ( v9 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    *((_QWORD *)this + 16) = 0LL;
  }
  v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 23);
  if ( v10 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
    *((_QWORD *)this + 23) = 0LL;
  }
  v11 = *(_QWORD *)this;
  v12 = 0;
  (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, char *))(v11 + 248))(
    this,
    a2,
    &v12);
}
