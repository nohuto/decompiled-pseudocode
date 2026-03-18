/*
 * XREFs of PspQueryJobHierarchyAccountingInformation @ 0x1403EAFE0
 * Callers:
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 * Callees:
 *     KeQuerySchedulingGroupReadyTime @ 0x140021D38 (KeQuerySchedulingGroupReadyTime.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1403EB6A8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1403EB8D0 (PspUnlockJob.c)
 *     PspLockRootJobShared @ 0x1403EBA18 (PspLockRootJobShared.c)
 *     PspUnlockJobConditionally @ 0x1403EC4B0 (PspUnlockJobConditionally.c)
 */

__int64 __fastcall PspQueryJobHierarchyAccountingInformation(char *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // ecx
  PVOID *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char *v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  _QWORD *v15; // rdi
  __int64 v16; // r8
  _QWORD v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18[44]; // [rsp+40h] [rbp-C0h] BYREF

  CurrentThread = KeGetCurrentThread();
  memset(v18, 0, sizeof(v18));
  PspLockRootJobShared(Object, CurrentThread, v17);
  v5 = 0;
  v6 = (PVOID *)v17;
  while ( Object != *v6 )
  {
    ++v5;
    ++v6;
    if ( v5 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(Object + 56), 1u);
      break;
    }
  }
  PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v18, 1);
  v7 = v18[11];
  *(_QWORD *)a2 = v18[11] + *((_QWORD *)Object + 20);
  *(_QWORD *)(a2 + 16) = *((_QWORD *)Object + 23) + v7;
  v8 = v18[10];
  *(_QWORD *)(a2 + 8) = v18[10] + *((_QWORD *)Object + 21);
  *(_QWORD *)(a2 + 24) = *((_QWORD *)Object + 24) + v8;
  *(_DWORD *)(a2 + 32) = LODWORD(v18[25]) + *((_DWORD *)Object + 52);
  *(_DWORD *)(a2 + 36) = *((_DWORD *)Object + 53);
  *(_DWORD *)(a2 + 40) = *((_DWORD *)Object + 54);
  *(_DWORD *)(a2 + 44) = *((_DWORD *)Object + 55);
  *(_QWORD *)(a2 + 48) = v18[14] + *((_QWORD *)Object + 61);
  *(_QWORD *)(a2 + 56) = v18[15] + *((_QWORD *)Object + 62);
  *(_QWORD *)(a2 + 64) = v18[16] + *((_QWORD *)Object + 63);
  *(_QWORD *)(a2 + 72) = v18[17] + *((_QWORD *)Object + 64);
  *(_QWORD *)(a2 + 80) = v18[18] + *((_QWORD *)Object + 65);
  *(_QWORD *)(a2 + 88) = v18[19] + *((_QWORD *)Object + 66);
  *(_QWORD *)(a2 + 96) = v18[20] + *((_QWORD *)Object + 67);
  *(_QWORD *)(a2 + 104) = v18[21] + *((_QWORD *)Object + 68);
  *(_QWORD *)(a2 + 112) = v18[22] + *((_QWORD *)Object + 69);
  *(_QWORD *)(a2 + 120) = v18[23] + *((_QWORD *)Object + 70);
  *(_QWORD *)(a2 + 128) = v18[24] + *((_QWORD *)Object + 71);
  *(_QWORD *)(a2 + 136) = v18[13] + *((_QWORD *)Object + 25);
  *(_QWORD *)(a2 + 144) = v18[12] + *((_QWORD *)Object + 22);
  *(_QWORD *)(a2 + 152) = *((_QWORD *)Object + 127);
  v9 = *((_QWORD *)Object + 125);
  if ( v9 )
    *(_QWORD *)(a2 + 152) += KeQuerySchedulingGroupReadyTime(v9 + 128);
  v10 = *((_QWORD *)Object + 163);
  if ( v10 )
  {
    *(_QWORD *)(a2 + 224) = v18[34] + *(_QWORD *)(v10 + 64);
    v12 = (char *)&v18[6] - a2;
    v13 = -160 - a2;
    v14 = 4LL;
    *(_QWORD *)(a2 + 232) = v18[35] + *(_QWORD *)(*((_QWORD *)Object + 163) + 72LL);
    *(_QWORD *)(a2 + 240) = v18[36] + *(_QWORD *)(*((_QWORD *)Object + 163) + 80LL);
    *(_QWORD *)(a2 + 248) = v18[37] + *(_QWORD *)(*((_QWORD *)Object + 163) + 88LL);
    *(_QWORD *)(a2 + 256) = v18[38] + *(_QWORD *)(*((_QWORD *)Object + 163) + 96LL);
    *(_QWORD *)(a2 + 296) = v18[43] + *(_QWORD *)(*((_QWORD *)Object + 163) + 136LL);
    *(_QWORD *)(a2 + 280) = v18[41] + *(_QWORD *)(*((_QWORD *)Object + 163) + 120LL);
    v15 = (_QWORD *)(a2 + 160);
    do
    {
      v16 = 2LL;
      do
      {
        *v15 = *(_QWORD *)((char *)v15 + (_QWORD)v12) + *(_QWORD *)((char *)v15 + v13 + *((_QWORD *)Object + 163));
        ++v15;
        --v16;
      }
      while ( v16 );
      --v14;
    }
    while ( v14 );
  }
  else
  {
    memset((void *)(a2 + 160), 0, 0x90uLL);
  }
  PspUnlockJobConditionally(Object, v17);
  return PspUnlockJob(v17[0], CurrentThread);
}
