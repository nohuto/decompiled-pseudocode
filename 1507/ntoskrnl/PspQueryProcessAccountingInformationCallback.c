/*
 * XREFs of PspQueryProcessAccountingInformationCallback @ 0x14054B990
 * Callers:
 *     <none>
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140021210 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PsQueryStatisticsProcess @ 0x140508494 (PsQueryStatisticsProcess.c)
 *     PsQueryProcessEnergyValues @ 0x1406BFAB8 (PsQueryProcessEnergyValues.c)
 */

__int64 __fastcall PspQueryProcessAccountingInformationCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // r9
  _QWORD *v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rdx
  _BYTE *v13; // rdx
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  _BYTE v16[64]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-68h]
  __int64 v18; // [rsp+68h] [rbp-60h]
  __int64 v19; // [rsp+70h] [rbp-58h]
  __int64 v20; // [rsp+78h] [rbp-50h]
  __int64 v21; // [rsp+80h] [rbp-48h]
  __int64 v22; // [rsp+98h] [rbp-30h]
  __int64 v23; // [rsp+A8h] [rbp-20h]

  if ( (*(_DWORD *)(a1 + 768) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, (_QWORD *)a2, a3, a4);
    v6 = 4LL;
    v7 = (_QWORD *)(a2 + 80);
    v8 = 4LL;
    do
    {
      *v7 += *(v7 - 10);
      ++v7;
      --v8;
    }
    while ( v8 );
    v9 = (_QWORD *)(a2 + 112);
    v10 = 6LL;
    do
    {
      *v9 += *(v9 - 10);
      ++v9;
      --v10;
    }
    while ( v10 );
    *(_DWORD *)(a2 + 200) += *(_DWORD *)(a1 + 1468);
    v11 = *(_QWORD **)(a1 + 1776);
    if ( v11 )
    {
      *(_QWORD *)(a2 + 160) += *v11;
      *(_QWORD *)(a2 + 168) += v11[1];
      *(_QWORD *)(a2 + 176) += v11[2];
      *(_QWORD *)(a2 + 184) += v11[3];
      *(_QWORD *)(a2 + 192) += v11[4];
    }
    if ( PoEnergyEstimationEnabled() )
    {
      PsQueryProcessEnergyValues(a1, v16);
      *(_QWORD *)(a2 + 272) += v17;
      v13 = &v16[-a2];
      *(_QWORD *)(a2 + 280) += v18;
      *(_QWORD *)(a2 + 288) += v19;
      *(_QWORD *)(a2 + 296) += v20;
      *(_QWORD *)(a2 + 304) += v21;
      *(_QWORD *)(a2 + 344) += v23;
      *(_QWORD *)(a2 + 328) += v22;
      v14 = (_QWORD *)(a2 + 208);
      do
      {
        v15 = 2LL;
        do
        {
          *v14 += *(_QWORD *)((char *)v14 + (_QWORD)v13 - 208);
          ++v14;
          --v15;
        }
        while ( v15 );
        --v6;
      }
      while ( v6 );
    }
  }
  return 0LL;
}
