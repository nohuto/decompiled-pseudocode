/*
 * XREFs of ACPIMapNamedTable @ 0x1C0004920
 * Callers:
 *     ACPIEnumMapTableHandler @ 0x1C00048D0 (ACPIEnumMapTableHandler.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C0006BD4 (ACPIEcInitOpRegionHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C006598C (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C007CA94 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 */

__int64 __fastcall ACPIMapNamedTable(int a1, _DWORD *a2, _QWORD *a3, void *a4, unsigned int *a5)
{
  unsigned int v9; // edi
  char v10; // bp
  _DWORD *v11; // rbx
  _DWORD *v12; // rsi
  _OWORD *PoolWithTag; // rax
  char AMLRegistryEntry; // al
  unsigned int v15; // eax
  PVOID v17; // rax
  char TableFromSimulatorRegistryEntry; // al
  PVOID P[7]; // [rsp+20h] [rbp-38h] BYREF

  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = (_DWORD *)(*(__int64 (**)(void))(PmHalDispatchTable + 88))();
  if ( v12 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
    P[0] = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    *PoolWithTag = *(_OWORD *)v12;
    PoolWithTag[1] = *((_OWORD *)v12 + 1);
    *((_DWORD *)PoolWithTag + 8) = v12[8];
    *((_DWORD *)PoolWithTag + 1) = 36;
    AMLRegistryEntry = ACPIRegReadAMLRegistryEntry(P);
    v11 = P[0];
    v10 = AMLRegistryEntry;
    if ( AMLRegistryEntry )
      v12 = P[0];
    else
      ExFreePoolWithTag(P[0], 0);
    if ( v12 )
      goto LABEL_6;
  }
  if ( g_SimulatorCallbackObject )
  {
    v17 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
    P[0] = v17;
    v11 = v17;
    if ( !v17 )
    {
      v9 = -1073741670;
      goto LABEL_8;
    }
    memset(v17, 0, 0x24uLL);
    *v11 = a1;
    v11[1] = 36;
    if ( a2 )
      *(_DWORD *)((char *)v11 + 10) = *a2;
    if ( a3 )
      *((_QWORD *)v11 + 2) = *a3;
    TableFromSimulatorRegistryEntry = ACPIRegGetTableFromSimulatorRegistryEntry(P);
    v11 = P[0];
    v10 = TableFromSimulatorRegistryEntry;
    if ( TableFromSimulatorRegistryEntry )
      v12 = P[0];
    else
      ExFreePoolWithTag(P[0], 0);
  }
  if ( v12 )
  {
LABEL_6:
    v15 = v12[1];
    if ( *a5 < v15 )
    {
      *a5 = v15;
      v9 = -1073741789;
    }
    else
    {
      memmove(a4, v12, v15);
      *a5 = v12[1];
    }
  }
  else
  {
    v9 = -1073741275;
  }
LABEL_8:
  if ( v10 && v11 )
    ExFreePoolWithTag(v11, 0);
  return v9;
}
