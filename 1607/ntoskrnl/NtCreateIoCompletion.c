/*
 * XREFs of NtCreateIoCompletion @ 0x1404700B0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeQueue @ 0x14007DEC4 (KeInitializeQueue.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 */

NTSTATUS __stdcall NtCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG NumberOfConcurrentThreads)
{
  ULONG v4; // ebx
  PHANDLE v6; // rdi
  char PreviousMode; // si
  __int64 v8; // rdx
  int Object; // ecx
  ULONG v10; // edx
  PRKQUEUE v11; // rbx
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PRKQUEUE Queue[3]; // [rsp+68h] [rbp-20h] BYREF

  v4 = NumberOfConcurrentThreads;
  v6 = IoCompletionHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = (__int64)IoCompletionHandle;
    if ( (unsigned __int64)IoCompletionHandle >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  LOBYTE(NumberOfConcurrentThreads) = PreviousMode;
  LOBYTE(IoCompletionHandle) = PreviousMode;
  Object = ObCreateObject(
             (_DWORD)IoCompletionHandle,
             (_DWORD)IoCompletionObjectType,
             (_DWORD)ObjectAttributes,
             NumberOfConcurrentThreads,
             0,
             80,
             0,
             0,
             (__int64)Queue);
  if ( Object >= 0 )
  {
    v10 = v4;
    v11 = Queue[0];
    KeInitializeQueue(Queue[0], v10);
    *(_QWORD *)&v11[1].Header.Lock = 0LL;
    LOBYTE(v11[1].Header.WaitListHead.Flink) = 0;
    Object = ObInsertObject(v11, 0LL, DesiredAccess, 0, 0LL, &Handle);
    if ( Object >= 0 )
      *v6 = Handle;
  }
  return Object;
}
