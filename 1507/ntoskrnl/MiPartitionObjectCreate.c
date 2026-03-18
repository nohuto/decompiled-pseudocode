/*
 * XREFs of MiPartitionObjectCreate @ 0x140596A48
 * Callers:
 *     MiCreatePartition @ 0x1406A3A54 (MiCreatePartition.c)
 *     MiSystemPartitionObjectCreate @ 0x1407C4068 (MiSystemPartitionObjectCreate.c)
 * Callees:
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 */

int __fastcall MiPartitionObjectCreate(__int64 a1, int a2, ACCESS_MASK a3, int a4, _QWORD *a5)
{
  PVOID *p_Object; // rcx
  int result; // eax
  PVOID v9; // rdi
  PVOID v10; // rcx
  int v11; // ecx
  HANDLE v12; // rax
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-10h] BYREF

  p_Object = &Object;
  LOBYTE(p_Object) = a4;
  result = ObCreateObject((int)p_Object, (int)MmPartitionObjectType, a2, a4);
  if ( result >= 0 )
  {
    v9 = Object;
    v10 = Object;
    *(_QWORD *)Object = a1;
    result = ObInsertObject(v10, 0LL, a3, 0, 0LL, &Handle);
    v11 = result;
    if ( result >= 0 )
    {
      v12 = Handle;
      *(_DWORD *)(a1 + 4) |= 2u;
      *(_QWORD *)(a1 + 224) = v12;
      *(_QWORD *)(a1 + 216) = v9;
      *a5 = v9;
      return v11;
    }
  }
  return result;
}
