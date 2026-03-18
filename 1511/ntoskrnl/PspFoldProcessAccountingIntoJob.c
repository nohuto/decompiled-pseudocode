/*
 * XREFs of PspFoldProcessAccountingIntoJob @ 0x1403EC880
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x1403E96D0 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x14002D424 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PsQueryProcessEnergyValues @ 0x1403F1B44 (PsQueryProcessEnergyValues.c)
 */

char __fastcall PspFoldProcessAccountingIntoJob(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdx
  __int64 v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  char *v9; // r8
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  _QWORD v19[18]; // [rsp+20h] [rbp-A8h] BYREF

  v4 = *a3;
  *(_QWORD *)(a1 + 176) += a3[2];
  v6 = a3[1];
  *(_QWORD *)(a1 + 168) += v4;
  *(_QWORD *)(a1 + 192) += v4;
  v7 = 6LL;
  *(_QWORD *)(a1 + 200) += a3[3];
  *(_QWORD *)(a1 + 160) += v6;
  *(_QWORD *)(a1 + 184) += v6;
  v8 = (_QWORD *)(a1 + 488);
  v9 = (char *)a3 - a1;
  do
  {
    *v8 += *(_QWORD *)((char *)v8 + (_QWORD)v9 - 456);
    ++v8;
    --v7;
  }
  while ( v7 );
  v10 = 0LL;
  *(_DWORD *)(a1 + 208) += *(_DWORD *)(a2 + 1476);
  v11 = *(_QWORD **)(a2 + 1784);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 536) += *v11;
    *(_QWORD *)(a1 + 544) += v11[1];
    *(_QWORD *)(a1 + 552) += v11[2];
    *(_QWORD *)(a1 + 560) += v11[3];
    *(_QWORD *)(a1 + 568) += v11[4];
  }
  v12 = *(_QWORD *)(a2 + 1272);
  if ( v12 > *(_QWORD *)(a1 + 600) )
  {
    _m_prefetchw((const void *)(a1 + 600));
    v14 = *(_QWORD *)(a1 + 600);
    do
    {
      if ( v12 <= v14 )
        break;
      v15 = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 600), v12, v14);
    }
    while ( v14 != v15 );
  }
  LOBYTE(v13) = PoEnergyEstimationEnabled();
  if ( (_BYTE)v13 )
  {
    PsQueryProcessEnergyValues(a2, v19);
    v16 = 4LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 64LL) += v19[8];
    *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 72LL) += v19[9];
    *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 80LL) += v19[10];
    *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 88LL) += v19[11];
    *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 96LL) += v19[12];
    *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 136LL) += v19[17];
    *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 120LL) += v19[15];
    do
    {
      v17 = 2LL;
      do
      {
        v13 = v19[v10];
        *(_QWORD *)(*(_QWORD *)(a1 + 1304) + v10 * 8) += v13;
        ++v10;
        --v17;
      }
      while ( v17 );
      --v16;
    }
    while ( v16 );
  }
  return v13;
}
