/*
 * XREFs of DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C00DF580
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiReadPnpRegistryValue @ 0x1C00CE800 (DpiReadPnpRegistryValue.c)
 */

char __fastcall DpiFdoIsCompatibleWithHighResolutionBoot(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v8; // rax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 || *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 2 )
    return 1;
  if ( (int)DpiReadPnpRegistryValue(a1, L"HighResBootCompatible", (char *)&v9, 4u, 2) < 0 )
  {
    v6 = WdLogNewEntry5_WdEvent(v3, v2, v4, v5);
    *(_QWORD *)(v6 + 24) = DpiFdoIsCompatibleWithHighResolutionBoot;
    *(_QWORD *)(v6 + 32) = 1LL;
LABEL_6:
    WdLogEvent5_WdEvent(v6);
    return 1;
  }
  if ( v9 )
  {
    v6 = WdLogNewEntry5_WdEvent(v3, v2, v4, v5);
    *(_QWORD *)(v6 + 24) = DpiFdoIsCompatibleWithHighResolutionBoot;
    *(_QWORD *)(v6 + 32) = v9;
    goto LABEL_6;
  }
  v8 = WdLogNewEntry5_WdEvent(v3, v2, v4, v5);
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_QWORD *)(v8 + 24) = DpiFdoIsCompatibleWithHighResolutionBoot;
  WdLogEvent5_WdEvent(v8);
  return 0;
}
