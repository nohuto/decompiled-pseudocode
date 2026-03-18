/*
 * XREFs of MiCreatePartition @ 0x1406601A8
 * Callers:
 *     NtCreatePartition @ 0x14066120C (NtCreatePartition.c)
 * Callees:
 *     MiDereferencePartition @ 0x140001D0C (MiDereferencePartition.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     MiInsertNewPartitionInList @ 0x1400B5A48 (MiInsertNewPartitionInList.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14014AC3C (MiInitializeWorkingSetManagerParameters.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     MiConvertPartitionWs @ 0x1401F1340 (MiConvertPartitionWs.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiInitializePartition @ 0x14054ECF0 (MiInitializePartition.c)
 *     MiPartitionObjectCreate @ 0x140552E68 (MiPartitionObjectCreate.c)
 *     MiCreateLargePfnBitMaps @ 0x140575FB0 (MiCreateLargePfnBitMaps.c)
 *     MiAllocatePartitionId @ 0x140659938 (MiAllocatePartitionId.c)
 *     MiInitializePartitionThreads @ 0x140659B40 (MiInitializePartitionThreads.c)
 */

__int64 __fastcall MiCreatePartition(_QWORD *Object, ACCESS_MASK a2, __int64 a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // rsi
  __int64 result; // rax
  SIZE_T v11; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int16 PartitionId; // ax
  unsigned __int64 v20; // r8
  NTSTATUS v21; // ebx

  v5 = a5;
  *a5 = 0LL;
  result = MiConvertPartitionWs();
  if ( (int)result >= 0 )
  {
    v11 = 16LL * (unsigned int)(2 * dword_1403269FC)
        + ((2184LL * (unsigned __int16)KeNumberNodes + 40LL * (unsigned int)(2 * dword_1403269FC) + 11279) & 0xFFFFFFFFFFFFFFF0uLL)
        + 24LL * (2 * dword_1403269FC + (unsigned int)(unsigned __int16)KeNumberNodes + 27);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x6150694Du);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, v11);
    v14 = (unsigned __int16)KeNumberNodes;
    v13[6] = v13 + 1408;
    v15 = (__int64)&v13[273 * v14 + 1408];
    v13[216] = v15;
    v16 = v15 + 40LL * (unsigned int)dword_1403269FC;
    v13[217] = v16;
    v17 = (v16 + 40LL * (unsigned int)dword_1403269FC + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v13[218] = v17;
    v18 = v17 + 16LL * (unsigned int)dword_1403269FC;
    v13[219] = v18;
    v13[562] = v18 + 16LL * (unsigned int)dword_1403269FC;
    PartitionId = MiAllocatePartitionId((__int64)v13);
    if ( !PartitionId )
    {
      ExFreePoolWithTag(v13, 0);
      return 3221225495LL;
    }
    MiInitializePartition((__int64)v13, PartitionId);
    if ( Object )
    {
      ObfReferenceObject(Object);
      v13[3] = *Object;
    }
    if ( (unsigned int)MiCreateLargePfnBitMaps((__int64)v13, 0LL, v20)
      && (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)v13) )
    {
      v21 = MiInitializePartitionThreads(v13);
      if ( v21 >= 0 )
      {
        MiInsertNewPartitionInList((__int64)v13);
        v21 = MiPartitionObjectCreate((__int64)v13, a3, a2, a4, &a5);
        if ( v21 >= 0 )
        {
          *v5 = *(_QWORD *)(*a5 + 216LL);
          return (unsigned int)v21;
        }
      }
    }
    else
    {
      v21 = -1073741670;
    }
    MiDereferencePartition(v13);
    return (unsigned int)v21;
  }
  return result;
}
