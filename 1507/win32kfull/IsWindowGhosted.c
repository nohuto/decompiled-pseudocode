/*
 * XREFs of IsWindowGhosted @ 0x1C0088AC8
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0005B40 (NtUserHwndQueryRedirectionInfo.c)
 *     xxxUpdateInputHangInfo @ 0x1C006B110 (xxxUpdateInputHangInfo.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     xxxHandleHealthyThread @ 0x1C0117490 (xxxHandleHealthyThread.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 */

__int64 __fastcall IsWindowGhosted(__int64 a1)
{
  unsigned int v1; // r10d
  unsigned __int16 v2; // dx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r11

  v1 = 0;
  v2 = *(_WORD *)(gpsi + 884LL);
  if ( *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) != v2
    && (GetProp(a1, v2, 1LL) || GetProp(v3, *(unsigned __int16 *)(v5 + 1362), v4)) )
  {
    return (unsigned int)v4;
  }
  return v1;
}
