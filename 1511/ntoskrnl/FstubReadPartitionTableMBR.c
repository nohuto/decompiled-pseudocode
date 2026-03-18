/*
 * XREFs of FstubReadPartitionTableMBR @ 0x1404E888C
 * Callers:
 *     IoReadPartitionTableEx @ 0x1404E8424 (IoReadPartitionTableEx.c)
 * Callees:
 *     FstubSetPartitionGuidMBR @ 0x140105C24 (FstubSetPartitionGuidMBR.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoReadPartitionTable @ 0x1404E89A8 (IoReadPartitionTable.c)
 */

NTSTATUS __fastcall FstubReadPartitionTableMBR(__int64 a1, __int64 a2, _QWORD *a3)
{
  ULONG v3; // edx
  struct _DEVICE_OBJECT *v5; // rcx
  NTSTATUS result; // eax
  NTSTATUS v7; // esi
  _DWORD *v8; // rbx
  unsigned int v9; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r9d
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(struct _DEVICE_OBJECT **)a1;
  P = 0LL;
  result = IoReadPartitionTable(v5, v3, 0, (struct _DRIVE_LAYOUT_INFORMATION **)&P);
  v7 = result;
  if ( result >= 0 )
  {
    v8 = P;
    v9 = 144 * *(_DWORD *)P + 48;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x42747346u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9);
      *v11 = 0;
      v12 = 0LL;
      v11[1] = *v8;
      for ( v11[2] = v8[1]; (unsigned int)v12 < *v8; v12 = (unsigned int)(v15 + 1) )
      {
        v13 = (__int64)&v11[36 * v12 + 12];
        v14 = 8LL * (unsigned int)v12;
        *(_DWORD *)v13 = 0;
        *(_QWORD *)(v13 + 8) = *(_QWORD *)&v8[v14 + 2];
        *(_QWORD *)(v13 + 16) = *(_QWORD *)&v8[v14 + 4];
        *(_BYTE *)(v13 + 28) = HIBYTE(v8[v14 + 8]);
        *(_DWORD *)(v13 + 24) = v8[v14 + 7];
        *(_BYTE *)(v13 + 32) = v8[v14 + 8];
        *(_BYTE *)(v13 + 33) = BYTE1(v8[v14 + 8]);
        *(_BYTE *)(v13 + 34) = BYTE2(v8[v14 + 8]);
        *(_DWORD *)(v13 + 36) = v8[v14 + 6];
        FstubSetPartitionGuidMBR(v8[1], v13);
      }
      ExFreePoolWithTag(v8, 0);
      result = v7;
      *a3 = v11;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
