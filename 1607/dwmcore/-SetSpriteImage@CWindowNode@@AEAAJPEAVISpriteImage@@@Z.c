/*
 * XREFs of ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x1800291D4
 * Callers:
 *     ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x180025D4C (-ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAG.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x180026224 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xxx @ 0x18011BEC0 (Template_xxx.c)
 *     ?RemoveAt@?$DynArray@PEAVISpriteImage@@$0A@@@QEAAJI@Z @ 0x180140670 (-RemoveAt@-$DynArray@PEAVISpriteImage@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CWindowNode::SetSpriteImage(CWindowNode *this, struct ISpriteImage *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rcx
  struct CResource *v5; // rbx
  __int64 i; // r14
  int v7; // eax
  struct ISpriteImage *v8; // rcx
  _QWORD **v9; // rdi
  unsigned int v10; // eax
  struct ISpriteImage **j; // rdx
  unsigned int v12; // edx
  struct CResource *v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v22; // rcx
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  __int64 v24; // rcx
  struct CResource *v25; // rbx
  __int64 v26; // rcx
  struct CResource *v27; // rbx
  unsigned int v28; // [rsp+20h] [rbp-38h]
  struct ISpriteImage *v29; // [rsp+68h] [rbp+10h] BYREF

  v29 = a2;
  v2 = 0;
  if ( !a2 )
  {
LABEL_2:
    v4 = *((_QWORD *)this + 100);
    if ( v4 )
    {
      v5 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 144LL))(v4);
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 100) + 160LL))(*((_QWORD *)this + 100), this);
      CResource::UnRegisterNotifierInternal(this, v5);
      *((_QWORD *)this + 100) = 0LL;
    }
    else if ( !*((_DWORD *)this + 208) )
    {
      return v2;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 208); i = (unsigned int)(i + 1) )
    {
      v24 = *(_QWORD *)(*((_QWORD *)this + 101) + 8 * i);
      v25 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 144LL))(v24);
      v26 = *(_QWORD *)(*((_QWORD *)this + 101) + 8 * i);
      (*(void (__fastcall **)(__int64, CWindowNode *))(*(_QWORD *)v26 + 160LL))(v26, this);
      CResource::UnRegisterNotifierInternal(this, v25);
    }
    *((_DWORD *)this + 208) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 808, 8LL);
    goto LABEL_28;
  }
  v7 = (*(__int64 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)a2 + 256LL))(a2);
  v2 = v7;
  if ( v7 < 0 )
  {
    v28 = 1904;
    goto LABEL_48;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xxx(
      (_DWORD)v29,
      (unsigned int)&EVTDESC_WINDOWNODE_GDISPRITE_ASSOCIATION,
      *((_QWORD *)this + 79),
      *((_QWORD *)this + 80),
      (char)v29);
  v8 = v29;
  if ( !v29 )
    goto LABEL_2;
  if ( v29 != *((struct ISpriteImage **)this + 100) )
  {
    v9 = (_QWORD **)((char *)this + 808);
    v10 = 0;
    for ( j = (struct ISpriteImage **)*((_QWORD *)this + 101); v10 < *((_DWORD *)this + 208); ++j )
    {
      if ( v29 == *j )
        break;
      ++v10;
    }
    v12 = *((_DWORD *)this + 208);
    if ( v10 >= v12 )
    {
      if ( v12 > 0x10 )
      {
        do
        {
          v27 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v9 + 144LL))(**v9);
          (*(void (__fastcall **)(_QWORD, CWindowNode *))(*(_QWORD *)**v9 + 160LL))(**v9, this);
          CResource::UnRegisterNotifierInternal(this, v27);
          DynArray<ISpriteImage *,0>::RemoveAt((char *)this + 808);
        }
        while ( *((_DWORD *)this + 208) > 0x10u );
        v8 = v29;
      }
      v13 = (struct CResource *)(*(__int64 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)v8 + 144LL))(v8);
      v7 = CResource::RegisterNotifier(this, v13);
      v2 = v7;
      if ( v7 < 0 )
      {
        v28 = 1935;
        goto LABEL_48;
      }
      v14 = *((_DWORD *)this + 208);
      v15 = v14 + 1;
      if ( v14 + 1 < v14 )
      {
        v2 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        v2 = 0;
        if ( v15 <= *((_DWORD *)this + 207) )
        {
          (*v9)[*((unsigned int *)this + 208)] = v29;
          *((_DWORD *)this + 208) = v15;
LABEL_22:
          (*(void (__fastcall **)(struct ISpriteImage *, CWindowNode *))(*(_QWORD *)v29 + 152LL))(v29, this);
          LOBYTE(v17) = *((_DWORD *)this + 212) != 0;
          (*(void (__fastcall **)(struct ISpriteImage *, __int64))(*(_QWORD *)v29 + 232LL))(v29, v17);
          (*(void (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)v29 + 264LL))(v29);
          if ( !*((_DWORD *)this + 212)
            || ((v18 = *((_DWORD *)this + 208), v18 > 1) ? (v19 = (*v9)[v18 - 2]) : (v19 = *((_QWORD *)this + 100)),
                !v19
             || (v7 = (*(__int64 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)v29 + 248LL))(v29), v2 = v7, v7 >= 0)) )
          {
            v20 = *((_DWORD *)this + 208);
            if ( v20 > 1 )
            {
              v22 = (*v9)[v20 - 2];
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 184LL))(v22);
            }
LABEL_28:
            if ( *((_BYTE *)this + 1004) )
            {
              PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(*((CComposition **)this
                                                                                                 + 2));
              if ( PrimaryDesktopRenderTargetNoRef )
                (*(void (__fastcall **)(struct IRenderTargetDesktop *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                      + 208LL))(PrimaryDesktopRenderTargetNoRef);
            }
            *((_BYTE *)this + 1032) = 1;
            CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
            return v2;
          }
          v28 = 1960;
LABEL_48:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v28);
          return v2;
        }
        v16 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 808, 8LL, 1LL, &v29);
        v2 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
      }
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x790u);
        return v2;
      }
      goto LABEL_22;
    }
  }
  return v2;
}
