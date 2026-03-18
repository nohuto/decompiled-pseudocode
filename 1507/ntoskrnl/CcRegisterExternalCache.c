/*
 * XREFs of CcRegisterExternalCache @ 0x1401DCCB0
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcRegisterExternalCache(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 **v8; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  if ( !CcInitializationComplete )
    KeBugCheckEx(0x34u, 0x18C8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43456343u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    *v6 = a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&CcExternalCacheListLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&CcExternalCacheListLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&CcExternalCacheListLock);
    }
    v8 = (__int64 **)qword_14034E138;
    v6[5] = qword_14034E138;
    v6[4] = &CcExternalCacheList;
    if ( *v8 != &CcExternalCacheList )
      __fastfail(3u);
    *v8 = v6 + 4;
    qword_14034E138 = (__int64)(v6 + 4);
    if ( CcNumberOfExternalCaches + 1 <= (unsigned int)CcNumberOfExternalCaches )
      KeBugCheckEx(0x34u, 0x1035uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    ++CcNumberOfExternalCaches;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&CcExternalCacheListLock, retaddr);
    else
      _InterlockedAnd64(&CcExternalCacheListLock, 0LL);
    __writecr8(CurrentIrql);
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
