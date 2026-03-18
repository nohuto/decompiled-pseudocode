/*
 * XREFs of ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180059590
 * Callers:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800343F0 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180059FD0 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800DF5C0 (-Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Link@CDesktopTreeData@@MEAAXXZ @ 0x180059D10 (-Link@CDesktopTreeData@@MEAAXXZ.c)
 *     ?Link@CVisualTreeData@@MEAAXXZ @ 0x180059F60 (-Link@CVisualTreeData@@MEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CTreeData::Initialize(CTreeData *this, struct CVisualTree *a2, struct CVisual *a3)
{
  __int64 v4; // rsi
  void (__fastcall *v5)(CDesktopTreeData *__hidden); // rbx

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
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD, struct CVisualTree *))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this + 4), a2);
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
