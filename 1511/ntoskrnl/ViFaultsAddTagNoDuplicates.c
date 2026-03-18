/*
 * XREFs of ViFaultsAddTagNoDuplicates @ 0x1406C52E0
 * Callers:
 *     ViFaultsAddAllTags @ 0x1406C5120 (ViFaultsAddAllTags.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ViFaultsIsTagPresentInList @ 0x1406C55B4 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsAddTagNoDuplicates(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 i; // rcx
  _QWORD *PoolWithTag; // rdi
  KIRQL v6; // si
  PVOID **v7; // rax
  unsigned int v9; // [rsp+38h] [rbp+10h]

  v2 = 0;
  if ( a2 <= 4 )
  {
    for ( i = 0LL; i < 4; ++i )
    {
      if ( i < a2 )
        *((_BYTE *)&v9 + i) = *(_BYTE *)(a1 + 2 * i);
      else
        *((_BYTE *)&v9 + i) = 32;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x54466656u);
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 4) = v9;
      v6 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
      ViFaultLockOwner = (__int64)KeGetCurrentThread();
      if ( (unsigned int)ViFaultsIsTagPresentInList(v9) )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        v7 = (PVOID **)qword_1402DB258;
        *PoolWithTag = &ViFaultTagsList;
        PoolWithTag[1] = v7;
        ViHaveFaultTags = 1;
        if ( *v7 != &ViFaultTagsList )
          __fastfail(3u);
        *v7 = (PVOID *)PoolWithTag;
        qword_1402DB258 = (__int64)PoolWithTag;
      }
      ViFaultLockOwner = 0LL;
      KeReleaseSpinLock(&ViFaultInjectionLock, v6);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
