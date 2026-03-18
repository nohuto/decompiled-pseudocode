/*
 * XREFs of MiCreatePartition @ 0x140624224
 * Callers:
 *     NtCreatePartition @ 0x140624D1C (NtCreatePartition.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     MiDereferencePartition @ 0x1400BC1D4 (MiDereferencePartition.c)
 *     MiInsertNewPartitionInList @ 0x140132030 (MiInsertNewPartitionInList.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1401413A4 (MiInitializeWorkingSetManagerParameters.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiInitializePartition @ 0x1405201DC (MiInitializePartition.c)
 *     MiPartitionObjectCreate @ 0x1405261F8 (MiPartitionObjectCreate.c)
 *     MiAllocatePartitionId @ 0x140623F10 (MiAllocatePartitionId.c)
 *     MiInitializePartitionThreads @ 0x14062473C (MiInitializePartitionThreads.c)
 */

__int64 __fastcall MiCreatePartition(_QWORD *Object, ACCESS_MASK a2, __int64 a3, char a4, _QWORD *a5)
{
  int v5; // r11d
  _QWORD *v7; // r14
  __int64 v9; // r10
  SIZE_T v12; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rbx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int16 PartitionId; // ax
  int v22; // edi

  v5 = (unsigned __int16)KeNumberNodes;
  v7 = a5;
  v9 = 1336LL * (unsigned __int16)KeNumberNodes;
  *a5 = 0LL;
  v12 = 16LL * (unsigned int)(2 * dword_1402FE70C)
      + ((v9 + 40LL * (unsigned int)(2 * dword_1402FE70C) + 10063) & 0xFFFFFFFFFFFFFFF0uLL)
      + 24LL * (unsigned int)(v5 + 2 * dword_1402FE70C + 27);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x6150694Du);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v12);
  v16 = (unsigned __int16)KeNumberNodes;
  v14[5] = v14 + 1256;
  v17 = (__int64)&v14[167 * v16 + 1256];
  v14[200] = v17;
  v18 = v17 + 40LL * (unsigned int)dword_1402FE70C;
  v14[201] = v18;
  v19 = (v18 + 40LL * (unsigned int)dword_1402FE70C + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v14[202] = v19;
  v20 = v19 + 16LL * (unsigned int)dword_1402FE70C;
  v14[203] = v20;
  v14[617] = v20 + 16LL * (unsigned int)dword_1402FE70C;
  PartitionId = MiAllocatePartitionId((__int64)v14);
  if ( !PartitionId )
  {
    ExFreePoolWithTag(v14, 0);
    return 3221225495LL;
  }
  MiInitializePartition((unsigned __int64)v14, PartitionId);
  if ( Object )
  {
    ObfReferenceObject(Object);
    v14[2] = *Object;
  }
  if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)v14) )
  {
    v22 = MiInitializePartitionThreads(v14);
    if ( v22 >= 0 )
    {
      MiInsertNewPartitionInList((__int64)v14);
      v22 = MiPartitionObjectCreate((__int64)v14, a3, a2, a4, &a5);
      if ( v22 >= 0 )
      {
        *v7 = *(_QWORD *)(*a5 + 208LL);
        return (unsigned int)v22;
      }
    }
  }
  else
  {
    v22 = -1073741670;
  }
  MiDereferencePartition(v14);
  return (unsigned int)v22;
}
