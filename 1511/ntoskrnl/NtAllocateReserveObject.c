/*
 * XREFs of NtAllocateReserveObject @ 0x1403B53DC
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
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
  _DWORD *v9; // rbx
  int inserted; // edx
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

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
  result = ObCreateObject(
             (_DWORD)MemoryReserveHandle,
             (unsigned int)*(&PspMemoryReserveObjectTypes + v3),
             v4,
             PreviousMode,
             0,
             PspMemoryReserveObjectSizes[v3],
             0,
             0,
             (__int64)&Object);
  if ( result >= 0 )
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
    return inserted;
  }
  return result;
}
