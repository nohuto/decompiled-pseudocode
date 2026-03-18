/*
 * XREFs of PpmReapplyPerfPolicy @ 0x140569F90
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1403F766C (PpmSetProfilePolicySetting.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405694F8 (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x140569588 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x14066DDDC (PpmUpdatePerfStates.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406729B0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140672C98 (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     PpmAcquireLock @ 0x14000A528 (PpmAcquireLock.c)
 *     MiLockPagableImageSection @ 0x140014884 (MiLockPagableImageSection.c)
 *     MmUnlockPagableImageSection @ 0x1400AC6FC (MmUnlockPagableImageSection.c)
 *     PpmReleaseLock @ 0x1400D46D4 (PpmReleaseLock.c)
 *     PpmCheckApplyParkConstraints @ 0x14014380C (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x140143E70 (PpmParkApplyPolicy.c)
 *     PpmPerfCalculateMinMaxStates @ 0x1401441AC (PpmPerfCalculateMinMaxStates.c)
 *     PpmPerfUpdateDomains @ 0x140544794 (PpmPerfUpdateDomains.c)
 *     PpmUpdateProcessorPolicy @ 0x1405454EC (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x140569DD0 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x14056A1B4 (PpmCheckReInit.c)
 *     PopInitializeHeteroProcessors @ 0x14056A584 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x14056AC74 (PpmPerfResizeHistoryAll.c)
 */

LONG __fastcall PpmReapplyPerfPolicy(_WORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  _BYTE *v5; // r9
  char v6; // si
  char v7; // di
  LONG result; // eax
  __int64 *i; // r11
  __int64 **v10; // r11
  PVOID v11; // rcx

  PpmUpdateProcessorPolicy(a1, 0LL);
  if ( (*(_DWORD *)a1 & 0x20) != 0 )
  {
    v11 = ExPageLockHandle;
    *(_DWORD *)a1 |= 0xEu;
    MiLockPagableImageSection((ULONG_PTR)v11, 1uLL);
    PopInitializeHeteroProcessors();
    MmUnlockPagableImageSection(ExPageLockHandle);
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    for ( i = (__int64 *)PpmPerfDomainHead; i != &PpmPerfDomainHead; i = *v10 )
      PpmPerfCalculateMinMaxStates((__int64)i);
  }
  if ( (*(_DWORD *)a1 & 4) != 0 )
    PpmParkApplyPolicy(v3, v2, v4, v5);
  if ( (*(_DWORD *)a1 & 0x10) != 0 )
    PpmPerfResizeHistoryAll();
  if ( (*(_DWORD *)a1 & 8) != 0 )
    PpmCheckReInit();
  v6 = 0;
  v7 = 1;
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    v7 = 0;
    v6 = 1;
    PpmPerfUpdateDomains(v3);
  }
  result = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    if ( v6 )
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v7 = 0;
    if ( (*(_DWORD *)a1 & 0x20) != 0 )
      return PpmCheckInitProcessors(1);
    result = PpmCheckApplyParkConstraints();
  }
  if ( v7 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  return result;
}
