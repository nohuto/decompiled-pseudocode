/*
 * XREFs of ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000B400
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180061990 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000B500 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z @ 0x18000B8F0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004FA24 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPreComputeHelper::DirtyIfChanged(
        __int64 (__usercall ***this)@<rax>(CTransformParentPreComputeHelper *__hidden this@<rcx>, struct CComposition *@<rdx>, const struct CVisualTree *@<r8>, struct CVisual *@<r9>, unsigned __int64),
        struct CComposition *a2,
        const struct CVisualTree *a3,
        struct CVisual *a4)
{
  unsigned int v4; // ebx
  struct CVisual *v5; // r11
  unsigned __int64 v8; // rbp
  struct _LIST_ENTRY *v10; // rcx
  __int64 (__usercall *v11)@<rax>(CTransformParentPreComputeHelper *__hidden@<rcx>, struct CComposition *@<rdx>, const struct CVisualTree *@<r8>, struct CVisual *@<r9>, unsigned __int64); // rax
  int v12; // eax
  __int64 (__fastcall *v13)(CTransformParentPreComputeHelper *__hidden, const struct CVisualTree *, unsigned __int64); // rax
  int v14; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v17; // r10

  v4 = 0;
  v5 = a4;
  *((_DWORD *)this + 2) = 0;
  v8 = *((_QWORD *)a2 + 44);
  if ( !*((_BYTE *)a3 + 32) )
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(a4);
    v17 = TreeDataListHead;
    if ( TreeDataListHead )
    {
      while ( 1 )
      {
        TreeDataListHead = TreeDataListHead->Flink;
        if ( TreeDataListHead == v17 )
          break;
        v10 = TreeDataListHead - 14;
        if ( (const struct CVisualTree *)TreeDataListHead[2].Flink == a3 )
          goto LABEL_3;
      }
    }
    goto LABEL_5;
  }
  v10 = (struct _LIST_ENTRY *)((char *)a4 + 320);
LABEL_3:
  if ( !v10 || v10[7].Blink < (struct _LIST_ENTRY *)v8 )
  {
LABEL_5:
    v11 = **this;
    if ( v11 == CTransformParentPreComputeHelper::BuildTransformParentStack )
      v12 = CTransformParentPreComputeHelper::BuildTransformParentStack(
              (CTransformParentPreComputeHelper *)this,
              a2,
              a3,
              v5,
              v8);
    else
      v12 = ((__int64 (__fastcall *)(__int64 (__usercall ***)@<rax>(CTransformParentPreComputeHelper *__hidden@<rcx>, struct CComposition *@<rdx>, const struct CVisualTree *@<r8>, struct CVisual *@<r9>, unsigned __int64), struct CComposition *, const struct CVisualTree *, struct CVisual *))v11)(
              this,
              a2,
              a3,
              v5);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1Fu);
    }
    else
    {
      v13 = (__int64 (__fastcall *)(CTransformParentPreComputeHelper *__hidden, const struct CVisualTree *, unsigned __int64))(*this)[1];
      if ( v13 == CTransformParentPreComputeHelper::ProcessTransformParentStack )
        v14 = CTransformParentPreComputeHelper::ProcessTransformParentStack(
                (CTransformParentPreComputeHelper *)this,
                a3,
                v8);
      else
        v14 = v13((CTransformParentPreComputeHelper *)this, a3, v8);
      v4 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x21u);
    }
  }
  return v4;
}
