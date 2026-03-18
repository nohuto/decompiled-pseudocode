/*
 * XREFs of PpmPerfInitialize @ 0x1407E687C
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (*PpmPerfInitialize())()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  __int64 (*result)(); // rax

  qword_1403D13D8 = (__int64)&PpmPerfDomainHead;
  v0 = 2LL;
  PpmPerfDomainHead = (__int64)&PpmPerfDomainHead;
  dword_14032C77C = 50;
  dword_14032CCEC = 50;
  v1 = &unk_14032CCF0;
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
  dword_14032C794 = 100;
  stru_14032F210.WorkerRoutine = (void (__fastcall *)(void *))PpmMediaBufferingWorker;
  result = PpmPerfLatencySensitivityHintWorker;
  PpmPerfLatencyBoostWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmPerfLatencySensitivityHintWorker;
  dword_14032CD04 = 100;
  dword_14032C798 = 2;
  dword_14032CD08 = 2;
  PpmMediaBufferingWork = 0LL;
  stru_14032F210.Parameter = 0LL;
  stru_14032F210.List.Flink = 0LL;
  PpmPerfLatencyBoostWorkItem.Parameter = 0LL;
  PpmPerfLatencyBoostWorkItem.List.Flink = 0LL;
  return result;
}
