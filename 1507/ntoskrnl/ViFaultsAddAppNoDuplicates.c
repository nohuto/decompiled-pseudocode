/*
 * XREFs of ViFaultsAddAppNoDuplicates @ 0x140746A44
 * Callers:
 *     ViFaultsAddAllApps @ 0x1407468EC (ViFaultsAddAllApps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlUpcaseUnicodeString @ 0x140443520 (RtlUpcaseUnicodeString.c)
 *     ViFaultsIsAppTarget @ 0x140746F80 (ViFaultsIsAppTarget.c)
 */

__int64 __fastcall ViFaultsAddAppNoDuplicates(void *Src, __int64 a2)
{
  unsigned int v4; // edi
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v6; // rsi
  unsigned __int8 CurrentIrql; // bl
  PVOID **v8; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * a2 + 34, 0x41466656u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(&PoolWithTag[2], Src, 2 * a2);
    *(&v6[2].Length + a2) = 0;
    RtlInitUnicodeString(v6 + 1, &v6[2].Length);
    RtlUpcaseUnicodeString(v6 + 1, v6 + 1, 0);
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
    if ( (unsigned int)ViFaultsIsAppTarget(&v6[1]) )
    {
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v8 = (PVOID **)qword_14032B598;
      *(_QWORD *)&v6->Length = &ViFaultApplicationsList;
      v6->Buffer = (wchar_t *)v8;
      if ( *v8 != &ViFaultApplicationsList )
        __fastfail(3u);
      *v8 = (PVOID *)v6;
      qword_14032B598 = (__int64)v6;
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
  return v4;
}
