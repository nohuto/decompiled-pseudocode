/*
 * XREFs of IopLiveDumpAllocateDumpBuffers @ 0x140677924
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140677378 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140677C2C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140677CBC (IopLiveDumpFreeDumpBuffers.c)
 */

__int64 __fastcall IopLiveDumpAllocateDumpBuffers(_QWORD *a1)
{
  __int64 *v1; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbp
  PVOID PoolWithTag; // rax
  PVOID v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned __int64 i; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx

  v1 = a1 + 59;
  a1[62] = 0LL;
  a1[66] = 0LL;
  a1[59] = 0LL;
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
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_20:
    v11 = -1073741670;
    goto LABEL_21;
  }
  v9 = a1[72];
  v10 = a1[73];
  if ( (!v9 || !*(_DWORD *)(v9 + 4)) && (!v10 || !*(_DWORD *)(v10 + 4)) )
  {
    IopLiveDumpDiscardVirtualAddressRange(a1, v8, (8 * v6 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    memset((void *)v1[8], 0, (8 * v6 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    for ( i = 0LL; i < v6; ++i )
    {
      v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40000uLL, 0x706D644Cu);
      if ( !v8 )
        break;
      v13 = a1[72];
      v14 = a1[73];
      if ( v13 && *(_DWORD *)(v13 + 4) || v14 && *(_DWORD *)(v14 + 4) )
        goto LABEL_6;
      *(_QWORD *)(v1[8] + 8 * i) = v8;
      ++v1[7];
      *v1 += 64LL;
      IopLiveDumpDiscardVirtualAddressRange(a1, v8, 0x40000LL);
    }
    v15 = a1[72];
    v16 = a1[73];
    if ( (!v15 || !*(_DWORD *)(v15 + 4)) && (!v16 || !*(_DWORD *)(v16 + 4)) )
    {
      if ( (unsigned __int64)*v1 >= a1[13] )
      {
        v11 = 0;
        goto LABEL_22;
      }
      goto LABEL_20;
    }
  }
LABEL_6:
  v11 = -1073741248;
LABEL_21:
  IopLiveDumpFreeDumpBuffers(v1, v8);
  *v1 = 0LL;
LABEL_22:
  v17 = a1[14];
  v18 = a1[13];
  v19 = *v1;
  if ( *v1 < (unsigned __int64)(v17 + v18) )
  {
    if ( v19 )
    {
      v1[1] = v18;
      v1[2] = v19 - v18;
    }
    else
    {
      v1[1] = 0LL;
      v1[2] = 0LL;
    }
  }
  else
  {
    v1[1] = v19 - v17;
    v1[2] = a1[14];
  }
  return v11;
}
