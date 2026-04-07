/*
 * XREFs of ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180020F10
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180006620 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ??_GCPopInstruction@@UEAAPEAXI@Z @ 0x180007970 (--_GCPopInstruction@@UEAAPEAXI@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800252C0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800280C0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800282D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     IsOpenThemeDataPresent @ 0x180048B60 (IsOpenThemeDataPresent.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  int v16; // eax
  bool v17; // zf
  struct tagRECT v18; // xmm6
  int v19; // ecx
  void *(*v20)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r15
  struct tagRECT *v21; // rax
  struct tagRECT *v22; // rsi
  CVisual *v23; // r12
  _QWORD *v24; // rbx
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // r15d
  int v28; // edi
  void (__fastcall *v29)(CVisual *, int); // rbx
  LONG left; // eax
  int v32; // edx
  int top; // eax
  int v34; // edx
  int right; // eax
  int v36; // edx
  int bottom; // eax
  struct tagRECT v38; // [rsp+30h] [rbp-29h] BYREF
  int v39; // [rsp+40h] [rbp-19h] BYREF
  CPopInstruction *(__fastcall *v40)(CPopInstruction *, char); // [rsp+48h] [rbp-11h]
  struct tagRECT *v41; // [rsp+50h] [rbp-9h] BYREF
  __int128 v42; // [rsp+58h] [rbp-1h] BYREF
  __int64 v43; // [rsp+68h] [rbp+Fh]
  int v44; // [rsp+70h] [rbp+17h]

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
          v40 = **(CPopInstruction *(__fastcall ***)(CPopInstruction *, char))v7;
          if ( v40 == CPopInstruction::`scalar deleting destructor' )
            CPopInstruction::`scalar deleting destructor'((CPopInstruction *)v7, 1);
          else
            v40((CPopInstruction *)v7, 1);
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
    if ( (*(_BYTE *)(v10 + 553) & 0x20) != 0 && *(_DWORD *)(v10 + 152) != 2 && (*(_DWORD *)(v10 + 104) & 0x200000) == 0 )
    {
      v11 = CDesktopManager::s_pDesktopManagerInstance;
      CTopLevelWindow::s_ChooseWindowFrameFromStyle(*((_DWORD *)this + 152), 1, (*(_BYTE *)(v10 + 555) & 0x20) != 0);
      v13 = 0LL;
      if ( (*((_BYTE *)this + 608) & 0x40) != 0 || (*(_BYTE *)(*((_QWORD *)this + 93) + 555LL) & 0x20) != 0 )
        v13 = 1LL;
      v14 = *(_OWORD *)((char *)v11 + 1380);
      v44 = *((_DWORD *)v11 + 351);
      v15 = *(_QWORD *)((char *)v11 + 1396);
      v16 = *((_DWORD *)v11 + 336);
      v42 = v14;
      v39 = v16;
      v43 = v15;
      if ( *((_BYTE *)v11 + 24) )
        v13 = (unsigned int)v13 | 4;
      if ( *((_BYTE *)v11 + 1408) )
        v13 = (unsigned int)v13 | 0x20;
      CGlassColorizationParameters::AdjustWindowColorization(&v42, &v39, v12, v13);
      v17 = (*((_BYTE *)this + 608) & 0x40) == 0;
      v18 = *(struct tagRECT *)((char *)this + 628);
      v38 = v18;
      if ( !v17 || (*(_BYTE *)(*((_QWORD *)this + 93) + 555LL) & 0x20) != 0 )
        v19 = 0;
      else
        v19 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 165);
      if ( (*((_BYTE *)this + 264) & 4) != 0 )
      {
        left = v38.left;
        if ( v38.left <= *((_DWORD *)this + 165) )
          left = *((_DWORD *)this + 165);
        v32 = *((_DWORD *)this + 166);
        v38.left = left - v19;
        top = v38.top;
        if ( v38.top <= v32 )
          top = v32;
        v34 = *((_DWORD *)this + 167);
        v38.top = top - v19;
        right = v38.right;
        if ( v38.right <= v34 )
          right = v34;
        v36 = *((_DWORD *)this + 168);
        v38.right = right - v19;
        bottom = v38.bottom;
        if ( v38.bottom <= v36 )
          bottom = v36;
        v38.bottom = bottom - v19;
        v18 = v38;
      }
      v20 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v20 == WPF::ProcessHeapImpl::AllocClear )
        v21 = (struct tagRECT *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x30uLL);
      else
        v21 = (struct tagRECT *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v20)(
                                  WPF::g_pProcessHeap,
                                  48LL);
      v22 = v21;
      if ( !v21 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x2Cu);
        v2 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xF46u);
        return v2;
      }
      v21->right = 1;
      *(_QWORD *)&v21->left = &CDrawOcclusionRectangleInstruction::`vftable';
      v21[1] = v18;
      SetRectEmpty(v21 + 2);
      v23 = (CVisual *)*((_QWORD *)this + 35);
      *(_QWORD *)&v38.left = v22;
      _InterlockedIncrement(&v22->right);
      v24 = (_QWORD *)((char *)v23 + 232);
      v25 = *((_DWORD *)v23 + 64);
      v26 = v25 + 1;
      if ( v25 + 1 < v25 )
      {
        v28 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        v27 = -2147024362;
      }
      else
      {
        v27 = 0;
        if ( v26 <= *((_DWORD *)v23 + 63) )
        {
          *(_QWORD *)(*v24 + 8LL * *((unsigned int *)v23 + 64)) = *(_QWORD *)&v38.left;
          *((_DWORD *)v23 + 64) = v26;
LABEL_36:
          v29 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v23 + 24LL);
          if ( v29 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags(v23, 4);
          else
            v29(v23, 4);
          goto LABEL_38;
        }
        v41 = &v38;
        v28 = DynArrayImpl<0>::Grow((int)v23 + 232, 8, 1, 0, (__int64)&v41);
        if ( v28 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0xC0u);
        else
          *(_QWORD *)(*v24 + (unsigned int)(8 * (*((_DWORD *)v23 + 64))++)) = *(_QWORD *)&v41->left;
        v27 = v28;
        if ( v28 >= 0 )
          goto LABEL_36;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x8Eu);
LABEL_38:
      v2 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0xF48u);
      if ( _InterlockedExchangeAdd(&v22->right, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(struct tagRECT *, __int64))&v22->left)(v22, 1LL);
    }
  }
  return v2;
}
