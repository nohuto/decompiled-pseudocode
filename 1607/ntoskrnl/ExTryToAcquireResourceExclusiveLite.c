/*
 * XREFs of ExTryToAcquireResourceExclusiveLite @ 0x14022D8CC
 * Callers:
 *     <none>
 * Callees:
 *     PerfLogExecutiveResourceAcquire @ 0x140227E70 (PerfLogExecutiveResourceAcquire.c)
 *     EXP_LOCK_RESOURCE @ 0x14022D6D0 (EXP_LOCK_RESOURCE.c)
 *     EXP_UNLOCK_RESOURCE @ 0x14022D744 (EXP_UNLOCK_RESOURCE.c)
 */

BOOLEAN __stdcall ExTryToAcquireResourceExclusiveLite(PERESOURCE Resource)
{
  bool v1; // si
  int v3; // ebp
  struct _KTHREAD *CurrentThread; // r12
  ULONG v5; // edi
  ULONG ContentionCount; // r14d
  BOOLEAN v7; // r15
  __int64 v8; // rcx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+20h] [rbp-48h] BYREF

  v1 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x6420u);
  v3 = 65537;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  ContentionCount = 0;
  EXP_LOCK_RESOURCE((__int64)Resource, &v11);
  v7 = 0;
  v8 = 128LL;
  if ( !Resource->ActiveEntries )
  {
    TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    v7 = 1;
    Resource->Flag |= 0x80u;
    Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
    Resource->OwnerEntry.TableSize = *(_BYTE *)&TableSize & 7 | 8;
    Resource->ActiveEntries = 1;
    Resource->ActiveCount = 1;
    __incgsdword(0x6424u);
    __incgsdword(0x63A4u);
    if ( !v1 )
      goto LABEL_9;
    v3 = 65569;
    v5 = 1;
    goto LABEL_8;
  }
  if ( (Resource->ReservedLowFlags & 0x80) != 0 && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
  {
    v7 = 1;
    v8 = Resource->OwnerEntry.TableSize & 7 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFF8) + 8);
    Resource->OwnerEntry.TableSize = v8;
    __incgsdword(0x6424u);
    __incgsdword(0x63A4u);
    if ( v1 )
    {
      v3 = 65585;
      v5 = Resource->OwnerEntry.TableSize >> 3;
LABEL_8:
      ContentionCount = Resource->ContentionCount;
    }
  }
LABEL_9:
  EXP_UNLOCK_RESOURCE(v8, &v11);
  if ( v1 )
    PerfLogExecutiveResourceAcquire(v3, (__int64)Resource, v5, ContentionCount);
  return v7;
}
