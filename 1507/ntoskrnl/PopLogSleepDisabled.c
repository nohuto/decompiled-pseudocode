/*
 * XREFs of PopLogSleepDisabled @ 0x1405B227C
 * Callers:
 *     PopLogDisabledSleepReason @ 0x1404E0DAC (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1404E0F04 (PopFilterCapabilities.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 *     PopInitPlatformSettings @ 0x1407DBA38 (PopInitPlatformSettings.c)
 *     PopCheckForUpgradeInProgress @ 0x1407E7BD4 (PopCheckForUpgradeInProgress.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopGetReasonListByReasonCode @ 0x1404E10B8 (PopGetReasonListByReasonCode.c)
 */

__int64 __fastcall PopLogSleepDisabled(int a1, char a2, const void *a3, size_t a4)
{
  __int64 v8; // r9
  unsigned int v9; // edi
  PVOID PoolWithTag; // rax
  __int64 v11; // rbx
  __int64 **v12; // rax

  v9 = 0;
  if ( PopGetReasonListByReasonCode(a1) )
  {
    return (unsigned int)-1073741771;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8 + 32, 0x66756263u);
    v11 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, a4 + 32);
      *(_DWORD *)(v11 + 24) = a1;
      if ( (a2 & 1) != 0 )
        *(_BYTE *)(v11 + 16) = 1;
      if ( (a2 & 2) != 0 )
        *(_BYTE *)(v11 + 17) = 1;
      if ( (a2 & 4) != 0 )
        *(_BYTE *)(v11 + 18) = 1;
      if ( (a2 & 8) != 0 )
        *(_BYTE *)(v11 + 19) = 1;
      if ( (a2 & 0x10) != 0 )
        *(_BYTE *)(v11 + 22) = 1;
      if ( (a2 & 0x20) != 0 )
        *(_BYTE *)(v11 + 20) = 1;
      if ( a4 )
      {
        *(_DWORD *)(v11 + 28) = a4;
        memmove((void *)(v11 + 32), a3, a4);
      }
      v12 = (__int64 **)qword_14032EB38;
      *(_QWORD *)v11 = &PowerStateDisableReasonListHead;
      *(_QWORD *)(v11 + 8) = v12;
      if ( *v12 != &PowerStateDisableReasonListHead )
        __fastfail(3u);
      *v12 = (__int64 *)v11;
      qword_14032EB38 = v11;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v9;
}
