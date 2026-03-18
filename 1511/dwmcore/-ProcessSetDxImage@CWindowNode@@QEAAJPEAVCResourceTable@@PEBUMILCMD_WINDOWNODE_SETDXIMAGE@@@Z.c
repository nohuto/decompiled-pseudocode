/*
 * XREFs of ?ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z @ 0x18005E254
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x180062E54 (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetDxImage(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETDXIMAGE *a3)
{
  unsigned int v3; // eax
  struct CFlipChain *v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 Resource; // rax

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  if ( !v3
    || ((Resource = CResourceTable::GetResource(a2, v3, 86LL)) == 0
      ? (v5 = 0LL)
      : (v5 = (struct CFlipChain *)(Resource - 16)),
        v5) )
  {
    v7 = CWindowNode::SetDxImage(this, v5);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x80Fu);
  }
  else
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x80Bu);
  }
  return v8;
}
