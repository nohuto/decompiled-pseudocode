/*
 * XREFs of DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C00FCA80
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiReadPnpRegistryValue @ 0x1C00D90C0 (DpiReadPnpRegistryValue.c)
 */

char __fastcall DpiFdoIsCompatibleWithHighResolutionBoot(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v5; // rax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 || *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 2 )
    return 1;
  if ( (int)DpiReadPnpRegistryValue(a1, L"HighResBootCompatible", (char *)&v6, 4u, 2u) < 0 )
  {
    v3 = WdLogNewEntry5_WdEvent(v2);
    *(_QWORD *)(v3 + 24) = 1LL;
LABEL_6:
    WdLogEvent5_WdEvent(v3);
    return 1;
  }
  if ( v6 )
  {
    v3 = WdLogNewEntry5_WdEvent(v2);
    *(_QWORD *)(v3 + 24) = v6;
    goto LABEL_6;
  }
  v5 = WdLogNewEntry5_WdEvent(v2);
  *(_QWORD *)(v5 + 24) = 0LL;
  WdLogEvent5_WdEvent(v5);
  return 0;
}
