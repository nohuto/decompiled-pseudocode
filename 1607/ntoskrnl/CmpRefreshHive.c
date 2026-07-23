/*
 * XREFs of CmpRefreshHive @ 0x14060D8C4
 * Callers:
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4AC0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpCleanUpKCBCacheTable @ 0x1403E3ED8 (CmpCleanUpKCBCacheTable.c)
 *     CmpFlushNotify @ 0x1403E435C (CmpFlushNotify.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403FCAE8 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1403FCCF8 (CmpAssignSecurityToKcb.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140603194 (CmpWaitOnHiveWriteQueue.c)
 *     HvRefreshHive @ 0x140606018 (HvRefreshHive.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR i; // rbx
  int v5; // eax
  __int64 v6; // rdx
  int refreshed; // edi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+5Ch] [rbp+14h]

  v12 = -1;
  v13 = 0;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
    return 3221225569LL;
  v3 = *(_QWORD *)(a1 + 8);
  for ( i = *(_QWORD *)(v3 + 24); ; CmpWaitOnHiveWriteQueue(i, v6, 0) )
  {
    CmpLockRegistryFreezeAware(1);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(i + 2848), 1u);
    if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      refreshed = -1073741535;
      ExReleaseResourceLite(*(PERESOURCE *)(i + 2848));
      goto LABEL_11;
    }
    v5 = *(_DWORD *)(i + 5488);
    if ( (v5 & 2) != 0 )
    {
      v6 = i + 5464;
      continue;
    }
    if ( (v5 & 1) == 0 )
      break;
    v6 = i + 5440;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(i + 2848));
  if ( *(_BYTE *)(i + 4112) == 1 )
  {
    refreshed = -1073741431;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(i + 144) & 2) != 0 )
  {
    if ( *(_DWORD *)(i + 2032) )
    {
      refreshed = -1073741823;
    }
    else
    {
      if ( (*(_BYTE *)(v3 + 178) & 4) == 0 )
        goto LABEL_15;
      while ( 1 )
      {
        v9 = *(_QWORD *)(i + 2712);
        if ( !v9 )
          break;
        LOBYTE(v8) = 1;
        CmpFlushNotify(*(_QWORD *)(v9 + 40), v8, 0LL);
      }
      CmpCleanUpKCBCacheTable(i, 0LL, 1);
      CmpSearchKeyControlBlockTreeEx(
        (__int64 (__fastcall *)(_QWORD *, ULONG_PTR, __int64))CmpRefreshWorkerRoutine,
        i,
        0LL,
        1);
      refreshed = HvRefreshHive(i);
      if ( refreshed >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(i + 8))(
                i,
                *(unsigned int *)(*(_QWORD *)(i + 64) + 36LL),
                &v12);
        if ( v10 )
        {
          CmpCleanUpKcbValueCache(v3);
          v11 = *(unsigned int *)(v10 + 40);
          *(_DWORD *)(v3 + 88) = *(_DWORD *)(v10 + 36);
          *(_QWORD *)(v3 + 96) = v11;
          *(_WORD *)(v3 + 178) = *(_WORD *)(v10 + 2);
          CmpAssignSecurityToKcb(v3, *(unsigned int *)(v10 + 44), 0LL, 0, 0);
          CmpCleanUpSubKeyInfo(v3);
          *(_QWORD *)(v3 + 160) = *(_QWORD *)(v10 + 4);
          *(_WORD *)(v3 + 168) = *(_WORD *)(v10 + 52);
          *(_WORD *)(v3 + 170) = *(_WORD *)(v10 + 60);
          *(_DWORD *)(v3 + 172) = *(_DWORD *)(v10 + 64);
          *(_DWORD *)(v3 + 176) ^= (*(_DWORD *)(v3 + 176) ^ *(unsigned __int16 *)(v10 + 54)) & 0xF;
          *(_DWORD *)(v3 + 176) ^= ((unsigned __int8)*(_DWORD *)(v3 + 176) ^ (unsigned __int8)*(_WORD *)(v10 + 54)) & 0xF0;
          *(_BYTE *)(v3 + 177) = *(_BYTE *)(v10 + 55);
          *(_WORD *)(v3 + 4) = 64;
          (*(void (__fastcall **)(ULONG_PTR, int *))(i + 16))(i, &v12);
        }
        else
        {
          refreshed = -1073741670;
        }
      }
    }
  }
  else
  {
LABEL_15:
    refreshed = -1073741811;
  }
LABEL_11:
  CmpUnlockRegistry();
  return (unsigned int)refreshed;
}
