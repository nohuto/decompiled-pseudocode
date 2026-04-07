/*
 * XREFs of ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800799E0
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x180079784 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x180079B10 (-OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180021DA0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003C890 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18003E890 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800788F4 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA_ea_1800788F4.c)
 *     ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x180079D24 (-_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveWindowIconic::LoadIconW(CImmersiveWindowIconic *this)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  __int64 v4; // rdx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax
  struct CBitmapSource *BitmapSourceNoRef; // rax
  struct tagSIZE *v7; // rbp
  int v8; // eax
  int v9; // eax
  struct tagPOINT v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 72);
  v2 = 0;
  v11.x = 1;
  v11.y = 1;
  if ( v1 - 2 <= 2 )
  {
    v4 = *((_QWORD *)this + 33);
    v11.x = 0;
    v11.y = 0;
    IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                            *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
                            *(HWND *)(v4 + 40));
    if ( IconicResourceNoRef )
    {
      BitmapSourceNoRef = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                            IconicResourceNoRef,
                            v1,
                            *((_DWORD *)this + 75));
      v7 = (struct tagSIZE *)BitmapSourceNoRef;
      if ( BitmapSourceNoRef )
      {
        _InterlockedIncrement((volatile signed __int32 *)BitmapSourceNoRef + 2);
        (*(void (__fastcall **)(CImmersiveWindowIconic *, __int64))(*(_QWORD *)this + 80LL))(
          this,
          (__int64)BitmapSourceNoRef + 24);
        CImmersiveWindowIconic::_UpdateSolidFill(this);
        v8 = CVisual::SetSize(*((struct tagSIZE **)this + 34), v7 + 3);
        v2 = v8;
        if ( v8 >= 0 )
        {
          CVisual::SetOffset(*((struct tagPOINT **)this + 34), &v11);
          v9 = CImage::SetBitmapSource(*((CImage **)this + 34), (struct CBitmapSource *)v7);
          v2 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xBBu);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xB9u);
        }
        CBaseObject::Release((CBaseObject *)v7);
      }
    }
  }
  return v2;
}
