/*
 * XREFs of NtCompressKey @ 0x14065002C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     CmCheckNoTxContext @ 0x140445960 (CmCheckNoTxContext.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     HvMarkBaseBlockDirty @ 0x1405C267C (HvMarkBaseBlockDirty.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14065A514 (CmpWaitOnHiveWriteQueue.c)
 */

NTSTATUS __stdcall NtCompressKey(HANDLE Key)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  void *v4; // r8
  unsigned int v5; // esi
  NTSTATUS v6; // ebx
  _QWORD *v7; // rdi
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
  for ( i = *(_QWORD *)(*((_QWORD *)Object + 1) + 32LL); ; CmpWaitOnHiveWriteQueue(i, v11, 0LL) )
  {
    CmpLockRegistryExclusive();
    v9 = v7[1];
    if ( (*(_DWORD *)(v9 + 4) & 0x20000) != 0 )
    {
      v6 = (v7[6] & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_22;
    }
    if ( *(_DWORD *)(v9 + 40) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 64LL) + 36LL) )
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
  v12 = *(_QWORD *)(v9 + 32);
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
