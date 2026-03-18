/*
 * XREFs of ACPIFilterIrpQueryIdCompletion @ 0x1C007AE10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetFlags @ 0x1C0004338 (ACPIInternalSetFlags.c)
 *     ACPIEmQueryIgnoreOpenHandlesOnDeviceReset @ 0x1C0040EC0 (ACPIEmQueryIgnoreOpenHandlesOnDeviceReset.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1C0065290 (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 */

__int64 __fastcall ACPIFilterIrpQueryIdCompletion(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rsi
  __int64 v5; // rcx
  _WORD *v6; // rbx
  unsigned int v7; // edi
  void *v8; // r14
  int v10; // [rsp+20h] [rbp-18h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  if ( DeviceExtension )
  {
    v5 = *(_QWORD *)(a2 + 184);
    v6 = *(_WORD **)(a2 + 56);
    v7 = *(_DWORD *)(v5 + 8);
    if ( (AcpiOverrideAttributes & 0x100000) != 0 )
    {
      v8 = (void *)(DeviceExtension + 904);
      if ( (*(_DWORD *)(DeviceExtension + 904) & 0x800000) == 0
        && v7 - 1 <= 1
        && v6
        && (int)ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule(v7, v6) >= 0
        && v10 == 2 )
      {
        ACPIInternalSetFlags(v8, 0x800000uLL);
      }
    }
    if ( (AcpiOverrideAttributes & 0x200000) != 0
      && (*(_DWORD *)(v4 + 904) & 0x40000000) == 0
      && v7 - 1 <= 1
      && v6
      && (int)ACPIEmQueryIgnoreOpenHandlesOnDeviceReset(v7, v6) >= 0
      && v10 == 2 )
    {
      ACPIInternalSetFlags((void *)(v4 + 904), 0x40000000uLL);
    }
  }
  return 0LL;
}
