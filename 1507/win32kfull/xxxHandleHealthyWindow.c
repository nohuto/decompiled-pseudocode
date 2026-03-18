/*
 * XREFs of xxxHandleHealthyWindow @ 0x1C0117524
 * Callers:
 *     xxxUpdateInputHangInfo @ 0x1C006B110 (xxxUpdateInputHangInfo.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     xxxHandleHealthyThread @ 0x1C0117490 (xxxHandleHealthyThread.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0117594 (xxxDestroyCorrespondingGhostWindow.c)
 */

__int64 __fastcall xxxHandleHealthyWindow(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // r8d
  __int64 v3; // r10
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( GetProp(a1, *(unsigned __int16 *)(gpsi + 884LL), 1LL) )
  {
    v7[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v7;
    *(_DWORD *)(v3 + 8) += v2;
    v7[1] = v3;
    v1 = xxxDestroyCorrespondingGhostWindow((struct tagWND *)v3);
    ThreadUnlock1(v5, v4);
  }
  return v1;
}
