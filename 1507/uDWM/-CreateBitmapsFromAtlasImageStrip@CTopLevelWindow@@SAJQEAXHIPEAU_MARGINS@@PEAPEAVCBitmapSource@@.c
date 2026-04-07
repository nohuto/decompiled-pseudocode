/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800421B0
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z @ 0x180040CF4 (-EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180041274 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180041D9C (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x18007C9F0 (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x1800423F8 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *const a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4,
        struct tagRECT **a5)
{
  void *v9; // rbp
  HRESULT ThemeRect; // eax
  unsigned int v11; // esi
  LONG top; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  int v15; // edx
  int v16; // r15d
  struct CBitmapSource *AtlasImageFromTheme; // rsi
  void *(__fastcall *v18)(WPF::ProcessHeapImpl *, size_t); // rbp
  struct tagRECT *v19; // rax
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // ecx
  HRESULT ThemeMargins; // eax
  int v25; // [rsp+40h] [rbp-88h]
  struct tagRECT rc; // [rsp+50h] [rbp-78h] BYREF
  struct tagRECT pRect; // [rsp+60h] [rbp-68h] BYREF

  v9 = a1;
  if ( (dword_1800BC74C & 1) == 0 )
  {
    dword_1800BC714 = -2147023728;
    dword_1800BC74C |= 1u;
  }
  ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &pRect);
  v11 = ThemeRect;
  if ( ThemeRect < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800BC714, 1LL, ThemeRect, 0x2B9u);
    return v11;
  }
  if ( a4 )
  {
    ThemeMargins = GetThemeMargins(v9, 0LL, iPartId, 0, 3601, 0LL, a4);
    v11 = ThemeMargins;
    if ( ThemeMargins < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800BC714, 1LL, ThemeMargins, 0x2BDu);
      return v11;
    }
  }
  top = pRect.top;
  v13 = pRect.bottom - pRect.top;
  if ( pRect.bottom - pRect.top < 0 )
    v13 = 0;
  v14 = 0;
  v25 = v13 / a3;
  v15 = v13 / a3;
  v16 = 0;
  while ( 1 )
  {
    rc.left = pRect.left;
    rc.right = pRect.right;
    rc.top = v16 + top;
    rc.bottom = v15 + v16 + top;
    InflateRect(&rc, -1, -1);
    AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(v9);
    v18 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    v19 = v18 == WPF::ProcessHeapImpl::AllocClear
        ? (struct tagRECT *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x68uLL)
        : (struct tagRECT *)v18(WPF::g_pProcessHeap, 104LL);
    if ( !v19 )
      break;
    v19->right = 1;
    *(_QWORD *)&v19[1].left = 0LL;
    *(_QWORD *)&v19->left = &CBitmapSource::`vftable';
    *(_QWORD *)&v19[6].left = 0LL;
    v19[5].left = 0x80000000;
    v19[5].right = 0x80000000;
    v19[5].top = 0x80000000;
    v19[5].bottom = 0x80000000;
    *(_QWORD *)&v19[1].left = *((_QWORD *)AtlasImageFromTheme + 2);
    v20 = *((_QWORD *)AtlasImageFromTheme + 2);
    if ( v20 )
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v19[5] = rc;
    v21 = v19[5].right - v19[5].left;
    if ( v21 < 0 )
      v21 = 0;
    v19[1].right = v21;
    v22 = v19[5].bottom - v19[5].top;
    if ( v22 < 0 )
      v22 = 0;
    v19[1].bottom = v22;
    if ( a4 )
      v19[2] = *(struct tagRECT *)a4;
    v15 = v25;
    ++v14;
    *a5 = v19;
    v16 += v25;
    ++a5;
    if ( v14 >= a3 )
      return 0LL;
    top = pRect.top;
    v9 = a1;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x101u);
  MilInstrumentationCheckHR(0x14u, &dword_1800BC714, 1LL, -2147024882, 0x2D4u);
  return 2147942414LL;
}
