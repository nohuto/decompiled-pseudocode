/*
 * XREFs of GetMessageWindow @ 0x140046B50
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     _GetAncestor @ 0x14013EA2C (_GetAncestor.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     NtUserGetAncestor @ 0x140188310 (NtUserGetAncestor.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x1401D3650 (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserSetParent @ 0x1401F6C50 (NtUserSetParent.c)
 *     NtUserSetBrokeredForeground @ 0x14024E900 (NtUserSetBrokeredForeground.c)
 *     HasMessageRootWindow @ 0x140269CBC (HasMessageRootWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMessageWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 112);
  return result;
}
