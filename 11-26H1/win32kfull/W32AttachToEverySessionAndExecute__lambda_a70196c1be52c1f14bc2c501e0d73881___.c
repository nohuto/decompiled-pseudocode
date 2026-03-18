/*
 * XREFs of W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x140279674
 * Callers:
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14025C010 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     _lambda_a817e3c7b16d652902ae8ccf3226f9ac_::operator() @ 0x1402A8C98 (_lambda_a817e3c7b16d652902ae8ccf3226f9ac_--operator().c)
 */

__int64 __fastcall W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881_(__int64 a1)
{
  __int64 CurrentWin32kSessionId; // rsi
  __int64 v2; // rcx
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int MaxSessionCount; // ebp

  CurrentWin32kSessionId = (unsigned int)W32GetCurrentWin32kSessionId(a1);
  v3 = lambda_a817e3c7b16d652902ae8ccf3226f9ac_::operator()(v2, 0LL, CurrentWin32kSessionId);
  v4 = 1;
  MaxSessionCount = W32GetMaxSessionCount();
  if ( MaxSessionCount > 1 )
  {
    do
      lambda_a817e3c7b16d652902ae8ccf3226f9ac_::operator()(v5, v4++, (unsigned int)CurrentWin32kSessionId);
    while ( v4 < MaxSessionCount );
  }
  return v3;
}
