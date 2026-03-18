/*
 * XREFs of ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FEF0
 * Callers:
 *     ?ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x18004F610 (-ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x18004F6E0 (-ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x1801254C0 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180007588 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18000CD48 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004ED60 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x1800502CC (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180050F44 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180051F00 (-CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXXZ @ 0x180053838 (-NotifyVisualTreeListeners@CVisual@@IEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A2644 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x18011C1A0 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180130300 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 */

__int64 __fastcall CVisual::InsertChildAt(CComposition **this, CVisual **a2, unsigned int a3, char a4)
{
  int RenderTargetForRemoteApp; // eax
  unsigned int v8; // esi
  __int64 (__fastcall *v9)(CBitmapOfDeviceBitmaps *); // rax
  CVisual *v10; // rcx
  CVisual *v11; // rcx
  CVisual *v12; // rcx
  CComposition *v13; // rax
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v15; // r14
  CComposition *n; // rdi
  char v17; // cl
  char v18; // al
  char v19; // cl
  CVisual *v20; // rax
  bool v21; // r12
  struct _LIST_ENTRY *v22; // rax
  struct _LIST_ENTRY *v23; // r14
  CVisual *ii; // rdi
  char v25; // al
  __int64 v27; // rdi
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 i; // rcx
  struct CManipulationManager *v31; // rcx
  struct CManipulationManager *j; // rax
  __int64 k; // rcx
  struct CManipulationManager *v34; // rcx
  struct CManipulationManager *m; // rax
  __int64 v36; // rdi
  __int64 v37; // r14
  __int64 v38; // rax
  struct _LIST_ENTRY *Flink; // rdi
  int v40; // eax
  struct _LIST_ENTRY *v41; // rdi
  int v42; // eax
  unsigned int v43; // [rsp+20h] [rbp-38h]
  struct CManipulationManager *v44; // [rsp+60h] [rbp+8h] BYREF

  if ( a2[18] == (CVisual *)this )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x25Du);
  }
  else
  {
    RenderTargetForRemoteApp = CPtrArrayBase::InsertAt((CPtrArrayBase *)(this + 17), (unsigned __int64)a2, a3);
    v8 = RenderTargetForRemoteApp;
    if ( RenderTargetForRemoteApp < 0 )
    {
      v43 = 608;
      goto LABEL_79;
    }
    v9 = (__int64 (__fastcall *)(CBitmapOfDeviceBitmaps *))*((_QWORD *)*a2 + 1);
    if ( v9 == CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)a2);
    else
      v9((CBitmapOfDeviceBitmaps *)a2);
    if ( !a4 )
    {
      RenderTargetForRemoteApp = CVisual::CreateRenderTargetForRemoteApp((CVisual *)a2);
      v8 = RenderTargetForRemoteApp;
      if ( RenderTargetForRemoteApp < 0 )
      {
        v43 = 616;
        goto LABEL_79;
      }
    }
    v10 = a2[18];
    if ( v10 )
    {
      RenderTargetForRemoteApp = CVisual::RemoveChild(v10, (struct CVisual *)a2, 0);
      v8 = RenderTargetForRemoteApp;
      if ( RenderTargetForRemoteApp < 0 )
      {
        v43 = 624;
LABEL_79:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetForRemoteApp, v43);
        return v8;
      }
    }
    a2[18] = (CVisual *)this;
    CVisual::OnTransformChanged((CVisual *)a2);
    v11 = a2[34];
    a2[62] = 0LL;
    if ( (*((_DWORD *)v11 + 1) & 0x80000) != 0 )
    {
      for ( i = (__int64)v11 + 12; (*(_DWORD *)i & 0x7F000000) != 0xD000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
        ;
      v44 = *(struct CManipulationManager **)(i + 4);
      v31 = v44;
      if ( v44 )
      {
        for ( j = *(struct CManipulationManager **)v44; j != v31; j = *(struct CManipulationManager **)j )
          *((_QWORD *)j - 6) = 0LL;
      }
    }
    v12 = a2[34];
    a2[63] = 0LL;
    if ( (*((_DWORD *)v12 + 1) & 0x80000) != 0 )
    {
      for ( k = (__int64)v12 + 12; (*(_DWORD *)k & 0x7F000000) != 0xD000000; k += (*(_DWORD *)k & 0xFFFFFF) + 4LL )
        ;
      v44 = *(struct CManipulationManager **)(k + 4);
      v34 = v44;
      if ( v44 )
      {
        for ( m = *(struct CManipulationManager **)v44; m != v34; m = *(struct CManipulationManager **)m )
          *((_QWORD *)m - 5) = 0LL;
      }
    }
    v13 = this[3];
    if ( ((unsigned __int8)v13 & 2) != 0 )
      v13 = *(CComposition **)((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v13) = (unsigned __int8)v13 & 1;
    if ( (_DWORD)v13 )
    {
      v27 = 0LL;
      v28 = (unsigned int)v13;
      do
      {
        v29 = CPtrArrayBase::operator[](this + 3, v27);
        if ( (CComposition *)v29 != this[18] )
          CResource::NotifyOnChanged(v29, 0LL, 0LL);
        ++v27;
        --v28;
      }
      while ( v28 );
    }
    RenderPassInfoList = CVisual::GetRenderPassInfoList((CVisual *)this);
    v15 = RenderPassInfoList;
    if ( RenderPassInfoList )
    {
      Flink = RenderPassInfoList->Flink;
      if ( RenderPassInfoList->Flink != RenderPassInfoList )
      {
        while ( 1 )
        {
          v40 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)&Flink[-6].Blink);
          if ( v40 < 0 )
            break;
          CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&Flink[-6].Blink);
          Flink = Flink->Flink;
          if ( Flink == v15 )
            goto LABEL_14;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0xEBBu);
      }
    }
