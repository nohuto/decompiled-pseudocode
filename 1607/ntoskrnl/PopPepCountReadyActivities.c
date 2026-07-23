/*
 * XREFs of PopPepCountReadyActivities @ 0x1400C0224
 * Callers:
 *     PopPepProcessEvent @ 0x1400C00D8 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x14012C8E4 (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x1401422B0 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14014C2A0 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x140205CAC (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x140205D84 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402060E0 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepCountReadyActivities(unsigned int *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rcx

  if ( !a3 )
    return 0LL;
  result = a1[30];
  if ( a3 == 2 )
  {
    if ( a2 )
      return (unsigned int)(*(_DWORD *)(a2 + 104) + result);
  }
  else if ( a3 == 3 )
  {
    v4 = a1[42];
    if ( (_DWORD)v4 )
    {
      v5 = a1 + 70;
      do
      {
        result = (unsigned int)(*v5 + result);
        v5 += 50;
        --v4;
      }
      while ( v4 );
    }
  }
  return result;
}
