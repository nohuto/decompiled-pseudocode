/*
 * XREFs of ViFaultsAddTagNoDuplicates @ 0x140746BA4
 * Callers:
 *     ViFaultsAddAllTags @ 0x140746998 (ViFaultsAddAllTags.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ViFaultsIsTagPresentInList @ 0x1407470BC (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsAddTagNoDuplicates(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 i; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdi
  unsigned __int8 CurrentIrql; // si
  PVOID **v8; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v11; // [rsp+38h] [rbp+10h]

  v2 = 0;
  if ( a2 <= 4 )
  {
    for ( i = 0LL; i < 4; ++i )
    {
      if ( i < a2 )
        *((_BYTE *)&v11 + i) = *(_BYTE *)(a1 + 2 * i);
      else
        *((_BYTE *)&v11 + i) = 32;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x54466656u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 4) = v11;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ViFaultInjectionLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&ViFaultInjectionLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ViFaultInjectionLock);
      }
      ViFaultLockOwner = (__int64)KeGetCurrentThread();
      if ( (unsigned int)ViFaultsIsTagPresentInList(v11) )
      {
        ExFreePoolWithTag(v6, 0);
      }
      else
      {
        v8 = (PVOID **)qword_14032B5B8;
        *v6 = &ViFaultTagsList;
        v6[1] = v8;
        ViHaveFaultTags = 1;
        if ( *v8 != &ViFaultTagsList )
          __fastfail(3u);
        *v8 = (PVOID *)v6;
        qword_14032B5B8 = (__int64)v6;
      }
      ViFaultLockOwner = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&ViFaultInjectionLock, retaddr);
      else
        _InterlockedAnd64(&ViFaultInjectionLock, 0LL);
      __writecr8(CurrentIrql);
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
