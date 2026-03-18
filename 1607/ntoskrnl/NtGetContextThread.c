/*
 * XREFs of NtGetContextThread @ 0x1404DB588
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     PspGetContextThreadInternal @ 0x140517A04 (PspGetContextThreadInternal.c)
 */

NTSTATUS __stdcall NtGetContextThread(HANDLE ThreadHandle, PCONTEXT Context)
{
  int v2; // ebp
  KPROCESSOR_MODE PreviousMode; // si
  int ContextThreadInternal; // edi
  int v5; // r8d
  int v6; // r9d
  PVOID v7; // rbx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v2 = (int)Context;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ContextThreadInternal = ObReferenceObjectByHandle(
                            ThreadHandle,
                            8u,
                            (POBJECT_TYPE)PsThreadType,
                            PreviousMode,
                            &Object,
                            0LL);
  if ( ContextThreadInternal >= 0 )
  {
    v7 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      ContextThreadInternal = -1073741816;
    }
    else
    {
      LOBYTE(v6) = PreviousMode;
      LOBYTE(v5) = PreviousMode;
      ContextThreadInternal = PspGetContextThreadInternal((_DWORD)Object, v2, v5, v6, 1);
    }
    ObfDereferenceObject(v7);
  }
  return ContextThreadInternal;
}
