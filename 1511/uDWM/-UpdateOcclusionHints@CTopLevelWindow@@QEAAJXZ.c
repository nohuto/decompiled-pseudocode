/*
 * XREFs of ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180026560
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCPopInstruction@@UEAAPEAXI@Z @ 0x180016200 (--_GCPopInstruction@@UEAAPEAXI@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ @ 0x18002A5DC (-EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002AB90 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002B0D0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002B2D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18003A8B0 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     IsOpenThemeDataPresent @ 0x18004F1C0 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateOcclusionHints(CTopLevelWindow *this)
{
  CVisual *v1; // rsi
  unsigned int v2; // edi
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r13
  volatile signed __int32 *v7; // r15
  void (__fastcall *v8)(CVisual *, int); // r15
  int v9; // esi
  __int64 v10; // rax
  CDesktopManager *v11; // rsi
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  int v14; // eax
  bool v15; // zf
  struct tagRECT v16; // xmm6
  int v17; // edx
  void *(*v18)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r15
  struct tagRECT *v19; // rax
  struct tagRECT *v20; // rsi
  CVisual *v21; // r12
  _QWORD *v22; // rbx
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // r15d
  int v26; // edi
  void (__fastcall *v27)(CVisual *, int); // rbx
  int left; // ecx
  int top; // ecx
  int right; // ecx
  int bottom; // ecx
  struct tagRECT v33; // [rsp+30h] [rbp-29h] BYREF
  int v34; // [rsp+40h] [rbp-19h] BYREF
  CPopInstruction *(__fastcall *v35)(CPopInstruction *, char); // [rsp+48h] [rbp-11h]
  struct tagRECT *v36; // [rsp+50h] [rbp-9h] BYREF
  __int128 v37; // [rsp+58h] [rbp-1h] BYREF
  __int64 v38; // [rsp+68h] [rbp+Fh]
  int v39; // [rsp+70h] [rbp+17h]

  v1 = (CVisual *)*((_QWORD *)this + 35);
  v2 = 0;
  v4 = *((_DWORD *)v1 + 64);
  if ( v4 > 0 )
  {
    v5 = 0LL;
    v6 = (unsigned int)v4;
    do
    {
      v7 = *(volatile signed __int32 **)(v5 + *((_QWORD *)v1 + 29));
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
        {
          v35 = **(CPopInstruction *(__fastcall ***)(CPopInstruction *, char))v7;
          if ( v35 == CPopInstruction::`scalar deleting destructor' )
            CPopInstruction::`scalar deleting destructor'((CPopInstruction *)v7, 1);
          else
            v35((CPopInstruction *)v7, 1);
        }
        *(_QWORD *)(v5 + *((_QWORD *)v1 + 29)) = 0LL;
      }
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
    *((_DWORD *)v1 + 64) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)v1 + 232, 8LL);
    v8 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v1 + 24LL);
    if ( v8 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v1, 4);
    else
      v8(v1, 4);
  }
  v9 = *((_DWORD *)this + 152);
  if ( (unsigned __int8)IsOpenThemeDataPresent()
    && (v9 & 6) != 0
    && (*((_DWORD *)this + 157) || *((_DWORD *)this + 159) || *((_DWORD *)this + 158) || *((_DWORD *)this + 160)) )
  {
    v10 = *((_QWORD *)this + 93);
    if ( (*(_BYTE *)(v10 + 569) & 0x20) != 0 && *(_DWORD *)(v10 + 152) != 2 && (*(_DWORD *)(v10 + 104) & 0x200000) == 0 )
    {
      v11 = CDesktopManager::s_pDesktopManagerInstance;
      CTopLevelWindow::s_ChooseWindowFrameFromStyle(*((_DWORD *)this + 152), 1, (*(_BYTE *)(v10 + 571) & 0x20) != 0);
      v12 = *(_OWORD *)((char *)v11 + 1380);
      v39 = *((_DWORD *)v11 + 351);
      v13 = *(_QWORD *)((char *)v11 + 1396);
      v14 = *((_DWORD *)v11 + 336);
      v37 = v12;
      v34 = v14;
      v38 = v13;
      CGlassColorizationParameters::AdjustWindowColorization(&v37, &v34);
      v15 = (*((_BYTE *)this + 608) & 0x40) == 0;
      v16 = *(struct tagRECT *)((char *)this + 628);
      v33 = v16;
      if ( !v15
        || (*(_BYTE *)(*((_QWORD *)this + 93) + 571LL) & 0x20) != 0
        || (unsigned int)CTopLevelWindow::EdgeBorderMustBeOpaque(this) )
      {
        v17 = 0;
      }
      else
      {
        v17 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 165);
      }
      if ( (*((_BYTE *)this + 264) & 4) != 0 )
      {
        left = *((_DWORD *)this + 165);
        if ( v33.left > left )
          left = v33.left;
        v33.left = left - v17;
        top = *((_DWORD *)this + 166);
        if ( v33.top > top )
          top = v33.top;
        v33.top = top - v17;
        right = *((_DWORD *)this + 167);
        if ( v33.right > right )
          right = v33.right;
        v33.right = right - v17;
        bottom = *((_DWORD *)this + 168);
        if ( v33.bottom > bottom )
          bottom = v33.bottom;
        v33.bottom = bottom - v17;
        v16 = v33;
      }
      v18 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v18 == WPF::ProcessHeapImpl::AllocClear )
        v19 = (struct tagRECT *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x30uLL);
      else
        v19 = (struct tagRECT *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v18)(
                                  WPF::g_pProcessHeap,
                                  48LL);
      v20 = v19;
      if ( !v19 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x2Cu);
        v2 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xF93u);
        return v2;
      }
      v19->right = 1;
      *(_QWORD *)&v19->left = &CDrawOcclusionRectangleInstruction::`vftable';
      v19[1] = v16;
      SetRectEmpty(v19 + 2);
      v21 = (CVisual *)*((_QWORD *)this + 35);
      *(_QWORD *)&v33.left = v20;
      _InterlockedIncrement(&v20->right);
      v22 = (_QWORD *)((char *)v21 + 232);
      v23 = *((_DWORD *)v21 + 64);
      v24 = v23 + 1;
      if ( v23 + 1 < v23 )
      {
        v26 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        v25 = -2147024362;
      }
      else
      {
        v25 = 0;
        if ( v24 <= *((_DWORD *)v21 + 63) )
        {
          *(_QWORD *)(*v22 + 8LL * *((unsigned int *)v21 + 64)) = *(_QWORD *)&v33.left;
          *((_DWORD *)v21 + 64) = v24;
LABEL_29:
          v27 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v21 + 24LL);
          if ( v27 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags(v21, 4);
          else
            v27(v21, 4);
          goto LABEL_31;
        }
        v36 = &v33;
        v26 = DynArrayImpl<0>::Grow((int)v21 + 232, 8, 1, 0, (__int64)&v36);
        if ( v26 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0xC0u);
        else
          *(_QWORD *)(*v22 + (unsigned int)(8 * (*((_DWORD *)v21 + 64))++)) = *(_QWORD *)&v36->left;
        v25 = v26;
        if ( v26 >= 0 )
          goto LABEL_29;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x8Eu);
LABEL_31:
      v2 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0xF95u);
      if ( _InterlockedExchangeAdd(&v20->right, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(struct tagRECT *, __int64))&v20->left)(v20, 1LL);
    }
  }
  return v2;
}
