/*
 * XREFs of MiAllocatePerSessionProtos @ 0x1406A30B8
 * Callers:
 *     MiCreateSessionDriverProtos @ 0x1406A0C0C (MiCreateSessionDriverProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406A3478 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MmSizeOfMdl @ 0x1400628C0 (MmSizeOfMdl.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeSubsectionPte @ 0x140225C5C (MiMakeSubsectionPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  struct _MDL *v6; // r15
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // r14
  int v10; // ebx
  __int64 *v11; // rax
  __int64 *v12; // r12
  __int64 SubsectionPte; // rdi
  unsigned int v14; // ecx
  __int64 *v15; // r14
  __int64 PteShadow; // rbx
  __int16 v17; // ax
  __int64 v18; // rdx
  unsigned __int64 v19; // r12
  SIZE_T v20; // rbx
  SIZE_T v21; // rax
  struct _MDL *v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // r9
  int v25; // eax
  void *v26; // rcx
  int v27; // [rsp+50h] [rbp-88h]
  __int64 *v28; // [rsp+58h] [rbp-80h]
  _QWORD *v29; // [rsp+60h] [rbp-78h]
  _QWORD *v30; // [rsp+68h] [rbp-70h]
  __int128 v31; // [rsp+78h] [rbp-60h] BYREF
  __int128 v32; // [rsp+88h] [rbp-50h] BYREF

  *a5 = 0LL;
  v6 = 0LL;
  if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, *(unsigned int *)(a1 + 44), 0) )
    return 3221225773LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x73536D4Du);
  v9 = PoolWithTag;
  v30 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_4;
  *((_DWORD *)PoolWithTag + 10) = 1;
  v11 = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * *(unsigned int *)(a1 + 44), 0x74536D4Du);
  v12 = v11;
  v9[4] = v11;
  if ( !v11 )
    goto LABEL_4;
  memset(v11, 0, 8LL * *(unsigned int *)(a1 + 44));
  SubsectionPte = MiMakeSubsectionPte(a1);
  v14 = 0;
  v27 = 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_25;
  v15 = *(__int64 **)(a1 + 8);
  while ( 1 )
  {
    PteShadow = *v15;
    if ( MiPteInShadowRange((__int64)v15) )
      PteShadow = MiReadPteShadow((__int64)v15, PteShadow);
    if ( !PteShadow )
      break;
    if ( !a2 )
    {
      if ( (PteShadow & 1) != 0
        || (v17 = MiReverseSwizzleInvalidPte(PteShadow), (v17 & 0x400) != 0)
        || (v17 & 0x800) != 0
        || (v17 & 4) != 0 )
      {
        *v12 = SubsectionPte;
        if ( MiPteInShadowRange((__int64)v12) )
        {
          v18 = SubsectionPte;
          goto LABEL_20;
        }
      }
      else
      {
        *v12 = PteShadow;
        if ( MiPteInShadowRange((__int64)v12) )
        {
          v18 = PteShadow;
LABEL_20:
          MiWritePteShadow((__int64)v12, v18);
        }
      }
    }
    ++v12;
    ++v15;
    v14 = v27 + 1;
    v27 = v14;
    if ( v14 >= *(_DWORD *)(a1 + 44) )
      goto LABEL_24;
  }
  v14 = v27;
LABEL_24:
  v9 = v30;
  v6 = 0LL;
LABEL_25:
  v28 = (__int64 *)v9[4];
  if ( !a2 )
  {
LABEL_34:
    *a5 = v9;
    v9 = 0LL;
    v10 = 0;
    goto LABEL_35;
  }
  v29 = *(_QWORD **)a1;
  v19 = v14;
  v20 = (unsigned __int64)v14 << 12;
  v21 = MmSizeOfMdl((PVOID)a2, v20);
  v22 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x206C644Du);
  v6 = v22;
  if ( !v22 )
    goto LABEL_4;
  v22->Next = 0LL;
  v22->Size = 8 * (((v20 + (a2 & 0xFFF) + 4095) >> 12) + 6);
  v22->MdlFlags = 0;
  v22->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v22->ByteOffset = a2 & 0xFFF;
  v22->ByteCount = v20;
  MmProbeAndLockPages(v22, 0, IoReadAccess);
  v23 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
  if ( !(unsigned int)MiChargeResident(MiSystemPartition, v19, 0LL, v24) )
  {
LABEL_4:
    v10 = -1073741670;
    goto LABEL_35;
  }
  _InterlockedExchangeAdd64(&qword_14034FAC0, v19);
  if ( (MiFlags & 0x30000) != 0 && (MiFlags & 0x80000) != 0 && (v23 & 2) != 0 )
  {
    *((_QWORD *)&v32 + 1) = *(_QWORD *)(v29[12] + 16LL);
    *(_QWORD *)&v32 = (unsigned __int64)a3 << 12;
    *((_QWORD *)&v31 + 1) = 0LL;
    *(_QWORD *)&v31 = a4 + *(_QWORD *)(*v29 + 32LL) + (a3 << 12);
    v25 = MiFillPerSessionProtos((int)v29, v28, (__int64)&v6[1], v27, v23, a3, a4, &v32, &v31);
  }
  else
  {
    v25 = MiFillPerSessionProtos((int)v29, v28, (__int64)&v6[1], v27, v23, a3, a4, 0LL, 0LL);
  }
  v10 = v25;
  if ( v25 >= 0 )
    goto LABEL_34;
LABEL_35:
  if ( v6 )
  {
    MmUnlockPages(v6);
    ExFreePoolWithTag(v6, 0);
  }
  if ( v9 )
  {
    v26 = (void *)v9[4];
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    ExFreePoolWithTag(v9, 0);
  }
  if ( v10 < 0 )
    MiReturnCommit((__int64)MiSystemPartition, *(unsigned int *)(a1 + 44));
  return (unsigned int)v10;
}
