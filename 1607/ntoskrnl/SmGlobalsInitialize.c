/*
 * XREFs of SmGlobalsInitialize @ 0x1407B6398
 * Callers:
 *     SmInitSystem @ 0x1407B62B8 (SmInitSystem.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140148AB4 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SmRegistrationCtxInitialize @ 0x1404D3710 (SmRegistrationCtxInitialize.c)
 */

__int64 __fastcall SmGlobalsInitialize(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  __int64 v3; // rsi
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  memset((void *)a1, 0, 0xAA0uLL);
  *(_QWORD *)&v5 = 27LL;
  *((_QWORD *)&v5 + 1) = xHalTimerWatchdogStop;
  SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(a1, &v5);
  *(_QWORD *)(a1 + 1768) = 0LL;
  SmKmGlobals = PsInitialSystemProcess;
  memset((void *)(a1 + 1808), 0, 0x28uLL);
  *(_QWORD *)(a1 + 1808) = 0LL;
  *(_QWORD *)(a1 + 1816) = 0LL;
  *(_QWORD *)(a1 + 1824) = 0LL;
  *(_DWORD *)(a1 + 1848) = -1;
  *(_QWORD *)(a1 + 1856) = 0LL;
  *(_DWORD *)(a1 + 1776) = 5;
  memset((void *)(a1 + 1864), 0, 0x230uLL);
  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 1872);
  v3 = 16LL;
  do
  {
    v2->Count = 0LL;
    ExWaitForRundownProtectionRelease(v2);
    v2[1].Count = 0LL;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  memset((void *)(a1 + 2376), 0, 0x28uLL);
  *(_QWORD *)(a1 + 2376) = 0LL;
  *(_QWORD *)(a1 + 2392) = a1 + 2384;
  *(_QWORD *)(a1 + 2384) = a1 + 2384;
  SmRegistrationCtxInitialize((_QWORD *)(a1 + 2424));
  *(_QWORD *)(a1 + 2440) = 0LL;
  *(_QWORD *)(a1 + 2448) = 0LL;
  *(_QWORD *)(a1 + 2432) = 0LL;
  memset((void *)(a1 + 2456), 0, 0x70uLL);
  *(_WORD *)(a1 + 2464) = 1;
  *(_BYTE *)(a1 + 2466) = 6;
  *(_DWORD *)(a1 + 2468) = 0;
  *(_QWORD *)(a1 + 2480) = a1 + 2472;
  *(_QWORD *)(a1 + 2472) = a1 + 2472;
  memset((void *)(a1 + 2568), 0, 0x70uLL);
  result = a1 + 2584;
  *(_WORD *)(a1 + 2576) = 1;
  *(_BYTE *)(a1 + 2578) = 6;
  *(_DWORD *)(a1 + 2580) = 0;
  *(_QWORD *)(a1 + 2592) = a1 + 2584;
  *(_QWORD *)(a1 + 2584) = a1 + 2584;
  *(_DWORD *)(a1 + 2712) = 3;
  return result;
}
