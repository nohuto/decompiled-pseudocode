/*
 * XREFs of ?GetSpriteFillColor@@YAKXZ @ 0x1C00B3C1C
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00124D8 (xxxInitProcessInfo.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0055E90 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C0087764 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 GetSpriteFillColor(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  unsigned __int64 v3; // r8
  int v4; // ecx
  ULONGLONG v5; // rdx
  ULONGLONG v6; // r8
  int v7; // eax
  size_t *v8; // r8
  size_t *v9; // rcx
  int v11; // [rsp+30h] [rbp-2C8h]
  void *KeyHandle; // [rsp+40h] [rbp-2B8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-2B0h] BYREF
  size_t *v14; // [rsp+50h] [rbp-2A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-2A0h] BYREF
  int v16; // [rsp+70h] [rbp-288h]
  ULONGLONG v17; // [rsp+78h] [rbp-280h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-278h] BYREF
  char KeyValueInformation[4]; // [rsp+B0h] [rbp-248h] BYREF
  int v20; // [rsp+B4h] [rbp-244h]
  int v21; // [rsp+B8h] [rbp-240h]
  unsigned int v22; // [rsp+BCh] [rbp-23Ch]
  WCHAR SourceString[264]; // [rsp+D0h] [rbp-228h] BYREF

  v0 = 0;
  RtlStringCchCopyW(
    SourceString,
    0x104uLL,
    (size_t *)L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\");
  CurrentProcess = PsGetCurrentProcess(v1);
  v3 = *(_QWORD *)(PsGetProcessPeb(CurrentProcess) + 32) + 96LL;
  if ( v3 >= W32UserProbeAddress )
    v3 = W32UserProbeAddress;
  v4 = *(_DWORD *)v3;
  v11 = *(_DWORD *)v3;
  v16 = *(_DWORD *)v3;
  v5 = *(_QWORD *)(v3 + 8);
  v17 = v5;
  if ( (v5 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = v5 + (unsigned __int16)v4 + 2LL;
  if ( v6 >= W32UserProbeAddress || (unsigned __int16)v4 > HIWORD(v11) || (v4 & 1) != 0 || v6 <= v5 )
    *(_BYTE *)W32UserProbeAddress = 0;
  v7 = (unsigned __int16)v4;
  v8 = (size_t *)(v5 + (unsigned __int16)v4);
  v14 = v8;
  while ( v7 )
  {
    v9 = (size_t *)((char *)v8 - 2);
    if ( *((_WORD *)v8 - 1) == 92 )
      break;
    v8 = (size_t *)((char *)v8 - 2);
    v14 = v9;
    v7 -= 2;
  }
  if ( (int)RtlStringCchCatW(SourceString, 260LL, v8) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"SpriteFillColor");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && v20 == 4
        && v21 == 4 )
      {
        v0 = v22;
      }
      ZwClose(KeyHandle);
    }
  }
  return v0;
}
