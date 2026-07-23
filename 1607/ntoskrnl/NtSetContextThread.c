/*
 * XREFs of NtSetContextThread @ 0x14067FF58
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     PspSetContextThreadInternal @ 0x1404FA764 (PspSetContextThreadInternal.c)
 */

NTSTATUS __stdcall NtSetContextThread(HANDLE ThreadHandle, PCONTEXT Context)
{
  KPROCESSOR_MODE PreviousMode; // si
  int v4; // edi
  PVOID v5; // rbx
  int v7; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v4 = ObReferenceObjectByHandle(ThreadHandle, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v5 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0 || *((_QWORD *)Object + 242) )
      v4 = -1073741816;
    else
      v4 = PspSetContextThreadInternal((__int64)Object, Context, PreviousMode, PreviousMode, 1);
    ObfDereferenceObject(v5);
  }
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&v7;
  v7 = v4;
  UserData.Size = 4;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_SETCONTEXTTHREAD, 0LL, 1u, &UserData);
  return v4;
}