LABEL_14:
    for ( n = this[18]; n; n = (CComposition *)*((_QWORD *)n + 18) )
    {
      v17 = *((_BYTE *)n + 152);
      if ( (v17 & 1) != 0 )
        break;
      *((_BYTE *)n + 544) |= 1u;
      *((_BYTE *)n + 152) = (v17 | 1) ^ ((v17 | 1) ^ (2 * ((v17 & 2) != 0))) & 2;
      CVisual::NotifyVisualTreeListeners(n);
    }
    *((_BYTE *)this + 152) |= 1u;
    v18 = *((_BYTE *)this + 152);
    *((_BYTE *)this + 544) |= 1u;
    v19 = v18 ^ (v18 ^ (4 * ((v18 & 4) != 0))) & 4;
    *((_BYTE *)this + 152) = v19 ^ (v19 ^ (8 * ((v19 & 8) != 0))) & 8;
    v20 = a2[3];
    v21 = ((_BYTE)a2[68] & 2) != 0;
    if ( ((unsigned __int8)v20 & 2) != 0 )
      v20 = *(CVisual **)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v20) = (unsigned __int8)v20 & 1;
    if ( (_DWORD)v20 )
    {
      v36 = 0LL;
      v37 = (unsigned int)v20;
      do
      {
        v38 = CPtrArrayBase::operator[](a2 + 3, v36);
        if ( (CVisual *)v38 != a2[18] )
          CResource::NotifyOnChanged(v38, 0LL, 0LL);
        ++v36;
        --v37;
      }
      while ( v37 );
    }
    v22 = CVisual::GetRenderPassInfoList((CVisual *)a2);
    v23 = v22;
    if ( v22 )
    {
      v41 = v22->Flink;
      if ( v22->Flink != v22 )
      {
        while ( 1 )
        {
          v42 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)&v41[-6].Blink);
          if ( v42 < 0 )
            break;
          CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&v41[-6].Blink);
          v41 = v41->Flink;
          if ( v41 == v23 )
            goto LABEL_21;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0xEBBu);
      }
    }
LABEL_21:
    for ( ii = a2[18]; ii; ii = (CVisual *)*((_QWORD *)ii + 18) )
    {
      v25 = *((_BYTE *)ii + 152);
      if ( (v25 & 2) != 0 && (!v21 || (*((_BYTE *)ii + 544) & 2) != 0) )
        break;
      if ( v21 )
        *((_BYTE *)ii + 544) |= 2u;
      *((_BYTE *)ii + 152) = v25 | 2;
      CVisual::NotifyVisualTreeListeners(ii);
    }
    *((_BYTE *)a2 + 152) |= 4u;
    *((_BYTE *)a2 + 152) ^= (*((_BYTE *)a2 + 152) ^ (8 * (((_BYTE)a2[19] & 8) != 0))) & 8;
    if ( !a4 && (*((_BYTE *)a2 + 154) & 2) != 0 )
    {
      v44 = 0LL;
      Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v44);
      if ( (int)CComposition::GetManipulationManager(this[2], &v44) >= 0 )
        CManipulationManager::QueueMidManipulationUpdate((__int64)v44, 2u, (__int64)a2);
      Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v44);
    }
  }
  return v8;
}
