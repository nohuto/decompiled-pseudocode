/*
 * XREFs of CmpCreateHwProfileFriendlyName @ 0x14065F708
 * Callers:
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140176650 (swprintf_s.c)
 *     wcscpy_s @ 0x140177D84 (wcscpy_s.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     KeGetBugMessageResourceEntry @ 0x1402027E8 (KeGetBugMessageResourceEntry.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1404FFE30 (RtlCreateUnicodeString.c)
 */

__int64 __fastcall CmpCreateHwProfileFriendlyName(void *a1, char a2, unsigned int a3, UNICODE_STRING *a4)
{
  unsigned int v8; // edi
  const WCHAR *v9; // rdx
  __int64 BugMessageResourceEntry; // rax
  const WCHAR *v11; // rdx
  NTSTATUS v12; // eax
  unsigned __int16 v13; // cx
  wchar_t *Buffer; // rsi
  NTSTATUS v15; // ebx
  ULONG Length[2]; // [rsp+20h] [rbp-E0h]
  unsigned int Data; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v22; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _STRING SourceString; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Dst[80]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+160h] [rbp+60h] BYREF

  KeyHandle = 0LL;
  if ( !a4 )
    return 3221225485LL;
  if ( !a1 )
    goto LABEL_34;
  if ( (a2 & 3) == 3 )
    goto LABEL_9;
  if ( (a2 & 2) != 0 )
  {
    v8 = 1073807362;
    v9 = L"Docked";
    goto LABEL_10;
  }
  if ( (a2 & 1) == 0 )
  {
LABEL_9:
    v8 = 1073807363;
    v9 = L"Unknown";
  }
  else
  {
    v8 = 1073807361;
    v9 = L"Undocked";
  }
LABEL_10:
  RtlInitUnicodeString(&DestinationString, v9);
  BugMessageResourceEntry = KeGetBugMessageResourceEntry(v8);
  if ( BugMessageResourceEntry )
  {
    v11 = (const WCHAR *)(BugMessageResourceEntry + 4);
    if ( (*(_BYTE *)(BugMessageResourceEntry + 2) & 1) != 0 )
    {
      if ( RtlCreateUnicodeString(&UnicodeString, v11) )
        goto LABEL_16;
      v12 = -1073741823;
    }
    else
    {
      RtlInitAnsiString(&SourceString, (PCSZ)v11);
      v12 = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u);
    }
    if ( v12 >= 0 )
    {
LABEL_16:
      v13 = UnicodeString.Length;
      Buffer = UnicodeString.Buffer;
      if ( UnicodeString.Length > 4u )
      {
        v13 = UnicodeString.Length - 4;
        UnicodeString.Length = v13;
        UnicodeString.Buffer[(unsigned __int64)v13 >> 1] = 0;
      }
      if ( (unsigned __int64)v13 + 12 <= 0xA0 )
      {
        RtlInitUnicodeString(&v22, L"Hardware Profiles");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v22;
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v15 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( v15 >= 0 )
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && KeyValueInformation[1] == 4 )
          {
            Data = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]) + 1;
          }
          else
          {
            Data = 1;
          }
          v15 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
          if ( v15 >= 0 )
          {
            if ( v8 == 1073807363 || Data > 1 )
            {
              Length[0] = Data;
              swprintf_s(Dst, 0x50uLL, L"%s %u", Buffer, *(_QWORD *)Length);
            }
            else
            {
              wcscpy_s(Dst, 0x50uLL, Buffer);
            }
          }
        }
        else
        {
          KeyHandle = 0LL;
        }
      }
      else
      {
        v15 = -1073741823;
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( KeyHandle )
        ZwClose(KeyHandle);
      if ( v15 >= 0 )
        goto LABEL_35;
    }
  }
LABEL_34:
  Dst[0] = 0;
  swprintf_s(Dst, 0x50uLL, L"%04d", a3);
  v15 = 0;
LABEL_35:
  if ( !RtlCreateUnicodeString(a4, Dst) )
    return (unsigned int)-1073741823;
  return (unsigned int)v15;
}
