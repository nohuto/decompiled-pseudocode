/*
 * XREFs of ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180038274
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180039240 (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessRemoveAllChildren@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x1800DCE70 (-ProcessRemoveAllChildren@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVEALLCHILDREN@.c)
 * Callees:
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x18001AF30 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180035490 (-Release@CVisual@@UEAAKXZ.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x180036258 (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800362EC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180037148 (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXXZ @ 0x1800383F8 (-NotifyVisualTreeListeners@CVisual@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CVisual::RemoveAllChildren(CVisual *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rax
  unsigned __int64 v4; // r15
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // rbp
  CVisual *v8; // rax
  CVisual *v9; // rbx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(CVisual *); // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 i; // rbx
  char v15; // al
  char v16; // al

  v1 = (__int64 *)((char *)this + 72);
  v3 = *((_QWORD *)this + 9);
  if ( (v3 & 2) != 0 )
    v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v3) = v3 & 1;
  if ( (_DWORD)v3 )
  {
    v4 = 0LL;
    v5 = (unsigned int)v3;
    v6 = 0LL;
    v7 = 16LL;
    do
    {
      v8 = (CVisual *)CPtrArrayBase::operator[](v1, v6);
      v9 = v8;
      if ( v8 )
      {
        CVisual::DestroyRenderTargetForRemoteApp(v8);
        CVisual::NotifyMidManipulationUpdate((__int64)this, 3u, (__int64)v9);
        v10 = *(_QWORD *)v9;
        *((_QWORD *)v9 + 10) = 0LL;
        v11 = *(__int64 (__fastcall **)(CVisual *))(v10 + 16);
        if ( v11 == CVisual::Release )
          CVisual::Release(v9);
        else
          v11(v9);
        v12 = *v1;
        if ( (*v1 & 2) != 0 )
          v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v13 = *v1 & 1;
        if ( v4 >= v13 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x13Bu);
        }
        else if ( v13 == 1 )
        {
          *v1 = 1LL;
        }
        else
        {
          *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFFCuLL) + v7) = 0LL;
        }
      }
      ++v6;
      ++v4;
      v7 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  CPtrArrayBase::Clear((CPtrArrayBase *)v1);
  CVisual::NotifyVisualTreeListeners(this);
  CVisual::ResetVisibleRegionForAll(this);
  for ( i = *((_QWORD *)this + 10); i; i = *(_QWORD *)(i + 80) )
  {
    v16 = *(_BYTE *)(i + 88);
    if ( (v16 & 1) != 0 && (v16 & 2) != 0 )
      break;
    *(_BYTE *)(i + 712) |= 1u;
    *(_BYTE *)(i + 88) = v16 | 3;
    CVisual::NotifyVisualTreeListeners((CVisual *)i);
  }
  *((_BYTE *)this + 88) |= 5u;
  v15 = *((_BYTE *)this + 88);
  *((_BYTE *)this + 712) |= 1u;
  *((_BYTE *)this + 88) ^= (*((_BYTE *)this + 88) ^ (8 * ((v15 & 8) != 0))) & 8;
}
