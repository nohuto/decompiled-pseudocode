/*
 * XREFs of ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180023840
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ??_GCPopInstruction@@UEAAPEAXI@Z @ 0x180019280 (--_GCPopInstruction@@UEAAPEAXI@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180027C90 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002AC70 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruction@@I@Z @ 0x18003D2D0 (-AddMultipleAndSet@-$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruct.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004F7C0 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateOcclusionHints(CTopLevelWindow *this)
{
  CVisual *v1; // rdi
  unsigned int v2; // esi
  int v4; // eax
  __int64 v5; // r14
  __int64 v6; // r15
  volatile signed __int32 *v7; // rcx
  CPopInstruction *(__fastcall *v8)(CPopInstruction *, char); // rax
  void (__fastcall *v9)(CVisual *, int); // rax
  int v10; // edi
  __int64 v11; // rax
  CDesktopManager *v12; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // xmm1_8
  int v18; // eax
  bool v19; // zf
  struct tagRECT v20; // xmm6
  __int64 v21; // rcx
  void *(*v22)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct tagRECT *v23; // rax
  struct tagRECT *v24; // rdi
  CVisual *v25; // rsi
  int v26; // eax
  int v27; // ebx
  void (__fastcall *v28)(CVisual *, int); // rax
  int left; // ecx
  int top; // ecx
  int right; // ecx
  int bottom; // ecx
  struct tagRECT v34; // [rsp+30h] [rbp-78h] BYREF
  int v35; // [rsp+40h] [rbp-68h] BYREF
  __int128 v36; // [rsp+48h] [rbp-60h] BYREF
  __int64 v37; // [rsp+58h] [rbp-50h]
  int v38; // [rsp+60h] [rbp-48h]

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
          v8 = **(CPopInstruction *(__fastcall ***)(CPopInstruction *, char))v7;
          if ( v8 == CPopInstruction::`scalar deleting destructor' )
            CPopInstruction::`scalar deleting destructor'((CPopInstruction *)v7, 1);
          else
            v8((CPopInstruction *)v7, 1);
        }
        *(_QWORD *)(v5 + *((_QWORD *)v1 + 29)) = 0LL;
      }
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
    *((_DWORD *)v1 + 64) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)v1 + 232, 8LL);
    v9 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v1 + 24LL);
    if ( v9 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v1, 4);
    else
      v9(v1, 4);
  }
  v10 = *((_DWORD *)this + 152);
  if ( (unsigned __int8)IsOpenThemeDataPresent()
    && (v10 & 6) != 0
    && (*((_DWORD *)this + 157) || *((_DWORD *)this + 159) || *((_DWORD *)this + 158) || *((_DWORD *)this + 160)) )
  {
    v11 = *((_QWORD *)this + 93);
    if ( (*(_BYTE *)(v11 + 577) & 0x20) != 0 && *(_DWORD *)(v11 + 152) != 2 && (*(_DWORD *)(v11 + 104) & 0x200000) == 0 )
    {
      v12 = CDesktopManager::s_pDesktopManagerInstance;
      IsOpenThemeDataPresent();
      v14 = 2LL;
      if ( (*((_BYTE *)this + 608) & 0x40) != 0 || (*(_BYTE *)(*((_QWORD *)this + 93) + 579LL) & 0x20) != 0 )
        v14 = 1LL;
      v15 = (_DWORD *)*((_QWORD *)this + 93);
      if ( v15[20] == 0x7FFFFFFF && v15[21] == 0x7FFFFFFF && v15[22] == 0x7FFFFFFF && v15[23] == 0x7FFFFFFF )
        v14 = (unsigned int)v14 | 0x40;
      v16 = *(_OWORD *)((char *)v12 + 1364);
      v38 = *((_DWORD *)v12 + 347);
      v17 = *(_QWORD *)((char *)v12 + 1380);
      v18 = *((_DWORD *)v12 + 332);
      v36 = v16;
      v35 = v18;
      v37 = v17;
      if ( *((_BYTE *)v12 + 24) )
        v14 = (unsigned int)v14 | 4;
      if ( *((_BYTE *)v12 + 1392) )
        v14 = (unsigned int)v14 | 0x20;
      CGlassColorizationParameters::AdjustWindowColorization(&v36, &v35, v13, v14);
      v19 = (*((_BYTE *)this + 608) & 0x40) == 0;
      v20 = *(struct tagRECT *)((char *)this + 628);
      v34 = v20;
      if ( v19 )
      {
        v21 = *((_QWORD *)this + 93);
        if ( (*(_BYTE *)(v21 + 579) & 0x20) == 0
          && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 1392)
          && !(unsigned int)IsWindowArranged(*(_QWORD *)(v21 + 40))
          && (*((_BYTE *)this + 608) & 0x20) == 0 )
        {
          v2 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 163);
        }
      }
      if ( (*((_BYTE *)this + 264) & 4) != 0 )
      {
        left = *((_DWORD *)this + 165);
        if ( v34.left > left )
          left = v34.left;
        v34.left = left - v2;
        top = *((_DWORD *)this + 166);
        if ( v34.top > top )
          top = v34.top;
        v34.top = top - v2;
        right = *((_DWORD *)this + 167);
        if ( v34.right > right )
          right = v34.right;
        v34.right = right - v2;
        bottom = *((_DWORD *)this + 168);
        if ( v34.bottom > bottom )
          bottom = v34.bottom;
        v34.bottom = bottom - v2;
        v20 = v34;
      }
      v22 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v22 == WPF::ProcessHeapImpl::AllocClear )
        v23 = (struct tagRECT *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x30uLL);
      else
        v23 = (struct tagRECT *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v22)(
                                  WPF::g_pProcessHeap,
                                  48LL);
      v24 = v23;
      if ( v23 )
      {
        v23->right = 1;
        *(_QWORD *)&v23->left = &CDrawOcclusionRectangleInstruction::`vftable';
        v23[1] = v20;
        SetRectEmpty(v23 + 2);
        v25 = (CVisual *)*((_QWORD *)this + 35);
        *(_QWORD *)&v34.left = v24;
        _InterlockedIncrement(&v24->right);
        v26 = DynArray<CRenderDataInstruction *,0>::AddMultipleAndSet((char *)v25 + 232, &v34);
        v27 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x8Eu);
        }
        else
        {
          v28 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v25 + 24LL);
          if ( v28 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags(v25, 4);
          else
            v28(v25, 4);
        }
        v2 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xD4Fu);
        if ( _InterlockedExchangeAdd(&v24->right, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(struct tagRECT *, __int64))&v24->left)(v24, 1LL);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Cu);
        v2 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xD4Du);
      }
    }
  }
  return v2;
}
