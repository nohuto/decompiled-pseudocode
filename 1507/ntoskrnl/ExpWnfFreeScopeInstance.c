/*
 * XREFs of ExpWnfFreeScopeInstance @ 0x14053EDF0
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfDeleteScopeById @ 0x1405043FC (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteScopeInstances @ 0x1406FC3FC (ExpWnfDeleteScopeInstances.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x14053EEA4 (ExpWnfDeleteNameInstanceCallback.c)
 */

void __fastcall ExpWnfFreeScopeInstance(volatile signed __int64 *a1, char a2)
{
  volatile signed __int64 *v3; // rcx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  void *v8; // rcx
  void *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  if ( a2 )
  {
    v3 = a1 + 1;
    v4 = _InterlockedCompareExchange64(v3, 1LL, 0LL);
    if ( v4 >= 2 )
      ExfWaitForRundownProtectionRelease(v3, v4);
    v5 = (_QWORD *)*((_QWORD *)a1 + 7);
    if ( v5 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *v5 )
          {
            v10 = v5;
            v5 = (_QWORD *)*v5;
            *v10 = 0LL;
          }
          if ( !v5[1] )
            break;
          v11 = v5;
          v5 = (_QWORD *)v5[1];
          v11[1] = 0LL;
        }
        v6 = v5[2];
        ExpWnfDeleteNameInstanceCallback(v5, a1);
        v7 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v7 )
          break;
        v5 = (_QWORD *)v7;
      }
    }
    *((_QWORD *)a1 + 7) = 0LL;
  }
  v8 = (void *)*((_QWORD *)a1 + 8);
  if ( v8 )
    ZwClose(v8);
  v9 = (void *)*((_QWORD *)a1 + 9);
  if ( v9 )
    ZwClose(v9);
  ExFreePoolWithTag((PVOID)a1, 0x20666E57u);
}
