/*
 * XREFs of ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18007C664
 * Callers:
 *     ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x1800793B4 (-ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAG.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x1800798A4 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180067F00 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVISpriteImage@@$0A@@@QEAAJI@Z @ 0x1801061E0 (-RemoveAt@-$DynArray@PEAVISpriteImage@@$0A@@@QEAAJI@Z.c)
 *     Template_xxx @ 0x180106C0C (Template_xxx.c)
 */

__int64 __fastcall CWindowNode::SetSpriteImage(CWindowNode *this, struct ISpriteImage *a2)
{
  unsigned int v2; // r15d
  int v4; // eax
  int v5; // ecx
  struct ISpriteImage *v6; // rdi
  _QWORD **v7; // rbp
  unsigned int v8; // eax
  struct ISpriteImage **j; // rcx
  unsigned int v10; // ecx
  struct CResource *v11; // rsi
  struct CResource *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // ebx
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rdi
  struct CResource *v22; // rsi
  __int64 i; // r12
  struct CResource *v24; // rsi
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  unsigned int v27; // [rsp+20h] [rbp-48h]
  struct ISpriteImage *v28; // [rsp+78h] [rbp+10h] BYREF

  v28 = a2;
  v2 = 0;
  if ( !a2 )
    goto LABEL_36;
  v4 = (*(__int64 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)a2 + 344LL))(a2);
  v2 = v4;
  if ( v4 < 0 )
  {
    v27 = 1903;
LABEL_32:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v27);
    return v2;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xxx(
      v5,
      (unsigned int)&EVTDESC_WINDOWNODE_GDISPRITE_ASSOCIATION,
      *((_QWORD *)this + 109),
      *((_QWORD *)this + 110),
      (char)v28);
  v6 = v28;
  if ( !v28 )
  {
LABEL_36:
    v21 = *((_QWORD *)this + 130);
    if ( v21 )
    {
      v22 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 232LL))(*((_QWORD *)this + 130));
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 130) + 248LL))(*((_QWORD *)this + 130), this);
      CResource::UnRegisterNotifierInternal(this, v22);
      *((_QWORD *)this + 130) = 0LL;
    }
    else if ( !*((_DWORD *)this + 268) )
    {
      return v2;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 268); i = (unsigned int)(i + 1) )
    {
      v24 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 131) + 8 * i)
                                                                  + 232LL))(*(_QWORD *)(*((_QWORD *)this + 131) + 8 * i));
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**(_QWORD **)(*((_QWORD *)this + 131) + 8 * i) + 248LL))(
        *(_QWORD *)(*((_QWORD *)this + 131) + 8 * i),
        this);
      CResource::UnRegisterNotifierInternal(this, v24);
    }
    *((_DWORD *)this + 268) = 0;
    DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 131, 8u);
LABEL_43:
    if ( *((_BYTE *)this + 1244) )
    {
      PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(*((CComposition **)this + 2));
      if ( PrimaryDesktopRenderTargetNoRef )
        (*(void (__fastcall **)(struct IRenderTargetDesktop *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef + 224LL))(PrimaryDesktopRenderTargetNoRef);
    }
    *((_BYTE *)this + 1272) = 1;
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
    return v2;
  }
  if ( v28 != *((struct ISpriteImage **)this + 130) )
  {
    v7 = (_QWORD **)((char *)this + 1048);
    v8 = 0;
    for ( j = (struct ISpriteImage **)*((_QWORD *)this + 131); v8 < *((_DWORD *)this + 268); ++j )
    {
      if ( v28 == *j )
        break;
      ++v8;
    }
    v10 = *((_DWORD *)this + 268);
    if ( v8 >= v10 )
    {
      if ( v10 > 0x10 )
      {
        do
        {
          v11 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v7 + 232LL))(**v7);
          (*(void (__fastcall **)(_QWORD, CWindowNode *))(*(_QWORD *)**v7 + 248LL))(**v7, this);
          CResource::UnRegisterNotifierInternal(this, v11);
          DynArray<ISpriteImage *,0>::RemoveAt((char *)this + 1048);
        }
        while ( *((_DWORD *)this + 268) > 0x10u );
        v6 = v28;
      }
      v12 = (struct CResource *)(*(__int64 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)v6 + 232LL))(v6);
      v4 = CResource::RegisterNotifier(this, v12);
      v2 = v4;
      if ( v4 < 0 )
      {
        v27 = 1934;
        goto LABEL_32;
      }
      v13 = *((_DWORD *)this + 268);
      v14 = v13 + 1;
      if ( v13 + 1 < v13 )
      {
        v15 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v2 = -2147024362;
LABEL_27:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x78Fu);
        return v2;
      }
      v2 = 0;
      if ( v14 > *((_DWORD *)this + 267) )
      {
        v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1048, 8u, 1, &v28);
        v15 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
        v2 = v15;
        if ( v15 < 0 )
          goto LABEL_27;
      }
      else
      {
        (*v7)[*((unsigned int *)this + 268)] = v28;
        *((_DWORD *)this + 268) = v14;
      }
      (*(void (__fastcall **)(struct ISpriteImage *, CWindowNode *))(*(_QWORD *)v28 + 240LL))(v28, this);
      LOBYTE(v16) = *((_DWORD *)this + 272) != 0;
      (*(void (__fastcall **)(struct ISpriteImage *, __int64))(*(_QWORD *)v28 + 320LL))(v28, v16);
      (*(void (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)v28 + 352LL))(v28);
      if ( *((_DWORD *)this + 272) )
      {
        v17 = *((_DWORD *)this + 268);
        v18 = v17 <= 1 ? *((_QWORD *)this + 130) : (*v7)[v17 - 2];
        if ( v18 )
        {
          v4 = (*(__int64 (__fastcall **)(struct ISpriteImage *, __int64))(*(_QWORD *)v28 + 336LL))(v28, v18);
          v2 = v4;
          if ( v4 < 0 )
          {
            v27 = 1959;
            goto LABEL_32;
          }
        }
      }
      v20 = *((_DWORD *)this + 268);
      if ( v20 > 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*v7)[v20 - 2] + 272LL))((*v7)[v20 - 2]);
      goto LABEL_43;
    }
  }
  return v2;
}
