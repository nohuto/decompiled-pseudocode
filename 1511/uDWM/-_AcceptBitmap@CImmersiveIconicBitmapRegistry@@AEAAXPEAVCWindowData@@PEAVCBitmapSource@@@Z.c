/*
 * XREFs of ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180079168
 * Callers:
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x180078624 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 * Callees:
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18003E890 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     Template_qp @ 0x180074068 (Template_qp.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800785B0 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z @ 0x180078C90 (-RemoveAt@-$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z.c)
 *     ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x180078CF8 (-SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSour.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x18007D2A4 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 *     ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ @ 0x18009CFBC (-GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ.c)
 *     ?OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ @ 0x18009CFD8 (-OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::_AcceptBitmap(
        CImmersiveIconicBitmapRegistry *this,
        HWND *a2,
        struct CBitmapSource *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  unsigned int v8; // edx
  __int64 v9; // rsi
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax
  __int64 v11; // rcx
  unsigned int i; // esi

  v4 = 0;
  v5 = *((_DWORD *)this + 10);
  if ( v5 > *((_DWORD *)this + 2) )
  {
    v8 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v8);
        if ( !*(_BYTE *)(v9 + 40) && !*(_DWORD *)(v9 + 44) )
          break;
        if ( ++v8 >= v5 )
          goto LABEL_8;
      }
      DynArray<CTouchVisual *,0>::RemoveAt((__int64 *)this + 2, v8);
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'((CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v9);
    }
  }
LABEL_8:
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(this, a2[5]);
  if ( IconicResourceNoRef )
  {
    *((_BYTE *)IconicResourceNoRef + 40) = 0;
    v11 = *((unsigned int *)this + 2);
    if ( *((_DWORD *)this + 10) <= (unsigned int)v11 )
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::SetBitmapResource(IconicResourceNoRef, a3);
    for ( i = 0; i < *((_DWORD *)a2 + 128); ++i )
      CThumbnailVisual::OnRepresentationTypeUpdated(*(CThumbnailVisual **)(*((_QWORD *)a2[61] + i) + 88LL));
    if ( *((_DWORD *)this + 18) )
    {
      do
      {
        if ( a2[5] == CIconicAnimatedVisual::GetWindow(*(CIconicAnimatedVisual **)(*((_QWORD *)this + 6) + 8LL * v4)) )
          CIconicAnimatedVisual::OnRepresentationTypeUpdated((CIconicAnimatedVisual *)v11);
        ++v4;
      }
      while ( v4 < *((_DWORD *)this + 18) );
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qp(v11, (__int64)&UdwmManageIconicThumbnail_Info, 0, a2[5]);
}
