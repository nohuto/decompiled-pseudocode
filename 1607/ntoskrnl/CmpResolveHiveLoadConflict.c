/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x1405FF1D4
 * Callers:
 *     CmLoadKey @ 0x1404A4834 (CmLoadKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpJoinClassOfTrust @ 0x1401B4600 (CmpJoinClassOfTrust.c)
 *     CmpPerformTrustClassAccessCheck @ 0x1401B4678 (CmpPerformTrustClassAccessCheck.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B4694 (CmpUnJoinClassOfTrust.c)
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FA6A4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403FA774 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 *     CmpRecordUnloadEventForHive @ 0x1404D009C (CmpRecordUnloadEventForHive.c)
 *     CmpReferenceKeyControlBlock @ 0x140518944 (CmpReferenceKeyControlBlock.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1405FF08C (CmpIsHiveAlreadyLoaded.c)
 */

__int64 __fastcall CmpResolveHiveLoadConflict(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        void *a5,
        char a6,
        __int64 *a7,
        _QWORD *a8)
{
  __int64 v11; // r14
  __int64 v13; // rdx
  int v14; // eax
  __int64 *v15; // rsi
  unsigned int v16; // ebx
  int v17; // edi
  __int64 v18; // rbx
  PVOID Object; // [rsp+40h] [rbp-158h] BYREF
  __int64 v21; // [rsp+48h] [rbp-150h] BYREF
  _QWORD *v22; // [rsp+50h] [rbp-148h]
  _BYTE v23[240]; // [rsp+60h] [rbp-138h] BYREF

  v22 = a8;
  v21 = 0LL;
  Object = 0LL;
  v11 = 0LL;
  memset(v23, 0, 0xE8uLL);
  v14 = ObReferenceObjectByNameEx(a1, v13, 0x20019u, (__int64)CmKeyObjectType, 0, (__int64)v23, &Object);
  v15 = (__int64 *)Object;
  if ( v14 < 0 )
  {
    v16 = -1073741275;
    goto LABEL_25;
  }
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  if ( !a4 )
  {
LABEL_7:
    if ( !CmpIsHiveAlreadyLoaded((__int64)v15, a2, a3, &v21, a7)
      || (v18 = v21, (*(_DWORD *)(v21 + 144) & 0x8000) != 0) && (a3 & 0x2000) == 0
      || (*(_DWORD *)(v21 + 144) & 0x8000) == 0 && (a3 & 0x2000) != 0 )
    {
      v16 = -1073741757;
      goto LABEL_24;
    }
    CmpLockKcbExclusive(v15[1]);
    if ( (a3 & 0x800) != 0 )
    {
      CmpReferenceKeyControlBlock(v15[1]);
      *v22 = v15[1];
    }
    if ( a5 && (v17 = CmpRecordUnloadEventForHive(v18, a5), v17 < 0) )
    {
      CmpUnlockKcb((char *)v15[1]);
    }
    else
    {
      CmpUnlockKcb((char *)v15[1]);
      if ( v11 )
      {
        CmpUnJoinClassOfTrust(v18);
        *(_DWORD *)(v18 + 5360) |= 1u;
        CmpJoinClassOfTrust(v18, v11, a6);
      }
      v17 = 0;
    }
LABEL_21:
    if ( v17 == -1073741275 )
      v17 = -1073741823;
    v16 = v17;
    goto LABEL_24;
  }
  if ( !CmpIsKeyDeletedForKeyBody(a4, 0LL) )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 24LL);
    v17 = CmpPerformTrustClassAccessCheck(v11, a6);
    if ( v17 < 0 )
      goto LABEL_21;
    goto LABEL_7;
  }
  v16 = -1073741444;
LABEL_24:
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
LABEL_25:
  if ( v15 )
    ObfDereferenceObject(v15);
  CmpCleanupParseContext((__int64)v23, 0);
  return v16;
}
