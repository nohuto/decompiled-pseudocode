/*
 * XREFs of PspQueryProcessAccountingInformationCallback @ 0x140468A1C
 * Callers:
 *     <none>
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x1400EFEA4 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PsQueryStatisticsProcess @ 0x14044DA90 (PsQueryStatisticsProcess.c)
 *     PspAddAccountingValues @ 0x140468358 (PspAddAccountingValues.c)
 *     PsQueryProcessEnergyValues @ 0x1404F94C0 (PsQueryProcessEnergyValues.c)
 */

__int64 __fastcall PspQueryProcessAccountingInformationCallback(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  _BYTE *v6; // r8
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _BYTE v10[64]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  __int64 v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+Fh]
  __int64 v15; // [rsp+80h] [rbp+17h]
  __int16 v16; // [rsp+8Ah] [rbp+21h]
  __int16 v17; // [rsp+8Ch] [rbp+23h]
  __int16 v18; // [rsp+8Eh] [rbp+25h]
  __int64 v19; // [rsp+98h] [rbp+2Fh]
  __int64 v20; // [rsp+A8h] [rbp+3Fh]

  if ( (*(_DWORD *)(a1 + 768) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, (_QWORD *)a2);
    PspAddAccountingValues((_QWORD *)(a2 + 88), (char *)a2);
    *(_DWORD *)(a2 + 216) += *(_DWORD *)(a1 + 1284);
    v4 = *(_QWORD **)(a1 + 1800);
    if ( v4 )
    {
      *(_QWORD *)(a2 + 176) += *v4;
      *(_QWORD *)(a2 + 184) += v4[1];
      *(_QWORD *)(a2 + 192) += v4[2];
      *(_QWORD *)(a2 + 200) += v4[3];
      *(_QWORD *)(a2 + 208) += v4[4];
    }
    if ( PoEnergyEstimationEnabled() )
    {
      PsQueryProcessEnergyValues(a1, v10);
      *(_QWORD *)(a2 + 288) += v11;
      v6 = &v10[-a2];
      v7 = 4LL;
      *(_QWORD *)(a2 + 296) += v12;
      *(_QWORD *)(a2 + 304) += v13;
      *(_QWORD *)(a2 + 312) += v14;
      *(_QWORD *)(a2 + 320) += v15;
      *(_WORD *)(a2 + 330) += v16;
      *(_WORD *)(a2 + 332) += v17;
      *(_WORD *)(a2 + 334) += v18;
      *(_QWORD *)(a2 + 344) += v19;
      *(_QWORD *)(a2 + 360) += v20;
      v8 = (_QWORD *)(a2 + 224);
      do
      {
        v9 = 2LL;
        do
        {
          *v8 += *(_QWORD *)((char *)v8 + (_QWORD)v6 - 224);
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
