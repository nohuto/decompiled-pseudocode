/*
 * XREFs of ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x180071498
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800341F4 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180007AC8 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x1800713A8 (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800715A4 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::Create(
        HWND *a1,
        int a2,
        enum DEVICE_SCALE_FACTOR a3,
        bool a4,
        struct CImmersiveWindowIconic **a5)
{
  CImmersiveWindowIconic *v9; // rax
  CImmersiveWindowIconic *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax

  v9 = (CImmersiveWindowIconic *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 16LL))(
                                   WPF::g_pProcessHeap,
                                   312LL);
  if ( v9 )
    v10 = CImmersiveWindowIconic::CImmersiveWindowIconic(v9);
  else
    v10 = 0LL;
  if ( v10 )
  {
    v12 = CImmersiveWindowIconic::Initialize(v10, (struct CWindowData *)a1, a2, a3, a4);
    v11 = v12;
    if ( v12 >= 0 )
    {
      *a5 = v10;
      v10 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x25u);
    }
    if ( v10 )
    {
      IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                              *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
                              a1[5]);
      if ( IconicResourceNoRef )
        --*((_DWORD *)IconicResourceNoRef + 11);
      CBaseObject::Release(v10);
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x23u);
  }
  return v11;
}
