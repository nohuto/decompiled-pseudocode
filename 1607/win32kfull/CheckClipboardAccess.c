/*
 * XREFs of CheckClipboardAccess @ 0x1C00F9194
 * Callers:
 *     NtUserRemoveClipboardFormatListener @ 0x1C000DEC0 (NtUserRemoveClipboardFormatListener.c)
 *     NtUserAddClipboardFormatListener @ 0x1C000E0A0 (NtUserAddClipboardFormatListener.c)
 *     NtUserGetClipboardOwner @ 0x1C000E500 (NtUserGetClipboardOwner.c)
 *     xxxCloseClipboard @ 0x1C00F8DF0 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00F8FE4 (_OpenClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C00F90B0 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C00F90E0 (NtUserIsClipboardFormatAvailable.c)
 *     xxxEmptyClipboard @ 0x1C00F94F0 (xxxEmptyClipboard.c)
 *     NtUserCountClipboardFormats @ 0x1C0149EC0 (NtUserCountClipboardFormats.c)
 *     _SetClipboardData @ 0x1C014F6A0 (_SetClipboardData.c)
 *     NtUserGetClipboardData @ 0x1C0150380 (NtUserGetClipboardData.c)
 *     xxxSetClipboardViewer @ 0x1C0151B64 (xxxSetClipboardViewer.c)
 *     xxxChangeClipboardChain @ 0x1C015224C (xxxChangeClipboardChain.c)
 *     _EnumClipboardFormats @ 0x1C0152750 (_EnumClipboardFormats.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C0152CB0 (NtUserGetOpenClipboardWindow.c)
 *     _GetPriorityClipboardFormat @ 0x1C01E677C (_GetPriorityClipboardFormat.c)
 *     xxxDisownClipboard @ 0x1C01E684C (xxxDisownClipboard.c)
 *     NtUserGetClipboardViewer @ 0x1C0212CE0 (NtUserGetClipboardViewer.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C0215250 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ReferenceWindowStation @ 0x1C00F91F0 (ReferenceWindowStation.c)
 */

__int64 __fastcall CheckClipboardAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  NTSTATUS v5; // eax
  ULONG v7; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v5 = ReferenceWindowStation(
         KeGetCurrentThread(),
         0LL,
         4LL,
         &v8,
         (*(unsigned __int8 *)(ThreadWin32Thread + 440) >> 3) & 1);
  if ( v5 >= 0 )
    return v8;
  v7 = RtlNtStatusToDosError(v5);
  UserSetLastError(v7);
  return 0LL;
}
