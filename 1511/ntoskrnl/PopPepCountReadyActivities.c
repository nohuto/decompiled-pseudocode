/*
 * XREFs of PopPepCountReadyActivities @ 0x1400DBA7C
 * Callers:
 *     PopPepProcessEvent @ 0x1400DB930 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x14012F4AC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x1401ED038 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x1401ED110 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1401ED1F0 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1401ED2E0 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1401ED734 (PopPepIdleTimeoutRoutine.c)
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
