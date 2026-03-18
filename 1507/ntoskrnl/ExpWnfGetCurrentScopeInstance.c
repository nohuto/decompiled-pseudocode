/*
 * XREFs of ExpWnfGetCurrentScopeInstance @ 0x1404375D4
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x1400EFD94 (PsGetProcessSessionId.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404376A8 (ExpWnfQueryCurrentUserSID.c)
 */

__int64 __fastcall ExpWnfGetCurrentScopeInstance(
        struct _KPROCESS *a1,
        int a2,
        int a3,
        struct _KPROCESS **a4,
        _DWORD *a5,
        BOOL *a6)
{
  unsigned int v6; // ebx
  struct _KPROCESS *Process; // r10
  int v8; // r8d
  BOOL v10; // ecx
  BOOL v11; // ecx

  v6 = 0;
  Process = a1;
  if ( a3 )
  {
    v8 = a3 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        return (unsigned int)ExpWnfQueryCurrentUserSID((_DWORD)a1, a2, (_DWORD)a4, (_DWORD)a5, (__int64)a6);
      }
      else
      {
        v11 = KeGetCurrentThread()->ApcStateIndex != 1;
        *a6 = v11;
        if ( !v11 )
          Process = KeGetCurrentThread()->ApcState.Process;
        *a4 = Process;
        *a5 = 8;
      }
    }
    else
    {
      v10 = KeGetCurrentThread()->ApcStateIndex != 1;
      *a6 = v10;
      if ( !v10 )
        Process = KeGetCurrentThread()->ApcState.Process;
      *(_DWORD *)a4 = PsGetProcessSessionId(Process);
      *a5 = 4;
    }
  }
  else
  {
    *a5 = 0;
    *a6 = 1;
  }
  return v6;
}
