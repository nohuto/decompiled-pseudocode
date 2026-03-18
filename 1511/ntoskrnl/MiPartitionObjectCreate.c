/*
 * XREFs of MiPartitionObjectCreate @ 0x1405261F8
 * Callers:
 *     MiCreatePartition @ 0x140624224 (MiCreatePartition.c)
 *     MiSystemPartitionObjectCreate @ 0x14075A6E8 (MiSystemPartitionObjectCreate.c)
 * Callees:
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 */

int __fastcall MiPartitionObjectCreate(__int64 a1, __int64 a2, ACCESS_MASK a3, char a4, _QWORD *a5)
{
  int result; // eax
  PVOID v8; // rdi
  PVOID v9; // rcx
  int v10; // ecx
  HANDLE v11; // rax
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-10h] BYREF

  result = ObCreateObject(a4, MmPartitionObjectType, a2, a4, 0, 8, 0, 0, &Object);
  if ( result >= 0 )
  {
    v8 = Object;
    v9 = Object;
    *(_QWORD *)Object = a1;
    result = ObInsertObject(v9, 0LL, a3, 0, 0LL, &Handle);
    v10 = result;
    if ( result >= 0 )
    {
      v11 = Handle;
      *(_DWORD *)(a1 + 4) |= 2u;
      *(_QWORD *)(a1 + 208) = v11;
      *(_QWORD *)(a1 + 200) = v8;
      *a5 = v8;
      return v10;
    }
  }
  return result;
}
