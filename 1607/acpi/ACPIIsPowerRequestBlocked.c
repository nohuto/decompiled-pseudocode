/*
 * XREFs of ACPIIsPowerRequestBlocked @ 0x1C000E2C4
 * Callers:
 *     ACPIDevicePowerProcessBlockedItems @ 0x1C000E230 (ACPIDevicePowerProcessBlockedItems.c)
 *     ACPIMovePowerListUnblockedItems @ 0x1C004B174 (ACPIMovePowerListUnblockedItems.c)
 * Callees:
 *     WPP_RECORDER_SF_qsLLdqss @ 0x1C00128D0 (WPP_RECORDER_SF_qsLLdqss.c)
 */

char __fastcall ACPIIsPowerRequestBlocked(__int64 a1)
{
  int v1; // r8d
  char v2; // bl
  const char *v3; // rdx

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x10000000) != 0
    || (v2 = 0, (v1 & 0x1000000) != 0)
    && ((v1 & 0x4000000) != 0
     || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 912LL) & 0x40) != 0
     && (*(_QWORD *)(a1 + 64) != a1 + 64 || (v1 & 0x2000000) == 0 && AcpiPowerCurrentPagingPathTransitions)) )
  {
    v2 = 1;
  }
  v3 = "IS";
  if ( !v2 )
    v3 = "NOT";
  WPP_RECORDER_SF_qsLLdqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v3, v1, a1);
  return v2;
}
