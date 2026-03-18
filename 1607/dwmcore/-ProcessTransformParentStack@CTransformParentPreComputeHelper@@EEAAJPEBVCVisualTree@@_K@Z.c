/*
 * XREFs of ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z @ 0x18000B8F0
 * Callers:
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000B400 (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000C434 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800312A8 (--0CTreeData@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004ED60 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004F938 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004FA24 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004FA7C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x18004FD38 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@AEAAXXZ @ 0x180050DE0 (-ClearContentTreeDataCaches@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180051090 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXXZ @ 0x180053838 (-NotifyVisualTreeListeners@CVisual@@IEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x18011C1A0 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180130300 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x18018D994 (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 */

__int64 __fastcall CTransformParentPreComputeHelper::ProcessTransformParentStack(
        CTransformParentPreComputeHelper *this,
        const struct CVisualTree *a2,
        __int64 a3)
{
  const struct CVisualTree *v3; // rbp
  __int64 v5; // rdi
  __int64 v6; // r14
  int v7; // eax
  unsigned __int64 v8; // r15
  unsigned int v9; // eax
  bool v10; // r13
  struct CTreeData *UnusedTreeData; // rbx
  int v12; // r12d
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // eax
  float v16; // xmm6_4
  float v17; // xmm4_4
  float v18; // xmm7_4
  float v19; // xmm5_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  __int64 v22; // rcx
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  bool v29; // r14
  char v30; // bp
  int updated; // eax
  __int64 v33; // rcx
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v35; // r14
  __int64 i; // rbp
  char v37; // al
  char v38; // cl
  int v39; // edx
  int *v40; // rcx
  CVisual *v41; // rcx
  __int64 v42; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  CTreeData *v45; // rax
  _QWORD *v46; // rcx
  __int64 v47; // rbp
  __int64 v48; // r15
  __int64 v49; // rax
  int v50; // r8d
  int *v51; // rdx
  struct _LIST_ENTRY *v52; // r15
  int v53; // eax
  struct CTreeData *TreeData; // [rsp+30h] [rbp-A8h]
  __int64 v55; // [rsp+E0h] [rbp+8h]
  __int64 v58; // [rsp+F8h] [rbp+20h]

  v3 = a2;
  v5 = 0LL;
  v6 = a3;
  v7 = *((_DWORD *)this + 2);
  v8 = 1LL;
  TreeData = 0LL;
  if ( v7 )
  {
    v9 = v7 - 1;
    *((_DWORD *)this + 2) = v9;
    v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v9);
  }
  if ( v5 != *((_QWORD *)a2 + 3) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 272) + 4LL) & 0x10000000) != 0 )
      v41 = **(CVisual ***)CVisual::GetTransformParentDataInternal((CVisual *)v5);
    else
      v41 = *(CVisual **)(v5 + 144);
    TreeData = CVisual::FindTreeData(v41, v3);
    v8 = *((_QWORD *)TreeData + 15);
  }
  while ( 1 )
  {
    v10 = 0;
    UnusedTreeData = 0LL;
    if ( *((_BYTE *)v3 + 32) )
    {
      UnusedTreeData = (struct CTreeData *)(v5 + 320);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v5);
      if ( TreeDataListHead )
      {
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink != TreeDataListHead )
        {
          while ( (const struct CVisualTree *)Flink[2].Flink != v3 )
          {
            Flink = Flink->Flink;
            if ( Flink == TreeDataListHead )
              goto LABEL_6;
          }
          UnusedTreeData = (struct CTreeData *)&Flink[-14];
        }
      }
    }
