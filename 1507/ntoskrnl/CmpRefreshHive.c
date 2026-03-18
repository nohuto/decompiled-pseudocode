/*
 * XREFs of CmpRefreshHive @ 0x140662520
 * Callers:
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     CmpCleanUpSubKeyInfo @ 0x140448E64 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x140449C5C (CmpAssignSecurityToKcb.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpCleanUpKcbValueCache @ 0x1404CC8C0 (CmpCleanUpKcbValueCache.c)
 *     CmpFlushNotify @ 0x1404ECD18 (CmpFlushNotify.c)
 *     CmpSearchKeyControlBlockTree @ 0x140656F6C (CmpSearchKeyControlBlockTree.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14065A514 (CmpWaitOnHiveWriteQueue.c)
 *     HvRefreshHive @ 0x14065DE68 (HvRefreshHive.c)
 */

__int64 __fastcall CmpRefreshHive(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR i; // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r9
  int refreshed; // edi
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = -1;
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
      v8 = *(_QWORD *)(i + 2712);
      if ( !v8 )
        break;
      CmpFlushNotify(*(_QWORD *)(v8 + 40), 1, 0LL, v6);
    }
    CmpSearchKeyControlBlockTree(
      (__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))CmpRefreshWorkerRoutine,
      i,
      0LL,
      v6);
    refreshed = HvRefreshHive(i);
    if ( refreshed >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(i + 8))(
             i,
             *(unsigned int *)(*(_QWORD *)(i + 64) + 36LL),
             &v10);
      if ( v9 )
      {
        CmpCleanUpKcbValueCache(BugCheckParameter3);
        *(_DWORD *)(BugCheckParameter3 + 96) = *(_DWORD *)(v9 + 36);
        *(_QWORD *)(BugCheckParameter3 + 104) = *(unsigned int *)(v9 + 40);
        *(_WORD *)(BugCheckParameter3 + 186) = *(_WORD *)(v9 + 2);
        CmpAssignSecurityToKcb(BugCheckParameter3, *(unsigned int *)(v9 + 44), 0LL, 0LL, 0);
        CmpCleanUpSubKeyInfo(BugCheckParameter3);
        *(_QWORD *)(BugCheckParameter3 + 168) = *(_QWORD *)(v9 + 4);
        *(_WORD *)(BugCheckParameter3 + 176) = *(_WORD *)(v9 + 52);
        *(_WORD *)(BugCheckParameter3 + 178) = *(_WORD *)(v9 + 60);
        *(_DWORD *)(BugCheckParameter3 + 180) = *(_DWORD *)(v9 + 64);
        *(_DWORD *)(BugCheckParameter3 + 184) ^= (*(_DWORD *)(BugCheckParameter3 + 184) ^ *(unsigned __int16 *)(v9 + 54)) & 0xF;
        *(_DWORD *)(BugCheckParameter3 + 184) ^= ((unsigned __int8)*(_DWORD *)(BugCheckParameter3 + 184) ^ (unsigned __int8)*(_WORD *)(v9 + 54)) & 0xF0;
        *(_BYTE *)(BugCheckParameter3 + 185) = *(_BYTE *)(v9 + 55);
        *(_WORD *)(BugCheckParameter3 + 4) = 64;
        (*(void (__fastcall **)(ULONG_PTR, int *))(i + 16))(i, &v10);
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
