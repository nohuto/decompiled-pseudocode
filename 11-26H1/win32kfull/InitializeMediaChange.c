/*
 * XREFs of InitializeMediaChange @ 0x1400F7C20
 * Callers:
 *     <none>
 * Callees:
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall InitializeMediaChange(HANDLE Handle, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  NTSTATUS v7; // ebx
  __int64 v8; // rax
  ULONG ResultLength; // [rsp+38h] [rbp-39h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  PVOID Object; // [rsp+48h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-11h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+1Fh] BYREF
  int v16; // [rsp+94h] [rbp+23h]
  int v17; // [rsp+9Ch] [rbp+2Bh]

  KeyHandle = 0LL;
  DestinationString = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  UserSessionState = W32GetUserSessionState(Handle, a2);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MaxOpenAttempts");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v16 == 4 )
    {
      *(_DWORD *)(UserSessionState + 69936) = v17;
    }
    ZwClose(KeyHandle);
  }
  v6 = *(_DWORD *)(UserSessionState + 69936);
  *(_DWORD *)(W32GetUserSessionState(v5, v4) + 320) = v6;
  if ( (unsigned int)IsRemoteConnection() )
  {
    return 0;
  }
  else
  {
    *(_QWORD *)(UserSessionState + 69888) = UserSessionState + 69880;
    *(_QWORD *)(UserSessionState + 69880) = UserSessionState + 69880;
    *(_QWORD *)(UserSessionState + 69904) = UserSessionState + 69896;
    *(_QWORD *)(UserSessionState + 69896) = UserSessionState + 69896;
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    *(_QWORD *)(UserSessionState + 69928) = Object;
    if ( v7 >= 0 )
    {
      v8 = Win32AllocPoolNonPagedZInit(56LL, 1886417749LL);
      *(_QWORD *)(UserSessionState + 69920) = v8;
      if ( v8 )
      {
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_DWORD *)v8 = 1;
        *(_DWORD *)(v8 + 16) = 0;
        KeInitializeEvent((PRKEVENT)(v8 + 24), SynchronizationEvent, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v7;
}
