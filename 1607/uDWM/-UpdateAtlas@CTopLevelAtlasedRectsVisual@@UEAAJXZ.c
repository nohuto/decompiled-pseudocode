/*
 * XREFs of ?UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ @ 0x180019590
 * Callers:
 *     ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001D6E0 (-ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ??_ECDrawAtlasedRectsInstruction@@EEAAPEAXI@Z @ 0x1800193E0 (--_ECDrawAtlasedRectsInstruction@@EEAAPEAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002AC70 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002AE50 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002B678 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002B7A0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruction@@I@Z @ 0x18003D2D0 (-AddMultipleAndSet@-$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruct.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelAtlasedRectsVisual::UpdateAtlas(CTopLevelAtlasedRectsVisual *this)
{
  const RECT *p_si128; // r12
  volatile signed __int32 *v2; // r13
  __int32 *v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rcx
  CDrawAtlasedRectsInstruction *(__fastcall *v9)(CDrawAtlasedRectsInstruction *, char); // rax
  void (__fastcall *v10)(CVisual *__hidden, unsigned int); // rax
  __int64 v11; // rsi
  void *(*v12)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CBaseObject *v13; // rax
  CBaseObject *v14; // rbx
  int v15; // eax
  int v16; // ebp
  int v17; // edi
  CBaseObject *v18; // rsi
  unsigned int v19; // r15d
  unsigned __int64 v20; // rdx
  void *(__fastcall *v21)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v22; // rax
  void *v23; // rbx
  unsigned int v24; // r8d
  unsigned int v25; // esi
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rax
  volatile signed __int32 *v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  void *(*v33)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CBaseObject **v34; // rax
  CBaseObject **v35; // rbx
  CBaseObject *v36; // rcx
  CBaseObject *v37; // rcx
  int v38; // eax
  void (__fastcall *v39)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v40)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  unsigned int v42; // [rsp+30h] [rbp-68h]
  void *v43; // [rsp+38h] [rbp-60h]
  CBaseObject *v44; // [rsp+40h] [rbp-58h]
  CBaseObject **v45; // [rsp+48h] [rbp-50h] BYREF
  __m128i si128; // [rsp+50h] [rbp-48h] BYREF

  p_si128 = 0LL;
  v2 = 0LL;
  v4 = (__int32 *)*((_QWORD *)this + 37);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v4 )
  {
    p_si128 = (const RECT *)&si128;
    si128.m128i_i32[0] = *v4;
    si128.m128i_i32[1] = v4[2];
    si128.m128i_i32[2] = *((_DWORD *)this + 28) - v4[1];
    si128.m128i_i32[3] = *((_DWORD *)this + 29) - v4[3];
  }
  v5 = *((_DWORD *)this + 64);
  if ( v5 > 0 )
  {
    v6 = 0LL;
    v7 = (unsigned int)v5;
    do
    {
      v8 = *(volatile signed __int32 **)(v6 + *((_QWORD *)this + 29));
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
        {
          v9 = **(CDrawAtlasedRectsInstruction *(__fastcall ***)(CDrawAtlasedRectsInstruction *, char))v8;
          if ( v9 == CDrawAtlasedRectsInstruction::`vector deleting destructor' )
            CDrawAtlasedRectsInstruction::`vector deleting destructor'((CDrawAtlasedRectsInstruction *)v8, 1);
          else
            v9((CDrawAtlasedRectsInstruction *)v8, 1);
        }
        *(_QWORD *)(v6 + *((_QWORD *)this + 29)) = 0LL;
      }
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
    *((_DWORD *)this + 64) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 232, 8LL);
    v10 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v10 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 4u);
    else
      v10(this, 4u);
  }
  v44 = 0LL;
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
    v16 = -2147024882;
    v18 = 0LL;
    goto LABEL_88;
  }
  *((_DWORD *)v13 + 2) = 1;
  *((_QWORD *)v13 + 2) = v11;
  *(_QWORD *)v13 = &CResource::`vftable';
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v11 + 88LL))(v11, 2LL, (_DWORD *)v13 + 6);
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x44u);
  }
  else if ( !*((_DWORD *)v14 + 6) )
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x45u);
    v17 = -2147024882;
    goto LABEL_77;
  }
  v17 = v16;
  if ( v16 >= 0 )
  {
    v18 = v14;
    v44 = v14;
    goto LABEL_20;
  }
LABEL_77:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x29u);
  CBaseObject::Release(v14);
  v18 = 0LL;
LABEL_20:
  if ( v16 < 0 )
  {
LABEL_88:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x35u);
    v23 = 0LL;
    goto LABEL_58;
  }
  v19 = *((_DWORD *)this + 72);
  v20 = 4LL * v19;
  if ( !is_mul_ok(v19, 4uLL) )
    v20 = -1LL;
  v21 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v21 == WPF::ProcessHeapImpl::Alloc )
    v22 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v20);
  else
    v22 = (void *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, unsigned __int64, WPF::ProcessHeapImpl *))v21)(
                    WPF::g_pProcessHeap,
                    v20,
                    WPF::g_pProcessHeap);
  v23 = v22;
  v43 = v22;
  v24 = 0;
  if ( !v22 )
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x38u);
    goto LABEL_58;
  }
  v25 = 0;
  v42 = 0;
  if ( !v19 )
  {
    v18 = v44;
    goto LABEL_58;
  }
  v26 = 0LL;
  do
  {
    v27 = *(_QWORD *)(v26 + *((_QWORD *)this + 33));
    v28 = *(_QWORD *)(v27 + 72);
    if ( v28 )
      v29 = *(volatile signed __int32 **)(v28 + 16);
    else
      v29 = 0LL;
    if ( !v2 )
      v2 = v29;
    if ( !v29 )
      goto LABEL_38;
    if ( p_si128 )
    {
      if ( *(_BYTE *)(v27 + 128) && EqualRect((const RECT *)(v27 + 112), p_si128) )
        goto LABEL_35;
      *(_BYTE *)(v27 + 128) = 1;
      *(RECT *)(v27 + 112) = *p_si128;
      goto LABEL_68;
    }
    if ( *(_BYTE *)(v27 + 128) )
    {
      *(_BYTE *)(v27 + 128) = 0;
LABEL_68:
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v27, 1u, 0x2000u);
    }
LABEL_35:
    v30 = CAtlasedImage::Validate(*(CAtlasedImage **)(v26 + *((_QWORD *)this + 33)));
    v16 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x49u);
      v23 = v43;
      v18 = v44;
      goto LABEL_58;
    }
    v31 = *(_QWORD *)(v26 + *((_QWORD *)this + 33));
    if ( (unsigned int)(*(_DWORD *)(v31 + 132) - 9) <= 8 )
    {
      v24 = v42;
    }
    else
    {
      *((_DWORD *)v43 + v42) = *(_DWORD *)(*(_QWORD *)(v31 + 88) + 24LL);
      v24 = ++v42;
    }
LABEL_38:
    ++v25;
    v26 += 8LL;
  }
  while ( v25 < v19 );
  v18 = v44;
  v23 = v43;
  if ( v2 )
  {
    v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, _QWORD))(**((_QWORD **)v44 + 2) + 1048LL))(
            *((_QWORD *)v44 + 2),
            *((unsigned int *)v44 + 6),
            v43,
            v24);
    v16 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x57u);
    }
    else
    {
      v33 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v33 == WPF::ProcessHeapImpl::AllocClear )
        v34 = (CBaseObject **)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
      else
        v34 = (CBaseObject **)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v33)(WPF::g_pProcessHeap, 32LL);
      v35 = v34;
      if ( v34 )
      {
        *((_DWORD *)v34 + 2) = 1;
        *v34 = (CBaseObject *)&CDrawAtlasedRectsInstruction::`vftable';
        v36 = v34[2];
        if ( v36 )
          CBaseObject::Release(v36);
        v35[2] = v44;
        _InterlockedIncrement((volatile signed __int32 *)v44 + 2);
        v37 = v35[3];
        if ( v37 )
          CBaseObject::Release(v37);
        v35[3] = (CBaseObject *)v2;
        _InterlockedIncrement(v2 + 2);
        v45 = v35;
        _InterlockedIncrement((volatile signed __int32 *)v35 + 2);
        v38 = DynArray<CRenderDataInstruction *,0>::AddMultipleAndSet((char *)this + 232, &v45);
        v16 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x8Eu);
        }
        else
        {
          v39 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
          if ( v39 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags(this, 4u);
          else
            v39(this, 4u);
        }
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x13Fu);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v35 + 2, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(CBaseObject **, __int64))*v35)(v35, 1LL);
      }
      else
      {
        v16 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x32u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13Du);
      }
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x59u);
      v23 = v43;
    }
  }
LABEL_58:
  if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(CBaseObject *, __int64))v18)(v18, 1LL);
  v40 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v40 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v23);
  else
    v40(WPF::g_pProcessHeap, v23);
  return (unsigned int)v16;
}
