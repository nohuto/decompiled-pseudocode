/*
 * XREFs of CmpRefreshHive @ 0x1405EAB18
 * Callers:
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403DF288 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1403DFE54 (CmpAssignSecurityToKcb.c)
 *     CmpCleanUpKcbValueCache @ 0x1403F9C74 (CmpCleanUpKcbValueCache.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     CmpFlushNotify @ 0x140499B90 (CmpFlushNotify.c)
 *     CmpSearchKeyControlBlockTree @ 0x1405E1248 (CmpSearchKeyControlBlockTree.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1405E3728 (CmpWaitOnHiveWriteQueue.c)
 *     HvRefreshHive @ 0x1405E6A0C (HvRefreshHive.c)
 */

__int64 __fastcall CmpRefreshHive(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR i; // rbx
  int v4; // eax
  __int64 v5; // rdx
  int refreshed; // edi
  __int64 v7; // rax
  __int64 v8; // rbp
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = -1;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
    return 3221225569LL;
  for ( i = *(_QWORD *)(BugCheckParameter3 + 32); ; CmpWaitOnHiveWriteQueue(i, v5, 0) )
  {
    CmpLockRegistryFreezeAware(1);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(i + 2848), 1u);
    if ( (*(_DWORD *)(BugCheckParameter3 + 4) & 0x20000) != 0 )
    {
      refreshed = -1073741535;
      ExReleaseResourceLite(*(PERESOURCE *)(i + 2848));
      goto LABEL_25;
    }
    v4 = *(_DWORD *)(i + 5488);
    if ( (v4 & 2) != 0 )
    {
      v5 = i + 5464;
      continue;
    }
    if ( (v4 & 1) == 0 )
      break;
    v5 = i + 5440;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(i + 2848));
  if ( *(_BYTE *)(i + 4112) == 1 )
  {
    refreshed = -1073741431;
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(i + 144) & 2) == 0 )
    goto LABEL_13;
  if ( *(_DWORD *)(i + 2032) )
  {
    refreshed = -1073741823;
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 186) & 4) == 0 )
    {
LABEL_13:
      refreshed = -1073741811;
      goto LABEL_25;
    }
    while ( 1 )
    {
      v7 = *(_QWORD *)(i + 2712);
      if ( !v7 )
        break;
      CmpFlushNotify(*(_QWORD *)(v7 + 40), 1, 0LL);
    }
    CmpSearchKeyControlBlockTree((__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))CmpRefreshWorkerRoutine, i, 0LL);
    refreshed = HvRefreshHive(i);
    if ( refreshed >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(i + 8))(
             i,
             *(unsigned int *)(*(_QWORD *)(i + 64) + 36LL),
             &v9);
      if ( v8 )
      {
        CmpCleanUpKcbValueCache(BugCheckParameter3);
        *(_DWORD *)(BugCheckParameter3 + 96) = *(_DWORD *)(v8 + 36);
        *(_QWORD *)(BugCheckParameter3 + 104) = *(unsigned int *)(v8 + 40);
        *(_WORD *)(BugCheckParameter3 + 186) = *(_WORD *)(v8 + 2);
        CmpAssignSecurityToKcb(BugCheckParameter3, *(unsigned int *)(v8 + 44), 0LL, 0, 0);
        CmpCleanUpSubKeyInfo(BugCheckParameter3);
        *(_QWORD *)(BugCheckParameter3 + 168) = *(_QWORD *)(v8 + 4);
        *(_WORD *)(BugCheckParameter3 + 176) = *(_WORD *)(v8 + 52);
        *(_WORD *)(BugCheckParameter3 + 178) = *(_WORD *)(v8 + 60);
        *(_DWORD *)(BugCheckParameter3 + 180) = *(_DWORD *)(v8 + 64);
        *(_DWORD *)(BugCheckParameter3 + 184) ^= (*(_DWORD *)(BugCheckParameter3 + 184) ^ *(unsigned __int16 *)(v8 + 54)) & 0xF;
        *(_DWORD *)(BugCheckParameter3 + 184) ^= ((unsigned __int8)*(_DWORD *)(BugCheckParameter3 + 184) ^ (unsigned __int8)*(_WORD *)(v8 + 54)) & 0xF0;
        *(_BYTE *)(BugCheckParameter3 + 185) = *(_BYTE *)(v8 + 55);
        *(_WORD *)(BugCheckParameter3 + 4) = 64;
        (*(void (__fastcall **)(ULONG_PTR, int *))(i + 16))(i, &v9);
      }
      else
      {
        refreshed = -1073741670;
      }
    }
  }
LABEL_25:
  CmpUnlockRegistry();
  return (unsigned int)refreshed;
}
