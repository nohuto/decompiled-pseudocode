/*
 * XREFs of ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800591D0
 * Callers:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004CD30 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18005C830 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800FCFE0 (-Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Initialize@CVisualOcclusionInfo@@MEAAXXZ @ 0x180052040 (-Initialize@CVisualOcclusionInfo@@MEAAXXZ.c)
 *     ?Link@CDesktopTreeData@@MEAAXXZ @ 0x1800597B0 (-Link@CDesktopTreeData@@MEAAXXZ.c)
 *     ?Link@CVisualTreeData@@MEAAXXZ @ 0x18005C940 (-Link@CVisualTreeData@@MEAAXXZ.c)
 */

void __fastcall CTreeData::Initialize(CTreeData *this, struct CVisualTree *a2, struct CVisual *a3)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(CDesktopTreeData *__hidden); // rdi
  void (__fastcall *v6)(CVisualOcclusionInfo *); // rsi

  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 0;
  *((_BYTE *)this + 260) = 0;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v6 = *(void (__fastcall **)(CVisualOcclusionInfo *))(*(_QWORD *)v4 + 8LL);
    if ( v6 == CVisualOcclusionInfo::Initialize )
      CVisualOcclusionInfo::Initialize(*((CVisualOcclusionInfo **)this + 4));
    else
      ((void (__fastcall *)(_QWORD, struct CVisualTree *))v6)(*((_QWORD *)this + 4), a2);
  }
  v5 = *(void (__fastcall **)(CDesktopTreeData *__hidden))(*(_QWORD *)this + 32LL);
  if ( v5 == CDesktopTreeData::Link )
  {
    CDesktopTreeData::Link(this);
  }
  else if ( v5 == CVisualTreeData::Link )
  {
    CVisualTreeData::Link(this);
  }
  else
  {
    ((void (__fastcall *)(CTreeData *, struct CVisualTree *))v5)(this, a2);
  }
}
