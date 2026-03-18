/*
 * XREFs of ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000B500
 * Callers:
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000B400 (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x18000C250 (-IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x18003B004 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004EB80 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x18004F984 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004FA24 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800AED0C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x18018D994 (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x18018DA00 (-InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z @ 0x18018DBE8 (-ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z.c)
 *     ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x18018DCD0 (-ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTransformParentPreComputeHelper::BuildTransformParentStack(
        CTransformParentPreComputeHelper *this,
        struct CComposition *a2,
        const struct CVisualTree *a3,
        struct CVisual *a4,
        unsigned __int64 a5)
{
  const struct CVisualTree *v5; // r13
  struct CVisual *v6; // rbp
  bool v7; // zf
  CTransformParentPreComputeHelper *v8; // rbx
  unsigned __int64 v9; // rsi
  struct CTreeData *v10; // rdi
  unsigned __int64 v11; // r11
  __int64 v12; // rax
  char v13; // r14
  CTransformParentPreComputeHelper *v14; // r15
  struct CVisual *v15; // rsi
  char v16; // r12
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  void *v19; // rdi
  unsigned int v20; // eax
  void (*v21)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  char v22; // al
  bool IsPreserve3D; // al
  __int64 v24; // r9
  char v25; // r10
  char v26; // al
  int v27; // edx
  struct CWeakReferenceBase **v28; // r12
  struct CVisual *v29; // rax
  _DWORD *v30; // rcx
  int v31; // edi
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v34; // r10
  struct _LIST_ENTRY *Flink; // rax
  __int64 v36; // r14
  unsigned __int64 v37; // rdx
  void *(__fastcall *v38)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  int v42; // r9d
  unsigned int v43; // [rsp+20h] [rbp-58h]
  struct CTreeData *v44; // [rsp+30h] [rbp-48h] BYREF
  struct CWeakReferenceBase **v45; // [rsp+38h] [rbp-40h]
  int v46; // [rsp+90h] [rbp+18h]
  struct CVisual *v47; // [rsp+98h] [rbp+20h] BYREF

  v5 = a3;
  v6 = a4;
  v7 = a4 == *((struct CVisual **)a3 + 3);
  v8 = this;
  v46 = 0;
  v47 = a4;
LABEL_2:
  if ( !v7 )
  {
    v9 = a5;
    while ( 1 )
    {
      LOBYTE(a3) = 0;
      v10 = 0LL;
      v11 = 0xFFFFFFFFLL;
      if ( *((_BYTE *)v5 + 32) )
      {
        v10 = (struct CVisual *)((char *)v6 + 320);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v6);
        v34 = TreeDataListHead;
        if ( TreeDataListHead )
        {
          Flink = TreeDataListHead->Flink;
          if ( Flink != v34 )
          {
            while ( (const struct CVisualTree *)Flink[2].Flink != v5 )
            {
              Flink = Flink->Flink;
              if ( Flink == v34 )
                goto LABEL_56;
            }
            v10 = (struct CTreeData *)&Flink[-14];
          }
        }
LABEL_56:
        LOBYTE(a3) = 0;
      }
      v44 = v10;
      if ( v10 && *((_QWORD *)v10 + 15) >= v9 )
        goto LABEL_45;
      v12 = *((_QWORD *)v6 + 34);
      v13 = 0;
      v14 = 0LL;
      if ( (*(_DWORD *)(v12 + 4) & 0x10000000) != 0 )
      {
        v27 = *(_DWORD *)(v12 + 12);
        this = (CTransformParentPreComputeHelper *)(v12 + 12);
        if ( (v27 & 0x7F000000) != 0x4000000 )
        {
          do
          {
            this = (CTransformParentPreComputeHelper *)((char *)this + (v27 & 0xFFFFFF) + 4);
            v27 = *(_DWORD *)this;
          }
          while ( (*(_DWORD *)this & 0x7F000000) != 0x4000000 );
        }
        v45 = *(struct CWeakReferenceBase ***)((char *)this + 4);
        v28 = v45;
        if ( v45 )
        {
          v14 = *(CTransformParentPreComputeHelper **)*v45;
          if ( !v14 )
          {
            v13 = 1;
            CComposition::ReleaseWeakReference(*((CComposition **)v6 + 2), *v45);
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CWeakReferenceBase **))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 32LL))(
              WPF::g_pProcessHeap,
              v28);
            v28 = 0LL;
            CVisual::SetTransformParentDataInternal(v6, 0LL);
            v11 = 0xFFFFFFFFLL;
          }
        }
        v15 = v14;
        if ( v28 )
        {
          v16 = *((_BYTE *)v28 + 8);
          goto LABEL_11;
        }
      }
      else
      {
        v15 = 0LL;
      }
      v16 = 0;
LABEL_11:
      v7 = v13 == 0;
      v17 = a5;
      if ( !v7 )
      {
        CPreComputeHelper::InvalidateVisual(this, v6, v5, a5);
        v11 = 0xFFFFFFFFLL;
      }
      if ( !v14 )
        goto LABEL_14;
      if ( !v10 )
      {
        v46 = CVisual::EnsureTreeData(v6, v5, &v44);
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x66u);
LABEL_97:
          v31 = v46;
          goto LABEL_50;
        }
        v10 = v44;
        v11 = 0xFFFFFFFFLL;
      }
      if ( (*((_BYTE *)v10 + 16) & 8) != 0 )
      {
        v46 = CPreComputeHelper::ResolveTransformParentCycle(v8, v5, v17, v6);
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x6Eu);
          goto LABEL_97;
        }
        v11 = 0xFFFFFFFFLL;
      }
      v22 = *((_BYTE *)v10 + 16);
      if ( (v22 & 4) != 0 && *((_QWORD *)v10 + 27) == v17 )
        goto LABEL_14;
      if ( !v16 )
      {
        if ( v6 != v14 )
        {
          IsPreserve3D = CVisual::IsPreserve3D(v6, *((const struct CVisual **)v6 + 18));
          a3 = (const struct CVisualTree *)*((_QWORD *)v5 + 3);
          v25 = IsPreserve3D;
          if ( v6 != a3 )
          {
            do
            {
              this = *(CTransformParentPreComputeHelper **)(v24 + 144);
              v26 = 1;
              if ( !this || *((_DWORD *)this + 40) != 1 )
              {
                if ( *(_DWORD *)(v24 + 160) != 1
                  || ((v41 = *(_QWORD *)(v24 + 136), (v41 & 2) == 0)
                    ? (LODWORD(v41) = v41 & 1)
                    : (v41 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCuLL)),
                      !(_DWORD)v41) )
                {
                  v26 = 0;
                }
              }
              if ( v25 != v26 )
                break;
              if ( this == v14 )
                goto LABEL_15;
              v24 = *(_QWORD *)(v24 + 144);
            }
            while ( this != a3 );
          }
        }
        CPreComputeHelper::InvalidateVisual(this, v6, v5, v17);
        v11 = 0xFFFFFFFFLL;
LABEL_14:
        v15 = (struct CVisual *)*((_QWORD *)v6 + 18);
        goto LABEL_15;
      }
      *((_BYTE *)v10 + 16) = v22 | 8;
LABEL_15:
      v18 = *((unsigned int *)v8 + 3);
      v19 = 0LL;
      if ( *((_DWORD *)v8 + 2) == (_DWORD)v18 )
      {
        v36 = 2 * v18;
        if ( 2 * v18 > v11 )
        {
          v43 = 76;
          goto LABEL_90;
        }
        if ( (unsigned int)v36 <= 0x40 )
          v36 = 64LL;
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v36 <= 8 )
        {
          v42 = -2147024809;
          goto LABEL_88;
        }
        v37 = 8 * v36;
        v38 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL);
        if ( v38 == WPF::ProcessHeapImpl::Alloc )
          v39 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v37);
        else
          v39 = v38(WPF::g_pProcessHeap, v37);
        v19 = v39;
        if ( !v39 )
        {
          v42 = -2147024882;
LABEL_88:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x54u);
          goto LABEL_19;
        }
        v40 = 8LL * *((unsigned int *)v8 + 2);
        if ( v40 > 0xFFFFFFFF )
        {
          v43 = 86;
LABEL_90:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v43);
          goto LABEL_19;
        }
        memcpy_0(v19, *((const void **)v8 + 3), (unsigned int)v40);
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)v8 + 3));
        *((_QWORD *)v8 + 3) = v19;
        v19 = 0LL;
        *((_DWORD *)v8 + 3) = v36;
      }
      *(_QWORD *)(*((_QWORD *)v8 + 3) + 8LL * (unsigned int)(*((_DWORD *)v8 + 2))++) = v6;
      v20 = *((_DWORD *)v8 + 8);
      if ( v20 <= *((_DWORD *)v8 + 2) )
        v20 = *((_DWORD *)v8 + 2);
      *((_DWORD *)v8 + 8) = v20;
LABEL_19:
      this = WPF::g_pProcessHeap;
      v21 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v21 == WPF::ProcessHeapImpl::Free )
      {
        if ( v19 )
          HeapFree(g_hProcessHeap, 0, v19);
      }
      else
      {
        ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *, const struct CVisualTree *))v21)(
          WPF::g_pProcessHeap,
          v19,
          a3);
      }
      if ( v15 )
      {
        v7 = v15 == *((struct CVisual **)v5 + 3);
        v6 = v15;
        v47 = v15;
        goto LABEL_2;
      }
      if ( v6 == *((struct CVisual **)v5 + 3) )
        break;
      v9 = a5;
      v46 = CPreComputeHelper::ResolveTransformParentOrphan(v8, v5, a5, &v47);
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0xA0u);
        goto LABEL_97;
      }
      v6 = v47;
    }
  }
  LOBYTE(a3) = 1;
LABEL_45:
  v29 = 0LL;
  v30 = (_DWORD *)((char *)v8 + 8);
  if ( *((_DWORD *)v8 + 2) )
  {
    v31 = 0;
    v29 = *(struct CVisual **)(*((_QWORD *)v8 + 3) + 8LL * (unsigned int)(*v30 - 1));
  }
  else
  {
    v31 = v46;
  }
  if ( (_BYTE)a3 && v29 != v6 )
    CWatermarkStack<CVisual *,64,2,10>::Push(v30, &v47);
LABEL_50:
  if ( v31 < 0 )
    CPreComputeHelper::ClearResolvingFlagsFromStack(v8, v5);
  return (unsigned int)v31;
}
