/*
 * XREFs of ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140148AB4
 * Callers:
 *     SmGlobalsInitialize @ 0x1407B6398 (SmGlobalsInitialize.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SmKmInitialize @ 0x140576AD4 (SmKmInitialize.c)
 */

void (__fastcall *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(__int64 a1, _OWORD *a2))(__int64 a1)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  void (__fastcall *result)(__int64); // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  memset((void *)a1, 0, 0x6A0uLL);
  *(_OWORD *)(a1 + 1664) = *a2;
  SmKmInitialize(a1);
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  memset((void *)(a1 + 1264), 0, 0x70uLL);
  *(_WORD *)(a1 + 1272) = 1;
  *(_BYTE *)(a1 + 1274) = 6;
  *(_DWORD *)(a1 + 1276) = 0;
  *(_QWORD *)(a1 + 1288) = a1 + 1280;
  *(_QWORD *)(a1 + 1280) = a1 + 1280;
  memset((void *)(a1 + 1376), 0, 0x70uLL);
  *(_WORD *)(a1 + 1384) = 1;
  *(_BYTE *)(a1 + 1386) = 6;
  *(_DWORD *)(a1 + 1388) = 0;
  *(_QWORD *)(a1 + 1400) = a1 + 1392;
  *(_QWORD *)(a1 + 1392) = a1 + 1392;
  memset((void *)(a1 + 464), 0, 0x308uLL);
  v4 = (_QWORD *)(a1 + 464);
  v5 = 32LL;
  do
  {
    v4[1] = v4;
    *v4 = 0LL;
    v4 += 3;
    --v5;
  }
  while ( v5 );
  *(_QWORD *)(a1 + 1232) = 0LL;
  InitializeSListHead((PSLIST_HEADER)(a1 + 1248));
  KeQueryPerformanceCounter(&PerformanceFrequency);
  *(_DWORD *)(a1 + 1680) = 10000 * PerformanceFrequency.QuadPart / 1000000;
  *(_QWORD *)(a1 + 1504) = 0LL;
  *(_BYTE *)(a1 + 1504) = 8;
  *(_QWORD *)(a1 + 1520) = a1 + 1512;
  *(_QWORD *)(a1 + 1512) = a1 + 1512;
  *(_QWORD *)(a1 + 1528) = 0LL;
  *(_QWORD *)(a1 + 1560) = 0LL;
  *(_QWORD *)(a1 + 1592) = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogDpc;
  result = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker;
  *(_QWORD *)(a1 + 1624) = 0LL;
  *(_QWORD *)(a1 + 1584) = 0LL;
  *(_DWORD *)(a1 + 1568) = 275;
  *(_QWORD *)(a1 + 1600) = a1;
  *(_QWORD *)(a1 + 1656) = 0LL;
  *(_QWORD *)(a1 + 1632) = 0LL;
  *(_QWORD *)(a1 + 1648) = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker;
  return result;
}
