/*
 * XREFs of CheckClipboardAccess @ 0x1C00D6580
 * Callers:
 *     NtUserRemoveClipboardFormatListener @ 0x1C00094A0 (NtUserRemoveClipboardFormatListener.c)
 *     NtUserAddClipboardFormatListener @ 0x1C0009670 (NtUserAddClipboardFormatListener.c)
 *     NtUserGetClipboardOwner @ 0x1C0009990 (NtUserGetClipboardOwner.c)
 *     xxxCloseClipboard @ 0x1C00D61F0 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00D63D8 (_OpenClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C00D64A0 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C00D64D0 (NtUserIsClipboardFormatAvailable.c)
 *     NtUserCountClipboardFormats @ 0x1C0117320 (NtUserCountClipboardFormats.c)
 *     _SetClipboardData @ 0x1C0120824 (_SetClipboardData.c)
 *     NtUserGetClipboardData @ 0x1C0121150 (NtUserGetClipboardData.c)
 *     xxxSetClipboardViewer @ 0x1C0123880 (xxxSetClipboardViewer.c)
 *     xxxChangeClipboardChain @ 0x1C0123C68 (xxxChangeClipboardChain.c)
 *     _EnumClipboardFormats @ 0x1C0123F30 (_EnumClipboardFormats.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C01245D0 (NtUserGetOpenClipboardWindow.c)
 *     xxxEmptyClipboard @ 0x1C0128CAC (xxxEmptyClipboard.c)
 *     _GetPriorityClipboardFormat @ 0x1C01F0ADC (_GetPriorityClipboardFormat.c)
 *     xxxDisownClipboard @ 0x1C01F0BAC (xxxDisownClipboard.c)
 *     NtUserGetClipboardViewer @ 0x1C021A1A0 (NtUserGetClipboardViewer.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C021C2B0 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ReferenceWindowStation @ 0x1C00D65D0 (ReferenceWindowStation.c)
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
         (*(unsigned __int8 *)(ThreadWin32Thread + 448) >> 3) & 1);
  if ( v1 >= 0 )
    return v4;
  v3 = RtlNtStatusToDosError(v1);
  UserSetLastError(v3);
  return 0LL;
}
