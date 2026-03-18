/*
 * XREFs of ACPILoadProcessFADT @ 0x1C0085C24
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C0085DA4 (ACPILoadProcessRSDT.c)
 * Callees:
 *     ACPIGpeClearRegisters @ 0x1C0007558 (ACPIGpeClearRegisters.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00080FC (ACPIGpeEnableDisableEvents.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     ACPIProcessHardwareInformation @ 0x1C00667A0 (ACPIProcessHardwareInformation.c)
 *     ACPILoadProcessDSDT @ 0x1C0085CF0 (ACPILoadProcessDSDT.c)
 */

__int64 ACPILoadProcessFADT()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  _BYTE *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // ecx

  v0 = *((_QWORD *)AcpiInformation + 1);
  if ( *(_BYTE *)(v0 + 8) >= 5u && (*(_DWORD *)(v0 + 112) & 0x100000) != 0 )
    *((_BYTE *)AcpiInformation + 133) = 1;
  v1 = (*(__int64 (**)(void))(PmHalDispatchTable + 104))();
  if ( v1 && *(_DWORD *)(v1 + 4) == 64 )
  {
    *((_QWORD *)AcpiInformation + 2) = v1;
    *((_QWORD *)AcpiInformation + 5) = v1 + 16;
    v2 = AcpiInformation;
  }
  else
  {
    v2 = AcpiInformation;
    result = 3222536217LL;
    if ( !*((_BYTE *)AcpiInformation + 133) )
      return result;
  }
  if ( !v2[133] )
  {
    result = ACPIProcessHardwareInformation();
    if ( (int)result < 0 )
      return result;
    ACPIGpeClearRegisters();
    ACPIGpeEnableDisableEvents(0, v4);
    v2 = AcpiInformation;
  }
  *((_DWORD *)v2 + 31) = 0;
  *((_DWORD *)AcpiInformation + 32) = 0;
  v5 = (*(_DWORD *)(v0 + 112) >> 9) & 1;
  *((_BYTE *)AcpiInformation + 132) = (*(_DWORD *)(v0 + 112) & 0x200) != 0;
  if ( (_BYTE)v5 && (*((_BYTE *)AcpiInformation + 133) || (*(_DWORD *)(v0 + 112) & 0x200000) != 0) )
    KeBugCheckEx(0xA5u, 0x11uLL, 0xCuLL, *(unsigned int *)(v0 + 112), 0LL);
  return ACPILoadProcessDSDT();
}
