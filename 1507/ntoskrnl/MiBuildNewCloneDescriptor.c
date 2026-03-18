/*
 * XREFs of MiBuildNewCloneDescriptor @ 0x1404069E0
 * Callers:
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLockPagedAddress @ 0x140004FA4 (MiLockPagedAddress.c)
 *     MiUnlockPagedAddress @ 0x1400056EC (MiUnlockPagedAddress.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14008B6A0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiBuildNewCloneDescriptor(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  SIZE_T v6; // rsi
  _QWORD *PoolWithTag; // rbx
  char *v8; // rax
  char *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r14
  SIZE_T v13; // rdi
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
        v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x68436D4Du);
        if ( v12 )
        {
          v13 = 0LL;
          if ( !v6 )
          {
LABEL_8:
            *v12 = a2;
            v12[1] = 1LL;
            v12[2] = v9;
            PoolWithTag[6] = 0LL;
            PoolWithTag[4] = &v9[v4 - 32];
            PoolWithTag[9] = a3;
            result = PoolWithTag;
            PoolWithTag[3] = v9;
            PoolWithTag[5] = a2;
            PoolWithTag[7] = v12;
            PoolWithTag[8] = v6;
            return result;
          }
          while ( (unsigned int)MiLockPagedAddress((unsigned __int64)&v9[v13], v10, v11) )
          {
            v13 += 4096LL;
            if ( v13 >= v6 )
              goto LABEL_8;
          }
          while ( v13 )
          {
            v13 -= 4096LL;
            MiUnlockPagedAddress((unsigned __int64)&v9[v13]);
          }
          ExFreePoolWithTag(v12, 0);
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
