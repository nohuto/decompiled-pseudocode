/*
 * XREFs of ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800534B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180054360 (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessRemoveAllChildren@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x1801099E0 (-ProcessRemoveAllChildren@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVEALLCHILDREN@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004ED60 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004ED80 (-Release@CVisual@@UEAAKXZ.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180050ED0 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180051E9C (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXXZ @ 0x180053838 (-NotifyVisualTreeListeners@CVisual@@IEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x18011C1A0 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180130300 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 */

void __fastcall CVisual::RemoveAllChildren(CVisual *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v6; // rsi
  __int64 i; // rbx
  char v8; // al
  unsigned __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // rbp
  CVisual *v13; // rax
  CVisual *v14; // rsi
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(CVisual *); // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  char v19; // al
  void *v20; // rdx
  void (*v21)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rax
  struct _LIST_ENTRY *Flink; // rbx
  int v26; // eax

  v1 = (__int64 *)((char *)this + 136);
  v3 = *((_QWORD *)this + 17);
  if ( (v3 & 2) != 0 )
    v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v3) = v3 & 1;
  if ( (_DWORD)v3 )
  {
    v9 = 0LL;
    v10 = (unsigned int)v3;
    v11 = 0LL;
    v12 = 16LL;
    do
    {
      v13 = (CVisual *)CPtrArrayBase::operator[](v1, v11);
      v14 = v13;
      if ( v13 )
      {
        CVisual::DestroyRenderTargetForRemoteApp(v13);
        CVisual::NotifyMidManipulationUpdate((__int64)this, 3u, (__int64)v14);
        v15 = *(_QWORD *)v14;
        *((_QWORD *)v14 + 18) = 0LL;
        v16 = *(__int64 (__fastcall **)(CVisual *))(v15 + 16);
        if ( v16 == CVisual::Release )
          CVisual::Release(v14);
        else
          v16(v14);
        v17 = *v1;
        if ( (*v1 & 2) != 0 )
          v18 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v18 = *v1 & 1;
        if ( v9 >= v18 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x13Bu);
        }
        else if ( v18 == 1 )
        {
          *v1 = 1LL;
        }
        else
        {
          *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFFCuLL) + v12) = 0LL;
        }
      }
      ++v11;
      ++v9;
      v12 += 8LL;
      --v10;
    }
    while ( v10 );
  }
  if ( (*v1 & 2) != 0 )
  {
    v20 = (void *)(*v1 & 0xFFFFFFFFFFFFFFFCuLL);
    v21 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v21 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v20);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v21)(WPF::g_pProcessHeap, v20);
  }
  *v1 = 0LL;
  v4 = *((_QWORD *)this + 3);
  if ( (v4 & 2) != 0 )
    v4 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v4) = v4 & 1;
  if ( (_DWORD)v4 )
  {
    v22 = 0LL;
    v23 = (unsigned int)v4;
    do
    {
      v24 = CPtrArrayBase::operator[]((char *)this + 24, v22);
      if ( v24 != *((_QWORD *)this + 18) )
        CResource::NotifyOnChanged(v24, 0LL, 0LL);
      ++v22;
      --v23;
    }
    while ( v23 );
  }
  RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
  v6 = RenderPassInfoList;
  if ( RenderPassInfoList )
  {
    Flink = RenderPassInfoList->Flink;
    if ( RenderPassInfoList->Flink != RenderPassInfoList )
    {
      while ( 1 )
      {
        v26 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)&Flink[-6].Blink);
        if ( v26 < 0 )
          break;
        CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&Flink[-6].Blink);
        Flink = Flink->Flink;
        if ( Flink == v6 )
          goto LABEL_9;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xEBBu);
    }
  }
LABEL_9:
  for ( i = *((_QWORD *)this + 18); i; i = *(_QWORD *)(i + 144) )
  {
    v19 = *(_BYTE *)(i + 152);
    if ( (v19 & 1) != 0 && (v19 & 2) != 0 )
      break;
    *(_BYTE *)(i + 544) |= 1u;
    *(_BYTE *)(i + 152) = v19 | 3;
    CVisual::NotifyVisualTreeListeners((CVisual *)i);
  }
  *((_BYTE *)this + 152) |= 5u;
  v8 = *((_BYTE *)this + 152);
  *((_BYTE *)this + 544) |= 1u;
  *((_BYTE *)this + 152) = v8 ^ (v8 ^ (8 * ((v8 & 8) != 0))) & 8;
}
