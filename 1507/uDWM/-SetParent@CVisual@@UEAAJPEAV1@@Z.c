/*
 * XREFs of ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x18001E4C0
 * Callers:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800150D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180025700 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x18001E280 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CVisual::SetParent(CVisual *this, struct CVisual *a2)
{
  struct CVisual *v2; // rbx
  void (__fastcall *v4)(CVisual *); // rdi

  *((_QWORD *)this + 3) = a2;
  v2 = a2;
  if ( !a2 )
    *((_BYTE *)this + 84) &= ~4u;
  if ( *((_DWORD *)this + 20) && a2 )
  {
    do
    {
      if ( (*((_BYTE *)v2 + 80) & 1) != 0 )
        break;
      v4 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v2 + 32LL);
      if ( v4 == CVisual::SetDirtyChildren )
        CVisual::SetDirtyChildren(v2);
      else
        v4(v2);
      v2 = (struct CVisual *)*((_QWORD *)v2 + 3);
    }
    while ( v2 );
  }
  return 0LL;
}
