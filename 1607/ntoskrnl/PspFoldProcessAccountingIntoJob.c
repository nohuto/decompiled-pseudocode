/*
 * XREFs of PspFoldProcessAccountingIntoJob @ 0x140468F4C
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x1400EFEA4 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PspUpdateJobPeakProcessMemory @ 0x140469068 (PspUpdateJobPeakProcessMemory.c)
 *     PsQueryProcessEnergyValues @ 0x1404F94C0 (PsQueryProcessEnergyValues.c)
 */

char __fastcall PspFoldProcessAccountingIntoJob(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  char *v9; // r8
  __int64 v10; // rdi
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  _QWORD v16[13]; // [rsp+20h] [rbp-59h] BYREF
  __int16 v17; // [rsp+8Ah] [rbp+11h]
  __int16 v18; // [rsp+8Ch] [rbp+13h]
  __int16 v19; // [rsp+8Eh] [rbp+15h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]
  __int64 v21; // [rsp+A8h] [rbp+2Fh]

  *(_QWORD *)(a1 + 1008) += a3[2];
  v5 = *a3;
  *(_QWORD *)(a1 + 176) += a3[3];
  v6 = a3[1];
  *(_QWORD *)(a1 + 168) += v5;
  *(_QWORD *)(a1 + 192) += v5;
  v7 = 6LL;
  *(_QWORD *)(a1 + 200) += a3[4];
  *(_QWORD *)(a1 + 160) += v6;
  *(_QWORD *)(a1 + 184) += v6;
  v8 = (_QWORD *)(a1 + 488);
  v9 = (char *)a3 - a1;
  do
  {
    *v8 += *(_QWORD *)((char *)v8 + (_QWORD)v9 - 448);
    ++v8;
    --v7;
  }
  while ( v7 );
  v10 = 0LL;
  *(_DWORD *)(a1 + 208) += *(_DWORD *)(a2 + 1284);
  v11 = *(_QWORD **)(a2 + 1800);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 536) += *v11;
    *(_QWORD *)(a1 + 544) += v11[1];
    *(_QWORD *)(a1 + 552) += v11[2];
    *(_QWORD *)(a1 + 560) += v11[3];
    *(_QWORD *)(a1 + 568) += v11[4];
  }
  PspUpdateJobPeakProcessMemory(a1, *(_QWORD *)(a2 + 1272));
  LOBYTE(v12) = PoEnergyEstimationEnabled();
  if ( (_BYTE)v12 )
  {
    PsQueryProcessEnergyValues(a2, v16);
    v13 = 4LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 64LL) += v16[8];
    *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 72LL) += v16[9];
    *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 80LL) += v16[10];
    *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 88LL) += v16[11];
    *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 96LL) += v16[12];
    *(_WORD *)(*(_QWORD *)(a1 + 1312) + 106LL) += v17;
    *(_WORD *)(*(_QWORD *)(a1 + 1312) + 108LL) += v18;
    *(_WORD *)(*(_QWORD *)(a1 + 1312) + 110LL) += v19;
    *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 120LL) += v20;
    *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 136LL) += v21;
    do
    {
      v14 = 2LL;
      do
      {
        v12 = v16[v10];
        *(_QWORD *)(*(_QWORD *)(a1 + 1312) + v10 * 8) += v12;
        ++v10;
        --v14;
      }
      while ( v14 );
      --v13;
    }
    while ( v13 );
  }
  return v12;
}
