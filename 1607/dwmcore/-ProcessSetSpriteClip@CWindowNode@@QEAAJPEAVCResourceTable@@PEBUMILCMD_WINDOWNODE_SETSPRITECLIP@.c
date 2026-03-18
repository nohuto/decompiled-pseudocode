/*
 * XREFs of ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x180025E14
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002FC70 (-IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETSPRITECLIP *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  unsigned int v6; // ebp
  struct CResource *v7; // rsi
  struct CResource *v10; // rax
  __int64 Resource; // rax
  __int64 (__fastcall *v13)(struct CResource *, __int64); // rax
  char v14; // al
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 i; // rsi
  __int64 v20; // rcx
  int v21; // r9d
  unsigned int v22; // [rsp+20h] [rbp-38h]

  v4 = 0;
  v5 = *((unsigned int *)a3 + 3);
  v6 = 0;
  v7 = 0LL;
  if ( !(_DWORD)v5 )
    goto LABEL_2;
  Resource = CResourceTable::GetResource(a2, v5, 66LL);
  v7 = (struct CResource *)Resource;
  if ( !Resource )
  {
    v4 = -2003303421;
    v22 = 2149;
    goto LABEL_29;
  }
  v13 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)Resource + 48LL);
  if ( (char *)v13 == (char *)CRgnGeometry::IsOfType )
    v14 = CRgnGeometry::IsOfType(v7, 70LL);
  else
    v14 = v13(v7, 70LL);
  if ( !v14 )
  {
    v4 = -2147024809;
    v22 = 2160;
LABEL_29:
    v21 = v4;
LABEL_32:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v22);
    return v4;
  }
LABEL_2:
  v10 = (struct CResource *)*((_QWORD *)this + 105);
  if ( v7 == v10 )
    return v4;
  if ( v7 && !v10 && *((_DWORD *)a3 + 2) )
    v6 = 2;
  v15 = CResource::RegisterNotifier(this, v7);
  v4 = v15;
  if ( v15 < 0 )
  {
    v22 = 2170;
    goto LABEL_31;
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 105));
  v17 = *((_QWORD *)this + 100);
  *((_QWORD *)this + 105) = v7;
  v18 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 212) = v18;
  if ( v17 )
  {
    if ( v18
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 192LL))(v17)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 100) + 88LL))(*((_QWORD *)this + 100)) )
    {
      v6 = 6;
    }
    LOBYTE(v16) = *((_DWORD *)this + 212) != 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 100) + 232LL))(*((_QWORD *)this + 100), v16);
    if ( v6 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, struct CResourceTable *, _QWORD, _QWORD))(**((_QWORD **)this + 100)
                                                                                       + 280LL))(
              *((_QWORD *)this + 100),
              a2,
              v6,
              0LL);
      v4 = v15;
      if ( v15 < 0 )
      {
        v22 = 2200;
LABEL_31:
        v21 = v15;
        goto LABEL_32;
      }
    }
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 208); i = (unsigned int)(i + 1) )
  {
    LOBYTE(v16) = *((_DWORD *)this + 212) != 0;
    v20 = *(_QWORD *)(*((_QWORD *)this + 101) + 8 * i);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 232LL))(v20, v16);
  }
  *((_BYTE *)this + 1032) = 1;
  CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
  return v4;
}
