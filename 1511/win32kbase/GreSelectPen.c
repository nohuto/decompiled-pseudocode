/*
 * XREFs of GreSelectPen @ 0x1C00B3090
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00316F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00319F0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreDCSelectPen @ 0x1C0048F10 (GreDCSelectPen.c)
 */

__int64 __fastcall GreSelectPen(HDC a1, __int64 a2)
{
  __int64 v3; // rbx
  DC *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  v5[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v3 = GreDCSelectPen((struct BRUSH **)v5[0], a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return v3;
}
