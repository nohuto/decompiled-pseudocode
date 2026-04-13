/*
 * XREFs of ??$ModifyFeatureData@V_lambda_1e73f40952ee841e84c920be3ee357be_@@@details@wil@@YA_NAEATFeaturePropertyCache@01@$$QEAV_lambda_1e73f40952ee841e84c920be3ee357be_@@@Z @ 0x18000E588
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXIAEATFeaturePropertyCache@12@W4ServiceReportingKind@12@_K@Z @ 0x180008CCC (-ReportUsageToService@details@wil@@YAXIAEATFeaturePropertyCache@12@W4ServiceReportingKind@12@_K@.c)
 * Callees:
 *     <none>
 */

char __fastcall wil::details::ModifyFeatureData<_lambda_1e73f40952ee841e84c920be3ee357be_>(
        volatile signed __int32 *a1,
        __int64 a2)
{
  signed __int32 v4; // ebx
  unsigned int v5; // ecx
  char v6; // dl
  char v7; // r10
  int v8; // r9d
  char v9; // dl
  unsigned int v10; // r9d
  unsigned int v11; // edx

  do
  {
    v4 = *a1;
    v5 = *a1 | 0x80000000;
    v6 = ~(*(int *)a1 < 0);
    *(_DWORD *)(*(_QWORD *)a2 + 4LL) = 0;
    **(_BYTE **)a2 = v6 & 1;
    v7 = **(_BYTE **)(a2 + 8);
    if ( ((v5 >> 30) & 1) != (v7 == 5) )
    {
      v8 = (v5 >> 23) & 0x7F;
      if ( v8 )
      {
        v9 = 1;
        if ( v7 == 1 )
          v9 = 5;
        v5 &= 0xC07FFFFF;
        *(_BYTE *)(*(_QWORD *)a2 + 8LL) = v9;
        *(_DWORD *)(*(_QWORD *)a2 + 4LL) = v8;
      }
      v7 = **(_BYTE **)(a2 + 8);
      v5 ^= (v5 ^ ((v7 == 5) << 30)) & 0x40000000;
    }
    v10 = (v5 >> 23) & 0x7F;
    v11 = **(_DWORD **)(a2 + 16) + v10;
    if ( v11 > 0x7F || v11 < v10 )
    {
      v11 = **(_DWORD **)(a2 + 16);
      *(_BYTE *)(*(_QWORD *)a2 + 8LL) = v7;
      *(_DWORD *)(*(_QWORD *)a2 + 4LL) = v10;
    }
  }
  while ( v4 != _InterlockedCompareExchange(a1, (v5 ^ (v11 << 23)) & 0x3F800000 ^ v5, v4) );
  return 1;
}
