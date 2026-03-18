/*
 * XREFs of ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004B800
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004C96C (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessRemoveAllChildren@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x1800F7610 (-ProcessRemoveAllChildren@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVEALLCHILDREN@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180048CFC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180049C60 (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXXZ @ 0x18004BAEC (-NotifyVisualTreeListeners@CVisual@@IEAAXXZ.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004DA50 (-Release@CVisual@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180105CE0 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180116090 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 */

void __fastcall CVisual::RemoveAllChildren(CVisual *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rax
  CVisual *i; // rbx
  __int64 j; // rbx
  char v7; // al
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // r14
  CVisual *v12; // rax
  CVisual *v13; // rbx
  __int64 v14; // rcx
  unsigned int (__fastcall *v15)(CVisual *__hidden); // rbp
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  char v18; // al
  void (*v19)(WPF::ProcessHeapImpl *__hidden, void *); // rbp
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // eax

  v1 = (__int64 *)((char *)this + 56);
  v3 = *((_QWORD *)this + 7);
  if ( (v3 & 2) != 0 )
    v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v3) = v3 & 1;
  if ( (_DWORD)v3 )
  {
    v8 = 0LL;
    v9 = (unsigned int)v3;
    v10 = 0LL;
    v11 = 16LL;
    do
    {
      v12 = (CVisual *)CPtrArrayBase::operator[](v1, v10);
      v13 = v12;
      if ( v12 )
      {
        CVisual::DestroyRenderTargetForRemoteApp(v12);
        CVisual::NotifyMidManipulationUpdate((__int64)this, 3u, (__int64)v13);
        v14 = *(_QWORD *)v13;
        *((_QWORD *)v13 + 8) = 0LL;
        v15 = *(unsigned int (__fastcall **)(CVisual *__hidden))(v14 + 16);
        if ( v15 == CVisual::Release )
          CVisual::Release(v13);
        else
          v15(v13);
        v16 = *v1;
        if ( (*v1 & 2) != 0 )
          v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v17 = *v1 & 1;
        if ( v8 >= v17 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x13Bu);
        }
        else if ( v17 == 1 )
        {
          *v1 = 1LL;
        }
        else
        {
          *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFFCuLL) + v11) = 0LL;
        }
      }
      ++v10;
      ++v8;
      v11 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  if ( (*v1 & 2) != 0 )
  {
    v19 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v19 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, (void *)(*v1 & 0xFFFFFFFFFFFFFFFCuLL));
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, unsigned __int64))v19)(
        WPF::g_pProcessHeap,
        *v1 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  *v1 = 0LL;
  v4 = *((_QWORD *)this + 3);
  if ( (v4 & 2) != 0 )
    v4 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v4) = v4 & 1;
  if ( (_DWORD)v4 )
  {
    v20 = 0LL;
    v21 = (unsigned int)v4;
    do
    {
      v22 = CPtrArrayBase::operator[]((char *)this + 24, v20);
      if ( v22 != *((_QWORD *)this + 8) )
        CResource::NotifyOnChanged(v22, 0LL, 0LL);
      ++v20;
      --v21;
    }
    while ( v21 );
  }
  for ( i = (CVisual *)*((_QWORD *)this + 39); i != (CVisual *)((char *)this + 312); i = *(CVisual **)i )
  {
    v23 = CMoveRenderPassInfo::ResetVisibleRegion((CVisual *)((char *)i - 88));
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xD9Cu);
      break;
    }
    CMoveRenderPassInfo::ClearVisibleRegion((CVisual *)((char *)i - 88));
  }
  for ( j = *((_QWORD *)this + 8); j; j = *(_QWORD *)(j + 64) )
  {
    v18 = *(_BYTE *)(j + 72);
    if ( (v18 & 1) != 0 && (v18 & 2) != 0 )
      break;
    *(_BYTE *)(j + 696) |= 1u;
    *(_BYTE *)(j + 72) = v18 | 3;
    CVisual::NotifyVisualTreeListeners((CVisual *)j);
  }
  *((_BYTE *)this + 72) |= 5u;
  v7 = *((_BYTE *)this + 72);
  *((_BYTE *)this + 696) |= 1u;
  *((_BYTE *)this + 72) ^= (*((_BYTE *)this + 72) ^ (8 * ((v7 & 8) != 0))) & 8;
}
