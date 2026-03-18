/*
 * XREFs of ACPILoadProcessDSDT @ 0x1C0085CD4
 * Callers:
 *     ACPILoadProcessFADT @ 0x1C0085C08 (ACPILoadProcessFADT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0065778 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPILoadAddDynamicDataBlockTable @ 0x1C0085F30 (ACPILoadAddDynamicDataBlockTable.c)
 */

__int64 ACPILoadProcessDSDT()
{
  _OWORD *v0; // rbx
  _OWORD *PoolWithTag; // rax
  __int64 result; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v0 = (_OWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763908LL, 0LL, 0LL);
  if ( !v0 )
    return 3222536217LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
  P = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = *v0;
  PoolWithTag[1] = v0[1];
  *((_DWORD *)PoolWithTag + 8) = *((_DWORD *)v0 + 8);
  *((_DWORD *)PoolWithTag + 1) = 36;
  if ( ACPIRegReadAMLRegistryEntry((__int64 *)&P) )
    v0 = P;
  else
    ExFreePoolWithTag(P, 0);
  result = ACPILoadAddDynamicDataBlockTable(v0);
  if ( (int)result >= 0 )
    *((_QWORD *)AcpiInformation + 3) = v0;
  return result;
}
