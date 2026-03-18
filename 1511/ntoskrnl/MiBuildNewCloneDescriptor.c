/*
 * XREFs of MiBuildNewCloneDescriptor @ 0x140460EE0
 * Callers:
 *     MiCloneVads @ 0x14001D7C8 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400612C0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14006C2EC (PsReturnProcessNonPagedPoolQuota.c)
 *     MiLockPagedAddress @ 0x14009A36C (MiLockPagedAddress.c)
 *     MiUnlockPagedAddress @ 0x1400F3224 (MiUnlockPagedAddress.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiBuildNewCloneDescriptor(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned __int64 v6; // rsi
  _QWORD *PoolWithTag; // rbx
  char *v8; // rax
  char *v9; // rbp
  _QWORD *v10; // r14
  unsigned __int64 v11; // rdi
  _QWORD *result; // rax

  v4 = 32 * a2;
  v6 = 32 * a2 + 24;
  if ( (int)PsChargeProcessNonPagedPoolQuota((__int64)a1, v6) >= 0 )
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
          while ( (unsigned int)MiLockPagedAddress((ULONG_PTR)&v9[v11]) )
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
