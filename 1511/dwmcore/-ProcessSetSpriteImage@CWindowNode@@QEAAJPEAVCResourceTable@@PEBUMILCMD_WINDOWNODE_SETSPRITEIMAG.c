/*
 * XREFs of ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x18005E1CC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180062EA0 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteImage(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETSPRITEIMAGE *a3)
{
  unsigned int v3; // r9d
  struct ISpriteImage *v5; // rdx
  __int64 Resource; // rax
  int v8; // eax
  unsigned int v9; // ebx

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  if ( !v3 )
    goto LABEL_10;
  if ( v3 < *((_DWORD *)a2 + 7) )
    LODWORD(v5) = *(_DWORD *)(v3 * *((_DWORD *)a2 + 6) + *((_QWORD *)a2 + 5));
  if ( (_DWORD)v5 != 88 )
    goto LABEL_15;
  Resource = CResourceTable::GetResource(a2, v3, 88LL);
  if ( Resource )
    v5 = (struct ISpriteImage *)(Resource - 16);
  else
    v5 = 0LL;
  if ( v5 )
    v5 = (struct ISpriteImage *)((char *)v5 + 72);
  if ( v5 )
  {
LABEL_10:
    v8 = CWindowNode::SetSpriteImage(this, v5);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x751u);
  }
  else
  {
LABEL_15:
    v9 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x74Du);
  }
  return v9;
}
