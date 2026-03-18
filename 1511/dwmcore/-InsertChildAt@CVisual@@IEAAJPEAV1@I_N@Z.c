/*
 * XREFs of ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004CDF0
 * Callers:
 *     ?ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x180048380 (-ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x180048480 (-ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x18010EEF0 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1800014DC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18000414C (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800064E8 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180048D70 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180049CBC (-CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXXZ @ 0x18004BAEC (-NotifyVisualTreeListeners@CVisual@@IEAAXXZ.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004D180 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?AddRef@CVisual@@UEAAKXZ @ 0x18004DA20 (-AddRef@CVisual@@UEAAKXZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x180067BB8 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180105CE0 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180116090 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 */

__int64 __fastcall CVisual::InsertChildAt(CComposition **this, CVisual **a2, unsigned int a3, char a4)
{
  char v4; // r12
  int RenderTargetForRemoteApp; // eax
  unsigned int v8; // esi
  unsigned int (__fastcall *v9)(CVisual *__hidden); // rdi
  CVisual *v10; // rcx
  char v11; // al
  CVisual *v12; // rax
  CVisual *i; // rcx
  CVisual *v14; // rcx
  CComposition *v15; // rax
  CVisual *j; // rdi
  CComposition *k; // rdi
  char v18; // cl
  char v19; // cl
  CVisual *v20; // rax
  bool v21; // r13
  struct CVisual *m; // rdi
  CVisual *v23; // rdi
  char v24; // al
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // r14
  __int64 v29; // rax
  unsigned int v30; // r9d
  CVisual *v31; // rax
  unsigned __int64 v32; // rax
  CVisual *v33; // rax
  int v34; // r9d
  __int64 v35; // rdi
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r15
  __int64 v40; // rax
  int v41; // eax
  int v42; // eax
  unsigned int v43; // [rsp+20h] [rbp-48h]
  struct CManipulationManager *v44; // [rsp+70h] [rbp+8h] BYREF
  char v45; // [rsp+88h] [rbp+20h]

  v45 = a4;
  v4 = a4;
  if ( a2[8] == (CVisual *)this )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x235u);
  }
  else
  {
    RenderTargetForRemoteApp = CPtrArrayBase::InsertAt((CPtrArrayBase *)(this + 7), (unsigned __int64)a2, a3);
    v8 = RenderTargetForRemoteApp;
    if ( RenderTargetForRemoteApp < 0 )
    {
      v43 = 568;
      goto LABEL_76;
    }
    v9 = (unsigned int (__fastcall *)(CVisual *__hidden))*((_QWORD *)*a2 + 1);
    if ( v9 == CVisual::AddRef )
      CVisual::AddRef((CVisual *)a2);
    else
      v9((CVisual *)a2);
    if ( !v4 )
    {
      RenderTargetForRemoteApp = CVisual::CreateRenderTargetForRemoteApp((CVisual *)a2);
      v8 = RenderTargetForRemoteApp;
      if ( RenderTargetForRemoteApp < 0 )
      {
        v43 = 576;
        goto LABEL_76;
      }
    }
    v10 = a2[8];
    if ( v10 )
    {
      RenderTargetForRemoteApp = CVisual::RemoveChild(v10, (struct CVisual *)a2, 0);
      v8 = RenderTargetForRemoteApp;
      if ( RenderTargetForRemoteApp < 0 )
      {
        v43 = 584;
LABEL_76:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetForRemoteApp, v43);
        return v8;
      }
    }
    v11 = *((_BYTE *)a2 + 696);
    a2[8] = (CVisual *)this;
    if ( (v11 & 2) != 0 )
    {
      v30 = 0;
      *((_BYTE *)a2 + 696) = v11 | 1;
      while ( 1 )
      {
        v31 = a2[7];
        v32 = ((unsigned __int8)v31 & 2) != 0
            ? *(_QWORD *)((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFFCuLL)
            : (unsigned __int64)a2[7] & 1;
        if ( v30 >= v32 )
          break;
        v33 = (CVisual *)CPtrArrayBase::operator[](a2 + 7, v30);
        if ( v33 )
          CVisual::OnTransformChanged(v33);
        v30 = v34 + 1;
      }
    }
    v12 = (CVisual *)(a2 + 52);
    a2[68] = 0LL;
    for ( i = a2[52]; i != v12; i = *(CVisual **)i )
      *((_QWORD *)i - 19) = 0LL;
    v14 = *(CVisual **)v12;
    a2[82] = 0LL;
    while ( v14 != v12 )
    {
      *((_QWORD *)v14 - 5) = 0LL;
      v14 = *(CVisual **)v14;
    }
    v15 = this[3];
    if ( ((unsigned __int8)v15 & 2) != 0 )
      v15 = *(CComposition **)((unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v15) = (unsigned __int8)v15 & 1;
    if ( (_DWORD)v15 )
    {
      v27 = 0LL;
      v28 = (unsigned int)v15;
      do
      {
        v29 = CPtrArrayBase::operator[](this + 3, v27);
        if ( (CComposition *)v29 != this[8] )
          CResource::NotifyOnChanged(v29, 0LL, 0LL);
        ++v27;
        --v28;
      }
      while ( v28 );
    }
    for ( j = this[39]; j != (CVisual *)(this + 39); j = *(CVisual **)j )
    {
      v41 = CMoveRenderPassInfo::ResetVisibleRegion((CVisual *)((char *)j - 88));
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0xD9Cu);
        break;
      }
      CMoveRenderPassInfo::ClearVisibleRegion((CVisual *)((char *)j - 88));
    }
    for ( k = this[8]; k; k = (CComposition *)*((_QWORD *)k + 8) )
    {
      v18 = *((_BYTE *)k + 72);
      if ( (v18 & 1) != 0 )
        break;
      *((_BYTE *)k + 696) |= 1u;
      *((_BYTE *)k + 72) = (v18 | 1) ^ ((v18 | 1) ^ (2 * ((v18 & 2) != 0))) & 2;
      CVisual::NotifyVisualTreeListeners(k);
    }
    *((_BYTE *)this + 72) |= 1u;
    *((_BYTE *)this + 696) |= 1u;
    v19 = *((_BYTE *)this + 72) ^ (*((_BYTE *)this + 72) ^ (4 * (((_BYTE)this[9] & 4) != 0))) & 4;
    *((_BYTE *)this + 72) = v19 ^ (v19 ^ (8 * ((v19 & 8) != 0))) & 8;
    v20 = a2[3];
    v21 = ((_BYTE)a2[87] & 2) != 0;
    if ( ((unsigned __int8)v20 & 2) != 0 )
      v20 = *(CVisual **)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v20) = (unsigned __int8)v20 & 1;
    if ( (_DWORD)v20 )
    {
      v35 = 0LL;
      v36 = (unsigned int)v20;
      do
      {
        v37 = CPtrArrayBase::operator[](a2 + 3, v35);
        if ( (CVisual *)v37 != a2[8] )
          CResource::NotifyOnChanged(v37, 0LL, 0LL);
        ++v35;
        --v36;
      }
      while ( v36 );
    }
    for ( m = a2[39]; m != (struct CVisual *)(a2 + 39); m = *(struct CVisual **)m )
    {
      v42 = CMoveRenderPassInfo::ResetVisibleRegion((struct CVisual *)((char *)m - 88));
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0xD9Cu);
        break;
      }
      CMoveRenderPassInfo::ClearVisibleRegion((struct CVisual *)((char *)m - 88));
    }
    v23 = a2[8];
    if ( v23 )
    {
      do
      {
        v24 = *((_BYTE *)v23 + 72);
        if ( (v24 & 2) != 0 && (!v21 || (*((_BYTE *)v23 + 696) & 2) != 0) )
          break;
        if ( v21 )
          *((_BYTE *)v23 + 696) |= 2u;
        *((_BYTE *)v23 + 72) = v24 | 2;
        v26 = *((_QWORD *)v23 + 3);
        if ( (v26 & 2) != 0 )
          v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v26) = v26 & 1;
        if ( (_DWORD)v26 )
        {
          v38 = 0LL;
          v39 = (unsigned int)v26;
          do
          {
            v40 = CPtrArrayBase::operator[]((char *)v23 + 24, v38);
            if ( v40 != *((_QWORD *)v23 + 8) )
              CResource::NotifyOnChanged(v40, 0LL, 0LL);
            ++v38;
            --v39;
          }
          while ( v39 );
        }
        v23 = (CVisual *)*((_QWORD *)v23 + 8);
      }
      while ( v23 );
      v4 = v45;
    }
    *((_BYTE *)a2 + 72) |= 4u;
    *((_BYTE *)a2 + 72) ^= (*((_BYTE *)a2 + 72) ^ (8 * (((_BYTE)a2[9] & 8) != 0))) & 8;
    if ( !v4 && (*((_BYTE *)a2 + 74) & 2) != 0 )
    {
      v44 = 0LL;
      Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&v44);
      if ( (int)CComposition::GetManipulationManager(this[2], &v44) >= 0 )
        CManipulationManager::QueueMidManipulationUpdate((__int64)v44, 2u, (__int64)a2);
      Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&v44);
    }
  }
  return v8;
}
