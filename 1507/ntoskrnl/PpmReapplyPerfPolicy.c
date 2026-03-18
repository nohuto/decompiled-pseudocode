/*
 * XREFs of PpmReapplyPerfPolicy @ 0x1405B09A4
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1404FF554 (PpmSetProfilePolicySetting.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405AF588 (PopPpmHeteroPolicyCallback.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406BA7C8 (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1406BABDC (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140010480 (MmUnlockPagableImageSection.c)
 *     MiLockPagableImageSection @ 0x140010490 (MiLockPagableImageSection.c)
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x14016791C (PpmCheckApplyParkConstraints.c)
 *     PpmPerfCalculateMinMaxStates @ 0x1401679C8 (PpmPerfCalculateMinMaxStates.c)
 *     PpmParkApplyPolicy @ 0x140167A20 (PpmParkApplyPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x140582208 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x1405AFF04 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x1405B0AB4 (PpmCheckReInit.c)
 *     PpmPerfUpdateDomains @ 0x1405B0DCC (PpmPerfUpdateDomains.c)
 *     PopInitializeHeteroProcessors @ 0x1405B0EA0 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x1405B1208 (PpmPerfResizeHistoryAll.c)
 */

void __fastcall PpmReapplyPerfPolicy(_DWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _BYTE *v6; // r9
  char v7; // si
  char v8; // di
  __int64 *v9; // r11
  __int64 *v10; // rcx
  PVOID v11; // rcx

  PpmUpdateProcessorPolicy(a1, a2);
  if ( (*a1 & 0x20) != 0 )
  {
    v11 = ExPageLockHandle;
    *a1 |= 0xEu;
    MiLockPagableImageSection((ULONG_PTR)v11, 1uLL);
    PopInitializeHeteroProcessors();
    MmUnlockPagableImageSection(ExPageLockHandle);
  }
  if ( (*a1 & 2) != 0 )
  {
    v4 = PpmPerfDomainHead;
    v9 = &PpmPerfDomainHead;
    while ( (__int64 *)v4 != v9 )
    {
      PpmPerfCalculateMinMaxStates(v4);
      v4 = *v10;
    }
  }
  if ( (*a1 & 4) != 0 )
    PpmParkApplyPolicy(v4, v3, v5, v6);
  if ( (*a1 & 0x10) != 0 )
    PpmPerfResizeHistoryAll();
  if ( (*a1 & 8) != 0 )
    PpmCheckReInit();
  v7 = 0;
  v8 = 1;
  if ( (*a1 & 2) != 0 )
  {
    v8 = 0;
    v7 = 1;
    PpmPerfUpdateDomains();
  }
  if ( (*a1 & 4) != 0 )
  {
    if ( v7 )
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v8 = 0;
    if ( (*a1 & 0x20) != 0 )
    {
      PpmCheckInitProcessors(1);
      return;
    }
    PpmCheckApplyParkConstraints();
  }
  if ( v8 )
    PpmReleaseLock(&PpmPerfPolicyLock);
}
