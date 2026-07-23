/*
 * XREFs of MiPartitionObjectCreate @ 0x1405533A8
 * Callers:
 *     MiCreatePartition @ 0x14066028C (MiCreatePartition.c)
 *     MiSystemPartitionObjectCreate @ 0x1407A13BC (MiSystemPartitionObjectCreate.c)
 * Callees:
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 */

int __fastcall MiPartitionObjectCreate(__int64 a1, __int64 a2, ACCESS_MASK a3, char a4, _QWORD *a5)
{
  int result; // eax
  PVOID v8; // rdi
  PVOID v9; // rcx
  int v10; // ecx
  PVOID v11; // rax
  PVOID Object[3]; // [rsp+50h] [rbp-18h] BYREF

  result = ObCreateObject(a4, MmPartitionObjectType, a2, a4, 0, 8, 0, 0, Object);
  if ( result >= 0 )
  {
    v8 = Object[0];
    v9 = Object[0];
    *(_QWORD *)Object[0] = a1;
    result = ObInsertObject(v9, 0LL, a3, 0, 0LL, Object);
    v10 = result;
    if ( result >= 0 )
    {
      v11 = Object[0];
      *(_DWORD *)(a1 + 4) |= 2u;
      *(_QWORD *)(a1 + 216) = v11;
      *(_QWORD *)(a1 + 208) = v8;
      *a5 = v8;
      return v10;
    }
  }
  return result;
}
