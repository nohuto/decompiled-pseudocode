/*
 * XREFs of ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14016C2EC
 * Callers:
 *     SmGlobalsInitialize @ 0x1407DEC20 (SmGlobalsInitialize.c)
 * Callees:
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SmKmInitialize @ 0x1405B614C (SmKmInitialize.c)
 */

__int64 (__fastcall *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(__int64 a1, _OWORD *a2))(__int64 a1)
{
  _DWORD *v4; // rdx
  _QWORD *v5; // r9
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // r10
  __int64 v9; // rsi
  int v10; // eax
  _QWORD *v11; // rax
  __int64 (__fastcall *result)(__int64); // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  memset((void *)a1, 0, 0x2790uLL);
  *(_OWORD *)(a1 + 10096) = *a2;
  SmKmInitialize(a1);
  v4 = (_DWORD *)(a1 + 6112);
  *(_QWORD *)(a1 + 5816) = 0LL;
  *(_QWORD *)(a1 + 5824) = 0LL;
  v5 = (_QWORD *)(a1 + 5848);
  *(_QWORD *)(a1 + 5832) = 0LL;
  v6 = a1 + 7408;
  v7 = 0;
  v8 = a1 + 7384;
  v9 = 32LL;
  do
  {
    *v5++ = 0LL;
    v10 = *(v4 - 2);
    *v4 &= 0xFFFFFFF8;
    *(v4 - 2) = v10 & 0xFFFFFFF8 | 4;
    v4 += 10;
    *(_DWORD *)(v6 + 16) = v7;
    *(_QWORD *)(v6 + 8) = a1;
    ++v7;
    *(_QWORD *)v6 = v8;
    v8 += 48LL;
    *(_QWORD *)(v6 - 8) = SMKM_STORE_MGR<SM_TRAITS>::SmEmptyWorker;
    *(_QWORD *)(v6 - 24) = 0LL;
    v6 += 48LL;
  }
  while ( v7 < 0x20 );
  memset((void *)(a1 + 9712), 0, 0x68uLL);
  *(_WORD *)(a1 + 9720) = 1;
  *(_BYTE *)(a1 + 9722) = 6;
  *(_DWORD *)(a1 + 9724) = 0;
  *(_QWORD *)(a1 + 9736) = a1 + 9728;
  *(_QWORD *)(a1 + 9728) = a1 + 9728;
  memset((void *)(a1 + 9816), 0, 0x68uLL);
  *(_WORD *)(a1 + 9824) = 1;
  *(_BYTE *)(a1 + 9826) = 6;
  *(_DWORD *)(a1 + 9828) = 0;
  *(_QWORD *)(a1 + 9840) = a1 + 9832;
  *(_QWORD *)(a1 + 9832) = a1 + 9832;
  memset((void *)(a1 + 8920), 0, 0x308uLL);
  v11 = (_QWORD *)(a1 + 8920);
  do
  {
    v11[1] = v11;
    *v11 = 0LL;
    v11 += 3;
    --v9;
  }
  while ( v9 );
  *(_QWORD *)(a1 + 9688) = 0LL;
  InitializeSListHead((PSLIST_HEADER)(a1 + 9696));
  KeQueryPerformanceCounter(&PerformanceFrequency);
  *(_DWORD *)(a1 + 10112) = 10000 * PerformanceFrequency.QuadPart / 1000000;
  *(_QWORD *)(a1 + 9936) = 0LL;
  *(_BYTE *)(a1 + 9936) = 8;
  *(_QWORD *)(a1 + 9952) = a1 + 9944;
  *(_QWORD *)(a1 + 9944) = a1 + 9944;
  *(_QWORD *)(a1 + 9960) = 0LL;
  *(_QWORD *)(a1 + 9992) = 0LL;
  *(_QWORD *)(a1 + 10024) = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogDpc;
  result = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker;
  *(_DWORD *)(a1 + 10000) = 275;
  *(_QWORD *)(a1 + 10032) = a1;
  *(_QWORD *)(a1 + 10056) = 0LL;
  *(_QWORD *)(a1 + 10016) = 0LL;
  *(_QWORD *)(a1 + 10080) = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker;
  *(_QWORD *)(a1 + 10088) = 0LL;
  *(_QWORD *)(a1 + 10064) = 0LL;
  return result;
}
