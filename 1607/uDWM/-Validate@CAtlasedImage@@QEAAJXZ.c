/*
 * XREFs of ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002B7A0
 * Callers:
 *     ?UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ @ 0x180019590 (-UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001D3B0 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x180018B10 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z @ 0x180018FE0 (-AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002AC70 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18002AF60 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??1AtlasedRects@@QEAA@XZ @ 0x180070068 (--1AtlasedRects@@QEAA@XZ.c)
 */

__int64 __fastcall CAtlasedImage::Validate(CAtlasedImage *this)
{
  int v2; // edi
  int v3; // eax
  char *v4; // rax
  void (__fastcall *v5)(CAtlasButton *, unsigned int *); // rax
  int v6; // eax
  __int64 (__fastcall *v7)(CAtlasButton *, const RECT **); // rax
  struct CBitmapSource *v8; // r8
  int appended; // eax
  void (*v10)(void); // rax
  void (*v11)(void); // rax
  void (*v12)(void); // rax
  int v14; // eax
  __int64 v15; // rdi
  void *(__fastcall *v16)(WPF::ProcessHeapImpl *, size_t); // rax
  CBaseObject *v17; // rax
  CBaseObject *v18; // rsi
  int v19; // eax
  int v20; // r14d
  int v21; // r9d
  int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-49h]
  LPVOID v24[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v25; // [rsp+50h] [rbp-19h]
  unsigned int v26; // [rsp+58h] [rbp-11h]
  LPVOID v27[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v28; // [rsp+70h] [rbp+7h]
  int v29; // [rsp+78h] [rbp+Fh]
  LPVOID lpMem[2]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v31; // [rsp+90h] [rbp+27h]
  int v32; // [rsp+98h] [rbp+2Fh]
  char *v33; // [rsp+A0h] [rbp+37h]
  unsigned int v34; // [rsp+D0h] [rbp+67h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 11) )
  {
    v15 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 11) = 0LL;
    v16 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v16 == WPF::ProcessHeapImpl::AllocClear )
      v17 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
    else
      v17 = (CBaseObject *)v16(WPF::g_pProcessHeap, 32LL);
    v18 = v17;
    if ( !v17 )
    {
      v2 = -2147024882;
      v20 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
      goto LABEL_56;
    }
    *((_DWORD *)v17 + 2) = 1;
    *((_QWORD *)v17 + 2) = v15;
    *(_QWORD *)v17 = &CResource::`vftable';
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v15 + 88LL))(v15, 3LL, (_DWORD *)v17 + 6);
    v2 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x44u);
    }
    else if ( !*((_DWORD *)v18 + 6) )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x45u);
      v20 = -2147024882;
      goto LABEL_54;
    }
    v20 = v2;
    if ( v2 >= 0 )
    {
      *((_QWORD *)this + 11) = v18;
      goto LABEL_46;
    }
LABEL_54:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x29u);
    CBaseObject::Release(v18);
LABEL_46:
    if ( v2 >= 0 )
      goto LABEL_2;
LABEL_56:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x47Fu);
  }
LABEL_2:
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x1F6u);
    return (unsigned int)v2;
  }
  v3 = *((_DWORD *)this + 24);
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 11) + 16LL) + 936LL))(
              *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
              *((unsigned int *)this + 17));
      v2 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x22Eu);
        return (unsigned int)v2;
      }
    }
    goto LABEL_32;
  }
  v34 = 0;
  if ( *((_BYTE *)this + 128) )
    v4 = (char *)this + 112;
  else
    v4 = 0LL;
  v25 = 0LL;
  *(_OWORD *)v24 = 0LL;
  *(_OWORD *)v27 = 0LL;
  *(_OWORD *)lpMem = 0LL;
  v28 = 0LL;
  v29 = 0;
  v31 = 0LL;
  v32 = 0;
  v33 = v4;
  v26 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v24, 0x10u);
  v29 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v27, 0x10u);
  v32 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)lpMem, 4u);
  v5 = *(void (__fastcall **)(CAtlasButton *, unsigned int *))(*(_QWORD *)this + 32LL);
  if ( v5 == CAtlasedImage::AddApproximateAtlasSize )
  {
    if ( *((_QWORD *)this + 9) )
      v34 += ((*(_DWORD *)(*((_QWORD *)this + 9) + 36LL) > 0) + (*(_DWORD *)(*((_QWORD *)this + 9) + 32LL) > 0) + 1)
           * ((*(_DWORD *)(*((_QWORD *)this + 9) + 40LL) > 0) + (*(_DWORD *)(*((_QWORD *)this + 9) + 44LL) > 0) + 1);
  }
  else if ( v5 == CAtlasButton::AddApproximateAtlasSize )
  {
    CAtlasButton::AddApproximateAtlasSize(this, &v34);
  }
  else
  {
    v5(this, &v34);
  }
  v6 = DynArrayImpl<0>::Grow((__int64)v24, 0x10u, v34, 0, 0LL);
  v2 = v6;
  if ( v6 < 0 )
  {
    v23 = 521;
LABEL_61:
    v21 = v6;
LABEL_63:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v23);
    AtlasedRects::~AtlasedRects((AtlasedRects *)v24);
    return (unsigned int)v2;
  }
  v6 = DynArrayImpl<0>::Grow((__int64)v27, 0x10u, v34, 0, 0LL);
  v2 = v6;
  if ( v6 < 0 )
  {
    v23 = 522;
    goto LABEL_61;
  }
  v6 = DynArrayImpl<0>::Grow((__int64)lpMem, 4u, v34, 0, 0LL);
  v2 = v6;
  if ( v6 < 0 )
  {
    v23 = 523;
    goto LABEL_61;
  }
  v7 = *(__int64 (__fastcall **)(CAtlasButton *, const RECT **))(*(_QWORD *)this + 16LL);
  if ( (char *)v7 == (char *)CAtlasedImage::AppendAtlas )
  {
    v8 = (struct CBitmapSource *)*((_QWORD *)this + 9);
    v2 = 0;
    if ( v8 )
    {
      appended = CAtlasedImage::AppendAtlasNineGrid((struct tagRECT *)this, (struct AtlasedRects *)v24, v8);
      v2 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x331u);
    }
  }
  else
  {
    if ( v7 == CAtlasButton::AppendAtlas )
      v14 = CAtlasButton::AppendAtlas(this, (const RECT **)v24);
    else
      v14 = v7(this, (const RECT **)v24);
    v2 = v14;
  }
  if ( v2 < 0 )
  {
    v23 = 533;
    v21 = v2;
    goto LABEL_63;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, LPVOID, LPVOID, LPVOID))(**(_QWORD **)(*((_QWORD *)this + 11)
                                                                                               + 16LL)
                                                                                 + 1040LL))(
         *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
         *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
         v26,
         v24[0],
         v27[0],
         lpMem[0]);
  v2 = v6;
  if ( v6 < 0 )
  {
    v23 = 552;
    goto LABEL_61;
  }
  if ( lpMem[0] != lpMem[1] )
  {
    v10 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v10 == (char *)WPF::ProcessHeapImpl::Free )
    {
      if ( lpMem[0] )
        HeapFree(g_hProcessHeap, 0, lpMem[0]);
    }
    else
    {
      v10();
    }
    lpMem[0] = 0LL;
  }
  if ( v27[0] != v27[1] )
  {
    v11 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v11 == (char *)WPF::ProcessHeapImpl::Free )
    {
      if ( v27[0] )
        HeapFree(g_hProcessHeap, 0, v27[0]);
    }
    else
    {
      v11();
    }
    v27[0] = 0LL;
  }
  if ( v24[0] != v24[1] )
  {
    v12 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v12 == (char *)WPF::ProcessHeapImpl::Free )
    {
      if ( v24[0] )
        HeapFree(g_hProcessHeap, 0, v24[0]);
    }
    else
    {
      v12();
    }
  }
LABEL_32:
  *((_DWORD *)this + 24) &= 0xFFFFFFFC;
  return (unsigned int)v2;
}
