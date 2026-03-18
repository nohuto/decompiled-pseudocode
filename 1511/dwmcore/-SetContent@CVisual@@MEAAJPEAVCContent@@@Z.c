/*
 * XREFs of ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004BA50
 * Callers:
 *     ?ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x180048240 (-ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z.c)
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x1800F7594 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x180120F80 (-SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?ClearContentTreeDataCaches@CVisual@@AEAAXXZ @ 0x180048CB0 (-ClearContentTreeDataCaches@CVisual@@AEAAXXZ.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@AEAA_NXZ @ 0x180048EA0 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@AEAA_NXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CVisual::SetContent(struct CResource **this, struct CContent *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  char HasSingleD2DBitmapOrPrimitiveGroupInternal; // al

  v2 = 0;
  if ( a2 != this[45] )
  {
    CVisual::ClearContentTreeDataCaches((CVisual *)this);
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x210u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[45]);
      this[45] = a2;
      HasSingleD2DBitmapOrPrimitiveGroupInternal = CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal((CVisual *)this);
      *((_BYTE *)this + 72) &= ~0x80u;
      *((_BYTE *)this + 72) |= HasSingleD2DBitmapOrPrimitiveGroupInternal << 7;
      CVisual::PropagateFlags((struct CVisual *)this, 1, 1, 0, 0, 0, 0);
    }
  }
  return v2;
}
