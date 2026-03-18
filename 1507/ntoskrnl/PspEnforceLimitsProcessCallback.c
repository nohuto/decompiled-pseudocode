/*
 * XREFs of PspEnforceLimitsProcessCallback @ 0x140507354
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
 *     PsQueryStatisticsProcess @ 0x140508494 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall PspEnforceLimitsProcessCallback(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h]
  __int64 v15; // [rsp+68h] [rbp-10h]

  if ( (*(_DWORD *)(a1 + 768) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, v8);
    v4 = (_QWORD *)(*(_QWORD *)(a1 + 944) + 1112LL);
    v5 = 4LL;
    v6 = v4;
    do
    {
      *v6 += *(_QWORD *)((char *)v6 + v8 - (_BYTE *)v4);
      ++v6;
      --v5;
    }
    while ( v5 );
    v4[4] += v10;
    v4[5] += v11;
    v4[6] += v12;
    v4[7] += v13;
    v4[8] += v14;
    v4[9] += v15;
    if ( !a2[2] && *a2 && v9 > *a2 && ObReferenceObjectSafeWithTag(a1) )
      a2[2] = a1;
  }
  return 0LL;
}
