/*
 * XREFs of IopSetLockOperationProcess @ 0x14006DB64
 * Callers:
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     NtLockFile @ 0x1404A4FE4 (NtLockFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     IopGetSetSpecificExtension @ 0x14007123C (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopSetLockOperationProcess(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _QWORD *v4; // rbx
  char v5; // bp
  unsigned int v9; // esi
  __int64 result; // rax
  _QWORD *PoolWithTagPriority; // rax
  volatile signed __int32 *v12; // rdi
  unsigned __int8 CurrentIrql; // r13
  __int64 v14; // rdx
  char v15; // r14
  __int64 v16; // rcx
  _QWORD *v17; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 FileObjectExtension; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 )
  {
    v9 = 0;
    FileObjectExtension = IopGetFileObjectExtension(a1, 1LL, 0LL);
    if ( !FileObjectExtension )
      return 3221225473LL;
LABEL_10:
    v12 = (volatile signed __int32 *)(a1 + 184);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(a1 + 184);
    }
    else if ( _interlockedbittestandset64(v12, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(a1 + 184);
    }
    v14 = FileObjectExtension;
    v15 = *(_BYTE *)(a1 + 72);
    v16 = *(_QWORD *)(FileObjectExtension + 16);
    if ( v16 )
    {
      v17 = *(_QWORD **)(FileObjectExtension + 16);
      while ( v17[1] != a2 )
      {
        v17 = (_QWORD *)*v17;
        if ( !v17 )
          goto LABEL_25;
      }
      v5 = 1;
    }
    else
    {
LABEL_25:
      if ( !a3 )
      {
        if ( v4 )
        {
          *v4 = v16;
          *(_QWORD *)(v14 + 16) = v4;
          v4[1] = a2;
        }
        else
        {
          v9 = -1073741670;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v12, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
    __writecr8(CurrentIrql);
    if ( v5 )
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
    }
    if ( !a3 )
      return v9;
    if ( v15 )
      return v5 == 0 ? 0xC0000001 : 0;
    return 3221225473LL;
  }
  LOBYTE(a4) = 1;
  result = IopGetSetSpecificExtension(a1, 1LL, 32LL, a4, &FileObjectExtension, 0LL);
  v9 = result;
  if ( (int)result >= 0 )
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              NonPagedPoolNx,
                              0x10uLL,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x20206F49u);
    v4 = PoolWithTagPriority;
    goto LABEL_10;
  }
  return result;
}
