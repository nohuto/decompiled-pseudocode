/*
 * XREFs of GreDeleteDC @ 0x1C005B5C0
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C005A4BC (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     DestroyCacheDC @ 0x1C005B4A0 (DestroyCacheDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C006D43C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDeleteDC(HDC a1)
{
  return bDeleteDCInternal(a1, 1, 0, 0);
}
