/*
 * XREFs of SdbpCheckMatchingRegistryEntry @ 0x1406C256C
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x1406C2448 (SdbpCheckMatchingRegistry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x14007F50C (RtlStringCchPrintfW.c)
 *     RtlStringCchCopyW @ 0x140084F38 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1400B03B8 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014D79C (_wcsicmp.c)
 *     memcmp @ 0x14014DE90 (memcmp.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140159F60 (ZwQueryValueKey.c)
 *     ZwQuerySystemInformation @ 0x14015A340 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     AslStringPatternMatchW @ 0x140578D34 (AslStringPatternMatchW.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
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
  const char *v15; // r9
  int v16; // r8d
  NTSTATUS v17; // eax
  const WCHAR *v18; // rdx
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // eax
  const wchar_t *v23; // r15
  bool v24; // zf
  HANDLE v25; // rcx
  wchar_t *v27; // rax
  NTSTATUS v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  wchar_t *v32; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR *v36; // [rsp+50h] [rbp-B0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  __int64 SystemInformation; // [rsp+88h] [rbp-78h] BYREF
  int v39; // [rsp+90h] [rbp-70h]
  wchar_t pszDest[264]; // [rsp+A0h] [rbp-60h] BYREF

  v36 = a4;
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
  v39 = 0;
  KeyHandle = 0LL;
  if ( RtlStringCchPrintfW(pszDest, 0x104uLL, L"\\REGISTRY\\MACHINE\\%s", a1) < 0 )
  {
    v15 = "Failed to construct full key path";
    v16 = 888;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingRegistryEntry", v16, (_DWORD)v15);
    goto LABEL_34;
  }
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    goto LABEL_23;
  v17 = ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL);
  if ( v17 < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCheckMatchingRegistryEntry",
      923,
      (unsigned int)"Failed to get processor architecture [%x]",
      v17);
    goto LABEL_34;
  }
  if ( (_WORD)SystemInformation == 9 && ZwOpenKey(&KeyHandle, 0x20219u, &ObjectAttributes) >= 0 )
  {
LABEL_23:
    if ( !a2 || !*a2 )
      goto LABEL_32;
    if ( wcsicmp(a2, L"dbRegistryDefaultName") )
      v18 = a2;
    else
      v18 = 0LL;
    RtlInitUnicodeString(&DestinationString, v18);
    v19 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, 0LL, 0, &ResultLength);
    if ( v19 < 0 && v19 != -2147483643 && v19 != -1073741789 )
      goto LABEL_33;
    v13 = AslAlloc(v20, ResultLength);
    if ( !v13 )
    {
      v16 = 993;
LABEL_19:
      v15 = "Failed to allocate memory";
      goto LABEL_3;
    }
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v13, ResultLength, &ResultLength) < 0 )
    {
      v15 = "Failed to read value";
      v16 = 1004;
      goto LABEL_3;
    }
    v22 = v13[1];
    if ( !a3 )
      goto LABEL_32;
    if ( v22 == a3 )
    {
      v23 = (const wchar_t *)((char *)v13 + (unsigned int)v13[2]);
      if ( !v22 )
        goto LABEL_67;
      if ( v22 > 2 )
      {
        switch ( v22 )
        {
          case 3u:
            if ( Size != v13[3] )
              goto LABEL_33;
            v24 = memcmp(Buf1, (char *)v13 + (unsigned int)v13[2], Size) == 0;
            break;
          case 4u:
            v24 = a5 == *(_DWORD *)v23;
            break;
          case 7u:
            v27 = (wchar_t *)AslAlloc(v21, (unsigned int)v13[3]);
            v12 = v27;
            if ( !v27 )
            {
              v16 = 1064;
              goto LABEL_19;
            }
            *v27 = 0;
            while ( *v23 )
            {
              if ( *v12 )
              {
                v29 = -1LL;
                do
                  ++v29;
                while ( v12[v29] );
                if ( RtlStringCchCatW(v12, (unsigned int)v13[3] - v29, L";") < 0 )
                {
                  v15 = "Failed to copy delimiter";
                  v16 = 1080;
                  goto LABEL_3;
                }
                v30 = -1LL;
                do
                  ++v30;
                while ( v12[v30] );
                v28 = RtlStringCchCatW(v12, (unsigned int)v13[3] - v30, v23);
              }
              else
              {
                v28 = RtlStringCchCopyW(v12, (unsigned int)v13[3], v23);
              }
              if ( v28 < 0 )
              {
                v15 = "Failed to copy string";
                v16 = 1089;
                goto LABEL_3;
              }
              v31 = -1LL;
              do
                ++v31;
              while ( v23[v31] );
              v23 += v31 + 1;
            }
LABEL_57:
            if ( !(unsigned int)AslStringPatternMatchW(v36, v12) )
              goto LABEL_33;
            goto LABEL_32;
          case 0xBu:
            v24 = a6 == *(_QWORD *)v23;
            break;
          default:
LABEL_67:
            v15 = "Unknown registry value data type";
            v16 = 1150;
            goto LABEL_3;
        }
        if ( v24 )
        {
LABEL_32:
          *a9 = 1;
          goto LABEL_33;
        }
        goto LABEL_33;
      }
      v32 = (wchar_t *)AslAlloc(v21, (unsigned int)v13[3] + 2LL);
      v12 = v32;
      if ( !v32 )
      {
        v16 = 1041;
        goto LABEL_19;
      }
      memmove(v32, v23, (unsigned int)v13[3]);
      v12[(unsigned __int64)(unsigned int)v13[3] >> 1] = 0;
      goto LABEL_57;
    }
  }
LABEL_33:
  v14 = 1;
LABEL_34:
  v25 = KeyHandle;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v13 )
    AslFree((__int64)v25, v13);
  if ( v12 )
    AslFree((__int64)v25, v12);
  return v14;
}
