/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x1403B57A8
 * Callers:
 *     CmLoadKey @ 0x1404BEDE8 (CmLoadKey.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403DE3F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403DE4C0 (LOCK_HIVE_LOAD.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpRecordUnloadEventForHive @ 0x140499B10 (CmpRecordUnloadEventForHive.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1405E0BE0 (CmpIsHiveAlreadyLoaded.c)
 */

__int64 __fastcall CmpResolveHiveLoadConflict(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  __int64 v10; // r14
  __int64 v12; // rcx
  int v13; // ebx
  ULONG_PTR *v14; // rdi
  __int64 v15; // r15
  int v16; // edx
  __int64 *v17; // rbx
  __int64 v18; // rax
  signed __int8 v19; // cf
  __int64 v20; // rdi
  __int64 *v21; // rcx
  __int64 **v22; // rax
  signed __int64 v23; // rcx
  ULONG_PTR v24; // rtt
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 **v27; // rcx
  signed __int64 v28; // rcx
  ULONG_PTR v29; // rtt
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  __int64 v31; // [rsp+50h] [rbp-69h] BYREF
  _DWORD v32[36]; // [rsp+58h] [rbp-61h] BYREF

  memset(v32, 0, 136);
  v31 = 0LL;
  v10 = 0LL;
  Object = 0LL;
  if ( (int)ObReferenceObjectByNameEx(a1, a2, 131097, (_DWORD)CmKeyObjectType, 0, (__int64)v32, (__int64)&Object) < 0 )
    return 3221226021LL;
  LOCK_HIVE_LOAD();
  LOBYTE(v12) = 1;
  CmpLockRegistryFreezeAware(v12);
  if ( !a4 )
    goto LABEL_10;
  if ( !(unsigned __int8)CmRmIsKCBDeleted(*(_QWORD *)(a4 + 8), 0LL) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL);
    if ( v10 && (*(_DWORD *)(v10 + 5360) & 1) == 0 )
    {
      v13 = -1073741811;
      goto LABEL_7;
    }
LABEL_10:
    v14 = (ULONG_PTR *)Object;
    if ( !(unsigned __int8)CmpIsHiveAlreadyLoaded((_DWORD)Object, a2, a3, (unsigned int)&v31, a6)
      || (v15 = v31, v16 = *(_DWORD *)(v31 + 144), (v16 & 0x8000) != 0 && (a3 & 0x2000) == 0)
      || (v16 & 0x8000) == 0 && (a3 & 0x2000) != 0 )
    {
      v13 = -1073741757;
    }
    else
    {
      CmpLockKcbExclusive(v14[1]);
      if ( (a3 & 0x800) != 0 )
      {
        CmpReferenceKeyControlBlock(v14[1]);
        *a7 = v14[1];
      }
      if ( a5 && (v13 = CmpRecordUnloadEventForHive(v15), v13 < 0) )
      {
        CmpUnlockKcb((PVOID)v14[1]);
      }
      else
      {
        CmpUnlockKcb((PVOID)v14[1]);
        if ( v10 )
        {
          v17 = (__int64 *)(v15 + 5368);
          if ( (__int64 *)*v17 != v17 )
          {
            v18 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
            v19 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
            v20 = v18;
            if ( v19 )
              ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v18, (ULONG_PTR)&CmpHiveListHeadLock);
            if ( v20 )
              *(_BYTE *)(v20 + 26) |= 1u;
            v21 = (__int64 *)*v17;
            v22 = *(__int64 ***)(v15 + 5376);
            if ( *(__int64 **)(*v17 + 8) != v17 || *v22 != v17 )
              __fastfail(3u);
            *v22 = v21;
            v21[1] = (__int64)v22;
            _m_prefetchw(&CmpHiveListHeadLock);
            if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v23 = 0LL;
            else
              v23 = CmpHiveListHeadLock - 16;
            if ( (CmpHiveListHeadLock & 2) != 0
              || (v24 = CmpHiveListHeadLock,
                  v24 != _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&CmpHiveListHeadLock,
                           v23,
                           CmpHiveListHeadLock)) )
            {
              ExfReleasePushLock(&CmpHiveListHeadLock);
            }
            KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
          }
          v25 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
          v19 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
          v26 = v25;
          if ( v19 )
            ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v25, (ULONG_PTR)&CmpHiveListHeadLock);
          if ( v26 )
            *(_BYTE *)(v26 + 26) |= 1u;
          v27 = *(__int64 ***)(v10 + 5376);
          *v17 = v10 + 5368;
          *(_QWORD *)(v15 + 5376) = v27;
          if ( *v27 != (__int64 *)(v10 + 5368) )
            __fastfail(3u);
          *v27 = v17;
          *(_QWORD *)(v10 + 5376) = v17;
          _m_prefetchw(&CmpHiveListHeadLock);
          if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v28 = 0LL;
          else
            v28 = CmpHiveListHeadLock - 16;
          if ( (CmpHiveListHeadLock & 2) != 0
            || (v29 = CmpHiveListHeadLock,
                v29 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpHiveListHeadLock,
                         v28,
                         CmpHiveListHeadLock)) )
          {
            ExfReleasePushLock(&CmpHiveListHeadLock);
          }
          KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
          v14 = (ULONG_PTR *)Object;
          *(_DWORD *)(v31 + 5360) |= 1u;
        }
        v13 = 0;
      }
    }
    goto LABEL_49;
  }
  v13 = -1073741444;
LABEL_7:
  v14 = (ULONG_PTR *)Object;
LABEL_49:
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  if ( v14 )
    ObfDereferenceObject(v14);
  if ( v13 == -1073741275 )
    return (unsigned int)-1073741823;
  return (unsigned int)v13;
}
