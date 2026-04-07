/*
 * XREFs of ?UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ @ 0x180016E60
 * Callers:
 *     ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001B270 (-ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECDrawAtlasedRectsInstruction@@EEAAPEAXI@Z @ 0x180016C60 (--_ECDrawAtlasedRectsInstruction@@EEAAPEAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800280C0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800282D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180028E40 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTopLevelAtlasedRectsVisual::UpdateAtlas(CTopLevelAtlasedRectsVisual *this)
{
  __int32 *v2; // rcx
  const RECT *p_si128; // r12
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rbp
  volatile signed __int32 *v7; // rbx
  CDrawAtlasedRectsInstruction *(__fastcall *v8)(CDrawAtlasedRectsInstruction *, char); // r14
  void (__fastcall *v9)(CVisual *__hidden, unsigned int); // rbx
  int v10; // r13d
  __int64 v11; // rbp
  void *(*v12)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CBaseObject *v13; // rax
  CBaseObject *v14; // rbx
  int v15; // eax
  int v16; // r14d
  int v17; // edi
  unsigned int v18; // r15d
  unsigned int v19; // ebp
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rax
  volatile signed __int32 *v23; // rcx
  int v24; // eax
  volatile signed __int32 *v25; // rbp
  CBaseObject *v26; // r12
  int v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rax
  int appended; // eax
  int v33; // eax
  void *(*v34)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CBaseObject **v35; // rax
  CBaseObject **v36; // rdi
  CBaseObject *v37; // rcx
  CBaseObject *v38; // rcx
  _QWORD *v39; // rbx
  unsigned int v40; // eax
  unsigned int v41; // edx
  int v42; // ebx
  void (__fastcall *v43)(CVisual *__hidden, unsigned int); // rbx
  CVisual *v45; // rdi
  void (__fastcall *v46)(CVisual *__hidden, unsigned int); // r14
  CBaseObject *v47; // [rsp+30h] [rbp-78h]
  int v48; // [rsp+38h] [rbp-70h] BYREF
  volatile signed __int32 *v49; // [rsp+40h] [rbp-68h]
  CBaseObject **v50; // [rsp+48h] [rbp-60h] BYREF
  void **v51; // [rsp+50h] [rbp-58h] BYREF
  int v52; // [rsp+58h] [rbp-50h] BYREF
  __int64 v53; // [rsp+5Ch] [rbp-4Ch]
  __m128i si128; // [rsp+68h] [rbp-40h] BYREF

  v49 = 0LL;
  v2 = (__int32 *)*((_QWORD *)this + 37);
  p_si128 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v2 )
  {
    p_si128 = (const RECT *)&si128;
    si128.m128i_i32[0] = *v2;
    si128.m128i_i32[1] = v2[2];
    si128.m128i_i32[2] = *((_DWORD *)this + 28) - v2[1];
    si128.m128i_i32[3] = *((_DWORD *)this + 29) - v2[3];
  }
  v4 = *((_DWORD *)this + 64);
  if ( v4 > 0 )
  {
    v5 = 0LL;
    v6 = (unsigned int)v4;
    do
    {
      v7 = *(volatile signed __int32 **)(v5 + *((_QWORD *)this + 29));
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
        {
          v8 = **(CDrawAtlasedRectsInstruction *(__fastcall ***)(CDrawAtlasedRectsInstruction *, char))v7;
          if ( v8 == CDrawAtlasedRectsInstruction::`vector deleting destructor' )
            CDrawAtlasedRectsInstruction::`vector deleting destructor'((CDrawAtlasedRectsInstruction *)v7, 1);
          else
            v8((CDrawAtlasedRectsInstruction *)v7, 1);
        }
        *(_QWORD *)(v5 + *((_QWORD *)this + 29)) = 0LL;
      }
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
    *((_DWORD *)this + 64) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 232, 8LL);
    v9 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v9 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 4u);
    else
      v9(this, 4u);
  }
  v52 = 216;
  v53 = 0LL;
  v10 = 0;
  v47 = 0LL;
  v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v12 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v12 == WPF::ProcessHeapImpl::AllocClear )
    v13 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v13 = (CBaseObject *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v12)(WPF::g_pProcessHeap, 32LL);
  v14 = v13;
  if ( !v13 )
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x27u);
    v16 = -2147024882;
    goto LABEL_98;
  }
  *((_DWORD *)v13 + 2) = 1;
  *((_QWORD *)v13 + 2) = v11;
  *(_QWORD *)v13 = &CResource::`vftable';
  v15 = MilResource_CreateOrAddRefOnChannel(v11, 6LL, (char *)v13 + 24);
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x44u);
  }
  else if ( !*((_DWORD *)v14 + 6) )
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x45u);
    v17 = -2147024882;
    goto LABEL_82;
  }
  v17 = v16;
  if ( v16 >= 0 )
  {
    v47 = v14;
    goto LABEL_20;
  }
LABEL_82:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x29u);
  CBaseObject::Release(v14);
LABEL_20:
  if ( v16 < 0 )
  {
LABEL_98:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x3Cu);
    goto LABEL_76;
  }
  v18 = *((_DWORD *)this + 72);
  v19 = 0;
  if ( !v18 )
  {
LABEL_76:
    v26 = v47;
    goto LABEL_65;
  }
  v20 = 0LL;
  do
  {
    v21 = *(_QWORD *)(v20 + *((_QWORD *)this + 33));
    v22 = *(_QWORD *)(v21 + 72);
    if ( v22 )
      v23 = *(volatile signed __int32 **)(v22 + 16);
    else
      v23 = 0LL;
    if ( !v49 )
      v49 = v23;
    if ( !v23 )
      goto LABEL_33;
    if ( p_si128 )
    {
      if ( *(_BYTE *)(v21 + 128) && EqualRect((const RECT *)(v21 + 112), p_si128) )
        goto LABEL_30;
      *(_BYTE *)(v21 + 128) = 1;
      *(RECT *)(v21 + 112) = *p_si128;
LABEL_72:
      *(_DWORD *)(v21 + 96) |= 1u;
      v45 = *(CVisual **)(v21 + 80);
      if ( v45 )
      {
        v46 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v45 + 24LL);
        if ( v46 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v45, 0x2000u);
        else
          v46(v45, 0x2000u);
      }
      goto LABEL_30;
    }
    if ( *(_BYTE *)(v21 + 128) )
    {
      *(_BYTE *)(v21 + 128) = 0;
      goto LABEL_72;
    }
LABEL_30:
    v24 = CAtlasedImage::Validate(*(CAtlasedImage **)(v20 + *((_QWORD *)this + 33)));
    v16 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x4Eu);
      goto LABEL_76;
    }
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v20 + *((_QWORD *)this + 33)) + 132LL) - 9) > 8 )
      ++v10;
LABEL_33:
    ++v19;
    v20 += 8LL;
  }
  while ( v19 < v18 );
  v25 = v49;
  v26 = v47;
  if ( !v49 )
    goto LABEL_65;
  HIDWORD(v53) = 4 * v10;
  LODWORD(v53) = *((_DWORD *)v47 + 6);
  v27 = MilChannel_BeginCommand(*((struct MIL_CHANNEL__ **)v47 + 2), &v52, 0xCu, 4 * v10);
  v16 = v27;
  if ( v27 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0xA0u);
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x5Bu);
    goto LABEL_65;
  }
  v28 = 0;
  v29 = 0LL;
  do
  {
    v30 = *(_QWORD *)(v29 + *((_QWORD *)this + 33));
    if ( (unsigned int)(*(_DWORD *)(v30 + 132) - 9) > 8 )
    {
      v31 = *(_QWORD *)(v30 + 72);
      if ( v31 )
      {
        if ( *(_QWORD *)(v31 + 16) )
        {
          v48 = *(_DWORD *)(*(_QWORD *)(v30 + 88) + 24LL);
          appended = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)v47 + 2), &v48, 4u);
          v16 = appended;
          if ( appended < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, appended, 0x65u);
            goto LABEL_65;
          }
        }
      }
    }
    ++v28;
    v29 += 8LL;
  }
  while ( v28 < v18 );
  v33 = MilChannel_EndCommand(*((struct MIL_CHANNEL__ **)v47 + 2));
  v16 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v33, 0x69u);
    goto LABEL_65;
  }
  v34 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v34 == WPF::ProcessHeapImpl::AllocClear )
    v35 = (CBaseObject **)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v35 = (CBaseObject **)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v34)(WPF::g_pProcessHeap, 32LL);
  v36 = v35;
  if ( !v35 )
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x14Bu);
    goto LABEL_63;
  }
  *((_DWORD *)v35 + 2) = 1;
  *v35 = (CBaseObject *)&CDrawAtlasedRectsInstruction::`vftable';
  v37 = v35[2];
  if ( v37 )
    CBaseObject::Release(v37);
  v36[2] = v47;
  _InterlockedIncrement((volatile signed __int32 *)v47 + 2);
  v38 = v36[3];
  if ( v38 )
    CBaseObject::Release(v38);
  v36[3] = (CBaseObject *)v25;
  _InterlockedIncrement(v25 + 2);
  v50 = v36;
  _InterlockedIncrement((volatile signed __int32 *)v36 + 2);
  v39 = (_QWORD *)((char *)this + 232);
  v40 = *((_DWORD *)this + 64);
  v41 = v40 + 1;
  if ( v40 + 1 < v40 )
  {
    v42 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v16 = -2147024362;
LABEL_94:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v42, 0x8Eu);
    goto LABEL_59;
  }
  v16 = 0;
  if ( v41 <= *((_DWORD *)this + 63) )
  {
    *(_QWORD *)(*v39 + 8LL * *((unsigned int *)this + 64)) = v50;
    *((_DWORD *)this + 64) = v41;
    goto LABEL_57;
  }
  v51 = (void **)&v50;
  v16 = DynArrayImpl<0>::Grow((int)this + 232, 8, 1, 0, (__int64)&v51);
  if ( v16 >= 0 )
    *(_QWORD *)(*v39 + (unsigned int)(8 * (*((_DWORD *)this + 64))++)) = *v51;
  v42 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0xC0u);
    goto LABEL_94;
  }
LABEL_57:
  v43 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
  if ( v43 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(this, 4u);
  else
    v43(this, 4u);
LABEL_59:
  if ( v16 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x14Du);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v36 + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(CBaseObject **, __int64))*v36)(v36, 1LL);
LABEL_63:
  if ( v16 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x6Au);
LABEL_65:
  if ( v26 && _InterlockedExchangeAdd((volatile signed __int32 *)v26 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(CBaseObject *, __int64))v26)(v26, 1LL);
  return (unsigned int)v16;
}
