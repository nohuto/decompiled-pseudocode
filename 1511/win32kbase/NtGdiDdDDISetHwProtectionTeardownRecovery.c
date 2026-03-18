/*
 * XREFs of NtGdiDdDDISetHwProtectionTeardownRecovery @ 0x1C00B92C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiDdDDISetHwProtectionTeardownRecovery(__int64 a1)
{
  return DCompositionForceRender(0LL, 1LL, *(_DWORD *)(a1 + 4) == 0);
}
