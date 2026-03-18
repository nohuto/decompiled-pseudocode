/*
 * XREFs of ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1800926CC
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVCCompositionSurfaceBitmap@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x1800AA1C0 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVCCompos.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800AA6E4 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGenerator(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  struct CPrimitiveGroupDrawListGenerator *v4; // r15
  struct CCompositionSurfaceBitmap **v5; // rsi
  struct ID2D1PrivateCompositorBuffer *v6; // r13
  struct CSharedSection *v7; // r8
  struct CCompositionSurfaceBitmap **v8; // r14
  unsigned int v9; // edx
  void *v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  SIZE_T v18; // rdi
  LPVOID (__fastcall *v19)(WPF::ProcessHeapImpl *, SIZE_T); // rbp
  struct CCompositionSurfaceBitmap **v20; // rax
  int v21; // ebp
  __int64 j; // rdi
  CBitmapOfDeviceBitmaps *v23; // rcx
  unsigned int v24; // ecx
  struct CResource **v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  __int64 m; // rbp
  CMILCOMBase *v30; // rcx
  void (__fastcall *v31)(WPF::ProcessHeapImpl *, void *); // rbp
  SIZE_T v33; // rdi
  LPVOID (__fastcall *v34)(WPF::ProcessHeapImpl *, SIZE_T); // rbp
  struct CCompositionSurfaceBitmap **v35; // rax
  __int64 i; // rdi
  CBitmapOfDeviceBitmaps *v37; // rcx
  __int64 k; // rbp
  CMILCOMBase *v39; // rcx
  void (__fastcall *v40)(WPF::ProcessHeapImpl *, void *); // r12
  unsigned int v41; // [rsp+20h] [rbp-68h]
  struct ID2D1PrivateCompositorBuffer *v42; // [rsp+90h] [rbp+8h] BYREF
  struct CPrimitiveGroupDrawListGenerator *v43; // [rsp+98h] [rbp+10h] BYREF
  struct ID2D1PrivateCompositorBuffer *v44; // [rsp+A0h] [rbp+18h] BYREF

  v4 = 0LL;
  v44 = 0LL;
  v5 = 0LL;
  *a2 = 0LL;
  v6 = 0LL;
  v7 = (struct CSharedSection *)*((_QWORD *)this + 34);
  v8 = 0LL;
  v9 = *((_DWORD *)this + 90);
  v10 = (void *)*((_QWORD *)this + 44);
  v43 = 0LL;
  v42 = 0LL;
  v11 = CD2DSharedBuffer::CreateFromSharedSection(v10, v9, v7, &v44);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x221u);
    goto LABEL_28;
  }
  v13 = CD2DSharedBuffer::CreateFromSharedSection(
          *((void **)this + 46),
          *((_DWORD *)this + 94),
          *((struct CSharedSection **)this + 34),
          &v42);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x227u);
    v6 = v42;
    goto LABEL_28;
  }
  v14 = *((_DWORD *)this + 72);
  v15 = *((unsigned int *)this + 42);
  v6 = v42;
  if ( v14 < (unsigned int)v15 )
    v15 = v14;
  *((_DWORD *)this + 72) = v15;
  if ( (_DWORD)v15 )
  {
    v33 = 8 * v15;
    if ( !is_mul_ok(v15, 8uLL) )
      v33 = -1LL;
    v34 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v34 == WPF::ProcessHeapImpl::Alloc )
      v35 = (struct CCompositionSurfaceBitmap **)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v33);
    else
      v35 = (struct CCompositionSurfaceBitmap **)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, __int64, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v34)(
                                                   WPF::g_pProcessHeap,
                                                   v33,
                                                   -1LL,
                                                   WPF::ProcessHeapImpl::Alloc);
    v8 = v35;
    if ( !v35 )
    {
      v41 = 558;
      goto LABEL_57;
    }
    memset_0(v35, 0, 8LL * *((unsigned int *)this + 72));
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 72); i = (unsigned int)(i + 1) )
    {
      v37 = *(CBitmapOfDeviceBitmaps **)(*((_QWORD *)this + 18) + 8 * i);
      v8[i] = v37;
      CBitmapOfDeviceBitmaps::AddRef(v37);
    }
  }
  v16 = *((_DWORD *)this + 73);
  v17 = (unsigned int)(*((_DWORD *)this + 42) - *((_DWORD *)this + 72));
  if ( v16 < (unsigned int)v17 )
    v17 = v16;
  *((_DWORD *)this + 73) = v17;
  if ( !(_DWORD)v17 )
    goto LABEL_16;
  v18 = 8 * v17;
  if ( !is_mul_ok(v17, 8uLL) )
    v18 = -1LL;
  v19 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v19 == WPF::ProcessHeapImpl::Alloc )
    v20 = (struct CCompositionSurfaceBitmap **)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v18);
  else
    v20 = (struct CCompositionSurfaceBitmap **)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, __int64, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v19)(
                                                 WPF::g_pProcessHeap,
                                                 v18,
                                                 -1LL,
                                                 WPF::ProcessHeapImpl::Alloc);
  v5 = v20;
  if ( v20 )
  {
    memset_0(v20, 0, 8LL * *((unsigned int *)this + 73));
    v21 = *((_DWORD *)this + 72);
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 73); j = (unsigned int)(j + 1) )
    {
      v23 = *(CBitmapOfDeviceBitmaps **)(*((_QWORD *)this + 18) + 8LL * (unsigned int)(j + v21));
      v5[j] = v23;
      CBitmapOfDeviceBitmaps::AddRef(v23);
    }
LABEL_16:
    v24 = *((_DWORD *)this + 58);
    v25 = (struct CResource **)*((_QWORD *)this + 26);
    v26 = *((unsigned int *)this + 72);
    if ( *((_DWORD *)this + 74) < v24 )
      v24 = *((_DWORD *)this + 74);
    v27 = *((_QWORD *)this + 2);
    *((_DWORD *)this + 74) = v24;
    v28 = CPrimitiveGroupDrawListGenerator::Create(
            *(_QWORD *)(v27 + 352),
            v44,
            v6,
            v8,
            v26,
            v5,
            *((unsigned int *)this + 73),
            v25,
            v24,
            &v43);
    v12 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x264u);
      v4 = v43;
    }
    else
    {
      *a2 = v43;
    }
    goto LABEL_20;
  }
  v41 = 581;
LABEL_57:
  v12 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v41);
LABEL_20:
  if ( v8 )
  {
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 72); k = (unsigned int)(k + 1) )
    {
      v39 = v8[k];
      if ( v39 )
        CMILCOMBase::InternalRelease(v39);
    }
    v40 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v40 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v8);
    else
      v40(WPF::g_pProcessHeap, v8);
  }
  if ( v5 )
  {
    for ( m = 0LL; (unsigned int)m < *((_DWORD *)this + 73); m = (unsigned int)(m + 1) )
    {
      v30 = v5[m];
      if ( v30 )
        CMILCOMBase::InternalRelease(v30);
    }
    v31 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v31 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v5);
    else
      v31(WPF::g_pProcessHeap, v5);
  }
LABEL_28:
  if ( v44 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v44 + 16LL))(v44);
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v4 )
    (*(void (__fastcall **)(struct CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v4 + 8LL))(v4);
  return v12;
}
