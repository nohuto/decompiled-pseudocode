/*
 * XREFs of LdrpCodeAuthzInitialize @ 0x1800801FC
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180010430 (RtlAppendUnicodeStringToString.c)
 *     LdrLoadDll @ 0x180011F20 (LdrLoadDll.c)
 *     RtlAppendUnicodeToString @ 0x180013C80 (RtlAppendUnicodeToString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180015290 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     LdrUnloadDll @ 0x18002EF60 (LdrUnloadDll.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrGetProcedureAddressEx @ 0x18007E3E0 (LdrGetProcedureAddressEx.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     ZwQueryKey @ 0x1800A66E0 (ZwQueryKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 */

__int64 LdrpCodeAuthzInitialize()
{
  unsigned int v0; // edi
  char v1; // si
  unsigned int v2; // ecx
  NTSTATUS v4; // ebx
  NTSTATUS Key; // ebx
  NTSTATUS ValueKey; // ebx
  PVOID v7; // rbx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v10; // [rsp+48h] [rbp-C0h] BYREF
  PVOID ProcedureAddress; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  PVOID DllHandle; // [rsp+70h] [rbp-98h] BYREF
  ULONG v15[2]; // [rsp+78h] [rbp-90h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+80h] [rbp-88h] BYREF
  _UNICODE_STRING CurrentUserKeyPath; // [rsp+88h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  _BYTE KeyInformation[20]; // [rsp+C8h] [rbp-40h] BYREF
  int v20; // [rsp+DCh] [rbp-2Ch]
  _BYTE KeyValueInformation[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v22; // [rsp+FCh] [rbp-Ch]
  int v23; // [rsp+100h] [rbp-8h]
  unsigned int v24; // [rsp+104h] [rbp-4h]
  _BYTE v25[4]; // [rsp+148h] [rbp+40h] BYREF
  int v26; // [rsp+14Ch] [rbp+44h]
  int v27; // [rsp+150h] [rbp+48h]
  int v28; // [rsp+154h] [rbp+4Ch]

  v0 = 0;
  DllHandle = 0LL;
  ProcedureAddress = 0LL;
  if ( LdrpIsSecureProcess )
    return 0LL;
  RtlImageNtHeaderEx(3u, NtCurrentPeb()->ImageBaseAddress, 0LL, &OutHeaders);
  if ( (unsigned __int16)(OutHeaders->OptionalHeader.Subsystem - 2) > 1u )
    return 0LL;
  if ( NtOpenKey(&KeyHandle, 3u, (POBJECT_ATTRIBUTES)&stru_1801087D0) < 0
    || (v4 = NtQueryValueKey(KeyHandle, (PUNICODE_STRING)&stru_180109360, KeyValuePartialInformation, v25, 0x50u, v15),
        NtClose(KeyHandle),
        v4 < 0)
    || v26 != 4
    || v27 != 4
    || !v28 )
  {
    v10 = 0LL;
    v1 = 0;
    if ( NtOpenKey(&v10, 0x20019u, &stru_18014C5A0) >= 0 )
    {
      Key = ZwQueryKey(v10, KeyFullInformation, KeyInformation, 0x30u, ResultLength);
      NtClose(v10);
      if ( Key == -2147483643 )
        Key = 0;
      if ( Key >= 0 && v20 )
        goto LABEL_27;
    }
    if ( NtOpenKey(&Handle, 1u, (POBJECT_ATTRIBUTES)&stru_1801087A0) >= 0 )
    {
      if ( NtQueryValueKey(
             Handle,
             (PUNICODE_STRING)&stru_180108790,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x50u,
             ResultLength) >= 0
        && v22 == 4
        && v23 == 4
        && v24 > 1 )
      {
        v1 = 1;
        NtQueryValueKey(
          Handle,
          (PUNICODE_STRING)&stru_180109350,
          KeyValuePartialInformation,
          KeyValueInformation,
          0x50u,
          ResultLength);
      }
      NtClose(Handle);
      if ( v1 )
        goto LABEL_27;
    }
    if ( RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) >= 0 )
    {
      v2 = CurrentUserKeyPath.Length + 120;
      Destination.Length = 0;
      if ( v2 <= 0xFFFE )
      {
        Destination.MaximumLength = CurrentUserKeyPath.Length + 120;
        Destination.Buffer = (wchar_t *)RtlAllocateHeap(
                                          NtCurrentPeb()->ProcessHeap,
                                          NtdllBaseTag + 1572864,
                                          (unsigned __int16)v2);
        if ( Destination.Buffer )
        {
          if ( RtlAppendUnicodeStringToString(&Destination, &CurrentUserKeyPath) >= 0
            && RtlAppendUnicodeToString(
                 &Destination,
                 L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers") >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &Destination;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( NtOpenKey(&Handle, 1u, &ObjectAttributes) >= 0 )
            {
              ValueKey = NtQueryValueKey(
                           Handle,
                           (PUNICODE_STRING)&stru_180108790,
                           KeyValuePartialInformation,
                           KeyValueInformation,
                           0x50u,
                           ResultLength);
              NtClose(Handle);
              if ( ValueKey >= 0 && v22 == 4 && v23 == 4 && v24 > 1 )
                v1 = 1;
            }
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination.Buffer);
        }
      }
      RtlFreeAnsiString(&CurrentUserKeyPath);
      if ( v1 )
      {
LABEL_27:
        if ( LdrLoadDll(0LL, 0LL, (PUNICODE_STRING)&stru_180109340, &DllHandle) >= 0 )
        {
          v7 = DllHandle;
          if ( LdrGetProcedureAddressEx(DllHandle, (PANSI_STRING)&stru_180109370, 0, &ProcedureAddress, 0) >= 0
            && ProcedureAddress )
          {
            LdrpSaferIsDllAllowedRoutine = __ROR8__(
                                             (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                             MEMORY[0x7FFE0330] & 0x3F);
            LdrpAdvapi32DllHandle = (__int64)v7;
          }
          else
          {
            LdrUnloadDll(v7);
            return (unsigned int)-1073741511;
          }
        }
        else
        {
          return (unsigned int)-1073741515;
        }
      }
    }
  }
  return v0;
}
