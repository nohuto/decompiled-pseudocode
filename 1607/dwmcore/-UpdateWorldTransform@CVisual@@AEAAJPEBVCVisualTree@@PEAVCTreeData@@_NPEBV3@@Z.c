/*
 * XREFs of ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000C434
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z @ 0x18000B8F0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18000C56C (-EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z @ 0x18018DA50 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18000CD48 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800313F0 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004F9CC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x1800528C0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005ABF0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18016ADEC (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CVisual::UpdateWorldTransform(
        CVisual *this,
        CVisual **a2,
        struct CTreeData *a3,
        char a4,
        const struct CTreeData *a5)
{
  char *v5; // rdi
  _BOOL8 v10; // r8
  struct CMILMatrix *v11; // r9
  __int64 (__fastcall *v12)(CDesktopTreeData *__hidden, const struct CMILMatrix *, bool, struct CMILMatrix *); // rax
  int v13; // eax
  unsigned int v14; // edi
  int ManipulationManager; // eax
  _BYTE v17[64]; // [rsp+38h] [rbp-61h] BYREF
  int v18; // [rsp+78h] [rbp-21h]
  _BYTE v19[64]; // [rsp+88h] [rbp-11h] BYREF
  int v20; // [rsp+C8h] [rbp+2Fh]
  char v21; // [rsp+110h] [rbp+77h] BYREF

  v18 = 0;
  v5 = 0LL;
  v20 = 0;
  if ( a5 )
    v5 = (char *)a5 + 40;
  ((void (__fastcall *)(CVisual *, __int64, char *, char *, _BYTE *, unsigned __int64))CVisual::CalcEffectiveTransform)(
    this,
    5LL,
    v5,
    &v21,
    v17,
    (unsigned __int64)v19 & -(__int64)(*((_QWORD *)this + 37) != 0LL));
  if ( a4 || this == a2[3] )
  {
    LOBYTE(v10) = 1;
  }
  else if ( v21 )
  {
    LOBYTE(v10) = (unsigned __int8)CMILMatrix::IsEqualTo<0>(v5, v17) == 0;
  }
  else
  {
    LOBYTE(v10) = 0;
  }
  v11 = (struct CMILMatrix *)((unsigned __int64)v19 & -(__int64)(*((_QWORD *)this + 37) != 0LL));
  v12 = *(__int64 (__fastcall **)(CDesktopTreeData *__hidden, const struct CMILMatrix *, bool, struct CMILMatrix *))(*(_QWORD *)a3 + 48LL);
  if ( v12 == CDesktopTreeData::SetWorldTransform )
    v13 = CDesktopTreeData::SetWorldTransform(a3, (const struct CMILMatrix *)v17, v10, v11);
  else
    v13 = v12(a3, (const struct CMILMatrix *)v17, v10, v11);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x5DAu);
  }
  else if ( CVisual::GetInteractionInternal(this) && (*((_BYTE *)this + 154) & 2) != 0 )
  {
    a5 = 0LL;
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&a5);
    ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 2), &a5);
    if ( ManipulationManager >= 0 )
      CManipulationManager::NotifyVisualPropertyChange(a5, this, (const struct CMILMatrix *)v17);
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&a5);
  }
  return v14;
}
