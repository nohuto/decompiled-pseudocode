/*
 * XREFs of ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001D3B0
 * Callers:
 *     ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001D6E0 (-ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?AddDrawAtlasedRectsInstruction@CAtlasedRectsVisual@@QEAAJPEAVCResource@@0@Z @ 0x1800081C4 (-AddDrawAtlasedRectsInstruction@CAtlasedRectsVisual@@QEAAJPEAVCResource@@0@Z.c)
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180008AEC (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180019FD0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002AE50 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002B7A0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateAtlas(CAtlasedRectsVisual *this)
{
  _DWORD *v1; // rsi
  __int32 *v3; // rcx
  struct CResource *v4; // r15
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  CResource *v8; // rbp
  unsigned __int64 v9; // rdx
  void *(__fastcall *v10)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v11; // rax
  __int64 v12; // r13
  unsigned int v13; // r12d
  __int64 v14; // r14
  CAtlasedImage *v15; // rcx
  struct CResource *v16; // rax
  CResource *(__fastcall *v17)(CResource *, char); // rax
  void (__fastcall *v18)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // [rsp+30h] [rbp-58h]
  CResource *v24; // [rsp+38h] [rbp-50h] BYREF
  struct tagRECT *p_si128; // [rsp+40h] [rbp-48h]
  __m128i si128; // [rsp+48h] [rbp-40h] BYREF

  v24 = 0LL;
  v1 = 0LL;
  p_si128 = 0LL;
  v3 = (__int32 *)*((_QWORD *)this + 37);
  v4 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v3 )
  {
    si128.m128i_i32[0] = *v3;
    si128.m128i_i32[1] = v3[2];
    si128.m128i_i32[2] = *((_DWORD *)this + 28) - v3[1];
    si128.m128i_i32[3] = *((_DWORD *)this + 29) - v3[3];
    p_si128 = (struct tagRECT *)&si128;
  }
  v5 = CVisual::ClearInstructions(this);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x105u);
  }
  else
  {
    v7 = CResource::Create(2u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), &v24);
    v8 = v24;
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x107u);
    }
    else
    {
      v23 = *((_DWORD *)this + 72);
      v9 = 4LL * v23;
      if ( !is_mul_ok(v23, 4uLL) )
        v9 = -1LL;
      v10 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL);
      if ( v10 == WPF::ProcessHeapImpl::Alloc )
        v11 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v9);
      else
        v11 = (_DWORD *)v10(WPF::g_pProcessHeap, v9);
      v1 = v11;
      if ( v11 )
      {
        v12 = 0LL;
        v13 = 0;
        if ( v23 )
        {
          v14 = 0LL;
          do
          {
            v15 = *(CAtlasedImage **)(v14 + *((_QWORD *)this + 33));
            v16 = (struct CResource *)*((_QWORD *)v15 + 9);
            if ( v16 )
              v16 = (struct CResource *)*((_QWORD *)v16 + 2);
            if ( !v4 )
              v4 = v16;
            if ( v16 )
            {
              CAtlasedImage::SetMarginClip(v15, p_si128);
              v20 = CAtlasedImage::Validate(*(CAtlasedImage **)(v14 + *((_QWORD *)this + 33)));
              v6 = v20;
              if ( v20 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x11Bu);
                goto LABEL_19;
              }
              v1[v12] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + *((_QWORD *)this + 33)) + 88LL) + 24LL);
              v12 = (unsigned int)(v12 + 1);
            }
            ++v13;
            v14 += 8LL;
          }
          while ( v13 < v23 );
          if ( v4 )
          {
            v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD))(**((_QWORD **)v8 + 2) + 1048LL))(
                    *((_QWORD *)v8 + 2),
                    *((unsigned int *)v8 + 6),
                    v1,
                    (unsigned int)v12);
            v6 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x125u);
            }
            else
            {
              v22 = CAtlasedRectsVisual::AddDrawAtlasedRectsInstruction(this, v4, v8);
              v6 = v22;
              if ( v22 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x126u);
            }
          }
        }
      }
      else
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x10Au);
      }
    }
LABEL_19:
    if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 2, 0xFFFFFFFF) == 1 )
    {
      v17 = **(CResource *(__fastcall ***)(CResource *, char))v24;
      if ( v17 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'(v24, 1);
      else
        v17(v24, 1);
    }
  }
  v18 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v18 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v1);
  else
    v18(WPF::g_pProcessHeap, v1);
  return v6;
}
