/*
 * XREFs of ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18007A26C
 * Callers:
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x180079734 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x1800417A4 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     Template_qp @ 0x180075F2C (Template_qp.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800796D0 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z @ 0x180079DB8 (-RemoveAt@-$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z.c)
 *     ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x180079E20 (-SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSour.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x18007DE78 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 *     ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ @ 0x180099BA8 (-GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::_AcceptBitmap(
        CImmersiveIconicBitmapRegistry *this,
        HWND *a2,
        struct CBitmapSource *a3)
{
  unsigned int v5; // ecx
  __int64 v7; // rdx
  __int64 v8; // rbx
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax
  __int64 v10; // rcx
  __int64 i; // rbx
  __int64 j; // rsi
  CVisual *v13; // rbx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx

  v5 = *((_DWORD *)this + 10);
  if ( v5 > *((_DWORD *)this + 2) )
  {
    v7 = 0LL;
    if ( v5 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v7);
        if ( !*(_BYTE *)(v8 + 40) && !*(_DWORD *)(v8 + 44) )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v5 )
          goto LABEL_8;
      }
      DynArray<CTouchVisual *,0>::RemoveAt((__int64 *)this + 2, v7);
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'((CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v8);
    }
  }
LABEL_8:
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(this, a2[5]);
  if ( IconicResourceNoRef )
  {
    *((_BYTE *)IconicResourceNoRef + 40) = 0;
    v10 = *((unsigned int *)this + 2);
    if ( *((_DWORD *)this + 10) <= (unsigned int)v10 )
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::SetBitmapResource(IconicResourceNoRef, a3);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 130); i = (unsigned int)(i + 1) )
      CThumbnailVisual::OnRepresentationTypeUpdated(*(CThumbnailVisual **)(*((_QWORD *)a2[62] + i) + 88LL));
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 18); j = (unsigned int)(j + 1) )
    {
      v13 = *(CVisual **)(*((_QWORD *)this + 6) + 8 * j);
      if ( a2[5] == CIconicAnimatedVisual::GetWindow(v13) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v10, 128LL);
        v14 = (CBaseObject *)*((_QWORD *)v13 + 36);
        if ( v14 )
        {
          CBaseObject::Release(v14);
          *((_QWORD *)v13 + 36) = 0LL;
        }
        v15 = (CBaseObject *)*((_QWORD *)v13 + 40);
        if ( v15 )
        {
          CBaseObject::Release(v15);
          *((_QWORD *)v13 + 40) = 0LL;
        }
        v16 = (CBaseObject *)*((_QWORD *)v13 + 34);
        if ( v16 )
        {
          CBaseObject::Release(v16);
          *((_QWORD *)v13 + 34) = 0LL;
        }
        CVisual::RenderRecursive(v13);
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qp(v10, (__int64)&UdwmManageIconicThumbnail_Info, 0, a2[5]);
}
