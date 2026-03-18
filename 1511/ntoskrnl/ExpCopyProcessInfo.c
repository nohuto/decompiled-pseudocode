/*
 * XREFs of ExpCopyProcessInfo @ 0x1403EBED0
 * Callers:
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x140079F60 (ExfAcquireRundownProtection.c)
 *     PsQueryStatisticsProcess @ 0x1403EC180 (PsQueryStatisticsProcess.c)
 *     ExHandleTableQuery @ 0x1403EC340 (ExHandleTableQuery.c)
 */

__int64 __fastcall ExpCopyProcessInfo(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  struct _EX_RUNDOWN_REF *v8; // r14
  unsigned __int64 v9; // rtt
  __int64 v10; // rsi
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  int v15; // [rsp+24h] [rbp-54h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-30h]
  unsigned __int64 v20; // [rsp+50h] [rbp-28h]
  unsigned __int64 v21; // [rsp+58h] [rbp-20h]

  v19 = 0LL;
  v8 = (struct _EX_RUNDOWN_REF *)(a2 + 736);
  _m_prefetchw((const void *)(a2 + 736));
  v9 = *(_QWORD *)(a2 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 == _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 736), v9 + 2, v9)
    || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 736)) )
  {
    v10 = *(_QWORD *)(a2 + 1048);
    v19 = v10;
    if ( v10 )
    {
      ExHandleTableQuery(v10, &v15, 0LL);
      ExReleaseRundownProtection_0(v8);
      v11 = v15;
      goto LABEL_4;
    }
    ExReleaseRundownProtection_0(v8);
  }
  v11 = 0;
  v15 = 0;
LABEL_4:
  *(_DWORD *)(a1 + 96) = v11;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 776);
  *(_DWORD *)(a1 + 72) = *(char *)(a2 + 444);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 744);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 992);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 1688);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 816);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 824);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 1476);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 1456);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 1448) << 12;
  v12 = *(_QWORD *)(a2 + 1384) << 12;
  v20 = v12;
  v21 = *(_QWORD *)(a2 + 1392) << 12;
  v13 = v21;
  *(_QWORD *)(a1 + 144) = v12;
  if ( v13 >= v12 )
    v13 = v12;
  *(_QWORD *)(a1 + 8) = v13;
  v17 = *(_QWORD *)(a2 + 792);
  v16 = *(_QWORD *)(a2 + 808);
  *(_QWORD *)(a1 + 160) = v17;
  *(_QWORD *)(a1 + 152) = v16;
  v17 = *(_QWORD *)(a2 + 784);
  v16 = *(_QWORD *)(a2 + 800);
  *(_QWORD *)(a1 + 176) = v17;
  *(_QWORD *)(a1 + 168) = v16;
  v18 = *(_QWORD *)(a2 + 1264) << 12;
  *(_QWORD *)(a1 + 184) = v18;
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a2 + 1272) << 12;
  *(_QWORD *)(a1 + 200) = v18;
  PsQueryStatisticsProcess(a2, a4);
  *(_QWORD *)(a1 + 24) = a4[2];
  *(_QWORD *)(a1 + 40) = a4[1];
  *(_QWORD *)(a1 + 48) = *a4;
  *(_QWORD *)(a1 + 208) = a4[4];
  *(_QWORD *)(a1 + 216) = a4[5];
  *(_QWORD *)(a1 + 224) = a4[6];
  *(_QWORD *)(a1 + 232) = a4[7];
  *(_QWORD *)(a1 + 240) = a4[8];
  *(_QWORD *)(a1 + 248) = a4[9];
  if ( a3 )
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 744);
  return 0LL;
}
