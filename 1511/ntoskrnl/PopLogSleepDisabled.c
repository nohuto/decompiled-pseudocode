/*
 * XREFs of PopLogSleepDisabled @ 0x14053D3AC
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopLogDisabledSleepReason @ 0x140457DDC (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x140457EB8 (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 *     PopCheckForUpgradeInProgress @ 0x1407660D4 (PopCheckForUpgradeInProgress.c)
 *     PopInitPlatformSettings @ 0x14076812C (PopInitPlatformSettings.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PopGetReasonListByReasonCode @ 0x14045806C (PopGetReasonListByReasonCode.c)
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
      v12 = (__int64 **)qword_1402DE578;
      *(_QWORD *)v11 = &PowerStateDisableReasonListHead;
      *(_QWORD *)(v11 + 8) = v12;
      if ( *v12 != &PowerStateDisableReasonListHead )
        __fastfail(3u);
      *v12 = (__int64 *)v11;
      qword_1402DE578 = v11;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v9;
}
