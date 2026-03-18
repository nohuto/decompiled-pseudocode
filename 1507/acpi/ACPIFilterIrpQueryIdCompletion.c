/*
 * XREFs of ACPIFilterIrpQueryIdCompletion @ 0x1C007ACB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetFlags @ 0x1C00044E0 (ACPIInternalSetFlags.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1C0065280 (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 */

__int64 __fastcall ACPIFilterIrpQueryIdCompletion(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  void *v4; // rbx
  _WORD *v5; // rdx
  unsigned int v6; // ecx
  int v8; // [rsp+20h] [rbp-18h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( DeviceExtension )
  {
    v4 = (void *)(DeviceExtension + 904);
    if ( (*(_DWORD *)(DeviceExtension + 904) & 0x800000) == 0 )
    {
      v5 = *(_WORD **)(a2 + 56);
      v6 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
      if ( v6 - 1 <= 1 && v5 && (int)ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule(v6, v5) >= 0 && v8 == 2 )
        ACPIInternalSetFlags(v4, 0x800000uLL);
    }
  }
  return 0LL;
}
