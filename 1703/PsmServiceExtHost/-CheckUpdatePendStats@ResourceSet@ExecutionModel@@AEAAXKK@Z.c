/*
 * XREFs of ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18000F76C
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000DF50 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010460 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?RmpUtilQueryUnbiasedInterruptTimeMs@@YAKXZ @ 0x18001B0E0 (-RmpUtilQueryUnbiasedInterruptTimeMs@@YAKXZ.c)
 */

void __fastcall ExecutionModel::ResourceSet::CheckUpdatePendStats(ExecutionModel::ResourceSet *this, int a2, int a3)
{
  int v5; // eax
  int v6; // eax

  if ( a2 )
  {
    v5 = *((_DWORD *)this + 351);
    if ( (v5 & 0x100) == 0 )
    {
      *((_DWORD *)this + 351) = v5 | 0x100;
      *((_DWORD *)this + 463) = RmpUtilQueryUnbiasedInterruptTimeMs();
    }
  }
  if ( a3 )
  {
    v6 = *((_DWORD *)this + 351);
    if ( (v6 & 0x200) == 0 )
    {
      *((_DWORD *)this + 351) = v6 | 0x200;
      *((_DWORD *)this + 464) = RmpUtilQueryUnbiasedInterruptTimeMs();
    }
  }
}
