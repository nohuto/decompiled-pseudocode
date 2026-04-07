/*
 * XREFs of ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002BE50
 * Callers:
 *     ?UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ @ 0x18001C550 (-UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x1800205D0 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001BD50 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z @ 0x18001C240 (-AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002B0D0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002B2D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18002B5F0 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1AtlasedRects@@QEAA@XZ @ 0x180070420 (--1AtlasedRects@@QEAA@XZ.c)
 */

__int64 __fastcall CAtlasedImage::Validate(CAtlasedImage *this)
{
  int v2; // ebx
  int v3; // eax
  char *v4; // rax
  void (__fastcall *v5)(CAtlasButton *, unsigned int *); // rbx
  int v6; // eax
  __int64 (__fastcall *v7)(CAtlasButton *, const RECT **); // rbx
  struct CBitmapSource *v8; // r8
  int appended; // eax
  __int64 v10; // rcx
  int v11; // eax
  void (__fastcall *v12)(WPF::ProcessHeapImpl *, void *); // r14
  void (__fastcall *v13)(WPF::ProcessHeapImpl *, void *); // r14
  void (__fastcall *v14)(WPF::ProcessHeapImpl *, void *); // r14
  int v16; // eax
  __int64 v17; // r15
  void *(__fastcall *v18)(WPF::ProcessHeapImpl *, size_t); // rsi
  CBaseObject *v19; // rax
  CBaseObject *v20; // rsi
  int v21; // eax
  int v22; // r14d
  CResource *v23; // rcx
  int v24; // eax
  unsigned int v25; // [rsp+20h] [rbp-79h]
  unsigned int v26[4]; // [rsp+30h] [rbp-69h] BYREF
  LPVOID v27[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v28; // [rsp+50h] [rbp-49h]
  int v29; // [rsp+58h] [rbp-41h]
  LPVOID v30[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v31; // [rsp+70h] [rbp-29h]
  int v32; // [rsp+78h] [rbp-21h]
  LPVOID lpMem[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v34; // [rsp+90h] [rbp-9h]
  int v35; // [rsp+98h] [rbp-1h]
  char *v36; // [rsp+A0h] [rbp+7h]
  int v37; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v38; // [rsp+B4h] [rbp+1Bh]
  unsigned int v39; // [rsp+BCh] [rbp+23h]
  unsigned int v40; // [rsp+C0h] [rbp+27h]
  unsigned int v41; // [rsp+C4h] [rbp+2Bh]

  v2 = 0;
  if ( !*((_QWORD *)this + 11) )
  {
    v17 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 11) = 0LL;
    v18 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v18 == WPF::ProcessHeapImpl::AllocClear )
      v19 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
    else
      v19 = (CBaseObject *)v18(WPF::g_pProcessHeap, 32LL);
    v20 = v19;
    if ( !v19 )
    {
      v2 = -2147024882;
      v22 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x27u);
LABEL_62:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x49Eu);
      goto LABEL_2;
    }
    *((_DWORD *)v19 + 2) = 1;
    *((_QWORD *)v19 + 2) = v17;
    *(_QWORD *)v19 = &CResource::`vftable';
    v21 = MilResource_CreateOrAddRefOnChannel(v17, 5LL, (char *)v19 + 24);
    v2 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x44u);
    }
    else if ( !*((_DWORD *)v20 + 6) )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x45u);
      v22 = -2147024882;
      goto LABEL_60;
    }
    v22 = v2;
    if ( v2 >= 0 )
    {
      *((_QWORD *)this + 11) = v20;
      goto LABEL_52;
    }
LABEL_60:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x29u);
    CBaseObject::Release(v20);
LABEL_52:
    if ( v2 >= 0 )
      goto LABEL_3;
    goto LABEL_62;
  }
LABEL_2:
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x204u);
    return (unsigned int)v2;
  }
LABEL_3:
  v3 = *((_DWORD *)this + 24);
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      v23 = (CResource *)*((_QWORD *)this + 11);
      v37 = 160;
      v38 = 0LL;
      HIDWORD(v38) = *((_DWORD *)this + 17);
      v24 = CResource::Send(v23, &v37, 0xCu);
      v2 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x24Du);
        return (unsigned int)v2;
      }
    }
    goto LABEL_38;
  }
  v26[0] = 0;
  if ( *((_BYTE *)this + 128) )
    v4 = (char *)this + 112;
  else
    v4 = 0LL;
  v28 = 0LL;
  *(_OWORD *)v27 = 0LL;
  *(_OWORD *)v30 = 0LL;
  *(_OWORD *)lpMem = 0LL;
  v31 = 0LL;
  v32 = 0;
  v34 = 0LL;
  v35 = 0;
  v36 = v4;
  v29 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v27, 0x10u);
  v32 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v30, 0x10u);
  v35 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)lpMem, 4u);
  v5 = *(void (__fastcall **)(CAtlasButton *, unsigned int *))(*(_QWORD *)this + 32LL);
  if ( v5 == CAtlasedImage::AddApproximateAtlasSize )
  {
    if ( *((_QWORD *)this + 9) )
      v26[0] += ((*(_DWORD *)(*((_QWORD *)this + 9) + 36LL) > 0) + (*(_DWORD *)(*((_QWORD *)this + 9) + 32LL) > 0) + 1)
              * ((*(_DWORD *)(*((_QWORD *)this + 9) + 40LL) > 0) + (*(_DWORD *)(*((_QWORD *)this + 9) + 44LL) > 0) + 1);
  }
  else if ( v5 == CAtlasButton::AddApproximateAtlasSize )
  {
    CAtlasButton::AddApproximateAtlasSize(this, v26);
  }
  else
  {
    v5(this, v26);
  }
  v6 = DynArrayImpl<0>::Grow((__int64)v27, 0x10u, v26[0], 0, 0LL);
  v2 = v6;
  if ( v6 < 0 )
  {
    v25 = 535;
LABEL_75:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, v25);
    goto LABEL_76;
  }
  v6 = DynArrayImpl<0>::Grow((__int64)v30, 0x10u, v26[0], 0, 0LL);
  v2 = v6;
  if ( v6 < 0 )
  {
    v25 = 536;
    goto LABEL_75;
  }
  v6 = DynArrayImpl<0>::Grow((__int64)lpMem, 4u, v26[0], 0, 0LL);
  v2 = v6;
  if ( v6 < 0 )
  {
    v25 = 537;
    goto LABEL_75;
  }
  v7 = *(__int64 (__fastcall **)(CAtlasButton *, const RECT **))(*(_QWORD *)this + 16LL);
  if ( (char *)v7 == (char *)CAtlasedImage::AppendAtlas )
  {
    v8 = (struct CBitmapSource *)*((_QWORD *)this + 9);
    v2 = 0;
    if ( v8 )
    {
      appended = CAtlasedImage::AppendAtlasNineGrid((struct tagRECT *)this, (struct AtlasedRects *)v27, v8);
      v2 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, appended, 0x350u);
    }
  }
  else
  {
    if ( v7 == CAtlasButton::AppendAtlas )
      v16 = CAtlasButton::AppendAtlas(this, (const RECT **)v27);
    else
      v16 = v7(this, (const RECT **)v27);
    v2 = v16;
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x223u);
LABEL_76:
    AtlasedRects::~AtlasedRects((AtlasedRects *)v27);
    return (unsigned int)v2;
  }
  LODWORD(v38) = 0;
  HIDWORD(v38) = v29;
  v40 = 16 * v32;
  v39 = 16 * v29;
  v10 = *((_QWORD *)this + 11);
  v37 = 222;
  v41 = 4 * v35;
  LODWORD(v38) = *(_DWORD *)(v10 + 24);
  v11 = MilChannel_BeginCommand(*(struct MIL_CHANNEL__ **)(v10 + 16), &v37, 0x18u, 16 * v29 + 4 * v35 + 16 * v32);
  v2 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xA0u);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x240u);
    goto LABEL_76;
  }
  v6 = MilChannel_AppendCommandData(*(struct MIL_CHANNEL__ **)(*((_QWORD *)this + 11) + 16LL), v27[0], v39);
  v2 = v6;
  if ( v6 < 0 )
  {
    v25 = 578;
    goto LABEL_75;
  }
  v6 = MilChannel_AppendCommandData(*(struct MIL_CHANNEL__ **)(*((_QWORD *)this + 11) + 16LL), v30[0], v40);
  v2 = v6;
  if ( v6 < 0 )
  {
    v25 = 579;
    goto LABEL_75;
  }
  v6 = MilChannel_AppendCommandData(*(struct MIL_CHANNEL__ **)(*((_QWORD *)this + 11) + 16LL), lpMem[0], v41);
  v2 = v6;
  if ( v6 < 0 )
  {
    v25 = 580;
    goto LABEL_75;
  }
  v6 = MilChannel_EndCommand(*(struct MIL_CHANNEL__ **)(*((_QWORD *)this + 11) + 16LL));
  v2 = v6;
  if ( v6 < 0 )
  {
    v25 = 581;
    goto LABEL_75;
  }
  if ( lpMem[0] != lpMem[1] )
  {
    v12 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v12 == WPF::ProcessHeapImpl::Free )
    {
      if ( lpMem[0] )
        HeapFree(g_hProcessHeap, 0, lpMem[0]);
    }
    else
    {
      v12(WPF::g_pProcessHeap, lpMem[0]);
    }
    lpMem[0] = 0LL;
  }
  if ( v30[0] != v30[1] )
  {
    v13 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v13 == WPF::ProcessHeapImpl::Free )
    {
      if ( v30[0] )
        HeapFree(g_hProcessHeap, 0, v30[0]);
    }
    else
    {
      v13(WPF::g_pProcessHeap, v30[0]);
    }
    v30[0] = 0LL;
  }
  if ( v27[0] != v27[1] )
  {
    v14 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v14 == WPF::ProcessHeapImpl::Free )
    {
      if ( v27[0] )
        HeapFree(g_hProcessHeap, 0, v27[0]);
    }
    else
    {
      v14(WPF::g_pProcessHeap, v27[0]);
    }
  }
LABEL_38:
  *((_DWORD *)this + 24) &= 0xFFFFFFFC;
  return (unsigned int)v2;
}
