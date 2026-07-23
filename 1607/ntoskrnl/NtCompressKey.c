/*
 * XREFs of NtCompressKey @ 0x1405F9700
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmCheckNoTxContext @ 0x1404A4760 (CmCheckNoTxContext.c)
 *     HvMarkBaseBlockDirty @ 0x140564B90 (HvMarkBaseBlockDirty.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140603194 (CmpWaitOnHiveWriteQueue.c)
 */

NTSTATUS __stdcall NtCompressKey(HANDLE Key)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  void *v4; // r8
  unsigned int v5; // esi
  NTSTATUS v6; // ebx
  _BYTE *v7; // rdi
  __int64 i; // rbx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  result = CmCheckNoTxContext();
  if ( result < 0 )
    return result;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    return -1073741727;
  v5 = (unsigned __int8)Key & 3;
  v6 = CmObReferenceObjectByHandle(Key, 0x20006u, v4, PreviousMode, &Object, 0LL);
  if ( v6 < 0 )
    return v6;
  v7 = Object;
  for ( i = *(_QWORD *)(*((_QWORD *)Object + 1) + 24LL); ; CmpWaitOnHiveWriteQueue(i, v11, 0LL) )
  {
    CmpLockRegistryExclusive();
    if ( CmpIsKeyDeletedForKeyBody((__int64)v7, 0LL) )
    {
      v6 = (v7[48] & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_22;
    }
    v9 = *((_QWORD *)v7 + 1);
    if ( *(_DWORD *)(v9 + 32) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 64LL) + 36LL) )
      goto LABEL_14;
    v10 = *(_DWORD *)(i + 5488);
    if ( (v10 & 2) != 0 )
    {
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(i + 2848), 1u);
      v11 = i + 5464;
      continue;
    }
    if ( (v10 & 1) == 0 )
      break;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(i + 2848), 1u);
    v11 = i + 5440;
  }
  v12 = *(_QWORD *)(v9 + 24);
  if ( v12 == CmpMasterHive
    || (v5 & 0xFFFFFFFC) != 0
    || !*(_QWORD *)(v12 + 2664)
    || (*(_DWORD *)(v12 + 144) & 0x8003) != 0 )
  {
LABEL_14:
    v6 = -1073741811;
    goto LABEL_22;
  }
  if ( v5 == 3 )
    v5 = 0;
  *(_QWORD *)(*(_QWORD *)(v12 + 64) + 168LL) = v5;
  HvMarkBaseBlockDirty(v12);
  v6 = 0;
LABEL_22:
  CmpUnlockRegistry();
  ObfDereferenceObject(v7);
  return v6;
}
