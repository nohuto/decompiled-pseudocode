/*
 * XREFs of ACPIBuildProcessDevicePhaseCrs @ 0x1C000A660
 * Callers:
 *     <none>
 * Callees:
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C0008220 (PnpBiosSetFlagsForNotableInterrupts.c)
 *     ACPIBuildCompleteCommon @ 0x1C000B874 (ACPIBuildCompleteCommon.c)
 *     AMLIIsNamedChildPresent @ 0x1C000DC00 (AMLIIsNamedChildPresent.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     ACPIMatchKernelPorts @ 0x1C0023A2C (ACPIMatchKernelPorts.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCrs(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  if ( (unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(v1 + 704), 1397903455LL) )
    *(_DWORD *)(a1 + 32) = 28;
  else
    *(_DWORD *)(a1 + 32) = 16;
  if ( *(_QWORD *)(a1 + 56) && *(int *)(a1 + 48) >= 0 )
  {
    if ( *(_WORD *)(v2 + 2) == 3 )
    {
      if ( (*(_DWORD *)v1 & 0x4000000) != 0 )
        ACPIMatchKernelPorts(v1, v2);
      PnpBiosSetFlagsForNotableInterrupts((volatile signed __int64 *)v1, *(char **)(v2 + 32), *(_DWORD *)(v2 + 24));
    }
    dword_1C005A228 = 0;
    byte_1C005A22C = 0;
    FreeDataBuffs(v2, 1LL);
  }
  v4 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v4);
  return 0LL;
}
