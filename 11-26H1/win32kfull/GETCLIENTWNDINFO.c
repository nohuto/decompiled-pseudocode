/*
 * XREFs of GETCLIENTWNDINFO @ 0x140263574
 * Callers:
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     GetWndScrollBarInfoCrossProcess @ 0x140256448 (GetWndScrollBarInfoCrossProcess.c)
 *     GetWndSBParmsCrossProcess @ 0x140262F90 (GetWndSBParmsCrossProcess.c)
 *     SetSharedPropForFilteredProcesses @ 0x140293814 (SetSharedPropForFilteredProcesses.c)
 *     GetSharedPropForFilteredProcesses @ 0x140294E98 (GetSharedPropForFilteredProcesses.c)
 * Callees:
 *     ?GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z @ 0x140302274 (-GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall GETCLIENTWNDINFO(const struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx

  v1 = 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 296LL);
  if ( v2 )
    return v2 + (int)GETCLIENTWNDINFOOFFSET(a1);
  return v1;
}
