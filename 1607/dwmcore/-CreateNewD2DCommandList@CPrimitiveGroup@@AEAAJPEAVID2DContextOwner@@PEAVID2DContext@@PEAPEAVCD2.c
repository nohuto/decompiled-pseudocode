/*
 * XREFs of ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000EC3C
 * Callers:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180004AE8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 * Callees:
 *     ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18000EAC0 (-BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPE.c)
 *     ?BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1Bitmap@@@Z @ 0x18000EBA4 (-BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1B.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x18007CEB0 (-CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009DA70 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18009DBA0 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18009E1D0 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewD2DCommandList(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct CD2DCommandList **a4)
{
  struct ID2D1Bitmap **v7; // r14
  struct CSharedSection *v8; // r8
  struct ID2D1Bitmap **v9; // r12
  unsigned int v10; // edx
  struct ID2D1PrivateCompositorPrimitiveProperties **v11; // r15
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  bool v18; // of
  unsigned __int64 v19; // rdx
  void *(__fastcall *v20)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct ID2D1Bitmap **v21; // rax
  struct ID2DContext *v22; // r8
  int v23; // eax
  unsigned int v24; // eax
  unsigned __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  __int64 (__fastcall *v31)(CD2DContext *__hidden, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1PrivateCompositorPrimitiveProperties **, unsigned __int64, struct CD2DCommandList **); // rax
  int v32; // eax
  int v33; // eax
  char v34; // si
  unsigned int v35; // eax
  unsigned int v36; // edx
  struct CD2DCommandList *v37; // rax
  __int64 i; // rsi
  struct ID2D1Bitmap *v39; // rcx
  void (*v40)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  __int64 j; // rsi
  struct ID2D1Bitmap *v43; // rcx
  __int64 v44; // rdx
  struct ID2D1Bitmap **v45; // rax
  struct ID2DContext *v46; // r8
  int v47; // eax
  __int64 v48; // rdx
  struct ID2D1PrivateCompositorPrimitiveProperties **v49; // rax
  struct ID2DContextOwner *v50; // rdx
  __int64 k; // rsi
  struct ID2D1PrivateCompositorPrimitiveProperties *v52; // rcx
  int v53; // r9d
  int v54; // eax
  unsigned int v55; // [rsp+20h] [rbp-60h]
  unsigned int v56; // [rsp+20h] [rbp-60h]
  struct CD2DCommandList *v57; // [rsp+60h] [rbp-20h] BYREF
  struct ID2D1PrivateCompositorBuffer *v58; // [rsp+68h] [rbp-18h] BYREF
  struct ID2D1PrivateCompositorBuffer *v59; // [rsp+70h] [rbp-10h] BYREF

  *a4 = 0LL;
  v7 = 0LL;
  v57 = 0LL;
  v8 = (struct CSharedSection *)*((_QWORD *)this + 44);
  v9 = 0LL;
  v10 = *((_DWORD *)this + 110);
  v11 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v12 = CD2DSharedBuffer::CreateFromSharedSection(*((void **)this + 54), v10, v8, &v58);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x2C2u);
    goto LABEL_82;
  }
  v14 = CD2DSharedBuffer::CreateFromSharedSection(
          *((void **)this + 56),
          *((_DWORD *)this + 114),
          *((struct CSharedSection **)this + 44),
          &v59);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2C8u);
    goto LABEL_82;
  }
  v15 = *((_DWORD *)this + 92);
  v16 = *((unsigned int *)this + 62);
  if ( v15 < (unsigned int)v16 )
    v16 = v15;
  v17 = -1LL;
  *((_DWORD *)this + 92) = v16;
  if ( (_DWORD)v16 )
  {
    v18 = (v16 * (unsigned __int128)8u) >> 64 != 0;
    v19 = 8 * v16;
    if ( v18 )
      v19 = -1LL;
    v20 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v20 == WPF::ProcessHeapImpl::Alloc )
      v21 = (struct ID2D1Bitmap **)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v19);
    else
      v21 = (struct ID2D1Bitmap **)v20(WPF::g_pProcessHeap, v19);
    v7 = v21;
    if ( !v21 )
    {
      v55 = 719;
LABEL_67:
      v13 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v55);
      goto LABEL_28;
    }
    memset_0(v21, 0, 8LL * *((unsigned int *)this + 92));
    v23 = CPrimitiveGroup::BuildD2DBitmapList(this, a2, v22, 0, *((_DWORD *)this + 92), v7);
    v13 = v23;
    if ( v23 >= 0 )
    {
      v17 = -1LL;
      goto LABEL_13;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x2D6u);
LABEL_82:
    v34 = 0;
    goto LABEL_27;
  }
LABEL_13:
  v24 = *((_DWORD *)this + 93);
  v25 = (unsigned int)(*((_DWORD *)this + 62) - *((_DWORD *)this + 92));
  if ( v24 < (unsigned int)v25 )
    v25 = v24;
  *((_DWORD *)this + 93) = v25;
  if ( (_DWORD)v25 )
  {
    v44 = 8 * v25;
    if ( !is_mul_ok(v25, 8uLL) )
      v44 = -1LL;
    v45 = (struct ID2D1Bitmap **)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                   WPF::g_pProcessHeap,
                                   v44,
                                   -1LL);
    v9 = v45;
    if ( !v45 )
    {
      v55 = 734;
      goto LABEL_67;
    }
    memset_0(v45, 0, 8LL * *((unsigned int *)this + 93));
    v47 = CPrimitiveGroup::BuildD2DBitmapList(this, a2, v46, *((_DWORD *)this + 92), *((_DWORD *)this + 93), v9);
    v13 = v47;
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x2E5u);
      v34 = 0;
      goto LABEL_27;
    }
  }
  v26 = *((_DWORD *)this + 94);
  v27 = *((unsigned int *)this + 78);
  if ( v26 < (unsigned int)v27 )
    v27 = v26;
  *((_DWORD *)this + 94) = v27;
  if ( !(_DWORD)v27 )
    goto LABEL_19;
  v48 = 8 * v27;
  if ( !is_mul_ok(v27, 8uLL) )
    v48 = -1LL;
  v49 = (struct ID2D1PrivateCompositorPrimitiveProperties **)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                               WPF::g_pProcessHeap,
                                                               v48,
                                                               v17);
  v11 = v49;
  if ( !v49 )
  {
    v55 = 749;
    goto LABEL_67;
  }
  memset_0(v49, 0, 8LL * *((unsigned int *)this + 94));
  v33 = CPrimitiveGroup::BuildD2DColorPropertiesList(this, v50, a3, *((_DWORD *)this + 94), v11);
  v13 = v33;
  if ( v33 < 0 )
  {
    v56 = 755;
LABEL_71:
    v53 = v33;
LABEL_73:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, v56);
    v34 = 0;
    goto LABEL_27;
  }
LABEL_19:
  v28 = *((unsigned int *)this + 94);
  v29 = *((unsigned int *)this + 93);
  v30 = *((unsigned int *)this + 92);
  v31 = *(__int64 (__fastcall **)(CD2DContext *__hidden, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1Bitmap **, unsigned __int64, struct ID2D1PrivateCompositorPrimitiveProperties **, unsigned __int64, struct CD2DCommandList **))(*(_QWORD *)a3 + 248LL);
  if ( v31 == CD2DContext::CreateLegacyCommandList )
    v32 = CD2DContext::CreateLegacyCommandList(a3, v58, v59, v7, v30, v9, v29, v11, v28, &v57);
  else
    v32 = v31(a3, v58, v59, v7, v30, v9, v29, v11, v28, &v57);
  v13 = v32;
  if ( v32 < 0 )
  {
    v56 = 768;
    v53 = v32;
    goto LABEL_73;
  }
  v33 = CD2DResource::AddResourceNotifier(
          (struct CD2DCommandList *)((char *)v57 + 16),
          (CPrimitiveGroup *)((char *)this + 112));
  v13 = v33;
  if ( v33 < 0 )
  {
    v56 = 770;
    goto LABEL_71;
  }
  v34 = 1;
  v35 = *((_DWORD *)this + 48);
  v36 = v35 + 1;
  if ( v35 + 1 < v35 )
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_78;
  }
  v13 = 0;
  if ( v36 > *((_DWORD *)this + 47) )
  {
    v54 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 168, 8LL, 1LL, &v57);
    v13 = v54;
    if ( v54 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0xC0u);
LABEL_78:
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x305u);
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  *(_QWORD *)(*((_QWORD *)this + 21) + 8LL * v35) = v57;
  *((_DWORD *)this + 48) = v36;
LABEL_26:
  v37 = v57;
  v57 = 0LL;
  *a4 = v37;
LABEL_27:
  if ( v13 < 0 && v34 )
    CD2DResource::RemoveResourceNotifier(
      (struct CD2DCommandList *)((char *)v57 + 16),
      (CPrimitiveGroup *)((char *)this + 112));
LABEL_28:
  if ( v7 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 92); i = (unsigned int)(i + 1) )
    {
      v39 = v7[i];
      if ( v39 )
        (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v39 + 16LL))(v39);
    }
    v40 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v40 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v7);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, struct ID2D1Bitmap **))v40)(WPF::g_pProcessHeap, v7);
  }
  if ( v9 )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 93); j = (unsigned int)(j + 1) )
    {
      v43 = v9[j];
      if ( v43 )
        (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v43 + 16LL))(v43);
    }
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct ID2D1Bitmap **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v9);
  }
  if ( v11 )
  {
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 94); k = (unsigned int)(k + 1) )
    {
      v52 = v11[k];
      if ( v52 )
        (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)v52 + 16LL))(v52);
    }
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct ID2D1PrivateCompositorPrimitiveProperties **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v11);
  }
  if ( v57 )
    (*(void (__fastcall **)(struct CD2DCommandList *))(*(_QWORD *)v57 + 16LL))(v57);
  if ( v58 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v58 + 16LL))(v58);
  if ( v59 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v59 + 16LL))(v59);
  return (unsigned int)v13;
}
