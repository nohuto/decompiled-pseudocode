/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x14013566C
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14000A528 (PpmAcquireLock.c)
 */

__int64 PpmPerfLatencySensitivityHintWorker()
{
  __int64 i; // rax

  PpmPerfLatencyBoostQueued = 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    *(_BYTE *)(i + 406) = 1;
  return PpmCheckCustomRun();
}
