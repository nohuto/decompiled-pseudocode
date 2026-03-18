/*
 * XREFs of GreDeleteDC @ 0x1C006BEA0
 * Callers:
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0069904 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C006BB98 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     DestroyCacheDC @ 0x1C006BD80 (DestroyCacheDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDeleteDC(HDC a1)
{
  return bDeleteDCInternal(a1, 1, 0, 0);
}
