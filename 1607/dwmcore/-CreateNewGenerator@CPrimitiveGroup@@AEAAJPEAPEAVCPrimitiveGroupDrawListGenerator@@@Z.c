/*
 * XREFs of ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18004C8B8
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageSource@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x18009DCF4 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageS.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18009E1D0 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGenerator(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  struct ID2D1PrivateCompositorBuffer *v2; // rsi
  struct CSharedSection *v4; // r8
  unsigned int v6; // edx
  struct CPrimitiveGroupDrawListGenerator *v7; // r13
  void *v8; // rcx
  struct IImageSource **v9; // r15
  struct IImageSource **v10; // r14
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  bool v18; // of
  unsigned __int64 v19; // rdx
  void *(__fastcall *v20)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct IImageSource **v21; // rax
  int v22; // esi
  __int64 j; // rdi
  struct IImageSource *v24; // rcx
  unsigned int v25; // ecx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  struct ID2D1PrivateCompositorBuffer *v28; // r8
  int v29; // eax
  __int64 m; // r15
  struct IImageSource *v31; // rcx
  void (*v32)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  unsigned __int64 v34; // rdx
  void *(__fastcall *v35)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct IImageSource **v36; // rax
  __int64 i; // rdi
  struct IImageSource *v38; // rcx
  __int64 k; // r12
  struct IImageSource *v40; // rcx
  void (*v41)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  unsigned int v42; // [rsp+20h] [rbp-30h]
  struct CResource **v43; // [rsp+38h] [rbp-18h]
  struct ID2D1PrivateCompositorBuffer *v44; // [rsp+90h] [rbp+40h] BYREF
  struct CPrimitiveGroupDrawListGenerator *v45; // [rsp+98h] [rbp+48h] BYREF
  struct ID2D1PrivateCompositorBuffer *v46; // [rsp+A0h] [rbp+50h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v4 = (struct CSharedSection *)*((_QWORD *)this + 44);
  v6 = *((_DWORD *)this + 110);
  v7 = 0LL;
  v8 = (void *)*((_QWORD *)this + 54);
  v9 = 0LL;
  v46 = 0LL;
  v10 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  v11 = CD2DSharedBuffer::CreateFromSharedSection(v8, v6, v4, &v46);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x23Du);
    goto LABEL_22;
  }
  v13 = CD2DSharedBuffer::CreateFromSharedSection(
          *((void **)this + 56),
          *((_DWORD *)this + 114),
          *((struct CSharedSection **)this + 44),
          &v44);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x243u);
    v2 = v44;
    goto LABEL_30;
  }
  v14 = *((_DWORD *)this + 92);
  v15 = *((unsigned int *)this + 62);
  if ( v14 < (unsigned int)v15 )
    v15 = v14;
  *((_DWORD *)this + 92) = v15;
  if ( !(_DWORD)v15 )
    goto LABEL_6;
  v18 = (v15 * (unsigned __int128)8u) >> 64 != 0;
  v34 = 8 * v15;
  if ( v18 )
    v34 = -1LL;
  v35 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v35 == WPF::ProcessHeapImpl::Alloc )
    v36 = (struct IImageSource **)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v34);
  else
    v36 = (struct IImageSource **)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, unsigned __int64, __int64, void *(__fastcall *)(WPF::ProcessHeapImpl *__hidden, unsigned __int64)))v35)(
                                    WPF::g_pProcessHeap,
                                    v34,
                                    -1LL,
                                    WPF::ProcessHeapImpl::Alloc);
  v9 = v36;
  if ( v36 )
  {
    memset_0(v36, 0, 8LL * *((unsigned int *)this + 92));
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 92); i = (unsigned int)(i + 1) )
    {
      v38 = *(struct IImageSource **)(*((_QWORD *)this + 28) + 8 * i);
      if ( v38 )
        v38 = (struct IImageSource *)((char *)v38 + 120);
      v9[i] = v38;
      (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v38 + 8LL))(v38);
    }
LABEL_6:
    v16 = *((_DWORD *)this + 93);
    v17 = (unsigned int)(*((_DWORD *)this + 62) - *((_DWORD *)this + 92));
    if ( v16 < (unsigned int)v17 )
      v17 = v16;
    *((_DWORD *)this + 93) = v17;
    if ( !(_DWORD)v17 )
      goto LABEL_18;
    v18 = (v17 * (unsigned __int128)8u) >> 64 != 0;
    v19 = 8 * v17;
    if ( v18 )
      v19 = -1LL;
    v20 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v20 == WPF::ProcessHeapImpl::Alloc )
      v21 = (struct IImageSource **)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v19);
    else
      v21 = (struct IImageSource **)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, unsigned __int64, __int64, void *(__fastcall *)(WPF::ProcessHeapImpl *__hidden, unsigned __int64)))v20)(
                                      WPF::g_pProcessHeap,
                                      v19,
                                      -1LL,
                                      WPF::ProcessHeapImpl::Alloc);
    v10 = v21;
    if ( v21 )
    {
      memset_0(v21, 0, 8LL * *((unsigned int *)this + 93));
      v22 = *((_DWORD *)this + 92);
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 93); j = (unsigned int)(j + 1) )
      {
        v24 = *(struct IImageSource **)(*((_QWORD *)this + 28) + 8LL * (unsigned int)(j + v22));
        if ( v24 )
          v24 = (struct IImageSource *)((char *)v24 + 120);
        v10[j] = v24;
        (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v24 + 8LL))(v24);
      }
LABEL_18:
      v25 = *((_DWORD *)this + 78);
      v26 = *((unsigned int *)this + 92);
      if ( *((_DWORD *)this + 94) < v25 )
        v25 = *((_DWORD *)this + 94);
      v27 = *((_QWORD *)this + 2);
      v2 = v44;
      v43 = (struct CResource **)*((_QWORD *)this + 36);
      v28 = v44;
      *((_DWORD *)this + 94) = v25;
      v29 = CPrimitiveGroupDrawListGenerator::Create(
              *(_QWORD *)(v27 + 352),
              v46,
              v28,
              v9,
              v26,
              v10,
              *((unsigned int *)this + 93),
              v43,
              v25,
              &v45);
      v12 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x280u);
        v7 = v45;
      }
      else
      {
        *a2 = v45;
      }
      goto LABEL_22;
    }
    v42 = 609;
    goto LABEL_59;
  }
  v42 = 586;
LABEL_59:
  v12 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v42);
  v2 = v44;
LABEL_22:
  if ( v9 )
  {
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 92); k = (unsigned int)(k + 1) )
    {
      v40 = v9[k];
      if ( v40 )
        (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v40 + 16LL))(v40);
    }
    v41 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v41 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v9);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, struct IImageSource **))v41)(WPF::g_pProcessHeap, v9);
  }
  if ( v10 )
  {
    for ( m = 0LL; (unsigned int)m < *((_DWORD *)this + 93); m = (unsigned int)(m + 1) )
    {
      v31 = v10[m];
      if ( v31 )
        (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v32 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v10);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, struct IImageSource **))v32)(WPF::g_pProcessHeap, v10);
  }
LABEL_30:
  if ( v46 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v46 + 16LL))(v46);
  if ( v2 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v7 )
    (*(void (__fastcall **)(struct CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v7 + 8LL))(v7);
  return v12;
}
