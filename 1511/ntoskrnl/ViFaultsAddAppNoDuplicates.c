/*
 * XREFs of ViFaultsAddAppNoDuplicates @ 0x1406C51CC
 * Callers:
 *     ViFaultsAddAllApps @ 0x1406C5074 (ViFaultsAddAllApps.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlUpcaseUnicodeString @ 0x1404D6BE0 (RtlUpcaseUnicodeString.c)
 *     ViFaultsIsAppTarget @ 0x1406C54D0 (ViFaultsIsAppTarget.c)
 */

__int64 __fastcall ViFaultsAddAppNoDuplicates(void *Src, __int64 a2)
{
  unsigned int v4; // ebp
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v6; // rsi
  const WCHAR *p_Length; // rbx
  KIRQL v8; // bl
  PVOID **v9; // rax

  v4 = 0;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * a2 + 34, 0x41466656u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    p_Length = &PoolWithTag[2].Length;
    memmove(&PoolWithTag[2], Src, 2 * a2);
    p_Length[a2] = 0;
    RtlInitUnicodeString(v6 + 1, p_Length);
    RtlUpcaseUnicodeString(v6 + 1, v6 + 1, 0);
    v8 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
    ViFaultLockOwner = (__int64)KeGetCurrentThread();
    if ( (unsigned int)ViFaultsIsAppTarget(&v6[1]) )
    {
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v9 = (PVOID **)qword_1402DB238;
      *(_QWORD *)&v6->Length = &ViFaultApplicationsList;
      v6->Buffer = (wchar_t *)v9;
      if ( *v9 != &ViFaultApplicationsList )
        __fastfail(3u);
      *v9 = (PVOID *)v6;
      qword_1402DB238 = (__int64)v6;
    }
    ViFaultLockOwner = 0LL;
    KeReleaseSpinLock(&ViFaultInjectionLock, v8);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
