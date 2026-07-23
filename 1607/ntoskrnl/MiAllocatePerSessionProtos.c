/*
 * XREFs of MiAllocatePerSessionProtos @ 0x1406618FC
 * Callers:
 *     MiCreatePerSessionProtos @ 0x140661C44 (MiCreatePerSessionProtos.c)
 *     MiCreateSessionDriverProtos @ 0x140664698 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MmSizeOfMdl @ 0x1400883D0 (MmSizeOfMdl.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSubsectionPte @ 0x1401F25A8 (MiMakeSubsectionPte.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiFillPerSessionProtos @ 0x140661F18 (MiFillPerSessionProtos.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  struct _MDL *v7; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rsi
  int v11; // edi
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  unsigned __int64 v14; // r11
  unsigned int i; // r13d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r11
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // r9
  SIZE_T v26; // rdi
  SIZE_T v27; // rax
  struct _MDL *v28; // rax
  int v29; // edi
  int v30; // eax
  void *v31; // rcx
  __int64 v32; // [rsp+50h] [rbp-78h]
  _QWORD *v33; // [rsp+58h] [rbp-70h]
  _QWORD v34[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v35[9]; // [rsp+80h] [rbp-48h] BYREF

  *a5 = 0LL;
  v7 = 0LL;
  if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, *(unsigned int *)(a1 + 44), 0) )
    return 3221225773LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x73536D4Du);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 10) = 1;
    v12 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * *(unsigned int *)(a1 + 44), 0x74536D4Du);
    v13 = v12;
    v10[4] = v12;
    if ( v12 )
    {
      memset(v12, 0, 8LL * *(unsigned int *)(a1 + 44));
      MiMakeSubsectionPte(a1);
      v14 = *(_QWORD *)(a1 + 8);
      for ( i = 0; i < *(_DWORD *)(a1 + 44); ++i )
      {
        v16 = MI_READ_PTE_LOCK_FREE(v14);
        if ( !v16 )
          break;
        if ( !a2 )
        {
          if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v16, v17, v18, v16) )
          {
            *v13 = v21;
            if ( MiPteInShadowRange((unsigned __int64)v13) )
            {
              v24 = v23;
LABEL_14:
              MiWritePteShadow(v22, v24);
            }
          }
          else
          {
            *v13 = v20;
            if ( MiPteInShadowRange((unsigned __int64)v13) )
            {
              v24 = v25;
              goto LABEL_14;
            }
          }
        }
        ++v13;
        v14 = v19 + 8;
      }
      v32 = v10[4];
      if ( !a2 )
      {
LABEL_25:
        *a5 = v10;
        v10 = 0LL;
        v11 = 0;
        goto LABEL_26;
      }
      v33 = *(_QWORD **)a1;
      v26 = (unsigned __int64)i << 12;
      v27 = MmSizeOfMdl((PVOID)a2, v26);
      v28 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v27, 0x206C644Du);
      v7 = v28;
      if ( v28 )
      {
        v28->Next = 0LL;
        v28->Size = 8 * (((v26 + (a2 & 0xFFF) + 4095) >> 12) + 6);
        v28->MdlFlags = 0;
        v28->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
        v28->ByteOffset = a2 & 0xFFF;
        v28->ByteCount = v26;
        MmProbeAndLockPages(v28, 0, IoReadAccess);
        v29 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
        if ( (unsigned int)MiChargeResident(MiSystemPartition, i, 0LL) )
        {
          if ( (MiFlags & 0x4000) != 0 && (MiFlags & 0x20000) != 0 && (v29 & 2) != 0 )
          {
            v35[1] = *(_QWORD *)(v33[12] + 16LL);
            v35[0] = (unsigned __int64)a3 << 12;
            v34[1] = 0LL;
            v34[0] = a4 + *(_QWORD *)(*v33 + 32LL) + (a3 << 12);
            v30 = MiFillPerSessionProtos((_DWORD)v33, v32, (int)v7 + 48, i, v29, a3, a4, (__int64)v35, (__int64)v34);
          }
          else
          {
            v30 = MiFillPerSessionProtos((_DWORD)v33, v32, (int)v7 + 48, i, v29, a3, a4, 0LL, 0LL);
          }
          v11 = v30;
          if ( v30 < 0 )
            goto LABEL_26;
          goto LABEL_25;
        }
      }
    }
  }
  v11 = -1073741670;
LABEL_26:
  if ( v7 )
  {
    MmUnlockPages(v7);
    ExFreePoolWithTag(v7, 0);
  }
  if ( v10 )
  {
    v31 = (void *)v10[4];
    if ( v31 )
      ExFreePoolWithTag(v31, 0);
    ExFreePoolWithTag(v10, 0);
  }
  if ( v11 < 0 )
    MiReturnCommit((__int64)MiSystemPartition, *(unsigned int *)(a1 + 44));
  return (unsigned int)v11;
}
