/*
 * XREFs of ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x18005E290
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180064D50 (-IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETSPRITECLIP *a3)
{
  unsigned int v4; // r14d
  __int64 v5; // rdx
  unsigned int v6; // r15d
  struct CResource *v7; // rbx
  __int64 Resource; // rax
  __int64 (__fastcall *v11)(__int64, __int64); // rdi
  char v12; // al
  struct CResource *v13; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  int v18; // eax
  __int64 i; // r15
  int v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-38h]

  v4 = 0;
  v5 = *((unsigned int *)a3 + 3);
  v6 = 0;
  v7 = 0LL;
  if ( !(_DWORD)v5 )
    goto LABEL_6;
  Resource = CResourceTable::GetResource(a2, v5, 65LL);
  v7 = (struct CResource *)Resource;
  if ( !Resource )
  {
    v4 = -2003303421;
    v21 = 2149;
LABEL_29:
    v20 = v4;
LABEL_32:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v21);
    return v4;
  }
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Resource + 48LL);
  if ( v11 == CRgnGeometry::IsOfType )
    v12 = CRgnGeometry::IsOfType(Resource, 69LL);
  else
    v12 = v11(Resource, 69LL);
  if ( !v12 )
  {
    v4 = -2147024809;
    v21 = 2160;
    goto LABEL_29;
  }
LABEL_6:
  v13 = (struct CResource *)*((_QWORD *)this + 129);
  if ( v7 == v13 )
    return v4;
  if ( v7 && !v13 && *((_DWORD *)a3 + 2) )
    v6 = 2;
  v15 = CResource::RegisterNotifier(this, v7);
  v4 = v15;
  if ( v15 < 0 )
  {
    v21 = 2170;
    goto LABEL_31;
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 129));
  v17 = *((_QWORD *)this + 124);
  *((_QWORD *)this + 129) = v7;
  v18 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 260) = v18;
  if ( v17 )
  {
    if ( v18
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 184LL))(v17)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 124) + 88LL))(*((_QWORD *)this + 124)) )
    {
      v6 = 6;
    }
    LOBYTE(v16) = *((_DWORD *)this + 260) != 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 124) + 224LL))(*((_QWORD *)this + 124), v16);
    if ( v6 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, struct CResourceTable *, _QWORD, _QWORD))(**((_QWORD **)this + 124)
                                                                                       + 272LL))(
              *((_QWORD *)this + 124),
              a2,
              v6,
              0LL);
      v4 = v15;
      if ( v15 < 0 )
      {
        v21 = 2200;
LABEL_31:
        v20 = v15;
        goto LABEL_32;
      }
    }
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 256); i = (unsigned int)(i + 1) )
  {
    LOBYTE(v16) = *((_DWORD *)this + 260) != 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 125) + 8 * i) + 224LL))(
      *(_QWORD *)(*((_QWORD *)this + 125) + 8 * i),
      v16);
  }
  *((_BYTE *)this + 1224) = 1;
  CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
  return v4;
}
