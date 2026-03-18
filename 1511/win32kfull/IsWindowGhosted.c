/*
 * XREFs of IsWindowGhosted @ 0x1C00697A0
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0007AC0 (NtUserHwndQueryRedirectionInfo.c)
 *     xxxUpdateInputHangInfo @ 0x1C005ADE0 (xxxUpdateInputHangInfo.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     xxxHandleHealthyThread @ 0x1C01423E0 (xxxHandleHealthyThread.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 */

__int64 __fastcall IsWindowGhosted(__int64 a1)
{
  unsigned int v2; // r10d
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  __int64 v5; // r8
  __int64 v6; // r11

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 152);
  v4 = *(_WORD *)(gpsi + 884LL);
  if ( *(_WORD *)(v3 + 8) != v4 && (GetProp(a1, v4, 1LL) || GetProp(v6, *(unsigned __int16 *)(gpsi + 1362LL), v5)) )
    return (unsigned int)v5;
  return v2;
}
