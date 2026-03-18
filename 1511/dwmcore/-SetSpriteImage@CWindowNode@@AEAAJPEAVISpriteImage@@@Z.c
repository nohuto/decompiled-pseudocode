/*
 * XREFs of ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180062EA0
 * Callers:
 *     ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x18005E1CC (-ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAG.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18005E6D0 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180094744 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVISpriteImage@@$0A@@@QEAAJI@Z @ 0x180123D78 (-RemoveAt@-$DynArray@PEAVISpriteImage@@$0A@@@QEAAJI@Z.c)
 *     Template_xxx @ 0x180124710 (Template_xxx.c)
 */

__int64 __fastcall CWindowNode::SetSpriteImage(CWindowNode *this, struct ISpriteImage *a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rdi
  struct CResource *v5; // rsi
  __int64 i; // r12
  int v7; // eax
  int v8; // ecx
  struct ISpriteImage *v9; // rdi
  _QWORD **v10; // rbp
  unsigned int v11; // eax
  struct ISpriteImage **j; // rcx
  unsigned int v13; // ecx
  struct CResource *v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v22; // eax
  __int64 v23; // rsi
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  struct CResource *v25; // rsi
  struct CResource *v26; // rsi
  unsigned int v27; // [rsp+20h] [rbp-48h]
  struct ISpriteImage *v28; // [rsp+78h] [rbp+10h] BYREF

  v28 = a2;
  v2 = 0;
  if ( !a2 )
  {
LABEL_2:
    v4 = *((_QWORD *)this + 124);
    if ( v4 )
    {
      v5 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 136LL))(*((_QWORD *)this + 124));
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 124) + 152LL))(*((_QWORD *)this + 124), this);
      CResource::UnRegisterNotifierInternal(this, v5);
      *((_QWORD *)this + 124) = 0LL;
    }
    else if ( !*((_DWORD *)this + 256) )
    {
      return v2;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 256); i = (unsigned int)(i + 1) )
    {
      v25 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 125) + 8 * i)
                                                                  + 136LL))(*(_QWORD *)(*((_QWORD *)this + 125) + 8 * i));
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**(_QWORD **)(*((_QWORD *)this + 125) + 8 * i) + 152LL))(
        *(_QWORD *)(*((_QWORD *)this + 125) + 8 * i),
        this);
      CResource::UnRegisterNotifierInternal(this, v25);
    }
    *((_DWORD *)this + 256) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 1000, 8LL);
    goto LABEL_25;
  }
  v7 = (*(__int64 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)a2 + 248LL))(a2);
  v2 = v7;
  if ( v7 < 0 )
  {
    v27 = 1904;
    goto LABEL_48;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xxx(
      v8,
      (unsigned int)&EVTDESC_WINDOWNODE_GDISPRITE_ASSOCIATION,
      *((_QWORD *)this + 103),
      *((_QWORD *)this + 104),
      (char)v28);
  v9 = v28;
  if ( !v28 )
    goto LABEL_2;
  if ( v28 != *((struct ISpriteImage **)this + 124) )
  {
    v10 = (_QWORD **)((char *)this + 1000);
    v11 = 0;
    for ( j = (struct ISpriteImage **)*((_QWORD *)this + 125); v11 < *((_DWORD *)this + 256); ++j )
    {
      if ( v28 == *j )
        break;
      ++v11;
    }
    v13 = *((_DWORD *)this + 256);
    if ( v11 >= v13 )
    {
      if ( v13 > 0x10 )
      {
        do
        {
          v26 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v10 + 136LL))(**v10);
          (*(void (__fastcall **)(_QWORD, CWindowNode *))(*(_QWORD *)**v10 + 152LL))(**v10, this);
          CResource::UnRegisterNotifierInternal(this, v26);
          DynArray<ISpriteImage *,0>::RemoveAt((char *)this + 1000);
        }
        while ( *((_DWORD *)this + 256) > 0x10u );
        v9 = v28;
      }
      v14 = (struct CResource *)(*(__int64 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)v9 + 136LL))(v9);
      v7 = CResource::RegisterNotifier(this, v14);
      v2 = v7;
      if ( v7 < 0 )
      {
        v27 = 1935;
        goto LABEL_48;
      }
      v15 = *((_DWORD *)this + 256);
      v16 = v15 + 1;
      if ( v15 + 1 < v15 )
      {
        v18 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v2 = -2147024362;
      }
      else
      {
        v2 = 0;
        if ( v16 <= *((_DWORD *)this + 255) )
        {
          (*v10)[*((unsigned int *)this + 256)] = v28;
          *((_DWORD *)this + 256) = v16;
LABEL_22:
          (*(void (__fastcall **)(struct ISpriteImage *, CWindowNode *))(*(_QWORD *)v28 + 144LL))(v28, this);
          LOBYTE(v19) = *((_DWORD *)this + 260) != 0;
          (*(void (__fastcall **)(struct ISpriteImage *, __int64))(*(_QWORD *)v28 + 224LL))(v28, v19);
          (*(void (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)v28 + 256LL))(v28);
          if ( !*((_DWORD *)this + 260)
            || ((v22 = *((_DWORD *)this + 256), v22 > 1) ? (v23 = (*v10)[v22 - 2]) : (v23 = *((_QWORD *)this + 124)),
                !v23
             || (v7 = (*(__int64 (__fastcall **)(struct ISpriteImage *, __int64))(*(_QWORD *)v28 + 240LL))(v28, v23),
                 v2 = v7,
                 v7 >= 0)) )
          {
            v20 = *((_DWORD *)this + 256);
            if ( v20 > 1 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*v10)[v20 - 2] + 176LL))((*v10)[v20 - 2]);
LABEL_25:
            if ( *((_BYTE *)this + 1196) )
            {
              PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(*((CComposition **)this
                                                                                                 + 2));
              if ( PrimaryDesktopRenderTargetNoRef )
                (*(void (__fastcall **)(struct IRenderTargetDesktop *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                      + 216LL))(PrimaryDesktopRenderTargetNoRef);
            }
            *((_BYTE *)this + 1224) = 1;
            CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
            return v2;
          }
          v27 = 1960;
LABEL_48:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v27);
          return v2;
        }
        v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 1000, 8LL, 1LL, &v28);
        v18 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
        v2 = v18;
        if ( v18 >= 0 )
          goto LABEL_22;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x790u);
    }
  }
  return v2;
}
