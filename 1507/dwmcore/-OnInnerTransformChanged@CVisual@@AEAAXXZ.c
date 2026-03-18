/*
 * XREFs of ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800363D8
 * Callers:
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800349B4 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x180035808 (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180036324 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::OnInnerTransformChanged(CVisual *this)
{
  __int64 v1; // r9
  _QWORD **v2; // r9
  _QWORD *i; // rax

  CVisual::OnTransformChanged(this);
  *(_QWORD *)(v1 + 688) = 0LL;
  v2 = (_QWORD **)(v1 + 432);
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
    *(i - 3) = 0LL;
}
