/*
 * XREFs of CmpDoBuildVirtualStack @ 0x1406584F0
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140658F4C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400CA874 (HvpGetCellContextReinitialize.c)
 *     CmpTryAcquireIXLockExclusive @ 0x1404293DC (CmpTryAcquireIXLockExclusive.c)
 *     CmpTryAcquireIXLockIntent @ 0x1404293E4 (CmpTryAcquireIXLockIntent.c)
 *     CmpRebuildKcbCache @ 0x1404484A8 (CmpRebuildKcbCache.c)
 *     CmpAssignSecurityToKcb @ 0x140449C5C (CmpAssignSecurityToKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404CA940 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1404F2FA0 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1404F300C (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpAddSubKeyEx @ 0x1405335D0 (CmpAddSubKeyEx.c)
 *     CmpComputeHashKey @ 0x140533C5C (CmpComputeHashKey.c)
 *     CmpFindKcbInHashEntryByName @ 0x140656D78 (CmpFindKcbInHashEntryByName.c)
 *     CmpMarkKcbDeleted @ 0x140656EA0 (CmpMarkKcbDeleted.c)
 *     CmpCreateEmptyKey @ 0x140658120 (CmpCreateEmptyKey.c)
 *     CmpCopySaclToVirtualKey @ 0x140659314 (CmpCopySaclToVirtualKey.c)
 *     HvMarkCellDirty @ 0x140660960 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpDoBuildVirtualStack(__int64 a1, unsigned int a2, ULONG_PTR a3, __int64 a4)
{
  unsigned int v8; // ebp
  int v9; // edx
  unsigned int *v10; // rdi
  __int64 v11; // r13
  unsigned int v12; // eax
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // r8d
  unsigned int EmptyKey; // eax
  __int64 v24; // rdx
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned int v31; // r12d
  ULONG_PTR v32; // rbp
  __int64 v33; // r15
  __int64 v34; // rdi
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // ebx
  int v39; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v40[3]; // [rsp+34h] [rbp-34h] BYREF
  int v41; // [rsp+78h] [rbp+10h] BYREF

  HvpGetCellContextReinitialize(&v41);
  HvpGetCellContextReinitialize(&v39);
  v8 = 0;
  if ( v9 )
  {
    v10 = (unsigned int *)(a1 + 28);
    do
    {
      v11 = *(_QWORD *)(v10 + 1);
      if ( v11 )
      {
        v12 = CmpComputeHashKey(*(_DWORD *)(v11 + 16), (unsigned __int16 *)(a1 + ((unsigned __int64)v8 << 6)));
        KcbInHashEntryByName = CmpFindKcbInHashEntryByName(a3, v12, v11, a1 + ((unsigned __int64)v8 << 6));
        *(_QWORD *)(v10 + 5) = KcbInHashEntryByName;
        if ( KcbInHashEntryByName )
        {
          if ( !CmpReferenceKeyControlBlock(KcbInHashEntryByName) )
          {
            *(_QWORD *)(((unsigned __int64)v8 << 6) + a1 + 48) = 0LL;
            return (unsigned int)-1073741670;
          }
          v14 = *(_QWORD *)(v10 + 5);
          if ( (*(_DWORD *)(v14 + 4) & 0x10) != 0 )
          {
            CmpMarkKcbDeleted(v14);
            LOBYTE(v15) = 1;
            CmpDereferenceKeyControlBlockWithLock(*(_QWORD *)(v10 + 5), v15, v16, v17);
            *(_QWORD *)(v10 + 5) = 0LL;
          }
        }
      }
      CmpFindSubKeyByNameWithStatus(
        a3,
        *(_QWORD *)(v10 - 3),
        (unsigned __int16 *)(a1 + ((unsigned __int64)v8 << 6)),
        v40);
      v18 = v40[0];
      v10[3] = v40[0];
      if ( v18 == -1 )
      {
        v19 = *(_QWORD *)(v10 + 1);
        if ( v19 && (*(_QWORD *)(v19 + 232) || !CmpTryAcquireIXLockIntent((int *)(v19 + 240)))
          || (v20 = *(_QWORD *)(v10 + 5)) != 0
          && (!CmpTryAcquireIXLockExclusive((_DWORD *)(v20 + 240))
           || !CmpTryAcquireIXLockExclusive((_DWORD *)(v21 + 256))) )
        {
          return (unsigned int)-1072103423;
        }
        if ( !(unsigned __int8)HvMarkCellDirty(a3, *v10, 0LL) )
          return (unsigned int)-1073741670;
        v22 = *v10;
        if ( (*v10 & 0x80000000) != 0 )
          v10[7] = 1;
        EmptyKey = CmpCreateEmptyKey(a3, (unsigned __int16 *)(a1 + ((unsigned __int64)v8 << 6)), v22);
        v10[3] = EmptyKey;
        if ( EmptyKey == -1 || !CmpAddSubKeyEx(a3, *v10, EmptyKey, 0) )
          return (unsigned int)-1073741670;
        if ( v8 )
        {
          v24 = *(_QWORD *)(v10 - 3);
          v25 = *((unsigned __int16 *)v10 - 14);
          if ( (unsigned __int16)*(_DWORD *)(v24 + 52) < v25 )
            *(_WORD *)(v24 + 52) = v25;
        }
        v26 = *(_QWORD *)(v10 + 1);
        if ( v26 )
          CmpRebuildKcbCache(v26);
      }
      if ( v8 < a2 - 1 )
      {
        v27 = v10[3];
        v28 = (unsigned __int64)(v8 + 1) << 6;
        *(_QWORD *)(v28 + a1 + 32) = *(_QWORD *)(v10 + 5);
        *(_DWORD *)(v28 + a1 + 28) = v27;
        v29 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, unsigned __int64))(a3 + 8))(a3, v27, v28 + a1 + 24);
        *(_QWORD *)(v28 + a1 + 16) = v29;
        if ( !v29 )
          return (unsigned int)-1073741670;
      }
      ++v8;
      v10 += 16;
    }
    while ( v8 < a2 );
  }
  v30 = (unsigned __int64)(a2 - 1) << 6;
  v31 = *(_DWORD *)(v30 + a1 + 40);
  v32 = *(_QWORD *)(v30 + a1 + 48);
  HvMarkCellDirty(*(_QWORD *)(a4 + 32), *(unsigned int *)(a4 + 40), 0LL);
  HvMarkCellDirty(a3, v31, 0LL);
  v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a4 + 32) + 8LL))(
          *(_QWORD *)(a4 + 32),
          *(unsigned int *)(a4 + 40),
          &v41);
  if ( v33 )
  {
    v34 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v31, &v39);
    if ( v34 )
    {
      CmpLockTwoSecurityCachesExclusiveShared(a3, *(_QWORD *)(a4 + 32), v35, v36);
      v37 = CmpCopySaclToVirtualKey(*(_QWORD *)(a4 + 32), v33, a3, v34, v31);
      CmpUnlockTwoSecurityCaches(a3, *(_QWORD *)(a4 + 32));
      if ( v37 >= 0 )
      {
        if ( v32 )
        {
          CmpAssignSecurityToKcb(v32, *(unsigned int *)(v34 + 44), 0LL, 0LL, 0);
          *(_WORD *)(v32 + 186) |= 0x100u;
        }
        *(_WORD *)(v34 + 2) |= 0x100u;
        *(_WORD *)(a4 + 186) |= 0x80u;
        *(_WORD *)(v33 + 2) |= 0x80u;
        v37 = 0;
      }
    }
    else
    {
      v37 = -1073741670;
    }
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a4 + 32) + 16LL))(*(_QWORD *)(a4 + 32), &v41);
    if ( v34 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v39);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v37;
}
