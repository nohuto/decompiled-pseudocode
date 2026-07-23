/*
 * XREFs of NtAllocateReserveObject @ 0x1406BF8AC
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 */

NTSTATUS __cdecl NtAllocateReserveObject(
        PHANDLE MemoryReserveHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        MEMORY_RESERVE_TYPE Type)
{
  __int64 v3; // r14
  int v4; // r8d
  PHANDLE v5; // rdi
  char PreviousMode; // si
  _QWORD *v7; // rdx
  NTSTATUS result; // eax
  int inserted; // edx
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h]

  v3 = Type;
  v4 = (int)ObjectAttributes;
  v5 = MemoryReserveHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = MemoryReserveHandle;
    if ( (unsigned __int64)MemoryReserveHandle >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
  }
  if ( (unsigned int)v3 > 1 )
    return -1073741811;
  LOBYTE(MemoryReserveHandle) = PreviousMode;
  result = ObCreateObject((int)MemoryReserveHandle, (int)*(&PspMemoryReserveObjectTypes + v3), v4, PreviousMode);
  if ( result >= 0 )
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
    return inserted;
  }
  return result;
}
