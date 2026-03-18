/*
 * XREFs of NtAllocateReserveObject @ 0x1406BF8AC
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 */

__int64 __fastcall NtAllocateReserveObject(ULONG64 a1, int a2, int a3)
{
  __int64 v3; // r14
  _QWORD *v5; // rdi
  char PreviousMode; // si
  _QWORD *v7; // rdx
  __int64 result; // rax
  NTSTATUS inserted; // edx
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v5 = (_QWORD *)a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = (_QWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
  }
  if ( (unsigned int)v3 > 1 )
    return 3221225485LL;
  LOBYTE(a1) = PreviousMode;
  result = ObCreateObject(a1, (int)*(&PspMemoryReserveObjectTypes + v3), a2, PreviousMode);
  if ( (int)result >= 0 )
  {
    memset(Object, 0, PspMemoryReserveObjectSizes[v3]);
    if ( (_DWORD)v3 == 1 )
    {
      *((_DWORD *)Object + 6) = 4;
      *((_QWORD *)Object + 8) = PspIoMiniPacketCallbackRoutine;
      *((_QWORD *)Object + 9) = Object;
      *((_BYTE *)Object + 80) = 0;
    }
    inserted = ObInsertObject(Object, 0LL, 0xF0003u, 0, 0LL, &Handle);
    if ( inserted >= 0 )
      *v5 = Handle;
    return (unsigned int)inserted;
  }
  return result;
}
