/*
 * XREFs of ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x180048E08
 * Callers:
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1800481A4 (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18004D2FC (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 * Callees:
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180048D70 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::OnInnerTransformChanged(CVisual *this)
{
  __int64 v1; // r9
  _QWORD **v2; // r9
  _QWORD *i; // rax

  CVisual::OnTransformChanged(this);
  *(_QWORD *)(v1 + 672) = 0LL;
  v2 = (_QWORD **)(v1 + 416);
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
    *(i - 3) = 0LL;
}
