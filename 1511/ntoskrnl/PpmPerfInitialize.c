/*
 * XREFs of PpmPerfInitialize @ 0x140770928
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (*PpmPerfInitialize())()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  __int64 (*result)(); // rax

  qword_1403823B0 = (__int64)&PpmPerfDomainHead;
  v0 = 2LL;
  PpmPerfDomainHead = (__int64)&PpmPerfDomainHead;
  dword_1402DC39C = 50;
  dword_1402DC90C = 50;
  v1 = &unk_1402DC910;
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
  dword_1402DC3B4 = 100;
  stru_1402DEF30.WorkerRoutine = (void (__fastcall *)(void *))PpmMediaBufferingWorker;
  result = PpmPerfLatencySensitivityHintWorker;
  PpmPerfLatencyBoostWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmPerfLatencySensitivityHintWorker;
  dword_1402DC924 = 100;
  dword_1402DC3B8 = 2;
  dword_1402DC928 = 2;
  PpmMediaBufferingWork = 0LL;
  stru_1402DEF30.Parameter = 0LL;
  stru_1402DEF30.List.Flink = 0LL;
  PpmPerfLatencyBoostWorkItem.Parameter = 0LL;
  PpmPerfLatencyBoostWorkItem.List.Flink = 0LL;
  return result;
}
