/*
 * XREFs of MNSetupAnimationDC @ 0x1400CBBA0
 * Callers:
 *     FinalUserInit @ 0x1400CBC1C (FinalUserInit.c)
 *     MNAllocMenuState @ 0x140290298 (MNAllocMenuState.c)
 * Callees:
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *DpiMetricsForCurrentThread; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  result = GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 56LL));
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    DpiMetricsForCurrentThread = (_QWORD *)GetDpiMetricsForCurrentThread(v6, v5, v7);
    GreSelectFont(*(_QWORD *)(a1 + 136), *DpiMetricsForCurrentThread);
    GreSetDCOwnerEx(*(_QWORD *)(a1 + 136), 2147483666LL, 0LL, 0LL);
    return 1LL;
  }
  return result;
}
