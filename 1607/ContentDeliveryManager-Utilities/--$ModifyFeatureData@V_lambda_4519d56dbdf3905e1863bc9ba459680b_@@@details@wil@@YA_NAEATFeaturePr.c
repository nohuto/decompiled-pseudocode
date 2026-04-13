/*
 * XREFs of ??$ModifyFeatureData@V_lambda_4519d56dbdf3905e1863bc9ba459680b_@@@details@wil@@YA_NAEATFeaturePropertyCache@01@$$QEAV_lambda_4519d56dbdf3905e1863bc9ba459680b_@@@Z @ 0x18000E48C
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXIAEATFeaturePropertyCache@12@W4ServiceReportingKind@12@_K@Z @ 0x180008CCC (-ReportUsageToService@details@wil@@YAXIAEATFeaturePropertyCache@12@W4ServiceReportingKind@12@_K@.c)
 * Callees:
 *     <none>
 */

char __fastcall wil::details::ModifyFeatureData<_lambda_4519d56dbdf3905e1863bc9ba459680b_>(
        volatile signed __int32 *a1,
        __int64 a2)
{
  signed __int32 v4; // ebx
  unsigned int v5; // ecx
  char v6; // dl
  char v7; // r10
  int v8; // r9d
  unsigned int v9; // r9d
  unsigned int v10; // edx

  do
  {
    v4 = *a1;
    v5 = *a1 | 0x80000000;
    v6 = ~(*(int *)a1 < 0);
    *(_DWORD *)(*(_QWORD *)a2 + 4LL) = 0;
    **(_BYTE **)a2 = v6 & 1;
    v7 = **(_BYTE **)(a2 + 8);
    if ( ((v5 >> 12) & 1) != (v7 == 4) )
    {
      v8 = v5 & 0xFFF;
      if ( (v5 & 0xFFF) != 0 )
      {
        *(_BYTE *)(*(_QWORD *)a2 + 8LL) = v7 == 0 ? 4 : 0;
        v5 &= 0xFFFFF000;
        *(_DWORD *)(*(_QWORD *)a2 + 4LL) = v8;
      }
      v7 = **(_BYTE **)(a2 + 8);
      v5 ^= ((unsigned __int16)v5 ^ ((v7 == 4) << 12)) & 0x1000;
    }
    v9 = v5 & 0xFFF;
    v10 = **(_DWORD **)(a2 + 16) + v9;
    if ( v10 > 0xFFF || v10 < v9 )
    {
      v10 = **(_DWORD **)(a2 + 16);
      *(_BYTE *)(*(_QWORD *)a2 + 8LL) = v7;
      *(_DWORD *)(*(_QWORD *)a2 + 4LL) = v9;
    }
  }
  while ( v4 != _InterlockedCompareExchange(a1, (v5 ^ v10) & 0xFFF ^ v5, v4) );
  return 1;
}
