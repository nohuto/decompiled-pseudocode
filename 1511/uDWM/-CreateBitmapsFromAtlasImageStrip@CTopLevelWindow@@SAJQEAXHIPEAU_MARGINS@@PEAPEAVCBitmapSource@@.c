/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180041320
 * Callers:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180041274 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z @ 0x1800476D8 (-EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180047A4C (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x180084420 (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x180041578 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *const a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4,
        struct tagRECT **a5)
{
  void *v9; // r14
  HRESULT ThemeRect; // eax
  unsigned int v11; // ebp
  LONG top; // ecx
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // ebx
  int v16; // r15d
  struct CBitmapSource *AtlasImageFromTheme; // rbp
  void *(__fastcall *v18)(WPF::ProcessHeapImpl *, size_t); // r12
  struct tagRECT *v19; // rax
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // ecx
  HRESULT ThemeMargins; // eax
  struct tagRECT rc; // [rsp+50h] [rbp-78h] BYREF
  struct tagRECT pRect; // [rsp+60h] [rbp-68h] BYREF

  v9 = a1;
  if ( (dword_1800BE75C & 1) == 0 )
  {
    dword_1800BE724 = -2147023728;
    dword_1800BE75C |= 1u;
  }
  ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &pRect);
  v11 = ThemeRect;
  if ( ThemeRect < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800BE724, 1LL, ThemeRect, 0x2DFu);
    return v11;
  }
  if ( a4 )
  {
    ThemeMargins = GetThemeMargins(v9, 0LL, iPartId, 0, 3601, 0LL, a4);
    v11 = ThemeMargins;
    if ( ThemeMargins < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800BE724, 1LL, ThemeMargins, 0x2E3u);
      return v11;
    }
  }
  top = pRect.top;
  v13 = pRect.bottom - pRect.top;
  if ( pRect.bottom - pRect.top < 0 )
    v13 = 0;
  if ( a3 == 4 )
    v14 = v13 >> 2;
  else
    v14 = v13 / a3;
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    rc.left = pRect.left;
    rc.right = pRect.right;
    rc.top = v16 + top;
    rc.bottom = v14 + v16 + top;
    InflateRect(&rc, -1, -1);
    AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(v9);
    v18 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    v19 = v18 == WPF::ProcessHeapImpl::AllocClear
        ? (struct tagRECT *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x68uLL)
        : (struct tagRECT *)v18(WPF::g_pProcessHeap, 104LL);
    if ( !v19 )
      break;
    *(_QWORD *)&v19[1].left = 0LL;
    *(_QWORD *)&v19->left = &CBitmapSource::`vftable';
    v19->right = 1;
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
    *a5 = v19;
    ++v15;
    ++a5;
    v16 += v14;
    if ( v15 >= a3 )
      return 0LL;
    top = pRect.top;
    v9 = a1;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x101u);
  MilInstrumentationCheckHR(0x14u, &dword_1800BE724, 1LL, -2147024882, 0x2FAu);
  return 2147942414LL;
}
