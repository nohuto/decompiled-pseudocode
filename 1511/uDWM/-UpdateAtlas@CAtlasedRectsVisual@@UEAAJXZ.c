/*
 * XREFs of ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x1800205D0
 * Callers:
 *     ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x180020880 (-ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x1800111D8 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddDrawAtlasedRectsInstruction@CAtlasedRectsVisual@@QEAAJPEAVCResource@@0@Z @ 0x1800123E0 (-AddDrawAtlasedRectsInstruction@CAtlasedRectsVisual@@QEAAJPEAVCResource@@0@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001D1A0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?BeginCommand@CResource@@QEAAJPEAXII@Z @ 0x18001D2AC (-BeginCommand@CResource@@QEAAJPEAXII@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002BE50 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateAtlas(CAtlasedRectsVisual *this)
{
  struct CResource *v1; // r12
  __int32 *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  CResource *v7; // rsi
  unsigned int v8; // r13d
  unsigned int v9; // r15d
  __int64 v10; // r14
  CAtlasedImage *v11; // rcx
  struct CResource *v12; // rax
  int v13; // eax
  CResource *(__fastcall *v14)(CResource *, char); // rsi
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r14d
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  int appended; // eax
  int v23; // eax
  int v24; // eax
  int v25; // [rsp+30h] [rbp-40h] BYREF
  CResource *v26; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT *p_si128; // [rsp+40h] [rbp-30h]
  __m128i si128; // [rsp+48h] [rbp-28h] BYREF
  int v29; // [rsp+58h] [rbp-18h] BYREF
  __int64 v30; // [rsp+5Ch] [rbp-14h]

  v26 = 0LL;
  v1 = 0LL;
  p_si128 = 0LL;
  v3 = (__int32 *)*((_QWORD *)this + 37);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v3 )
  {
    si128.m128i_i32[0] = *v3;
    si128.m128i_i32[1] = v3[2];
    si128.m128i_i32[2] = *((_DWORD *)this + 28) - v3[1];
    si128.m128i_i32[3] = *((_DWORD *)this + 29) - v3[3];
    p_si128 = (struct tagRECT *)&si128;
  }
  v4 = CVisual::ClearInstructions(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x104u);
  }
  else
  {
    v25 = 0;
    v29 = 223;
    v30 = 0LL;
    v6 = CResource::Create(6u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), &v26);
    v7 = v26;
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x10Bu);
    }
    else
    {
      v8 = *((_DWORD *)this + 72);
      v9 = 0;
      if ( v8 )
      {
        v10 = 0LL;
        do
        {
          v11 = *(CAtlasedImage **)(v10 + *((_QWORD *)this + 33));
          v12 = (struct CResource *)*((_QWORD *)v11 + 9);
          if ( v12 )
            v12 = (struct CResource *)*((_QWORD *)v12 + 2);
          if ( !v1 )
            v1 = v12;
          if ( v12 )
          {
            CAtlasedImage::SetMarginClip(v11, p_si128);
            v16 = CAtlasedImage::Validate(*(CAtlasedImage **)(v10 + *((_QWORD *)this + 33)));
            v5 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x11Du);
              goto LABEL_15;
            }
            v13 = ++v25;
          }
          else
          {
            v13 = v25;
          }
          ++v9;
          v10 += 8LL;
        }
        while ( v9 < v8 );
        if ( v1 )
        {
          HIDWORD(v30) = 4 * v13;
          v17 = CResource::BeginCommand(v7, &v29, 0xCu, 4 * v13);
          v5 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x126u);
          }
          else
          {
            v18 = 0;
            v19 = 0LL;
            do
            {
              v20 = *(_QWORD *)(v19 + *((_QWORD *)this + 33));
              v21 = *(_QWORD *)(v20 + 72);
              if ( v21 )
                v21 = *(_QWORD *)(v21 + 16);
              if ( v21 )
              {
                v25 = *(_DWORD *)(*(_QWORD *)(v20 + 88) + 24LL);
                appended = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)v7 + 2), &v25, 4u);
                v5 = appended;
                if ( appended < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, appended, 0x12Fu);
                  goto LABEL_15;
                }
              }
              ++v18;
              v19 += 8LL;
            }
            while ( v18 < v8 );
            v23 = MilChannel_EndCommand(*((struct MIL_CHANNEL__ **)v7 + 2));
            v5 = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x133u);
            }
            else
            {
              v24 = CAtlasedRectsVisual::AddDrawAtlasedRectsInstruction(this, v1, v7);
              v5 = v24;
              if ( v24 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x134u);
            }
          }
        }
      }
    }
LABEL_15:
    if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 2, 0xFFFFFFFF) == 1 )
    {
      v14 = **(CResource *(__fastcall ***)(CResource *, char))v26;
      if ( v14 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'(v26, 1);
      else
        v14(v26, 1);
    }
  }
  return v5;
}
