/*
 * XREFs of ?bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02B86A8
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ESTROBJ::bTextToPath(STROBJ *this, struct EPATHOBJ *a2, struct XDCOBJ *a3)
{
  if ( (this[1].rclBkGround.top & 0x1400) != 0 )
    return ESTROBJ::bLinkedTextToPath(this, a2, a3);
  else
    return ESTROBJ::bTextToPathWorkhorse(this, a2);
}
