/*
 * XREFs of xxxHandleHealthyWindow @ 0x1C0148038
 * Callers:
 *     xxxUpdateInputHangInfo @ 0x1C0082870 (xxxUpdateInputHangInfo.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     xxxHandleHealthyThread @ 0x1C0147F90 (xxxHandleHealthyThread.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01480A8 (xxxDestroyCorrespondingGhostWindow.c)
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
    v7[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v7;
    *(_DWORD *)(v3 + 8) += v2;
    v7[1] = v3;
    v1 = xxxDestroyCorrespondingGhostWindow((struct tagWND *)v3);
    ThreadUnlock1(v5, v4);
  }
  return v1;
}
