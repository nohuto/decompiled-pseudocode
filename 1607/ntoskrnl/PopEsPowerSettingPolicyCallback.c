/*
 * XREFs of PopEsPowerSettingPolicyCallback @ 0x140581424
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PopEsQueueStateEvaluation @ 0x14054464C (PopEsQueueStateEvaluation.c)
 */

__int64 __fastcall PopEsPowerSettingPolicyCallback(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v3; // ebx
  char v5; // di

  v3 = 0;
  if ( a2 && a3 == 4 )
  {
    v5 = 0;
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
    if ( *a2 != 1 || byte_140303D94 )
    {
      if ( !*a2 && byte_140303D94 )
      {
        v5 = 1;
        byte_140303D94 = 0;
      }
    }
    else
    {
      v5 = 1;
      byte_140303D94 = 1;
    }
    PopReleaseRwLock(&PopEsLock);
    if ( v5 )
      PopEsQueueStateEvaluation(0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
