/*
 * XREFs of SdbpCheckMatchingRegistryEntry @ 0x14067DA2C
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x14067D908 (SdbpCheckMatchingRegistry.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140002AB0 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x140002BC8 (RtlStringCchCatW.c)
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     ZwQuerySystemInformation @ 0x140150CE0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     AslFree @ 0x1403B7E1C (AslFree.c)
 *     AslAlloc @ 0x1403B8554 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslStringPatternMatchW @ 0x140535084 (AslStringPatternMatchW.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryEntry(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        WCHAR *a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  wchar_t *v12; // rsi
  _DWORD *v13; // r14
  unsigned int v14; // edi
  const WCHAR *v15; // rdx
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // eax
  const wchar_t *v20; // r15
  bool v21; // zf
  HANDLE v22; // rcx
  wchar_t *v24; // rax
  NTSTATUS v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  wchar_t *v29; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR *v33; // [rsp+50h] [rbp-B0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  __int64 SystemInformation; // [rsp+88h] [rbp-78h] BYREF
  int v36; // [rsp+90h] [rbp-70h]
  wchar_t pszDest[264]; // [rsp+A0h] [rbp-60h] BYREF

  v33 = a4;
  ResultLength = 0;
  pszDest[0] = 0;
  *a9 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  SystemInformation = 0LL;
  v36 = 0;
  KeyHandle = 0LL;
  if ( RtlStringCchPrintfW(pszDest, 0x104uLL, L"\\REGISTRY\\MACHINE\\%s", a1) < 0 )
    goto LABEL_2;
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    if ( ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL) < 0 )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_31;
    }
    if ( (_WORD)SystemInformation != 9 || ZwOpenKey(&KeyHandle, 0x20219u, &ObjectAttributes) < 0 )
      goto LABEL_30;
  }
  if ( !a2 || !*a2 )
    goto LABEL_29;
  if ( wcsicmp(a2, L"dbRegistryDefaultName") )
    v15 = a2;
  else
    v15 = 0LL;
  RtlInitUnicodeString(&DestinationString, v15);
  v16 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, 0LL, 0, &ResultLength);
  if ( v16 < 0 && v16 != -2147483643 && v16 != -1073741789 )
    goto LABEL_30;
  v13 = AslAlloc(v17, ResultLength);
  if ( !v13
    || ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v13, ResultLength, &ResultLength) < 0 )
  {
    goto LABEL_2;
  }
  v19 = v13[1];
  if ( !a3 )
  {
LABEL_29:
    *a9 = 1;
    goto LABEL_30;
  }
  if ( v19 == a3 )
  {
    v20 = (const wchar_t *)((char *)v13 + (unsigned int)v13[2]);
    if ( !v19 )
      goto LABEL_2;
    if ( v19 > 2 )
    {
      switch ( v19 )
      {
        case 3u:
          if ( Size != v13[3] )
            goto LABEL_30;
          v21 = memcmp(Buf1, (char *)v13 + (unsigned int)v13[2], Size) == 0;
          break;
        case 4u:
          v21 = a5 == *(_DWORD *)v20;
          break;
        case 7u:
          v24 = (wchar_t *)AslAlloc(v18, (unsigned int)v13[3]);
          v12 = v24;
          if ( !v24 )
            goto LABEL_2;
          *v24 = 0;
          while ( *v20 )
          {
            if ( *v12 )
            {
              v26 = -1LL;
              do
                ++v26;
              while ( v12[v26] );
              if ( RtlStringCchCatW(v12, (unsigned int)v13[3] - v26, L";") < 0 )
                goto LABEL_2;
              v27 = -1LL;
              do
                ++v27;
              while ( v12[v27] );
              v25 = RtlStringCchCatW(v12, (unsigned int)v13[3] - v27, v20);
            }
            else
            {
              v25 = RtlStringCchCopyW(v12, (unsigned int)v13[3], v20);
            }
            if ( v25 < 0 )
              goto LABEL_2;
            v28 = -1LL;
            do
              ++v28;
            while ( v20[v28] );
            v20 += v28 + 1;
          }
LABEL_53:
          if ( !(unsigned int)AslStringPatternMatchW(v33, v12) )
            goto LABEL_30;
          goto LABEL_29;
        case 0xBu:
          v21 = a6 == *(_QWORD *)v20;
          break;
        default:
LABEL_2:
          AslLogCallPrintf(1LL);
          goto LABEL_31;
      }
      if ( v21 )
        goto LABEL_29;
      goto LABEL_30;
    }
    v29 = (wchar_t *)AslAlloc(v18, (unsigned int)v13[3] + 2LL);
    v12 = v29;
    if ( !v29 )
      goto LABEL_2;
    memmove(v29, v20, (unsigned int)v13[3]);
    v12[(unsigned __int64)(unsigned int)v13[3] >> 1] = 0;
    goto LABEL_53;
  }
LABEL_30:
  v14 = 1;
LABEL_31:
  v22 = KeyHandle;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v13 )
    AslFree((__int64)v22, v13);
  if ( v12 )
    AslFree((__int64)v22, v12);
  return v14;
}
