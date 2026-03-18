/*
 * XREFs of MiAllocatePerSessionProtos @ 0x14062BADC
 * Callers:
 *     MiCreateSessionDriverProtos @ 0x140621578 (MiCreateSessionDriverProtos.c)
 *     MiCreatePerSessionProtos @ 0x14062BE88 (MiCreatePerSessionProtos.c)
 * Callees:
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14001EDD8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MmSizeOfMdl @ 0x1400FE044 (MmSizeOfMdl.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiFillPerSessionProtos @ 0x14062C154 (MiFillPerSessionProtos.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  unsigned __int64 v5; // rbx
  struct _MDL *v7; // r15
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // r14
  int v11; // ebx
  __int64 *v12; // rax
  __int64 *v13; // r12
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 *v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned __int64 v20; // r12
  SIZE_T v21; // rdi
  SIZE_T v22; // rax
  struct _MDL *v23; // rax
  int v24; // ebx
  int v25; // eax
  void *v26; // rcx
  unsigned int v27; // [rsp+50h] [rbp-88h]
  __int64 v28; // [rsp+58h] [rbp-80h]
  _QWORD *v29; // [rsp+60h] [rbp-78h]
  _QWORD *v30; // [rsp+68h] [rbp-70h]
  _QWORD v31[2]; // [rsp+78h] [rbp-60h] BYREF
  _QWORD v32[10]; // [rsp+88h] [rbp-50h] BYREF

  v5 = a2;
  *a5 = 0LL;
  v7 = 0LL;
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)MiSystemPartition, *(unsigned int *)(a1 + 44), 0LL) )
    return 3221225773LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x73536D4Du);
  v10 = PoolWithTag;
  v30 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_4;
  *((_DWORD *)PoolWithTag + 10) = 1;
  v12 = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * *(unsigned int *)(a1 + 44), 0x74536D4Du);
  v13 = v12;
  v10[4] = v12;
  if ( !v12 )
    goto LABEL_4;
  memset(v12, 0, 8LL * *(unsigned int *)(a1 + 44));
  v14 = 16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40);
  v15 = 0;
  v27 = 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_20;
  v16 = *(__int64 **)(a1 + 8);
  while ( 1 )
  {
    v17 = MI_READ_PTE_LOCK_FREE(v16);
    v18 = v17;
    if ( !v17 )
      break;
    if ( !a2 )
    {
      if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v17) )
      {
        *v13 = v14;
        if ( MiPteInShadowRange((__int64)v13) )
        {
          v19 = v14;
LABEL_15:
          MiWritePteShadow((__int64)v13, v19);
        }
      }
      else
      {
        *v13 = v18;
        if ( MiPteInShadowRange((__int64)v13) )
        {
          v19 = v18;
          goto LABEL_15;
        }
      }
    }
    ++v13;
    ++v16;
    v15 = v27 + 1;
    v27 = v15;
    if ( v15 >= *(_DWORD *)(a1 + 44) )
      goto LABEL_19;
  }
  v15 = v27;
LABEL_19:
  v10 = v30;
  v7 = 0LL;
  v5 = a2;
LABEL_20:
  v28 = v10[4];
  if ( !v5 )
  {
LABEL_29:
    *a5 = v10;
    v10 = 0LL;
    v11 = 0;
    goto LABEL_30;
  }
  v29 = *(_QWORD **)a1;
  v20 = v15;
  v21 = (unsigned __int64)v15 << 12;
  v22 = MmSizeOfMdl((PVOID)v5, v21);
  v23 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v22, 0x206C644Du);
  v7 = v23;
  if ( !v23 )
    goto LABEL_4;
  v23->Next = 0LL;
  v23->Size = 8 * (((v21 + (v5 & 0xFFF) + 4095) >> 12) + 6);
  v23->MdlFlags = 0;
  v23->StartVa = (PVOID)(v5 & 0xFFFFFFFFFFFFF000uLL);
  v23->ByteOffset = v5 & 0xFFF;
  v23->ByteCount = v21;
  MmProbeAndLockPages(v23, 0, IoReadAccess);
  v24 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
  if ( !(unsigned int)MiChargeResident(MiSystemPartition, v20, 0LL) )
  {
LABEL_4:
    v11 = -1073741670;
    goto LABEL_30;
  }
  _InterlockedExchangeAdd64(&qword_1402FF600, v20);
  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x80000) != 0 && (v24 & 2) != 0 )
  {
    v32[1] = *(_QWORD *)(v29[12] + 16LL);
    v32[0] = (unsigned __int64)a3 << 12;
    v31[1] = 0LL;
    v31[0] = a4 + *(_QWORD *)(*v29 + 32LL) + (a3 << 12);
    v25 = MiFillPerSessionProtos((_DWORD)v29, v28, (int)v7 + 48, v27, v24, a3, a4, (__int64)v32, (__int64)v31);
  }
  else
  {
    v25 = MiFillPerSessionProtos((_DWORD)v29, v28, (int)v7 + 48, v27, v24, a3, a4, 0LL, 0LL);
  }
  v11 = v25;
  if ( v25 >= 0 )
    goto LABEL_29;
LABEL_30:
  if ( v7 )
  {
    MmUnlockPages(v7);
    ExFreePoolWithTag(v7, 0);
  }
  if ( v10 )
  {
    v26 = (void *)v10[4];
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    ExFreePoolWithTag(v10, 0);
  }
  if ( v11 < 0 )
    MiReturnCommit((__int64)MiSystemPartition, *(unsigned int *)(a1 + 44));
  return (unsigned int)v11;
}