LABEL_6:
    if ( !UnusedTreeData )
    {
      UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)v5);
      if ( UnusedTreeData )
      {
        CVisual::SetUnusedTreeData((CVisual *)v5, 0LL);
      }
      else
      {
        v45 = (CTreeData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             264LL);
        UnusedTreeData = v45;
        if ( !v45 )
        {
          v12 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xFC5u);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x101u);
          goto LABEL_34;
        }
        CTreeData::CTreeData(v45);
        *v46 = &CVisualTreeData::`vftable';
        v46[32] = 0LL;
      }
      (*(void (__fastcall **)(struct CTreeData *, const struct CVisualTree *, __int64))(*(_QWORD *)UnusedTreeData + 8LL))(
        UnusedTreeData,
        v3,
        v5);
    }
    v12 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 272) + 4LL) & 0x10000000) != 0 )
    {
      *((_BYTE *)UnusedTreeData + 16) &= ~8u;
      v10 = (*((_BYTE *)UnusedTreeData + 16) & 4) == 0 || *((_QWORD *)UnusedTreeData + 27) != v6;
    }
    v13 = *(_QWORD *)(v5 + 144);
    if ( !v13 || (*(_BYTE *)(v13 + 152) & 1) != 0 )
    {
      v16 = *(float *)(v5 + 176);
      v17 = 0.0;
      v18 = *(float *)(v5 + 180);
      v19 = 0.0;
      v20 = *(float *)(v5 + 192);
      v21 = *(float *)(v5 + 196);
      if ( v13 )
      {
        v17 = *(float *)(v13 + 192);
        v19 = *(float *)(v13 + 196);
      }
      v22 = *(_QWORD *)(v5 + 272);
      if ( (*(_DWORD *)(v22 + 4) & 0x400000) != 0 )
      {
        v50 = *(_DWORD *)(v22 + 12);
        v51 = (int *)(v22 + 12);
        if ( (v50 & 0x7F000000) != 0xA000000 )
        {
          do
          {
            v51 = (int *)((char *)v51 + (v50 & 0xFFFFFF) + 4);
            v50 = *v51;
          }
          while ( (*v51 & 0x7F000000) != 0xA000000 );
        }
        v55 = *(_QWORD *)(v51 + 1);
        v23 = *(float *)&v55;
      }
      else
      {
        v23 = 0.0;
        HIDWORD(v55) = 0;
      }
      v24 = (float)(*((float *)&v55 + 1) * v19) + *(float *)(v5 + 168);
      v25 = (float)(v23 * v17) + *(float *)(v5 + 164);
      *(float *)(v5 + 180) = v24;
      *(float *)(v5 + 176) = v25;
      if ( (*(_DWORD *)(v22 + 4) & 0x800000) != 0 )
      {
        v39 = *(_DWORD *)(v22 + 12);
        v40 = (int *)(v22 + 12);
        if ( (v39 & 0x7F000000) != 0x9000000 )
        {
          do
          {
            v40 = (int *)((char *)v40 + (v39 & 0xFFFFFF) + 4);
            v39 = *v40;
          }
          while ( (*v40 & 0x7F000000) != 0x9000000 );
        }
        v58 = *(_QWORD *)(v40 + 1);
        v26 = *(float *)&v58;
      }
      else
      {
        v26 = 0.0;
        HIDWORD(v58) = 0;
      }
      v27 = (float)(v26 * v17) + *(float *)(v5 + 184);
      v28 = (float)(*((float *)&v58 + 1) * v19) + *(float *)(v5 + 188);
      *(float *)(v5 + 196) = v28;
      *(float *)(v5 + 192) = v27;
      if ( v27 < 0.0 )
        *(_DWORD *)(v5 + 192) = 0;
      if ( v28 < 0.0 )
        *(_DWORD *)(v5 + 196) = 0;
      v29 = v16 != v25 || v18 != v24;
      if ( v20 == *(float *)(v5 + 192) && v21 == *(float *)(v5 + 196) )
      {
        v30 = 0;
      }
      else
      {
        v42 = *(_QWORD *)(v5 + 296);
        v30 = 1;
        if ( v42 && *(_BYTE *)(v42 + 168) )
          CVisual::OnClipChanged((CVisual *)v5);
        CVisual::ClearContentTreeDataCaches((CVisual *)v5);
      }
      if ( v29 || v30 )
        *(_BYTE *)(v5 + 152) |= 1u;
      v3 = a2;
    }
    if ( *((_QWORD *)UnusedTreeData + 15) < v8 )
      break;
LABEL_11:
    v14 = *((_DWORD *)this + 2);
    v8 = *((_QWORD *)UnusedTreeData + 15);
    v3 = a2;
    TreeData = UnusedTreeData;
    if ( !v14 )
      goto LABEL_34;
    v6 = a3;
    v15 = v14 - 1;
    *((_DWORD *)this + 2) = v15;
    v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v15);
  }
  updated = CVisual::UpdateWorldTransform((CVisual *)v5, v3, UnusedTreeData, v10, TreeData);
  v12 = updated;
  if ( updated >= 0 )
  {
    v33 = *(_QWORD *)(v5 + 24);
    if ( (v33 & 2) != 0 )
      v33 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v33) = v33 & 1;
    if ( (_DWORD)v33 )
    {
      v47 = 0LL;
      v48 = (unsigned int)v33;
      do
      {
        v49 = CPtrArrayBase::operator[](v5 + 24, v47);
        if ( v49 != *(_QWORD *)(v5 + 144) )
          CResource::NotifyOnChanged(v49, 0LL, 0LL);
        ++v47;
        --v48;
      }
      while ( v48 );
    }
    RenderPassInfoList = CVisual::GetRenderPassInfoList((CVisual *)v5);
    v35 = RenderPassInfoList;
    if ( RenderPassInfoList )
    {
      v52 = RenderPassInfoList->Flink;
      if ( RenderPassInfoList->Flink != RenderPassInfoList )
      {
        while ( 1 )
        {
          v53 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)&v52[-6].Blink);
          if ( v53 < 0 )
            break;
          CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&v52[-6].Blink);
          v52 = v52->Flink;
          if ( v52 == v35 )
            goto LABEL_42;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0xEBBu);
      }
    }
LABEL_42:
    for ( i = *(_QWORD *)(v5 + 144); i; i = *(_QWORD *)(i + 144) )
    {
      v37 = *(_BYTE *)(i + 152);
      if ( (v37 & 1) != 0 && (v37 & 2) != 0 )
        break;
      *(_BYTE *)(i + 544) |= 1u;
      *(_BYTE *)(i + 152) = v37 | 3;
      CVisual::NotifyVisualTreeListeners((CVisual *)i);
    }
    *(_BYTE *)(v5 + 152) |= 5u;
    v38 = *(_BYTE *)(v5 + 152);
    *(_BYTE *)(v5 + 544) |= 1u;
    *(_BYTE *)(v5 + 152) = v38 ^ (v38 ^ (8 * ((v38 & 8) != 0))) & 8;
    *((_QWORD *)UnusedTreeData + 22) = 0LL;
    goto LABEL_11;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x115u);
LABEL_34:
  if ( v12 < 0 )
    CPreComputeHelper::ClearResolvingFlagsFromStack(this, v3);
  return (unsigned int)v12;
}
