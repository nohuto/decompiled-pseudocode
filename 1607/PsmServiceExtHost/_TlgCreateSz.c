/*
 * XREFs of _TlgCreateSz @ 0x18002B6A4
 * Callers:
 *     ?QueryProcessMaxMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_SERVICE_GLOBALS@@KPEA_K@Z @ 0x18002A250 (-QueryProcessMaxMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_SERVICE_GLOBALS@@KPEA_.c)
 *     ?RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RESOURCE_MSG@@@Z @ 0x18002A948 (-RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RESOURCE_MSG@@@Z.c)
 *     RmpActivityHostApplyLimits @ 0x18002AAB0 (RmpActivityHostApplyLimits.c)
 *     RmpEnforcementInfoInitializeProcess @ 0x18002B260 (RmpEnforcementInfoInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax
  LPCSTR v3; // r8

  LODWORD(v2) = 0;
  v3 = (LPCSTR)&unk_180043FA0;
  if ( psz )
  {
    v3 = psz;
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  pDesc->Reserved = 0;
  pDesc->Size = v2 + 1;
  pDesc->Ptr = (ULONGLONG)v3;
}
