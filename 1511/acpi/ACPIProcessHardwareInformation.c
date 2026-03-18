/*
 * XREFs of ACPIProcessHardwareInformation @ 0x1C00667A0
 * Callers:
 *     ACPILoadProcessFADT @ 0x1C0085C24 (ACPILoadProcessFADT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 ACPIProcessHardwareInformation()
{
  __int64 v0; // rbx
  unsigned int v1; // edi
  __int16 v2; // dx
  bool v3; // zf
  unsigned __int16 v4; // dx
  unsigned int v5; // esi
  char *PoolWithTag; // rax
  char *v7; // rbp
  _WORD *v8; // r8
  __int64 v9; // rdx
  char *v10; // rcx

  v0 = *((_QWORD *)AcpiInformation + 1);
  *((_QWORD *)AcpiInformation + 13) = *(unsigned int *)(v0 + 48);
  *((_WORD *)AcpiInformation + 50) = -1;
  v1 = 0;
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(6LL) >= 0 )
    *((_BYTE *)AcpiInformation + 85) = *(_BYTE *)(v0 + 92);
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(7LL) >= 0 )
  {
    *((_BYTE *)AcpiInformation + 96) = *(_BYTE *)(v0 + 93);
    *((_WORD *)AcpiInformation + 50) = *(unsigned __int8 *)(v0 + 94);
  }
  *((_WORD *)AcpiInformation + 43) = *((_BYTE *)AcpiInformation + 85) >> 1;
  v2 = *((_BYTE *)AcpiInformation + 96) >> 1;
  *((_WORD *)AcpiInformation + 49) = v2;
  v3 = *((_WORD *)AcpiInformation + 43) + v2 == 0;
  v4 = *((_WORD *)AcpiInformation + 43) + v2;
  *((_WORD *)AcpiInformation + 51) = v4;
  if ( v3 )
  {
    v8 = AcpiInformation;
  }
  else
  {
    v5 = 20 * v4;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x67706341u);
    GpeTable = PoolWithTag;
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    LODWORD(GpeTableSize) = v5;
    memset(PoolWithTag, 0, v5);
    v8 = AcpiInformation;
    GpeEnable = v7;
    v9 = *((unsigned __int16 *)AcpiInformation + 51);
    v10 = &v7[v9 + v9];
    GpeCurEnable = &v7[v9];
    GpeIsLevel = v10;
    GpeHandlerType = &v10[v9];
    GpeWakeEnable = &v10[v9 + v9];
    GpeWakeHandler = (char *)GpeWakeEnable + v9;
    GpeSpecialHandler = (char *)GpeWakeEnable + v9 + v9;
    GpePending = (char *)GpeSpecialHandler + v9;
    GpeRunMethod = (char *)GpeSpecialHandler + v9 + v9;
    GpeComplete = (char *)GpeRunMethod + v9;
    GpeSavedWakeMask = (char *)GpeRunMethod + v9 + v9;
    GpeSavedWakeStatus = (char *)GpeSavedWakeMask + v9;
    GpeMap = (__int64)GpeSavedWakeMask + v9 + v9;
  }
  v8[56] = 32;
  if ( (*(_BYTE *)(v0 + 112) & 0x10) == 0 )
    *((_WORD *)AcpiInformation + 56) |= 0x100u;
  if ( (*(_BYTE *)(v0 + 112) & 0x20) == 0 )
    *((_WORD *)AcpiInformation + 56) |= 0x200u;
  if ( (*(_DWORD *)(v0 + 112) & 0x4000) != 0 )
    *((_WORD *)AcpiInformation + 56) |= 0x4000u;
  return v1;
}
