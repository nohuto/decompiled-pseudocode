/*
 * XREFs of ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x180079478
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006FA50 (-IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETSPRITECLIP *a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // edx
  unsigned int v6; // r15d
  struct CResource *v7; // rbx
  __int64 Resource; // rax
  bool (__fastcall *v11)(__int64, int); // rdi
  bool v12; // al
  struct CResource *v13; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  int v18; // eax
  __int64 i; // r15
  int v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-38h]

  v4 = 0;
  v5 = *((_DWORD *)a3 + 3);
  v6 = 0;
  v7 = 0LL;
  if ( !v5 )
    goto LABEL_6;
  Resource = CResourceTable::GetResource((__int64)a2, v5, 61LL);
  v7 = (struct CResource *)Resource;
  if ( !Resource )
  {
    v4 = -2003303421;
    v21 = 2148;
LABEL_29:
    v20 = v4;
LABEL_32:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v21);
    return v4;
  }
  v11 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)Resource + 48LL);
  if ( v11 == CRgnGeometry::IsOfType )
    v12 = CRgnGeometry::IsOfType(Resource, 65);
  else
    v12 = v11(Resource, 65);
  if ( !v12 )
  {
    v4 = -2147024809;
    v21 = 2159;
    goto LABEL_29;
  }
LABEL_6:
  v13 = (struct CResource *)*((_QWORD *)this + 135);
  if ( v7 == v13 )
    return v4;
  if ( v7 && !v13 && *((_DWORD *)a3 + 2) )
    v6 = 2;
  v15 = CResource::RegisterNotifier(this, v7);
  v4 = v15;
  if ( v15 < 0 )
  {
    v21 = 2169;
    goto LABEL_31;
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 135));
  v17 = *((_QWORD *)this + 130);
  *((_QWORD *)this + 135) = v7;
  v18 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 272) = v18;
  if ( v17 )
  {
    if ( v18
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 280LL))(v17)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 130) + 160LL))(*((_QWORD *)this + 130)) )
    {
      v6 = 6;
    }
    LOBYTE(v16) = *((_DWORD *)this + 272) != 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 130) + 320LL))(*((_QWORD *)this + 130), v16);
    if ( v6 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, struct CResourceTable *, _QWORD, _QWORD))(**((_QWORD **)this + 130)
                                                                                       + 368LL))(
              *((_QWORD *)this + 130),
              a2,
              v6,
              0LL);
      v4 = v15;
      if ( v15 < 0 )
      {
        v21 = 2199;
LABEL_31:
        v20 = v15;
        goto LABEL_32;
      }
    }
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 268); i = (unsigned int)(i + 1) )
  {
    LOBYTE(v16) = *((_DWORD *)this + 272) != 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 131) + 8 * i) + 320LL))(
      *(_QWORD *)(*((_QWORD *)this + 131) + 8 * i),
      v16);
  }
  *((_BYTE *)this + 1272) = 1;
  CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
  return v4;
}
