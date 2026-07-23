/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x140135BDC
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
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
