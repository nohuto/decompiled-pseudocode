/*
 * XREFs of PopPepCountReadyActivities @ 0x1400C2394
 * Callers:
 *     PopPepProcessEvent @ 0x1400C2248 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x14012C374 (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x140141D40 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14014BD30 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x140205E80 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x140205F58 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402062B4 (PopPepIdleTimeoutRoutine.c)
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
