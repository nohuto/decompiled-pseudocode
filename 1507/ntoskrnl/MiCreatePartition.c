/*
 * XREFs of MiCreatePartition @ 0x1406A3A54
 * Callers:
 *     NtCreatePartition @ 0x1406A4588 (NtCreatePartition.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     MiDereferencePartition @ 0x140100E94 (MiDereferencePartition.c)
 *     MiInsertNewPartitionInList @ 0x14015F5DC (MiInsertNewPartitionInList.c)
 *     MiAllocateMappedWriterMdls @ 0x14015F958 (MiAllocateMappedWriterMdls.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14016EFB8 (MiInitializeWorkingSetManagerParameters.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14021CD0C (MiAllocatePartitionPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiPartitionObjectCreate @ 0x140596A48 (MiPartitionObjectCreate.c)
 *     MiInitializePartition @ 0x140596C34 (MiInitializePartition.c)
 *     MiAllocatePartitionId @ 0x1406A3690 (MiAllocatePartitionId.c)
 *     MiInitializePartitionThreads @ 0x1406A3F98 (MiInitializePartitionThreads.c)
 */

__int64 __fastcall MiCreatePartition(_QWORD *Object, ACCESS_MASK a2, int a3, char a4, __int16 a5, _QWORD *a6)
{
  _QWORD *v6; // r14
  SIZE_T v11; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  __int16 PartitionId; // ax
  __int16 *v21; // rcx
  __int64 v22; // rdx
  int PartitionPhysicalPages; // edi
  __int64 v24; // r8
  __int64 v25; // r9
  int MappedWriterMdls; // eax
  int v27; // r9d

  v6 = a6;
  *a6 = 0LL;
  v11 = 16LL * (unsigned int)(2 * dword_14034EBBC)
      + ((1336LL * (unsigned __int16)KeNumberNodes + 9679 + 40LL * (unsigned int)(2 * dword_14034EBBC)) & 0xFFFFFFFFFFFFFFF0uLL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x6150694Du);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v11);
  v15 = (unsigned __int16)KeNumberNodes;
  v13[5] = v13 + 1208;
  v16 = (__int64)&v13[167 * v15 + 1208];
  v13[184] = v16;
  v17 = v16 + 40LL * (unsigned int)dword_14034EBBC;
  v13[185] = v17;
  v18 = (v17 + 40LL * (unsigned int)dword_14034EBBC + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v13[186] = v18;
  v13[187] = v18 + 16LL * (unsigned int)dword_14034EBBC;
  PartitionId = MiAllocatePartitionId((__int64)v13, v17, v18, v19);
  if ( !PartitionId )
  {
    ExFreePoolWithTag(v13, 0);
    return 3221225495LL;
  }
  MiInitializePartition((__int64)v13, PartitionId);
  if ( Object )
  {
    ObfReferenceObject(Object);
    v21 = (__int16 *)*Object;
    v13[2] = *Object;
  }
  else
  {
    v21 = MiSystemPartition;
  }
  PartitionPhysicalPages = MiAllocatePartitionPhysicalPages(v21, (__int64)v13, 4LL, a5);
  if ( PartitionPhysicalPages >= 0 )
  {
    if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)v13, v22, v24, v25) )
    {
      MappedWriterMdls = MiAllocateMappedWriterMdls(v13);
      if ( MappedWriterMdls >= 0 )
      {
        PartitionPhysicalPages = MiInitializePartitionThreads(v13);
        if ( PartitionPhysicalPages >= 0 )
        {
          MiInsertNewPartitionInList((__int64)v13);
          LOBYTE(v27) = a4;
          PartitionPhysicalPages = MiPartitionObjectCreate((__int64)v13, a3, a2, v27, &a6);
          if ( PartitionPhysicalPages >= 0 )
          {
            *v6 = *(_QWORD *)(*a6 + 224LL);
            return (unsigned int)PartitionPhysicalPages;
          }
        }
      }
      else
      {
        PartitionPhysicalPages = MappedWriterMdls;
      }
    }
    else
    {
      PartitionPhysicalPages = -1073741670;
    }
  }
  MiDereferencePartition(v13);
  return (unsigned int)PartitionPhysicalPages;
}
