/*
 * XREFs of PpmReapplyPerfPolicy @ 0x140537218
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x140454614 (PpmSetProfilePolicySetting.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405366BC (PopPpmHeteroPolicyCallback.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14063A82C (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x14063AB14 (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140035BD8 (MiLockPagableImageSection.c)
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     MmUnlockPagableImageSection @ 0x1400EBD44 (MmUnlockPagableImageSection.c)
 *     PpmCheckApplyParkConstraints @ 0x140138DF0 (PpmCheckApplyParkConstraints.c)
 *     PpmPerfCalculateMinMaxStates @ 0x140139450 (PpmPerfCalculateMinMaxStates.c)
 *     PpmParkApplyPolicy @ 0x1401394A8 (PpmParkApplyPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x14050AB34 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x140537328 (PpmCheckReInit.c)
 *     PpmPerfUpdateDomains @ 0x140537610 (PpmPerfUpdateDomains.c)
 *     PopInitializeHeteroProcessors @ 0x140537684 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x1405379AC (PpmPerfResizeHistoryAll.c)
 */

LONG __fastcall PpmReapplyPerfPolicy(_WORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _BYTE *v6; // r9
  char v7; // si
  char v8; // di
  LONG result; // eax
  __int64 *v10; // r11
  __int64 *v11; // rcx
  PVOID v12; // rcx

  PpmUpdateProcessorPolicy(a1, a2);
  if ( (*(_DWORD *)a1 & 0x20) != 0 )
  {
    v12 = ExPageLockHandle;
    *(_DWORD *)a1 |= 0xEu;
    MiLockPagableImageSection((ULONG_PTR)v12, 1uLL);
    PopInitializeHeteroProcessors();
    MmUnlockPagableImageSection(ExPageLockHandle);
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    v4 = PpmPerfDomainHead;
    v10 = &PpmPerfDomainHead;
    while ( (__int64 *)v4 != v10 )
    {
      PpmPerfCalculateMinMaxStates(v4);
      v4 = *v11;
    }
  }
  if ( (*(_DWORD *)a1 & 4) != 0 )
    PpmParkApplyPolicy(v4, v3, v5, v6);
  if ( (*(_DWORD *)a1 & 0x10) != 0 )
    PpmPerfResizeHistoryAll();
  if ( (*(_DWORD *)a1 & 8) != 0 )
    PpmCheckReInit();
  v7 = 0;
  v8 = 1;
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    v8 = 0;
    v7 = 1;
    PpmPerfUpdateDomains();
  }
  result = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    if ( v7 )
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v8 = 0;
    if ( (*(_DWORD *)a1 & 0x20) != 0 )
      return PpmCheckInitProcessors(1);
    result = PpmCheckApplyParkConstraints();
  }
  if ( v8 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  return result;
}
