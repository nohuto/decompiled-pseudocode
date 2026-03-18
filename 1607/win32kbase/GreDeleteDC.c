/*
 * XREFs of GreDeleteDC @ 0x1C005A4C0
 * Callers:
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0054D68 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C005834C (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     DestroyCacheDC @ 0x1C005A3A0 (DestroyCacheDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDeleteDC(HDC a1)
{
  return bDeleteDCInternal(a1, 1, 0, 0);
}
