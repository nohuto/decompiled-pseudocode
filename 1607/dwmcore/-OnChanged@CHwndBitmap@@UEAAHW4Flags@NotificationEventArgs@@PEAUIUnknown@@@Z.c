/*
 * XREFs of ?OnChanged@CHwndBitmap@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18000A3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x1800B0DC0 (-ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ.c)
 */

__int64 __fastcall CHwndBitmap::OnChanged(__int64 a1)
{
  CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations((CCommandListBitmapRepresentation *)(a1 + 128));
  return 1LL;
}
