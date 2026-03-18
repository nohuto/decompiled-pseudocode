/*
 * XREFs of IncrementCompositedCount @ 0x1400109DC
 * Callers:
 *     IncCompositedVisWindows @ 0x1400109BC (IncCompositedVisWindows.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 * Callees:
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 */

__int64 __fastcall IncrementCompositedCount(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx

  v2 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
  {
    v3 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 43280);
    UserSessionState = W32GetUserSessionState(v5, v4);
    ++*(_DWORD *)(UserSessionState + 43280);
    if ( !v3 )
    {
      v9 = W32GetUserSessionState(v8, v7);
      v10 = *(_QWORD *)(v9 + 68464);
      if ( v10 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v9 + 68464)) + 25) & 1) == 0 )
          InternalSetTimer(v10, 65525, 100, (unsigned int)xxxSystemTimerProc, 0, 66);
      }
    }
    return 1;
  }
  return v2;
}
