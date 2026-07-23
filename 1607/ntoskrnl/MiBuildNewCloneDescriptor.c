/*
 * XREFs of MiBuildNewCloneDescriptor @ 0x14050A7A4
 * Callers:
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x14050A958 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140028040 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140029750 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiUnlockPagedAddress @ 0x1400B26D4 (MiUnlockPagedAddress.c)
 *     MiLockPagedAddress @ 0x14010973C (MiLockPagedAddress.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiBuildNewCloneDescriptor(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  SIZE_T v6; // rsi
  _QWORD *PoolWithTag; // rbx
  char *v8; // rax
  char *v9; // rbp
  _QWORD *v10; // r14
  SIZE_T v11; // rdi
  _QWORD *result; // rax

  v4 = 32 * a2;
  v6 = 32 * a2 + 24;
  if ( (int)PsChargeProcessNonPagedPoolQuota(a1, v6) >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x64436D4Du);
    if ( PoolWithTag )
    {
      v8 = (char *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, v6, 0x6C436D4Du);
      v9 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x20uLL);
        v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x68436D4Du);
        if ( v10 )
        {
          v11 = 0LL;
          if ( !v6 )
          {
LABEL_8:
            *v10 = a2;
            v10[1] = 1LL;
            v10[2] = v9;
            PoolWithTag[6] = 0LL;
            PoolWithTag[4] = &v9[v4 - 32];
            PoolWithTag[9] = a3;
            result = PoolWithTag;
            PoolWithTag[3] = v9;
            PoolWithTag[5] = a2;
            PoolWithTag[7] = v10;
            PoolWithTag[8] = v6;
            return result;
          }
          while ( (unsigned int)MiLockPagedAddress((unsigned __int64)&v9[v11]) )
          {
            v11 += 4096LL;
            if ( v11 >= v6 )
              goto LABEL_8;
          }
          while ( v11 )
          {
            v11 -= 4096LL;
            MiUnlockPagedAddress((unsigned __int64)&v9[v11]);
          }
          ExFreePoolWithTag(v10, 0);
        }
        ExFreePoolWithTag(v9, 0);
      }
      PsReturnProcessNonPagedPoolQuota(a1, v6);
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      PsReturnProcessNonPagedPoolQuota(a1, v6);
    }
  }
  return 0LL;
}
