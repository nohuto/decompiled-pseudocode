/*
 * XREFs of UserIsWindowWithNoRedirectionBitmap @ 0x14001D930
 * Callers:
 *     GreGetDxSharedSurface @ 0x14001D3F4 (GreGetDxSharedSurface.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x14028A2CC (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserIsWindowWithNoRedirectionBitmap(__int64 a1)
{
  int v1; // esi
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r14

  v1 = a1;
  v2 = 0;
  PsGetCurrentThreadWin32Thread(a1);
  v6 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19904);
  if ( (unsigned __int64)(unsigned __int16)v1 < *(_QWORD *)(v6 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    v10 = *(_DWORD *)(W32GetUserSessionState(v9, v8) + 19928) * (unsigned int)(unsigned __int16)v1
        + *(_QWORD *)(UserSessionState + 19920);
    v11 = HMPkheFromPhe(v10);
    LOWORD(v1) = HIWORD(v1) & 0x7FFF;
    if ( ((HIWORD(v1) & 0x7FFF) == *(_WORD *)(v10 + 26)
       || (_WORD)v1 == 0x7FFF
       || !(_WORD)v1 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v10 + 25) & 1) == 0
      && *(_BYTE *)(v10 + 24) == 1
      && *(_QWORD *)v11
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v11 + 40LL) + 26LL) & 0x20) != 0 )
    {
      return 1;
    }
  }
  return v2;
}
