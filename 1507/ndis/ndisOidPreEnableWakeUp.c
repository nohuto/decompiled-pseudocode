/*
 * XREFs of ndisOidPreEnableWakeUp @ 0x1C00C9EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisOidPreEnableWakeUp(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) & 0xFFFFFFFD) != 0 )
    return ndisSetEnableWakeUp();
  else
    return ndisQueryEnableWakeUp();
}
