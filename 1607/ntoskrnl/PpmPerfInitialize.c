/*
 * XREFs of PpmPerfInitialize @ 0x1407BB66C
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (*PpmPerfInitialize())()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  __int64 (*result)(); // rax

  qword_1403AA350 = (__int64)&PpmPerfDomainHead;
  v0 = 2LL;
  PpmPerfDomainHead = (__int64)&PpmPerfDomainHead;
  dword_1403017DC = 50;
  dword_140301D4C = 50;
  v1 = &unk_140301D50;
  do
  {
    *(v1 - 1392) = 1;
    *v1 = 1;
    *(v1 - 1376) = 70;
    v1[16] = 70;
    *(v1 - 1378) = 30;
    v1[14] = 30;
    *(v1 - 1390) = 100;
    v1[2] = 100;
    *(v1 - 1388) = 100;
    v1[4] = 100;
    ++v1;
    --v0;
  }
  while ( v0 );
  dword_1403017F4 = 100;
  stru_140304510.WorkerRoutine = (void (__fastcall *)(void *))PpmMediaBufferingWorker;
  result = PpmPerfLatencySensitivityHintWorker;
  PpmPerfLatencyBoostWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmPerfLatencySensitivityHintWorker;
  dword_140301D64 = 100;
  dword_1403017F8 = 2;
  dword_140301D68 = 2;
  PpmMediaBufferingWork = 0LL;
  stru_140304510.Parameter = 0LL;
  stru_140304510.List.Flink = 0LL;
  PpmPerfLatencyBoostWorkItem.Parameter = 0LL;
  PpmPerfLatencyBoostWorkItem.List.Flink = 0LL;
  return result;
}
