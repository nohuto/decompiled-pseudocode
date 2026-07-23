/*
 * XREFs of ExpWnfGetCurrentScopeInstance @ 0x140463930
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x140461888 (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x140013CD0 (PsGetProcessSessionId.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404C560C (ExpWnfQueryCurrentUserSID.c)
 */

__int64 __fastcall ExpWnfGetCurrentScopeInstance(_KPROCESS *a1, int a2, int a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int v6; // ebx
  _KPROCESS *Process; // rdi
  int v9; // r8d
  bool v10; // zf
  int v12; // r8d

  v6 = 0;
  Process = a1;
  if ( !a3 )
    goto LABEL_13;
  v9 = a3 - 1;
  if ( !v9 )
  {
    v10 = !KeIsAttachedProcess();
    *a6 = v10;
    if ( !v10 )
      Process = KeGetCurrentThread()->ApcState.Process;
    *a4 = PsGetProcessSessionId((__int64)Process);
    *a5 = 4;
    return v6;
  }
  v12 = v9 - 1;
  if ( !v12 )
    return (unsigned int)ExpWnfQueryCurrentUserSID((_DWORD)a1, a2, (_DWORD)a4, (_DWORD)a5, (__int64)a6);
  if ( v12 != 1 )
  {
LABEL_13:
    *a5 = 0;
    *a6 = 1;
    return v6;
  }
  v10 = !KeIsAttachedProcess();
  *a6 = v10;
  if ( !v10 )
    Process = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)a4 = Process;
  *a5 = 8;
  return v6;
}
