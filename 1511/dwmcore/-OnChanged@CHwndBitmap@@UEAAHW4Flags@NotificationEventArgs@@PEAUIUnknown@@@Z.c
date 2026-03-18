/*
 * XREFs of ?OnChanged@CHwndBitmap@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18000F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x18002C430 (-ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ.c)
 */

__int64 __fastcall CHwndBitmap::OnChanged(__int64 a1)
{
  CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations((CCommandListBitmapRepresentation *)(a1 + 56));
  return 1LL;
}
