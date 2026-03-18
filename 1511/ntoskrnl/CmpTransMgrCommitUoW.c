/*
 * XREFs of CmpTransMgrCommitUoW @ 0x1403D7344
 * Callers:
 *     CmpTransMgrCommit @ 0x1403D6AEC (CmpTransMgrCommit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     CmpCommitDeleteKeyUoW @ 0x1403B4CF0 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1403D5C98 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1403D7548 (CmpCommitSetValueKeyUoW.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpReportNotify @ 0x1403F4FC4 (CmpReportNotify.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpSignalDeferredPosts @ 0x1404218C4 (CmpSignalDeferredPosts.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpCommitAddKeyUoW @ 0x1404B3A00 (CmpCommitAddKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x14051A854 (CmpCommitSetSecurityUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x1405EBE70 (CmpCommitRenameKeyUoW.c)
 */

__int64 __fastcall CmpTransMgrCommitUoW(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v7; // eax
  int v8; // eax
  int v10; // eax
  __int64 v11; // rax
  ULONG_PTR v12; // r14
  unsigned int v13; // r12d
  __int64 v14; // r15
  __int64 v15; // rcx
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF

  v4 = 0;
  v16[1] = v16;
  v16[0] = v16;
  v7 = *(_DWORD *)(a1 + 68);
  if ( !v7 )
  {
    CmpLockRegistryExclusive();
    v4 = CmpCommitAddKeyUoW(a1, a2);
    if ( v4 >= 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 232LL) = 0LL;
      CmpReportNotify(
        *(_QWORD *)(a1 + 48),
        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL),
        0,
        1,
        (__int64)v16);
    }
    goto LABEL_11;
  }
  if ( v7 == 2 )
  {
    CmpLockRegistryExclusive();
    CmpReportNotify(
      *(_QWORD *)(a1 + 48),
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL),
      0,
      1,
      (__int64)v16);
    v10 = CmpCommitDeleteKeyUoW(a1, a2);
    goto LABEL_21;
  }
  if ( v7 > 3 )
  {
    if ( v7 <= 5 )
    {
      CmpLockRegistry(a1, a2, a3, a4);
      CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 2848LL), 1u);
      v8 = CmpCommitSetValueKeyUoW(a1, a2);
LABEL_8:
      v4 = v8;
      if ( v8 >= 0 )
        CmpReportNotify(
          *(_QWORD *)(a1 + 48),
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL),
          0,
          4,
          (__int64)v16);
LABEL_10:
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 2848LL));
      CmpUnlockKcb(*(PVOID *)(a1 + 48));
LABEL_11:
      CmpUnlockRegistry();
      goto LABEL_12;
    }
    switch ( v7 )
    {
      case 6:
        CmpLockRegistry(a1, a2, a3, a4);
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 2848LL), 1u);
        v8 = CmpCommitDeleteValueKeyUoW(a1, a2);
        goto LABEL_8;
      case 9:
        CmpLockRegistryExclusive();
        v4 = CmpCommitSetSecurityUoW(a1, a2);
        if ( v4 >= 0 )
          CmpReportNotify(
            *(_QWORD *)(a1 + 48),
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL),
            0,
            10,
            (__int64)v16);
        goto LABEL_11;
      case 7:
        v17 = -1;
        CmpLockRegistry(a1, a2, a3, a4);
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 2848LL), 1u);
        v11 = *(_QWORD *)(a1 + 48);
        v12 = *(_QWORD *)(v11 + 32);
        v13 = *(_DWORD *)(v11 + 40);
        v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v12 + 8))(v12, v13, &v17);
        if ( v14 )
        {
          if ( !(unsigned __int8)HvpMarkCellDirty(v12, v13) )
          {
            (*(void (__fastcall **)(ULONG_PTR, int *))(v12 + 16))(v12, &v17);
            ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 2848LL));
            CmpUnlockKcb(*(PVOID *)(a1 + 48));
            CmpUnlockRegistry();
            v4 = -1073741443;
            goto LABEL_12;
          }
          *(_DWORD *)(v14 + 52) ^= (*(_DWORD *)(v14 + 52) ^ (*(_DWORD *)(a1 + 80) << 16)) & 0xF0000;
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^ HIWORD(*(_DWORD *)(v14 + 52))) & 0xF;
          v15 = *a2;
          *(_QWORD *)(v14 + 4) = *a2;
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = v15;
          (*(void (__fastcall **)(ULONG_PTR, int *))(v12 + 16))(v12, &v17);
        }
        else
        {
          v4 = -1073741670;
        }
        goto LABEL_10;
    }
    if ( v7 != 12 )
      goto LABEL_12;
    CmpLockRegistryExclusive();
    v10 = CmpCommitRenameKeyUoW(a1, a2);
LABEL_21:
    v4 = v10;
    goto LABEL_11;
  }
LABEL_12:
  CmpSignalDeferredPosts(v16);
  return (unsigned int)v4;
}
