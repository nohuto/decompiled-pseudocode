/*
 * XREFs of UserIsWindowDesktopComposed @ 0x1401C7D50
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall UserIsWindowDesktopComposed(__int64 a1, _DWORD *a2)
{
  int v3; // esi
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // r15

  v3 = a1;
  v4 = 0;
  PtiCurrent(a1);
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904);
  if ( (unsigned __int64)(unsigned __int16)v3 < *(_QWORD *)(v8 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v8, v7);
    v12 = *(_DWORD *)(W32GetUserSessionState(v11, v10) + 19928) * (unsigned int)(unsigned __int16)v3
        + *(_QWORD *)(UserSessionState + 19920);
    v15 = (_QWORD *)HMPkheFromPhe(v12);
    LOWORD(v3) = HIWORD(v3) & 0x7FFF;
    if ( ((HIWORD(v3) & 0x7FFF) == *(_WORD *)(v12 + 26)
       || (_WORD)v3 == 0x7FFF
       || !(_WORD)v3 && PsGetCurrentProcessWow64Process(v14, v13))
      && (*(_BYTE *)(v12 + 25) & 1) == 0
      && *(_BYTE *)(v12 + 24) == 1
      && *v15 )
    {
      *a2 = IsWindowDesktopComposed(*v15);
      return 1;
    }
  }
  return v4;
}
