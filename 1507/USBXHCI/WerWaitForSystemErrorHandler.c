/*
 * XREFs of WerWaitForSystemErrorHandler @ 0x1C003AA14
 * Callers:
 *     WerKernelSubmitReport @ 0x1C003A3B0 (WerKernelSubmitReport.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WerWaitForSystemErrorHandler(int a1)
{
  __int64 v1; // rdi
  union _LARGE_INTEGER *v2; // rbx
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx
  int v5; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v6; // [rsp+28h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+78h] [rbp+18h] BYREF
  __int64 v9; // [rsp+80h] [rbp+20h] BYREF

  v1 = a1;
  v6 = L"\\KernelObjects\\SystemErrorPortReady";
  v5 = 4718662;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v5;
  v2 = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenEvent(&EventHandle, 0x100001u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( (_DWORD)v1 != -1 )
    {
      v2 = (union _LARGE_INTEGER *)&v9;
      v9 = -10000 * v1;
    }
    v4 = ZwWaitForSingleObject(EventHandle, 0, v2);
    ZwClose(EventHandle);
    return v4;
  }
  return result;
}
