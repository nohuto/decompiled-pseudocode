/*
 * XREFs of PsQueryProcessEnergyValues @ 0x1404F94C0
 * Callers:
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140468A1C (PspQueryProcessAccountingInformationCallback.c)
 *     PspFoldProcessAccountingIntoJob @ 0x140468F4C (PspFoldProcessAccountingIntoJob.c)
 * Callees:
 *     PspUnlockProcessThreadListShared @ 0x140095498 (PspUnlockProcessThreadListShared.c)
 *     PspLockProcessThreadListShared @ 0x1400954DC (PspLockProcessThreadListShared.c)
 *     PoEnergyEstimationEnabled @ 0x1400EFEA4 (PoEnergyEstimationEnabled.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

void *__fastcall PsQueryProcessEnergyValues(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  _QWORD *i; // r8
  _QWORD *v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rsi
  __int64 v16; // r11

  if ( !PoEnergyEstimationEnabled() || a1 == PsIdleProcess )
    return memset((void *)a2, 0, 0x90uLL);
  CurrentThread = KeGetCurrentThread();
  PspLockProcessThreadListShared((__int64)a1, (__int64)CurrentThread);
  v6 = a1[230];
  v7 = (_QWORD *)a2;
  v8 = 4LL;
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(v6 + 64);
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(v6 + 72);
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(v6 + 80);
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(v6 + 88);
  *(_QWORD *)(a2 + 96) = *(_QWORD *)(v6 + 96);
  *(_WORD *)(a2 + 104) = *(_WORD *)(v6 + 104);
  *(_WORD *)(a2 + 106) = *(_WORD *)(v6 + 106);
  *(_WORD *)(a2 + 108) = *(_WORD *)(v6 + 108);
  *(_WORD *)(a2 + 110) = *(_WORD *)(v6 + 110);
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(v6 + 112);
  *(_QWORD *)(a2 + 120) = *(_QWORD *)(v6 + 120);
  *(_QWORD *)(a2 + 128) = *(_QWORD *)(v6 + 128);
  v9 = *(_QWORD *)(v6 + 136);
  v10 = v6 - a2;
  *(_QWORD *)(a2 + 136) = v9;
  do
  {
    v11 = 2LL;
    do
    {
      *v7 = *(_QWORD *)((char *)v7 + v10);
      ++v7;
      --v11;
    }
    while ( v11 );
    --v8;
  }
  while ( v8 );
  for ( i = (_QWORD *)a1[145]; i != a1 + 145; i = (_QWORD *)*i )
  {
    v13 = (_QWORD *)a2;
    v14 = i[34] - a2;
    v15 = 4LL;
    do
    {
      v16 = 2LL;
      do
      {
        *v13 += *(_QWORD *)((char *)v13 + v14);
        ++v13;
        --v16;
      }
      while ( v16 );
      --v15;
    }
    while ( v15 );
  }
  return (void *)PspUnlockProcessThreadListShared((__int64)a1, (__int64)CurrentThread);
}
