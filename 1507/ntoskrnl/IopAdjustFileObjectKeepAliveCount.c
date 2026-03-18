/*
 * XREFs of IopAdjustFileObjectKeepAliveCount @ 0x1401F737C
 * Callers:
 *     IoDecrementKeepAliveCount @ 0x1401F6E78 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x1401F6FAC (IoIncrementKeepAliveCount.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     IopGetSetSpecificExtension @ 0x14007123C (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopAdjustFileObjectKeepAliveCount(__int64 a1, __int64 a2, int a3, _DWORD *a4, _QWORD *a5)
{
  int v5; // r12d
  _QWORD *v7; // rdi
  PVOID v8; // rbx
  __int64 result; // rax
  unsigned int v10; // esi
  _QWORD *PoolWithTagPriority; // rax
  PVOID v12; // rax
  volatile signed __int32 *v13; // rbp
  __int64 v14; // r13
  __int64 *v15; // rdx
  _DWORD *v16; // rax
  bool v17; // al
  __int64 FileObjectExtension; // [rsp+30h] [rbp-48h] BYREF
  __int64 CurrentIrql; // [rsp+38h] [rbp-40h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v5 = a3;
  v7 = 0LL;
  v8 = 0LL;
  if ( a3 )
  {
    result = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &FileObjectExtension, 0LL);
    v10 = result;
    if ( (int)result < 0 )
      return result;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              NonPagedPoolNx,
                              0x20uLL,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20206F49u);
    v7 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      v12 = ViVerifierDriverAddedThunkListHead
          ? ExAllocatePoolWithTagPriority(
              NonPagedPoolNx,
              0x38uLL,
              0x20206F49u,
              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1))
          : ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x20206F49u);
      v8 = v12;
      if ( !v12 )
      {
        ExFreePoolWithTag(v7, 0);
        v7 = 0LL;
      }
    }
    v5 = a3;
  }
  else
  {
    v10 = 0;
    FileObjectExtension = IopGetFileObjectExtension(a1, 1, 0LL);
    if ( !FileObjectExtension )
      return 3221225485LL;
  }
  v13 = (volatile signed __int32 *)(a1 + 184);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 184);
  }
  else if ( _interlockedbittestandset64(v13, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 184));
  }
  v14 = FileObjectExtension;
  v15 = *(__int64 **)(FileObjectExtension + 24);
  if ( v15 )
  {
    while ( v15[1] != a2 )
    {
      v15 = (__int64 *)*v15;
      if ( !v15 )
        goto LABEL_22;
    }
    if ( v5 )
      ++*((_DWORD *)v15 + 4);
    else
      --*((_DWORD *)v15 + 4);
    *a5 = v15[3];
    *a4 = *((_DWORD *)v15 + 4);
  }
  else
  {
LABEL_22:
    if ( v5 )
    {
      if ( v7 )
      {
        memset(v7, 0, 0x20uLL);
        memset(v8, 0, 0x38uLL);
        *v7 = *(_QWORD *)(v14 + 24);
        *(_QWORD *)(v14 + 24) = v7;
        v7[1] = a2;
        *((_DWORD *)v7 + 4) = 1;
        v7[3] = v8;
        *((_QWORD *)v8 + 3) = a2;
        *((_QWORD *)v8 + 5) = a1;
        if ( (*(_DWORD *)(a1 + 80) & 0x20000000) != 0 )
        {
          v16 = *(_DWORD **)(a1 + 208);
          v17 = !v16 || (*v16 & 8) == 0;
          *((_BYTE *)v8 + 18) = v17;
        }
        else
        {
          *((_BYTE *)v8 + 18) = 0;
        }
        v7 = 0LL;
        *a5 = v8;
        v8 = 0LL;
        *a4 = 1;
      }
      else
      {
        v10 = -1073741670;
      }
    }
    else
    {
      v10 = -1073741811;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(a1 + 184, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
  __writecr8((unsigned __int8)CurrentIrql);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v10;
}
