/*
 * XREFs of PspQueryJobHierarchyAccountingInformation @ 0x140415378
 * Callers:
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 * Callees:
 *     KeQuerySchedulingGroupReadyTime @ 0x1400082DC (KeQuerySchedulingGroupReadyTime.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140506878 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

void __fastcall PspQueryJobHierarchyAccountingInformation(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v5; // rax
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ecx
  __int64 *v12; // rax
  __int16 v13; // ax
  char *v14; // r10
  __int64 v15; // r11
  __int64 v16; // r9
  _QWORD *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // [rsp+30h] [rbp-D0h]
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v21[44]; // [rsp+40h] [rbp-C0h] BYREF

  CurrentThread = KeGetCurrentThread();
  memset(v21, 0, sizeof(v21));
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  while ( 1 )
  {
    v19 = *(_QWORD *)(a1 + 1072);
    ExAcquireResourceSharedLite((PERESOURCE)(v19 + 56), 1u);
    if ( v19 == *(_QWORD *)(a1 + 1072) )
      break;
    ExReleaseResourceLite((PERESOURCE)(v19 + 56));
  }
  v5 = &v20;
  v20 = v19;
  v6 = 0;
  while ( a1 != *v5 )
  {
    ++v6;
    ++v5;
    if ( v6 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
      break;
    }
  }
  PspEnumJobsAndProcessesInJobHierarchy(
    a1,
    0,
    0,
    (unsigned int)PspQueryProcessAccountingInformationCallback,
    (__int64)v21,
    1);
  v7 = v21[11];
  *(_QWORD *)a2 = v21[11] + *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 184) + v7;
  v8 = v21[10];
  *(_QWORD *)(a2 + 8) = v21[10] + *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 192) + v8;
  *(_DWORD *)(a2 + 32) = LODWORD(v21[25]) + *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 212);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 216);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 220);
  *(_QWORD *)(a2 + 48) = v21[14] + *(_QWORD *)(a1 + 488);
  *(_QWORD *)(a2 + 56) = v21[15] + *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a2 + 64) = v21[16] + *(_QWORD *)(a1 + 504);
  *(_QWORD *)(a2 + 72) = v21[17] + *(_QWORD *)(a1 + 512);
  *(_QWORD *)(a2 + 80) = v21[18] + *(_QWORD *)(a1 + 520);
  *(_QWORD *)(a2 + 88) = v21[19] + *(_QWORD *)(a1 + 528);
  *(_QWORD *)(a2 + 96) = v21[20] + *(_QWORD *)(a1 + 536);
  *(_QWORD *)(a2 + 104) = v21[21] + *(_QWORD *)(a1 + 544);
  *(_QWORD *)(a2 + 112) = v21[22] + *(_QWORD *)(a1 + 552);
  *(_QWORD *)(a2 + 120) = v21[23] + *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a2 + 128) = v21[24] + *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a2 + 136) = v21[13] + *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a2 + 144) = v21[12] + *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a2 + 152) = *(_QWORD *)(a1 + 1016);
  v9 = *(_QWORD *)(a1 + 1000);
  if ( v9 )
    *(_QWORD *)(a2 + 152) += KeQuerySchedulingGroupReadyTime(v9 + 128);
  v10 = *(_QWORD *)(a1 + 1304);
  if ( v10 )
  {
    *(_QWORD *)(a2 + 224) = v21[34] + *(_QWORD *)(v10 + 64);
    v14 = (char *)&v21[6] - a2;
    v15 = -160 - a2;
    v16 = 4LL;
    *(_QWORD *)(a2 + 232) = v21[35] + *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 72LL);
    *(_QWORD *)(a2 + 240) = v21[36] + *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 80LL);
    *(_QWORD *)(a2 + 248) = v21[37] + *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 88LL);
    *(_QWORD *)(a2 + 256) = v21[38] + *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 96LL);
    *(_QWORD *)(a2 + 296) = v21[43] + *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 136LL);
    *(_QWORD *)(a2 + 280) = v21[41] + *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 120LL);
    v17 = (_QWORD *)(a2 + 160);
    do
    {
      v18 = 2LL;
      do
      {
        *v17 = *(_QWORD *)((char *)v17 + (_QWORD)v14) + *(_QWORD *)((char *)v17 + v15 + *(_QWORD *)(a1 + 1304));
        ++v17;
        --v18;
      }
      while ( v18 );
      --v16;
    }
    while ( v16 );
  }
  else
  {
    memset((void *)(a2 + 160), 0, 0x90uLL);
  }
  v11 = 0;
  v12 = &v20;
  while ( a1 != *v12 )
  {
    ++v11;
    ++v12;
    if ( v11 )
    {
      ExReleaseResourceLite((PERESOURCE)(a1 + 56));
      break;
    }
  }
  ExReleaseResourceLite((PERESOURCE)(v19 + 56));
  if ( CurrentThread )
  {
    v13 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
