/*
 * XREFs of PspQueryJobHierarchyAccountingInformation @ 0x140468AE0
 * Callers:
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1400A5870 (KeQuerySchedulingGroupReadyTime.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 *     PspLockRootJobShared @ 0x140467DC8 (PspLockRootJobShared.c)
 *     PspUnlockJobConditionally @ 0x1404687F4 (PspUnlockJobConditionally.c)
 */

void __fastcall PspQueryJobHierarchyAccountingInformation(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // ecx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char *v11; // r10
  __int64 v12; // r11
  __int64 v13; // r9
  _QWORD *v14; // rdi
  __int64 v15; // r8
  __int64 v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[46]; // [rsp+40h] [rbp-C0h] BYREF

  CurrentThread = KeGetCurrentThread();
  memset(v17, 0, sizeof(v17));
  PspLockRootJobShared(a1, (__int64)CurrentThread, v16);
  v5 = 0;
  v6 = v16;
  while ( a1 != *v6 )
  {
    ++v5;
    ++v6;
    if ( v5 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
      break;
    }
  }
  PspEnumJobsAndProcessesInJobHierarchy(
    (_QWORD *)a1,
    0,
    0,
    (int)PspQueryProcessAccountingInformationCallback,
    (__int64)v17,
    1);
  v7 = v17[12];
  *(_QWORD *)a2 = v17[12] + *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 184) + v7;
  v8 = v17[11];
  *(_QWORD *)(a2 + 8) = v17[11] + *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 192) + v8;
  *(_DWORD *)(a2 + 32) = LODWORD(v17[27]) + *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 212);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 216);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 220);
  *(_QWORD *)(a2 + 48) = v17[16] + *(_QWORD *)(a1 + 488);
  *(_QWORD *)(a2 + 56) = v17[17] + *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a2 + 64) = v17[18] + *(_QWORD *)(a1 + 504);
  *(_QWORD *)(a2 + 72) = v17[19] + *(_QWORD *)(a1 + 512);
  *(_QWORD *)(a2 + 80) = v17[20] + *(_QWORD *)(a1 + 520);
  *(_QWORD *)(a2 + 88) = v17[21] + *(_QWORD *)(a1 + 528);
  *(_QWORD *)(a2 + 96) = v17[22] + *(_QWORD *)(a1 + 536);
  *(_QWORD *)(a2 + 104) = v17[23] + *(_QWORD *)(a1 + 544);
  *(_QWORD *)(a2 + 112) = v17[24] + *(_QWORD *)(a1 + 552);
  *(_QWORD *)(a2 + 120) = v17[25] + *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a2 + 128) = v17[26] + *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a2 + 136) = v17[15] + *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a2 + 144) = v17[14] + *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a2 + 152) = v17[13] + *(_QWORD *)(a1 + 1008);
  v9 = *(_QWORD *)(a1 + 992);
  if ( v9 )
    *(_QWORD *)(a2 + 152) += KeQuerySchedulingGroupReadyTime(v9 + 128);
  v10 = *(_QWORD *)(a1 + 1312);
  if ( v10 )
  {
    *(_QWORD *)(a2 + 224) = v17[36] + *(_QWORD *)(v10 + 64);
    v11 = (char *)&v17[8] - a2;
    v12 = -160 - a2;
    v13 = 4LL;
    *(_QWORD *)(a2 + 232) = v17[37] + *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 72LL);
    *(_QWORD *)(a2 + 240) = v17[38] + *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 80LL);
    *(_QWORD *)(a2 + 248) = v17[39] + *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 88LL);
    *(_QWORD *)(a2 + 256) = v17[40] + *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 96LL);
    *(_WORD *)(a2 + 266) = WORD1(v17[41]) + *(_WORD *)(*(_QWORD *)(a1 + 1312) + 106LL);
    *(_WORD *)(a2 + 268) = WORD2(v17[41]) + *(_WORD *)(*(_QWORD *)(a1 + 1312) + 108LL);
    *(_WORD *)(a2 + 270) = HIWORD(v17[41]) + *(_WORD *)(*(_QWORD *)(a1 + 1312) + 110LL);
    *(_QWORD *)(a2 + 280) = v17[43] + *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 120LL);
    *(_QWORD *)(a2 + 296) = v17[45] + *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 136LL);
    v14 = (_QWORD *)(a2 + 160);
    do
    {
      v15 = 2LL;
      do
      {
        *v14 = *(_QWORD *)((char *)v14 + (_QWORD)v11) + *(_QWORD *)((char *)v14 + v12 + *(_QWORD *)(a1 + 1312));
        ++v14;
        --v15;
      }
      while ( v15 );
      --v13;
    }
    while ( v13 );
  }
  else
  {
    memset((void *)(a2 + 160), 0, 0x90uLL);
  }
  PspUnlockJobConditionally(a1, v16);
  PspUnlockJob(v16[0], (__int64)CurrentThread);
}
