/*
 * XREFs of KeFoldProcessStatisticsThread @ 0x14010D0F4
 * Callers:
 *     PspThreadDelete @ 0x14051BBB8 (PspThreadDelete.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall KeFoldProcessStatisticsThread(__int64 a1)
{
  __int64 v1; // rdx
  signed __int64 result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx

  v1 = *(_QWORD *)(a1 + 544);
  *(_DWORD *)(v1 + 620) += *(_DWORD *)(a1 + 652);
  *(_DWORD *)(v1 + 624) += *(_DWORD *)(a1 + 732);
  *(_DWORD *)(v1 + 1960) += *(_DWORD *)(a1 + 2008);
  *(_QWORD *)(v1 + 592) += *(_QWORD *)(a1 + 72);
  *(_QWORD *)(v1 + 600) += *(unsigned int *)(a1 + 340);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1208), *(_QWORD *)(a1 + 1448));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1216), *(_QWORD *)(a1 + 1456));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1224), *(_QWORD *)(a1 + 1464));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1232), *(_QWORD *)(a1 + 1472));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1240), *(_QWORD *)(a1 + 1480));
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1248), *(_QWORD *)(a1 + 1488));
  v3 = *(_QWORD *)(a1 + 1960);
  if ( v3 )
  {
    v4 = *(_QWORD **)(v1 + 1840);
    v5 = 4LL;
    v6 = v3 - (_QWORD)v4;
    do
    {
      v7 = 2LL;
      do
      {
        result = *(_QWORD *)((char *)v4 + v6);
        *v4++ += result;
        --v7;
      }
      while ( v7 );
      --v5;
    }
    while ( v5 );
  }
  return result;
}
