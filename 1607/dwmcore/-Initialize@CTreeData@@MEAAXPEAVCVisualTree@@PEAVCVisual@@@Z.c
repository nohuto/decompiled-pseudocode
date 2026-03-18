/*
 * XREFs of ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180030EC0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180031790 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004FE84 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1801120D0 (-Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Initialize@CVisualOcclusionInfo@@MEAAXXZ @ 0x180031600 (-Initialize@CVisualOcclusionInfo@@MEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::Initialize(CTreeData *this, struct CVisualTree *a2, struct CVisual *a3)
{
  CVisualOcclusionInfo *v4; // rcx
  void (__fastcall *v5)(CDesktopTreeData *__hidden); // rax
  void (*v6)(void); // rax

  *((_BYTE *)this + 16) &= 0xF3u;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 3) = a3;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_BYTE *)this + 212) = 0;
  v4 = (CVisualOcclusionInfo *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v6 == (char *)CVisualOcclusionInfo::Initialize )
      CVisualOcclusionInfo::Initialize(v4);
    else
      v6();
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
