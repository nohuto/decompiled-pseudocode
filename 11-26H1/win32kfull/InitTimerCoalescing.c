/*
 * XREFs of InitTimerCoalescing @ 0x1402A7FA0
 * Callers:
 *     <none>
 * Callees:
 *     SetTimerCoalescingTolerance @ 0x14019B750 (SetTimerCoalescingTolerance.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

int InitTimerCoalescing()
{
  unsigned int v0; // ebx
  int result; // eax
  unsigned int i; // ecx
  unsigned int j; // ecx
  unsigned int k; // ecx
  __int64 m; // rcx
  __int64 UserSessionState; // rax
  _DWORD *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  _DWORD *v10; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-69h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-59h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-49h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-19h] BYREF
  int v16; // [rsp+84h] [rbp-15h]
  int v17; // [rsp+88h] [rbp-11h]
  int v18; // [rsp+8Ch] [rbp-Dh]
  _DWORD v19[3]; // [rsp+90h] [rbp-9h]
  _DWORD v20[8]; // [rsp+9Ch] [rbp+3h] BYREF
  _DWORD v21[9]; // [rsp+BCh] [rbp+23h] BYREF

  v0 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\software\\microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"TimerCoalescing");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x60u,
           &ResultLength) >= 0
      && v16 == 3
      && v17 == 80
      && !v18 )
    {
      for ( i = 0; i < 3; ++i )
      {
        if ( v19[i] )
          return ZwClose(KeyHandle);
      }
      for ( j = 0; j < 4; ++j )
      {
        if ( v20[j + 4] )
          return ZwClose(KeyHandle);
      }
      for ( k = 0; k < 4; ++k )
      {
        if ( v21[k + 4] )
          return ZwClose(KeyHandle);
      }
      for ( m = 0LL; (unsigned int)m < 4; m = (unsigned int)(m + 1) )
      {
        if ( v20[(unsigned int)m] > 0x7FFFFFF5u )
          return ZwClose(KeyHandle);
      }
      while ( v0 < 4 )
      {
        if ( v21[v0] > 0x7FFFFFF5u )
          return ZwClose(KeyHandle);
        ++v0;
      }
      UserSessionState = W32GetUserSessionState(m, 2147483637LL);
      v7 = v20;
      v8 = 4LL;
      do
      {
        *(_DWORD *)((char *)v7 + UserSessionState + 57536 - (_QWORD)v20 + 5220) = *v7;
        ++v7;
        --v8;
      }
      while ( v8 );
      v9 = 4LL;
      v10 = v21;
      do
      {
        *(_DWORD *)((char *)v10 + UserSessionState + 57536 - (_QWORD)v21 + 5204) = *v10;
        ++v10;
        --v9;
      }
      while ( v9 );
      SetTimerCoalescingTolerance(0);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
