/*
 * XREFs of RtlpCreateUserThreadEx @ 0x1404A4C10
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x14006CAF0 (ExpWorkerFactoryCreateThread.c)
 *     RtlCreateUserThread @ 0x1406C777C (RtlCreateUserThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x140180650 (ZwCreateThreadEx.c)
 */

NTSTATUS __fastcall RtlpCreateUserThreadEx(
        HANDLE ProcessHandle,
        void *a2,
        int a3,
        unsigned int a4,
        SIZE_T MaximumStackSize,
        SIZE_T StackSize,
        int a7,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        HANDLE *a10,
        _OWORD *a11)
{
  ULONG CreateFlags; // edx
  NTSTATUS result; // eax
  HANDLE ThreadHandle; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v15; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+B0h] [rbp-50h] BYREF

  v15 = 0LL;
  if ( (a3 & 0xFFFFFFE8) != 0 )
    return -1073741811;
  CreateFlags = (a3 & 1) != 0;
  if ( (a3 & 2) != 0 )
    CreateFlags |= 2u;
  if ( (a3 & 4) != 0 )
    CreateFlags |= 4u;
  if ( (a3 & 0x10) != 0 )
    CreateFlags |= 0x10u;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  AttributeList.Attributes[0].Value = (ULONG_PTR)&v15;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.SecurityDescriptor = a2;
  AttributeList.Attributes[0].Attribute = 65539LL;
  AttributeList.Attributes[0].Size = 16LL;
  AttributeList.TotalLength = 40LL;
  result = ZwCreateThreadEx(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             ProcessHandle,
             StartRoutine,
             Argument,
             CreateFlags,
             a4,
             StackSize,
             MaximumStackSize,
             &AttributeList);
  if ( result >= 0 )
  {
    if ( a10 )
      *a10 = ThreadHandle;
    else
      ZwClose(ThreadHandle);
    if ( a11 )
      *a11 = v15;
    return 0;
  }
  return result;
}
