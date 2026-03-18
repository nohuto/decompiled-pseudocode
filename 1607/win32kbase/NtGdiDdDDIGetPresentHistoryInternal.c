/*
 * XREFs of NtGdiDdDDIGetPresentHistoryInternal @ 0x1C001CB30
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0019F9C (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?GreSfmCleanupDxgAdapter@@YAXI@Z @ 0x1C0071DBC (-GreSfmCleanupDxgAdapter@@YAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiDdDDIGetPresentHistoryInternal(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C011B378)(a1, 0LL);
}
