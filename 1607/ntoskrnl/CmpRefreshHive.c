/*
 * XREFs of CmpRefreshHive @ 0x14060D810
 * Callers:
 *     CmRestoreKey @ 0x14060C24C (CmRestoreKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4BDC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FB854 (CmpLockRegistryFreezeAware.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403FDC28 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1403FDE38 (CmpAssignSecurityToKcb.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     CmpCleanUpKcbValueCache @ 0x1404372D8 (CmpCleanUpKcbValueCache.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140439400 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpFlushNotify @ 0x14049A0FC (CmpFlushNotify.c)
 *     CmpCleanUpKCBCacheTable @ 0x14049AFB8 (CmpCleanUpKCBCacheTable.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1406030E0 (CmpWaitOnHiveWriteQueue.c)
 *     HvRefreshHive @ 0x140605F64 (HvRefreshHive.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR i; // rbx
  int v5; // eax
  __int64 v6; // rdx
  int refreshed; // edi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  int v11; // [rsp+58h] [rbp+10h] BYREF
  int v12; // [rsp+5Ch] [rbp+14h]

  v11 = -1;
  v12 = 0;
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
        v8 = *(_QWORD *)(i + 2712);
        if ( !v8 )
          break;
        CmpFlushNotify(*(_QWORD *)(v8 + 40), 1, 0LL);
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
        v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(i + 8))(
               i,
               *(unsigned int *)(*(_QWORD *)(i + 64) + 36LL),
               &v11);
        if ( v9 )
        {
          CmpCleanUpKcbValueCache(v3);
          v10 = *(unsigned int *)(v9 + 40);
          *(_DWORD *)(v3 + 88) = *(_DWORD *)(v9 + 36);
          *(_QWORD *)(v3 + 96) = v10;
          *(_WORD *)(v3 + 178) = *(_WORD *)(v9 + 2);
          CmpAssignSecurityToKcb(v3, *(unsigned int *)(v9 + 44), 0LL, 0, 0);
          CmpCleanUpSubKeyInfo(v3);
          *(_QWORD *)(v3 + 160) = *(_QWORD *)(v9 + 4);
          *(_WORD *)(v3 + 168) = *(_WORD *)(v9 + 52);
          *(_WORD *)(v3 + 170) = *(_WORD *)(v9 + 60);
          *(_DWORD *)(v3 + 172) = *(_DWORD *)(v9 + 64);
          *(_DWORD *)(v3 + 176) ^= (*(_DWORD *)(v3 + 176) ^ *(unsigned __int16 *)(v9 + 54)) & 0xF;
          *(_DWORD *)(v3 + 176) ^= ((unsigned __int8)*(_DWORD *)(v3 + 176) ^ (unsigned __int8)*(_WORD *)(v9 + 54)) & 0xF0;
          *(_BYTE *)(v3 + 177) = *(_BYTE *)(v9 + 55);
          *(_WORD *)(v3 + 4) = 64;
          (*(void (__fastcall **)(ULONG_PTR, int *))(i + 16))(i, &v11);
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
