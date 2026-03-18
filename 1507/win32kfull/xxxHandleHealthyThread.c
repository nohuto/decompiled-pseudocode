/*
 * XREFs of xxxHandleHealthyThread @ 0x1C0117490
 * Callers:
 *     xxxUpdateInputHangInfo @ 0x1C006B110 (xxxUpdateInputHangInfo.c)
 *     xxxSleepThread2 @ 0x1C006B230 (xxxSleepThread2.c)
 *     xxxGetInputEvent @ 0x1C00C3140 (xxxGetInputEvent.c)
 *     xxxClearWakeMask @ 0x1C00C4A00 (xxxClearWakeMask.c)
 * Callees:
 *     IsWindowGhosted @ 0x1C0088AC8 (IsWindowGhosted.c)
 *     xxxHandleHealthyWindow @ 0x1C0117524 (xxxHandleHealthyWindow.c)
 */

__int64 __fastcall xxxHandleHealthyThread(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v6; // rcx

  v1 = 0;
  while ( *(int *)(a1 + 448) < 0 )
  {
    *(_DWORD *)(a1 + 448) &= ~0x80000000;
    v3 = 0LL;
    do
    {
      v4 = gSharedInfo[1];
      if ( *(_BYTE *)(v4 + 24 * v3 + 16) == 1 )
      {
        v6 = *(_QWORD *)(v4 + 24 * v3);
        if ( *(_QWORD *)(v6 + 16) == a1 && (unsigned int)IsWindowGhosted(v6) && (unsigned int)xxxHandleHealthyWindow() )
          v1 = 1;
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 <= giheLast );
  }
  return v1;
}
