/*
 * XREFs of CheckClipboardAccess @ 0x1C00DBFC0
 * Callers:
 *     NtUserRemoveClipboardFormatListener @ 0x1C000C9E0 (NtUserRemoveClipboardFormatListener.c)
 *     NtUserAddClipboardFormatListener @ 0x1C000CAC0 (NtUserAddClipboardFormatListener.c)
 *     NtUserGetClipboardOwner @ 0x1C000CE00 (NtUserGetClipboardOwner.c)
 *     xxxCloseClipboard @ 0x1C00DBC30 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00DBE18 (_OpenClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C00DBEE0 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C00DBF10 (NtUserIsClipboardFormatAvailable.c)
 *     xxxEmptyClipboard @ 0x1C00DC248 (xxxEmptyClipboard.c)
 *     NtUserCountClipboardFormats @ 0x1C0143570 (NtUserCountClipboardFormats.c)
 *     _SetClipboardData @ 0x1C0149FA0 (_SetClipboardData.c)
 *     NtUserGetClipboardData @ 0x1C014AE60 (NtUserGetClipboardData.c)
 *     xxxSetClipboardViewer @ 0x1C014C7F4 (xxxSetClipboardViewer.c)
 *     xxxChangeClipboardChain @ 0x1C014CC7C (xxxChangeClipboardChain.c)
 *     _EnumClipboardFormats @ 0x1C014CFA0 (_EnumClipboardFormats.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C014D630 (NtUserGetOpenClipboardWindow.c)
 *     _GetPriorityClipboardFormat @ 0x1C01F0A3C (_GetPriorityClipboardFormat.c)
 *     xxxDisownClipboard @ 0x1C01F0B0C (xxxDisownClipboard.c)
 *     NtUserGetClipboardViewer @ 0x1C0219F10 (NtUserGetClipboardViewer.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C021C090 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ReferenceWindowStation @ 0x1C00DC010 (ReferenceWindowStation.c)
 */

__int64 CheckClipboardAccess()
{
  __int64 ThreadWin32Thread; // rax
  NTSTATUS v1; // eax
  ULONG v3; // eax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = ReferenceWindowStation(
         KeGetCurrentThread(),
         0LL,
         4LL,
         &v4,
         (*(unsigned __int8 *)(ThreadWin32Thread + 440) >> 3) & 1);
  if ( v1 >= 0 )
    return v4;
  v3 = RtlNtStatusToDosError(v1);
  UserSetLastError(v3);
  return 0LL;
}
