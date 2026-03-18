/*
 * XREFs of ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800345B0
 * Callers:
 *     ?ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x1800359B0 (-ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x180035A10 (-ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x1800F5270 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 * Callees:
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18001AF98 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180034854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x180036258 (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180036324 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x1800371A4 (-CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXXZ @ 0x1800383F8 (-NotifyVisualTreeListeners@CVisual@@IEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800E2968 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1801042EC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18012B2A8 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

__int64 __fastcall CVisual::InsertChildAt(CVisual *this, struct CVisual *a2, unsigned int a3, char a4)
{
  int RenderTargetForRemoteApp; // eax
  unsigned int v8; // edi
  unsigned int (__fastcall *v9)(CBitmapOfDeviceBitmaps *__hidden); // rsi
  CVisual *v10; // rcx
  struct CVisual *i; // rax
  __int64 v12; // rax
  __int64 j; // rsi
  char v14; // cl
  char v15; // cl
  __int64 v16; // rax
  bool v17; // r15
  __int64 k; // rsi
  char v19; // al
  unsigned __int64 v21; // rsi
  __int64 v22; // r14
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // r14
  unsigned __int64 v26; // rax
  unsigned int v27; // [rsp+20h] [rbp-38h]
  struct CManipulationManager *v28; // [rsp+60h] [rbp+8h] BYREF

  if ( *((CVisual **)a2 + 10) == this )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x27Fu);
  }
  else
  {
    RenderTargetForRemoteApp = CPtrArrayBase::InsertAt((CVisual *)((char *)this + 72), (__int64)a2, a3);
    v8 = RenderTargetForRemoteApp;
    if ( RenderTargetForRemoteApp < 0 )
    {
      v27 = 642;
      goto LABEL_49;
    }
    v9 = *(unsigned int (__fastcall **)(CBitmapOfDeviceBitmaps *__hidden))(*(_QWORD *)a2 + 8LL);
    if ( v9 == CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(a2);
    else
      v9(a2);
    if ( !a4 )
    {
      RenderTargetForRemoteApp = CVisual::CreateRenderTargetForRemoteApp(a2);
      v8 = RenderTargetForRemoteApp;
      if ( RenderTargetForRemoteApp < 0 )
      {
        v27 = 650;
        goto LABEL_49;
      }
    }
    v10 = (CVisual *)*((_QWORD *)a2 + 10);
    if ( v10 )
    {
      RenderTargetForRemoteApp = CVisual::RemoveChild(v10, a2, 0);
      v8 = RenderTargetForRemoteApp;
      if ( RenderTargetForRemoteApp < 0 )
      {
        v27 = 658;
LABEL_49:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetForRemoteApp, v27);
        return v8;
      }
    }
    *((_QWORD *)a2 + 10) = this;
    CVisual::OnTransformChanged(a2);
    *((_QWORD *)a2 + 84) = 0LL;
    for ( i = (struct CVisual *)*((_QWORD *)a2 + 54); i != (struct CVisual *)((char *)a2 + 432); i = *(struct CVisual **)i )
      *((_QWORD *)i - 5) = 0LL;
    v12 = *((_QWORD *)this + 3);
    if ( (v12 & 2) != 0 )
      v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v12) = v12 & 1;
    if ( (_DWORD)v12 )
    {
      v21 = 0LL;
      v22 = (unsigned int)v12;
      do
      {
        v23 = CPtrArrayBase::operator[]((__int64 *)this + 3, v21);
        if ( v23 != *((_QWORD *)this + 10) )
          CResource::NotifyOnChanged(v23, 0LL, 0LL);
        ++v21;
        --v22;
      }
      while ( v22 );
    }
    CVisual::ResetVisibleRegionForAll(this);
    for ( j = *((_QWORD *)this + 10); j; j = *(_QWORD *)(j + 80) )
    {
      v14 = *(_BYTE *)(j + 88);
      if ( (v14 & 1) != 0 )
        break;
      *(_BYTE *)(j + 712) |= 1u;
      *(_BYTE *)(j + 88) = (v14 | 1) ^ ((v14 | 1) ^ (2 * ((v14 & 2) != 0))) & 2;
      CVisual::NotifyVisualTreeListeners((CVisual *)j);
    }
    *((_BYTE *)this + 88) |= 1u;
    *((_BYTE *)this + 712) |= 1u;
    v15 = *((_BYTE *)this + 88) ^ (*((_BYTE *)this + 88) ^ (4 * ((*((_BYTE *)this + 88) & 4) != 0))) & 4;
    *((_BYTE *)this + 88) = v15 ^ (v15 ^ (8 * ((v15 & 8) != 0))) & 8;
    v16 = *((_QWORD *)a2 + 3);
    v17 = (*((_BYTE *)a2 + 712) & 2) != 0;
    if ( (v16 & 2) != 0 )
      v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v16) = v16 & 1;
    if ( (_DWORD)v16 )
    {
      v24 = 0LL;
      v25 = (unsigned int)v16;
      do
      {
        v26 = CPtrArrayBase::operator[]((__int64 *)a2 + 3, v24);
        if ( v26 != *((_QWORD *)a2 + 10) )
          CResource::NotifyOnChanged(v26, 0LL, 0LL);
        ++v24;
        --v25;
      }
      while ( v25 );
    }
    CVisual::ResetVisibleRegionForAll(a2);
    for ( k = *((_QWORD *)a2 + 10); k; k = *(_QWORD *)(k + 80) )
    {
      v19 = *(_BYTE *)(k + 88);
      if ( (v19 & 2) != 0 && (!v17 || (*(_BYTE *)(k + 712) & 2) != 0) )
        break;
      if ( v17 )
        *(_BYTE *)(k + 712) |= 2u;
      *(_BYTE *)(k + 88) = v19 | 2;
      CVisual::NotifyVisualTreeListeners((CVisual *)k);
    }
    *((_BYTE *)a2 + 88) |= 4u;
    *((_BYTE *)a2 + 88) ^= (*((_BYTE *)a2 + 88) ^ (8 * ((*((_BYTE *)a2 + 88) & 8) != 0))) & 8;
    if ( !a4 && (*((_BYTE *)a2 + 90) & 8) != 0 )
    {
      v28 = 0LL;
      Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease(&v28);
      if ( (int)CComposition::GetManipulationManager(*((CComposition **)this + 2), &v28) >= 0 )
        CManipulationManager::QueueMidManipulationUpdate(v28, 2LL, a2);
      Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease(&v28);
    }
  }
  return v8;
}
