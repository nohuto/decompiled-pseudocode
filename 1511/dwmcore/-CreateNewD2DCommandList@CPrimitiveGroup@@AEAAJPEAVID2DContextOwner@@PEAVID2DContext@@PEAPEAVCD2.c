/*
 * XREFs of ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000A18C
 * Callers:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000E39C (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 * Callees:
 *     ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18000A054 (-BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPE.c)
 *     ?BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1Bitmap@@@Z @ 0x18000A0F4 (-BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1B.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x180020C00 (-CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180027790 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x1800278A0 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800AA6E4 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewD2DCommandList(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct CD2DCommandList **a4)
{
  char v6; // bl
  struct CSharedSection *v7; // r8
  struct ID2D1Bitmap **v8; // r15
  unsigned int v9; // edx
  struct ID2D1PrivateCompositorPrimitiveProperties **v10; // r13
  int v11; // eax
  int v12; // esi
  int v13; // eax
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  void *(__fastcall *v18)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rsi
  struct ID2D1Bitmap **v19; // rax
  struct ID2DContext *v20; // r8
  int v21; // eax
  unsigned int v22; // eax
  unsigned __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // r12
  __int64 (__fastcall *v29)(CD2DContext *__hidden, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1PrivateCompositorPrimitiveProperties **, unsigned __int64, struct CD2DCommandList **); // rbx
  int v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // edx
  struct CD2DCommandList *v34; // rax
  __int64 i; // rdi
  struct ID2D1Bitmap *v36; // r12
  void (*v37)(WPF::ProcessHeapImpl *__hidden, void *); // rdi
  struct ID2D1Bitmap **v38; // r12
  __int64 j; // rdi
  struct ID2D1Bitmap *v41; // r15
  __int64 v42; // rsi
  struct ID2D1Bitmap **v43; // rax
  struct ID2D1Bitmap **v44; // rbx
  struct ID2DContext *v45; // r8
  int v46; // eax
  __int64 v47; // rsi
  struct ID2D1PrivateCompositorPrimitiveProperties **v48; // rax
  struct ID2DContextOwner *v49; // rdx
  __int64 k; // rdi
  struct ID2D1PrivateCompositorPrimitiveProperties *v51; // r15
  int v52; // r9d
  int v53; // ebx
  int v54; // eax
  unsigned int v55; // [rsp+20h] [rbp-58h]
  unsigned int v56; // [rsp+20h] [rbp-58h]
  struct CD2DCommandList *v57; // [rsp+50h] [rbp-28h] BYREF
  struct ID2D1Bitmap **v58; // [rsp+58h] [rbp-20h]
  struct ID2D1PrivateCompositorBuffer *v59; // [rsp+60h] [rbp-18h] BYREF
  struct ID2D1PrivateCompositorBuffer *v60; // [rsp+68h] [rbp-10h] BYREF
  char v61; // [rsp+C0h] [rbp+48h]

  *a4 = 0LL;
  v6 = 0;
  v57 = 0LL;
  v7 = (struct CSharedSection *)*((_QWORD *)this + 34);
  v8 = 0LL;
  v9 = *((_DWORD *)this + 90);
  v10 = 0LL;
  v61 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v58 = 0LL;
  v11 = CD2DSharedBuffer::CreateFromSharedSection(*((void **)this + 44), v9, v7, &v59);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2A6u);
    goto LABEL_27;
  }
  v13 = CD2DSharedBuffer::CreateFromSharedSection(
          *((void **)this + 46),
          *((_DWORD *)this + 94),
          *((struct CSharedSection **)this + 34),
          &v60);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2ACu);
    goto LABEL_27;
  }
  v14 = *((_DWORD *)this + 72);
  v15 = *((unsigned int *)this + 42);
  if ( v14 < (unsigned int)v15 )
    v15 = v14;
  v16 = -1LL;
  *((_DWORD *)this + 72) = v15;
  if ( (_DWORD)v15 )
  {
    v17 = 8 * v15;
    if ( !is_mul_ok(v15, 8uLL) )
      v17 = -1LL;
    v18 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v18 == WPF::ProcessHeapImpl::Alloc )
      v19 = (struct ID2D1Bitmap **)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v17);
    else
      v19 = (struct ID2D1Bitmap **)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, unsigned __int64, __int64))v18)(
                                     WPF::g_pProcessHeap,
                                     v17,
                                     -1LL);
    v8 = v19;
    if ( !v19 )
    {
      v55 = 691;
LABEL_69:
      v12 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v55);
      goto LABEL_28;
    }
    memset_0(v19, 0, 8LL * *((unsigned int *)this + 72));
    v21 = CPrimitiveGroup::BuildD2DBitmapList(this, a2, v20, 0, *((_DWORD *)this + 72), v8);
    v12 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x2BAu);
      goto LABEL_72;
    }
    v16 = -1LL;
  }
  v22 = *((_DWORD *)this + 73);
  v23 = (unsigned int)(*((_DWORD *)this + 42) - *((_DWORD *)this + 72));
  if ( v22 < (unsigned int)v23 )
    v23 = v22;
  *((_DWORD *)this + 73) = v23;
  if ( (_DWORD)v23 )
  {
    v42 = 8 * v23;
    if ( !is_mul_ok(v23, 8uLL) )
      v42 = -1LL;
    v43 = (struct ID2D1Bitmap **)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                   WPF::g_pProcessHeap,
                                   v42,
                                   -1LL);
    v58 = v43;
    v44 = v43;
    if ( !v43 )
    {
      v55 = 706;
      goto LABEL_69;
    }
    memset_0(v43, 0, 8LL * *((unsigned int *)this + 73));
    v46 = CPrimitiveGroup::BuildD2DBitmapList(this, a2, v45, *((_DWORD *)this + 72), *((_DWORD *)this + 73), v44);
    v12 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x2C9u);
LABEL_72:
      v6 = 0;
      goto LABEL_27;
    }
  }
  v24 = *((_DWORD *)this + 74);
  v25 = *((unsigned int *)this + 58);
  if ( v24 < (unsigned int)v25 )
    v25 = v24;
  *((_DWORD *)this + 74) = v25;
  if ( !(_DWORD)v25 )
    goto LABEL_19;
  v47 = 8 * v25;
  if ( !is_mul_ok(v25, 8uLL) )
    v47 = -1LL;
  v48 = (struct ID2D1PrivateCompositorPrimitiveProperties **)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                               WPF::g_pProcessHeap,
                                                               v47,
                                                               v16);
  v10 = v48;
  if ( !v48 )
  {
    v55 = 721;
    goto LABEL_69;
  }
  memset_0(v48, 0, 8LL * *((unsigned int *)this + 74));
  v31 = CPrimitiveGroup::BuildD2DColorPropertiesList(this, v49, a3, *((_DWORD *)this + 74), v10);
  v12 = v31;
  if ( v31 < 0 )
  {
    v56 = 727;
LABEL_76:
    v52 = v31;
LABEL_79:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, v56);
    goto LABEL_80;
  }
LABEL_19:
  v26 = *((unsigned int *)this + 74);
  v27 = *((unsigned int *)this + 73);
  v28 = *((unsigned int *)this + 72);
  v29 = *(__int64 (__fastcall **)(CD2DContext *__hidden, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1PrivateCompositorPrimitiveProperties **, unsigned __int64, struct CD2DCommandList **))(*(_QWORD *)a3 + 240LL);
  if ( v29 == CD2DContext::CreateLegacyCommandList )
    v30 = CD2DContext::CreateLegacyCommandList(a3, v59, v60, v8, v28, v58, v27, v10, v26, &v57);
  else
    v30 = v29(a3, v59, v60, v8, v28, v58, v27, v10, v26, &v57);
  v12 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x2E4u);
LABEL_80:
    v6 = v61;
    goto LABEL_27;
  }
  v31 = CD2DResource::AddResourceNotifier(
          (struct CD2DCommandList *)((char *)v57 + 16),
          (CPrimitiveGroup *)((char *)this + 40));
  v12 = v31;
  if ( v31 < 0 )
  {
    v56 = 742;
    goto LABEL_76;
  }
  v32 = *((_DWORD *)this + 28);
  v6 = 1;
  v61 = 1;
  v33 = v32 + 1;
  if ( v32 + 1 < v32 )
  {
    v53 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v12 = -2147024362;
LABEL_78:
    v56 = 745;
    v52 = v53;
    goto LABEL_79;
  }
  v12 = 0;
  if ( v33 > *((_DWORD *)this + 27) )
  {
    v54 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 88, 8LL, 1LL, &v57);
    v53 = v54;
    if ( v54 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0xC0u);
    v12 = v53;
    if ( v53 >= 0 )
    {
      v6 = 1;
      goto LABEL_26;
    }
    goto LABEL_78;
  }
  *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * v32) = v57;
  *((_DWORD *)this + 28) = v33;
LABEL_26:
  v34 = v57;
  v57 = 0LL;
  *a4 = v34;
LABEL_27:
  if ( v12 < 0 && v6 )
    CD2DResource::RemoveResourceNotifier(
      (struct CD2DCommandList *)((char *)v57 + 16),
      (CPrimitiveGroup *)((char *)this + 40));
LABEL_28:
  if ( v8 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 72); i = (unsigned int)(i + 1) )
    {
      v36 = v8[i];
      if ( v36 )
        (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v36 + 16LL))(v8[i]);
    }
    v37 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v37 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v8);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, struct ID2D1Bitmap **))v37)(WPF::g_pProcessHeap, v8);
  }
  v38 = v58;
  if ( v58 )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 73); j = (unsigned int)(j + 1) )
    {
      v41 = v38[j];
      if ( v41 )
        (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v41 + 16LL))(v38[j]);
    }
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct ID2D1Bitmap **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v38);
  }
  if ( v10 )
  {
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 74); k = (unsigned int)(k + 1) )
    {
      v51 = v10[k];
      if ( v51 )
        (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)v51 + 16LL))(v10[k]);
    }
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct ID2D1PrivateCompositorPrimitiveProperties **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v10);
  }
  if ( v57 )
    (*(void (__fastcall **)(struct CD2DCommandList *))(*(_QWORD *)v57 + 16LL))(v57);
  if ( v59 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v59 + 16LL))(v59);
  if ( v60 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v60 + 16LL))(v60);
  return (unsigned int)v12;
}
