/*
 * XREFs of NtAllocateReserveObject @ 0x1403E28BC
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ObInsertObject @ 0x140471424 (ObInsertObject.c)
 *     ObCreateObject @ 0x14047181C (ObCreateObject.c)
 */

__int64 __fastcall NtAllocateReserveObject(unsigned __int64 a1, int a2, int a3)
{
  __int64 v3; // r14
  _QWORD *v5; // rdi
  char PreviousMode; // si
  __int64 v7; // rdx
  __int64 result; // rax
  _DWORD *v9; // rbx
  NTSTATUS inserted; // edx
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v5 = (_QWORD *)a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  if ( (unsigned int)v3 > 1 )
    return 3221225485LL;
  LOBYTE(a1) = PreviousMode;
  result = ObCreateObject(
             a1,
             (unsigned int)*(&PspMemoryReserveObjectTypes + v3),
             a2,
             PreviousMode,
             0,
             PspMemoryReserveObjectSizes[v3],
             0,
             0,
             (__int64)&Object);
  if ( (int)result >= 0 )
  {
    v9 = Object;
    memset(Object, 0, PspMemoryReserveObjectSizes[v3]);
    if ( (_DWORD)v3 == 1 )
    {
      v9[6] = 4;
      *((_QWORD *)v9 + 8) = PspIoMiniPacketCallbackRoutine;
      *((_QWORD *)v9 + 9) = v9;
      *((_BYTE *)v9 + 80) = 0;
    }
    inserted = ObInsertObject(v9, 0LL, 0xF0003u, 0, 0LL, &Handle);
    LODWORD(Object) = inserted;
    if ( inserted >= 0 )
      *v5 = Handle;
    return (unsigned int)inserted;
  }
  return result;
}
