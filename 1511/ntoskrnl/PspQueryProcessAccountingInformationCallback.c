/*
 * XREFs of PspQueryProcessAccountingInformationCallback @ 0x1403EBDD8
 * Callers:
 *     <none>
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x14002D424 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PspAddAccountingValues @ 0x1403EBE98 (PspAddAccountingValues.c)
 *     PsQueryStatisticsProcess @ 0x1403EC180 (PsQueryStatisticsProcess.c)
 *     PsQueryProcessEnergyValues @ 0x1403F1B44 (PsQueryProcessEnergyValues.c)
 */

__int64 __fastcall PspQueryProcessAccountingInformationCallback(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  _BYTE *v6; // r8
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _BYTE v10[64]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+60h] [rbp-68h]
  __int64 v12; // [rsp+68h] [rbp-60h]
  __int64 v13; // [rsp+70h] [rbp-58h]
  __int64 v14; // [rsp+78h] [rbp-50h]
  __int64 v15; // [rsp+80h] [rbp-48h]
  __int64 v16; // [rsp+98h] [rbp-30h]
  __int64 v17; // [rsp+A8h] [rbp-20h]

  if ( (*(_DWORD *)(a1 + 768) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, a2);
    PspAddAccountingValues(a2 + 80, a2);
    *(_DWORD *)(a2 + 200) += *(_DWORD *)(a1 + 1476);
    v4 = *(_QWORD **)(a1 + 1784);
    if ( v4 )
    {
      *(_QWORD *)(a2 + 160) += *v4;
      *(_QWORD *)(a2 + 168) += v4[1];
      *(_QWORD *)(a2 + 176) += v4[2];
      *(_QWORD *)(a2 + 184) += v4[3];
      *(_QWORD *)(a2 + 192) += v4[4];
    }
    if ( PoEnergyEstimationEnabled() )
    {
      PsQueryProcessEnergyValues(a1, v10);
      *(_QWORD *)(a2 + 272) += v11;
      v6 = &v10[-a2];
      v7 = 4LL;
      *(_QWORD *)(a2 + 280) += v12;
      *(_QWORD *)(a2 + 288) += v13;
      *(_QWORD *)(a2 + 296) += v14;
      *(_QWORD *)(a2 + 304) += v15;
      *(_QWORD *)(a2 + 344) += v17;
      *(_QWORD *)(a2 + 328) += v16;
      v8 = (_QWORD *)(a2 + 208);
      do
      {
        v9 = 2LL;
        do
        {
          *v8 += *(_QWORD *)((char *)v8 + (_QWORD)v6 - 208);
          ++v8;
          --v9;
        }
        while ( v9 );
        --v7;
      }
      while ( v7 );
    }
  }
  return 0LL;
}
