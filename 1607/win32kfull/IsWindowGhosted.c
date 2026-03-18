/*
 * XREFs of IsWindowGhosted @ 0x1C00A738C
 * Callers:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxUpdateInputHangInfo @ 0x1C0082870 (xxxUpdateInputHangInfo.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     xxxHandleHealthyThread @ 0x1C0147F90 (xxxHandleHealthyThread.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0215C30 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
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
