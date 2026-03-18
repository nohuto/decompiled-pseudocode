/*
 * XREFs of BgpConsoleGetCursorState @ 0x14072A8DC
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1401271F4 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140127230 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleGetCursorState(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx

  BgpFwAcquireLock();
  v6 = qword_140329968;
  v7 = 0;
  if ( qword_140329968 )
  {
    *a1 = *(_DWORD *)(qword_140329968 + 68);
    *a2 = *(_DWORD *)(v6 + 72);
    *a3 = *(_DWORD *)(v6 + 76);
  }
  else
  {
    v7 = -1073741823;
  }
  BgpFwReleaseLock();
  return v7;
}
