/*
 * XREFs of IopAdjustFileObjectKeepAliveCount @ 0x1401C9AE0
 * Callers:
 *     IoDecrementKeepAliveCount @ 0x1401C96E4 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x1401C97D0 (IoIncrementKeepAliveCount.c)
 * Callees:
 *     IopGetSetSpecificExtension @ 0x14007AF10 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopAdjustFileObjectKeepAliveCount(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  PVOID v6; // rbx
  __int64 result; // rax
  unsigned int v10; // esi
  _QWORD *PoolWithTagPriority; // rax
  PVOID v12; // rax
  __int64 FileObjectExtension; // r14
  KIRQL v14; // al
  __int64 *v15; // rdx
  _DWORD *v16; // rax
  bool v17; // al
  __int64 v18[9]; // [rsp+30h] [rbp-48h] BYREF
  KIRQL NewIrql; // [rsp+90h] [rbp+18h]
  _DWORD *v21; // [rsp+98h] [rbp+20h]

  v21 = (_DWORD *)a4;
  v5 = 0LL;
  v6 = 0LL;
  if ( a3 )
  {
    LOBYTE(a4) = 1;
    result = IopGetSetSpecificExtension(a1, 1u, 32LL, a4, v18, 0LL);
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
    v5 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      v12 = ViVerifierDriverAddedThunkListHead
          ? ExAllocatePoolWithTagPriority(
              NonPagedPoolNx,
              0x38uLL,
              0x20206F49u,
              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1))
          : ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x20206F49u);
      v6 = v12;
      if ( !v12 )
      {
        ExFreePoolWithTag(v5, 0);
        v5 = 0LL;
      }
    }
    FileObjectExtension = v18[0];
  }
  else
  {
    v10 = 0;
    FileObjectExtension = IopGetFileObjectExtension(a1, 1, 0LL);
    if ( !FileObjectExtension )
      return 3221225485LL;
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v15 = *(__int64 **)(FileObjectExtension + 24);
  NewIrql = v14;
  if ( v15 )
  {
    while ( v15[1] != a2 )
    {
      v15 = (__int64 *)*v15;
      if ( !v15 )
        goto LABEL_16;
    }
    if ( a3 )
      ++*((_DWORD *)v15 + 4);
    else
      --*((_DWORD *)v15 + 4);
    *a5 = v15[3];
    *v21 = *((_DWORD *)v15 + 4);
  }
  else
  {
LABEL_16:
    if ( a3 )
    {
      if ( v5 )
      {
        memset(v5, 0, 0x20uLL);
        memset(v6, 0, 0x38uLL);
        *v5 = *(_QWORD *)(FileObjectExtension + 24);
        *(_QWORD *)(FileObjectExtension + 24) = v5;
        v5[1] = a2;
        *((_DWORD *)v5 + 4) = 1;
        v5[3] = v6;
        *((_QWORD *)v6 + 3) = a2;
        *((_QWORD *)v6 + 5) = a1;
        if ( (*(_DWORD *)(a1 + 80) & 0x20000000) != 0 )
        {
          v16 = *(_DWORD **)(a1 + 208);
          v17 = !v16 || (*v16 & 8) == 0;
          *((_BYTE *)v6 + 18) = v17;
        }
        else
        {
          *((_BYTE *)v6 + 18) = 0;
        }
        v5 = 0LL;
        *a5 = v6;
        v6 = 0LL;
        *v21 = 1;
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
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 184), NewIrql);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v10;
}
