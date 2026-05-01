/*
 * XREFs of ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180012DDC
 * Callers:
 *     RmpEnforcementWorkCallback @ 0x180006D40 (RmpEnforcementWorkCallback.c)
 *     ?SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18002E9F0 (-SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 *     ?ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180040C3C (-ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(
        ExecutionModel::ResourceManager *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 66);
  if ( (v1 & 1) == 0 )
  {
    *((_DWORD *)this + 66) = v1 | 1;
    SubmitThreadpoolWork(*((PTP_WORK *)this + 31));
  }
}
