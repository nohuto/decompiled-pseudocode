/*
 * XREFs of LdrpCodeAuthzInitialize @ 0x18007BC30
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrUnloadDll @ 0x180008CA0 (LdrUnloadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     LdrLoadDll @ 0x180010B30 (LdrLoadDll.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180019080 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     LdrGetProcedureAddressEx @ 0x1800812F0 (LdrGetProcedureAddressEx.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     ZwQueryKey @ 0x1800A5380 (ZwQueryKey.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
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
  PVOID DllHandle; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  _UNICODE_STRING CurrentUserKeyPath; // [rsp+78h] [rbp-90h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+88h] [rbp-80h] BYREF
  ULONG v17; // [rsp+90h] [rbp-78h] BYREF
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
  if ( NtOpenKey(&KeyHandle, 3u, (POBJECT_ATTRIBUTES)&stru_1801029D8) < 0
    || (v4 = NtQueryValueKey(KeyHandle, (PUNICODE_STRING)&stru_180113840, KeyValuePartialInformation, v25, 0x50u, &v17),
        NtClose(KeyHandle),
        v4 < 0)
    || v26 != 4
    || v27 != 4
    || !v28 )
  {
    v10 = 0LL;
    v1 = 0;
    if ( NtOpenKey(&v10, 0x20019u, &stru_180142218) >= 0 )
    {
      Key = ZwQueryKey(v10, KeyFullInformation, KeyInformation, 0x30u, ResultLength);
      NtClose(v10);
      if ( Key == -2147483643 )
        Key = 0;
      if ( Key >= 0 && v20 )
        goto LABEL_27;
    }
    if ( NtOpenKey(&Handle, 1u, (POBJECT_ATTRIBUTES)&stru_1801029A8) >= 0 )
    {
      if ( NtQueryValueKey(
             Handle,
             (PUNICODE_STRING)&stru_180102A08,
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
          (PUNICODE_STRING)&stru_180113820,
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
        Destination.Buffer = (unsigned __int16 *)RtlAllocateHeap(
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
                           (PUNICODE_STRING)&stru_180102A08,
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
        if ( LdrLoadDll(0LL, 0LL, (PUNICODE_STRING)&stru_180113810, &DllHandle) >= 0 )
        {
          v7 = DllHandle;
          if ( LdrGetProcedureAddressEx(DllHandle, (PANSI_STRING)&stru_180113830, 0, &ProcedureAddress, 0) >= 0
            && ProcedureAddress )
          {
            LdrpSaferIsDllAllowedRoutine = __ROR8__(
                                             (unsigned __int64)ProcedureAddress ^ (unsigned int)MEMORY[0x7FFE0330],
                                             (unsigned __int8)MEMORY[0x7FFE0330] & 0x3F);
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
