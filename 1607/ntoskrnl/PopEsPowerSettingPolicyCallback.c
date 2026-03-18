/*
 * XREFs of PopEsPowerSettingPolicyCallback @ 0x140580F78
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopEsQueueStateEvaluation @ 0x14054410C (PopEsQueueStateEvaluation.c)
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
    if ( *a2 != 1 || byte_140303E54 )
    {
      if ( !*a2 && byte_140303E54 )
      {
        v5 = 1;
        byte_140303E54 = 0;
      }
    }
    else
    {
      v5 = 1;
      byte_140303E54 = 1;
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
