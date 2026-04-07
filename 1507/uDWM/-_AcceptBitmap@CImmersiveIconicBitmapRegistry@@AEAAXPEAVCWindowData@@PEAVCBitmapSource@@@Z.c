/*
 * XREFs of ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180070EA8
 * Callers:
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x1800703F4 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 * Callees:
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180007AC8 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     Template_qp @ 0x18006C038 (Template_qp.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x180070380 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x180070A60 (-SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSour.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x180075214 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z @ 0x1800817B8 (-RemoveAt@-$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z.c)
 *     ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ @ 0x18009B8EC (-GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ.c)
 *     ?OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ @ 0x18009B908 (-OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::_AcceptBitmap(
        CImmersiveIconicBitmapRegistry *this,
        HWND *a2,
        struct CBitmapSource *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  __int64 v8; // rdx
  __int64 v9; // rsi
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax
  __int64 v11; // rcx
  unsigned int i; // esi

  v4 = 0;
  v5 = *((_DWORD *)this + 10);
  if ( v5 > *((_DWORD *)this + 2) )
  {
    v8 = 0LL;
    if ( v5 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * (unsigned int)v8);
        if ( !*(_BYTE *)(v9 + 40) && !*(_DWORD *)(v9 + 44) )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v5 )
          goto LABEL_8;
      }
      DynArray<CTouchVisual *,0>::RemoveAt((char *)this + 16, v8);
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
    for ( i = 0; i < *((_DWORD *)a2 + 124); ++i )
      CThumbnailVisual::OnRepresentationTypeUpdated(*(CThumbnailVisual **)(*((_QWORD *)a2[59] + i) + 88LL));
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
