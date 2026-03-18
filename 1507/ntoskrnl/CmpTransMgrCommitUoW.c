/*
 * XREFs of CmpTransMgrCommitUoW @ 0x1404F16A0
 * Callers:
 *     CmpTransMgrCommit @ 0x1404F0B68 (CmpTransMgrCommit.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     CmpSignalDeferredPosts @ 0x1404293F0 (CmpSignalDeferredPosts.c)
 *     CmpReportNotify @ 0x140429FE8 (CmpReportNotify.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1404F0898 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404F19C4 (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x1404F2A54 (CmpCommitAddKeyUoW.c)
 *     CmpCommitDeleteKeyUoW @ 0x1404F3380 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x14058E3F0 (CmpCommitSetSecurityUoW.c)
 *     CmpCommitRecreateKeyUoW @ 0x140664354 (CmpCommitRecreateKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x140664408 (CmpCommitRenameKeyUoW.c)
 */

__int64 __fastcall CmpTransMgrCommitUoW(__int64 a1, __int64 *a2)
{
  int v2; // edi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  ULONG_PTR v11; // r14
  unsigned int v12; // r12d
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v23[2]; // [rsp+30h] [rbp-10h] BYREF
  int v24; // [rsp+70h] [rbp+30h] BYREF

  v2 = 0;
  v23[1] = v23;
  v23[0] = v23;
  v5 = *(_DWORD *)(a1 + 68);
  if ( !v5 )
  {
    CmpLockRegistryExclusive();
    v2 = CmpCommitAddKeyUoW(a1, a2);
    if ( v2 >= 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 232LL) = 0LL;
LABEL_29:
      CmpReportNotify(
        *(_QWORD *)(a1 + 48),
        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL),
        0LL,
        1,
        (__int64)v23);
    }
LABEL_30:
    CmpUnlockRegistry();
    goto LABEL_31;
  }
  if ( v5 == 2 )
  {
    CmpLockRegistryExclusive();
    CmpReportNotify(
      *(_QWORD *)(a1 + 48),
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL),
      0LL,
      1,
      (__int64)v23);
    v6 = CmpCommitDeleteKeyUoW(a1, a2);
    goto LABEL_13;
  }
  if ( v5 <= 3 )
    goto LABEL_31;
  if ( v5 <= 5 )
  {
    CmpLockRegistry();
    CmpLockKcbExclusive(*(_QWORD *)(a1 + 48), v19, v20, v21);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 2848LL), 1u);
    v18 = CmpCommitSetValueKeyUoW(a1, a2);
LABEL_23:
    v2 = v18;
    if ( v18 >= 0 )
      CmpReportNotify(
        *(_QWORD *)(a1 + 48),
        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL),
        0LL,
        4,
        (__int64)v23);
    goto LABEL_18;
  }
  switch ( v5 )
  {
    case 6:
      CmpLockRegistry();
      CmpLockKcbExclusive(*(_QWORD *)(a1 + 48), v15, v16, v17);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 2848LL), 1u);
      v18 = CmpCommitDeleteValueKeyUoW(a1);
      goto LABEL_23;
    case 7:
      v24 = -1;
      CmpLockRegistry();
      CmpLockKcbExclusive(*(_QWORD *)(a1 + 48), v7, v8, v9);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 2848LL), 1u);
      v10 = *(_QWORD *)(a1 + 48);
      v11 = *(_QWORD *)(v10 + 32);
      v12 = *(_DWORD *)(v10 + 40);
      v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v11 + 8))(v11, v12, &v24);
      if ( v13 )
      {
        if ( !HvpMarkCellDirty(v11, v12, 0, 0LL) )
        {
          (*(void (__fastcall **)(ULONG_PTR, int *))(v11 + 16))(v11, &v24);
          ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 2848LL));
          CmpUnlockKcb(*(char **)(a1 + 48));
          CmpUnlockRegistry();
          v2 = -1073741443;
          break;
        }
        *(_DWORD *)(v13 + 52) ^= (*(_DWORD *)(v13 + 52) ^ (*(_DWORD *)(a1 + 80) << 16)) & 0xF0000;
        *(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^ HIWORD(*(_DWORD *)(v13 + 52))) & 0xF;
        v14 = *a2;
        *(_QWORD *)(v13 + 4) = *a2;
        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = v14;
        (*(void (__fastcall **)(ULONG_PTR, int *))(v11 + 16))(v11, &v24);
      }
      else
      {
        v2 = -1073741670;
      }
LABEL_18:
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 2848LL));
      CmpUnlockKcb(*(char **)(a1 + 48));
      goto LABEL_30;
    case 9:
      CmpLockRegistryExclusive();
      v2 = CmpCommitSetSecurityUoW(a1, a2);
      if ( v2 >= 0 )
        CmpReportNotify(
          *(_QWORD *)(a1 + 48),
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL),
          0LL,
          10,
          (__int64)v23);
      goto LABEL_30;
    case 12:
      CmpLockRegistryExclusive();
      v6 = CmpCommitRenameKeyUoW(a1, a2);
LABEL_13:
      v2 = v6;
      goto LABEL_30;
    case 14:
      CmpLockRegistryExclusive();
      v2 = CmpCommitRecreateKeyUoW(a1, a2);
      if ( v2 >= 0 )
        goto LABEL_29;
      goto LABEL_30;
  }
LABEL_31:
  CmpSignalDeferredPosts(v23);
  return (unsigned int)v2;
}
