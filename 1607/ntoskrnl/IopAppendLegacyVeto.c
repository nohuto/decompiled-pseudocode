/*
 * XREFs of IopAppendLegacyVeto @ 0x14062A54C
 * Callers:
 *     IoGetLegacyVetoList @ 0x1403F2D94 (IoGetLegacyVetoList.c)
 *     IopGetLegacyVetoListDeviceNode @ 0x1403F43C0 (IopGetLegacyVetoListDeviceNode.c)
 *     IopGetLegacyVetoListDrivers @ 0x140404424 (IopGetLegacyVetoListDrivers.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char __fastcall IopAppendLegacyVeto(const void ***a1, const void **a2)
{
  unsigned int v3; // r15d
  _WORD *PoolWithTag; // rax
  _WORD *v6; // rdi
  PVOID *v7; // rsi
  const void *v8; // rdx
  const void **v9; // rax

  v3 = *(unsigned __int16 *)a2 + 2 + *((_DWORD *)a1 + 2);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x6F697050u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = (PVOID *)*a1;
    v8 = **a1;
    if ( v8 )
    {
      memmove(PoolWithTag, v8, *((unsigned int *)a1 + 2));
      ExFreePoolWithTag(*v7, 0);
    }
    memmove(&v6[(unsigned __int64)*((unsigned int *)a1 + 2) >> 1], a2[1], *(unsigned __int16 *)a2);
    v9 = *a1;
    *((_DWORD *)a1 + 2) = v3;
    v6[((unsigned __int64)v3 >> 1) - 1] = 0;
    *v9 = v6;
    return 1;
  }
  else
  {
    *(_DWORD *)a1[3] = -1073741670;
    return 0;
  }
}
