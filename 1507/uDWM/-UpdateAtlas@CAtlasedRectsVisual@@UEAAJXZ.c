/*
 * XREFs of ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001AE80
 * Callers:
 *     ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001B270 (-ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180003B38 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddDrawAtlasedRectsInstruction@CAtlasedRectsVisual@@QEAAJPEAVCResource@@0@Z @ 0x180005478 (-AddDrawAtlasedRectsInstruction@CAtlasedRectsVisual@@QEAAJPEAVCResource@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180017890 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?BeginCommand@CResource@@QEAAJPEAXII@Z @ 0x180017A04 (-BeginCommand@CResource@@QEAAJPEAXII@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800282D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180028E40 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateAtlas(CAtlasedRectsVisual *this)
{
  unsigned int v1; // edi
  struct CResource *v2; // r13
  __int32 *v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r12
  void *(*v8)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rbp
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rsi
  int v11; // eax
  int v12; // ebp
  int v13; // r15d
  unsigned int v14; // r12d
  unsigned int v15; // esi
  __int64 v16; // r15
  CAtlasedImage *v17; // rcx
  __int64 v18; // rax
  struct CResource *v19; // rax
  CResource *(__fastcall *v20)(CResource *, char); // rdi
  int v22; // eax
  int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rax
  int appended; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rsi
  CBaseObject *v32; // rcx
  int v33; // [rsp+30h] [rbp-68h] BYREF
  struct tagRECT *p_si128; // [rsp+38h] [rbp-60h]
  __m128i si128; // [rsp+40h] [rbp-58h] BYREF
  int v36; // [rsp+50h] [rbp-48h] BYREF
  __int64 v37; // [rsp+54h] [rbp-44h]

  v1 = 0;
  v2 = 0LL;
  v4 = (__int32 *)*((_QWORD *)this + 37);
  p_si128 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v4 )
  {
    si128.m128i_i32[0] = *v4;
    si128.m128i_i32[1] = v4[2];
    si128.m128i_i32[2] = *((_DWORD *)this + 28) - v4[1];
    si128.m128i_i32[3] = *((_DWORD *)this + 29) - v4[3];
    p_si128 = (struct tagRECT *)&si128;
  }
  if ( *((int *)this + 64) > 0 )
  {
    v30 = 0LL;
    v31 = *((unsigned int *)this + 64);
    do
    {
      v32 = *(CBaseObject **)(v30 + *((_QWORD *)this + 29));
      if ( v32 )
      {
        CBaseObject::Release(v32);
        *(_QWORD *)(v30 + *((_QWORD *)this + 29)) = 0LL;
      }
      v30 += 8LL;
      --v31;
    }
    while ( v31 );
    *((_DWORD *)this + 64) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 232, 8LL);
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  }
  v36 = 216;
  v37 = 0LL;
  v5 = 0LL;
  v6 = *((_QWORD *)this + 2);
  v33 = 0;
  v7 = *(_QWORD *)(v6 + 16);
  v8 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v8 == WPF::ProcessHeapImpl::AllocClear )
    v9 = (volatile signed __int32 *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v9 = (volatile signed __int32 *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v8)(
                                      WPF::g_pProcessHeap,
                                      32LL);
  v10 = v9;
  if ( !v9 )
  {
    v12 = -2147024882;
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x27u);
    goto LABEL_52;
  }
  *((_DWORD *)v9 + 2) = 1;
  *((_QWORD *)v9 + 2) = v7;
  *(_QWORD *)v9 = &CResource::`vftable';
  v11 = MilResource_CreateOrAddRefOnChannel(v7, 6LL, v9 + 6);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x44u);
  }
  else if ( !*((_DWORD *)v10 + 6) )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x45u);
    v13 = -2147024882;
    goto LABEL_46;
  }
  v13 = v12;
  if ( v12 >= 0 )
  {
    v5 = v10;
    goto LABEL_11;
  }
LABEL_46:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x29u);
  CBaseObject::Release((CBaseObject *)v10);
LABEL_11:
  if ( v12 < 0 )
  {
LABEL_52:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x10Bu);
    goto LABEL_21;
  }
  v14 = *((_DWORD *)this + 72);
  v15 = 0;
  if ( v14 )
  {
    v16 = 0LL;
    do
    {
      v17 = *(CAtlasedImage **)(v16 + *((_QWORD *)this + 33));
      v18 = *((_QWORD *)v17 + 9);
      if ( v18 )
        v19 = *(struct CResource **)(v18 + 16);
      else
        v19 = 0LL;
      if ( !v2 )
        v2 = v19;
      if ( v19 )
      {
        CAtlasedImage::SetMarginClip(v17, p_si128);
        v22 = CAtlasedImage::Validate(*(CAtlasedImage **)(v16 + *((_QWORD *)this + 33)));
        v12 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x11Du);
          goto LABEL_21;
        }
        ++v33;
      }
      ++v15;
      v16 += 8LL;
    }
    while ( v15 < v14 );
    if ( v2 )
    {
      HIDWORD(v37) = 4 * v33;
      v23 = CResource::BeginCommand((CResource *)v5, &v36, 0xCu, 4 * v33);
      v12 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x126u);
      }
      else
      {
        v24 = 0LL;
        do
        {
          v25 = *(_QWORD *)(v24 + *((_QWORD *)this + 33));
          v26 = *(_QWORD *)(v25 + 72);
          if ( v26 )
          {
            if ( *(_QWORD *)(v26 + 16) )
            {
              v33 = *(_DWORD *)(*(_QWORD *)(v25 + 88) + 24LL);
              appended = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)v5 + 2), &v33, 4u);
              v12 = appended;
              if ( appended < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, appended, 0x12Fu);
                goto LABEL_21;
              }
            }
          }
          ++v1;
          v24 += 8LL;
        }
        while ( v1 < v14 );
        v28 = MilChannel_EndCommand(*((struct MIL_CHANNEL__ **)v5 + 2));
        v12 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x133u);
        }
        else
        {
          v29 = CAtlasedRectsVisual::AddDrawAtlasedRectsInstruction(this, v2, (struct CResource *)v5);
          v12 = v29;
          if ( v29 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x134u);
        }
      }
    }
  }
LABEL_21:
  if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
  {
    v20 = **(CResource *(__fastcall ***)(CResource *, char))v5;
    if ( v20 == CResource::`scalar deleting destructor' )
      CResource::`scalar deleting destructor'((CResource *)v5, 1);
    else
      v20((CResource *)v5, 1);
  }
  return (unsigned int)v12;
}
