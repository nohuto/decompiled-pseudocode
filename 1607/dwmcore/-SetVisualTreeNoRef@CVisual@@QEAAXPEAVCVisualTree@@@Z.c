/*
 * XREFs of ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x18004FCF0
 * Callers:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18004F7EC (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x1800B85E0 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetVisualTreeNoRef(CVisual *this, struct CVisualTree *a2)
{
  struct CVisualTree *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == (struct CVisualTree *)`CVisual::SetVisualTreeNoRef'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 34) + 4LL) &= ~0x40000000u;
  else
    CSparseStorage::SetData((CVisual *)((char *)this + 272), 2u, 8u, &v2);
}
