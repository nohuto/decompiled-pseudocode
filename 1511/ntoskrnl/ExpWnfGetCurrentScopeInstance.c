/*
 * XREFs of ExpWnfGetCurrentScopeInstance @ 0x1403E5E08
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x14003AF8C (PsGetProcessSessionId.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1403E5EDC (ExpWnfQueryCurrentUserSID.c)
 */

__int64 __fastcall ExpWnfGetCurrentScopeInstance(_KPROCESS *a1, int a2, int a3, _KPROCESS **a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int v6; // ebx
  _KPROCESS *Process; // rdi
  int v9; // r8d
  int v10; // r8d
  bool v12; // zf

  v6 = 0;
  Process = a1;
  if ( !a3 )
    goto LABEL_13;
  v9 = a3 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
      return (unsigned int)ExpWnfQueryCurrentUserSID((_DWORD)a1, a2, (_DWORD)a4, (_DWORD)a5, (__int64)a6);
    if ( v10 == 1 )
    {
      v12 = !KeIsAttachedProcess();
      *a6 = v12;
      if ( !v12 )
        Process = KeGetCurrentThread()->ApcState.Process;
      *a4 = Process;
      *a5 = 8;
      return v6;
    }
LABEL_13:
    *a5 = 0;
    *a6 = 1;
    return v6;
  }
  v12 = !KeIsAttachedProcess();
  *a6 = v12;
  if ( !v12 )
    Process = KeGetCurrentThread()->ApcState.Process;
  *(_DWORD *)a4 = PsGetProcessSessionId((__int64)Process);
  *a5 = 4;
  return v6;
}
