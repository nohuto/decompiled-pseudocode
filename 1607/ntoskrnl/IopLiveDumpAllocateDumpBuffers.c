/*
 * XREFs of IopLiveDumpAllocateDumpBuffers @ 0x140626D10
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140626760 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1401CADBC (IopLiveDumpIsUnderMemoryPressure.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmFreeIndependentPages @ 0x1403E1F14 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140626FFC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14062708C (IopLiveDumpFreeDumpBuffers.c)
 */

__int64 __fastcall IopLiveDumpAllocateDumpBuffers(_QWORD *a1)
{
  __int64 *v1; // rbx
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbp
  PVOID PoolWithTag; // rax
  __int64 v8; // r9
  unsigned int v9; // edi
  unsigned __int64 v10; // r8
  __int64 v11; // rdi
  unsigned __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx

  v1 = a1 + 61;
  a1[64] = 0LL;
  a1[68] = 0LL;
  a1[61] = 0LL;
  v3 = a1[14] + 63LL;
  a1[13] = (a1[13] + 63LL) & 0xFFFFFFFFFFFFFFC0uLL;
  v3 &= 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1[12];
  a1[14] = v3;
  v5 = (v4 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  a1[12] = v5;
  v6 = (v5 >> 6) + (v3 >> 6);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (8 * v6 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0x706D644Cu);
  v1[8] = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_12:
    v9 = -1073741670;
    goto LABEL_13;
  }
  if ( !IopLiveDumpIsUnderMemoryPressure(a1[74], a1[75]) )
  {
    IopLiveDumpDiscardVirtualAddressRange(a1, v8, (8 * v6 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    memset((void *)v1[8], 0, (8 * v6 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v11 = 0LL;
    if ( v6 )
    {
      while ( MmAllocateIndependentPages(0x40000uLL, -1, v10) )
      {
        if ( IopLiveDumpIsUnderMemoryPressure(a1[74], a1[75]) )
        {
          MmFreeIndependentPages(v12, 0x40000uLL);
          goto LABEL_3;
        }
        *(_QWORD *)(v1[8] + 8 * v11) = v12;
        ++v1[7];
        *v1 += 64LL;
        IopLiveDumpDiscardVirtualAddressRange(a1, v12, 0x40000LL);
        if ( ++v11 >= v6 )
          break;
      }
    }
    if ( !IopLiveDumpIsUnderMemoryPressure(a1[74], a1[75]) )
    {
      if ( (unsigned __int64)*v1 >= a1[13] )
      {
        v9 = 0;
        goto LABEL_14;
      }
      goto LABEL_12;
    }
  }
LABEL_3:
  v9 = -1073741248;
LABEL_13:
  IopLiveDumpFreeDumpBuffers(v1);
  *v1 = 0LL;
LABEL_14:
  v13 = a1[14];
  v14 = a1[13];
  v15 = *v1;
  if ( *v1 < (unsigned __int64)(v13 + v14) )
  {
    if ( v15 )
    {
      v1[1] = v14;
      v1[2] = v15 - v14;
    }
    else
    {
      v1[1] = 0LL;
      v1[2] = 0LL;
    }
  }
  else
  {
    v1[1] = v15 - v13;
    v1[2] = a1[14];
  }
  return v9;
}
