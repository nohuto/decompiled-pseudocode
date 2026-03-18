/*
 * XREFs of SdbpCheckMatchingRegistryEntry @ 0x140702898
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x140702774 (SdbpCheckMatchingRegistry.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyW @ 0x14011BAF4 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x140166888 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     ZwQuerySystemInformation @ 0x14017F6B0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     AslAlloc @ 0x1405783E4 (AslAlloc.c)
 *     AslStringPatternMatchW @ 0x1405A9E4C (AslStringPatternMatchW.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryEntry(
        __int64 a1,
        const WCHAR *a2,
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
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax
  const wchar_t *v19; // r15
  bool v20; // zf
  HANDLE v21; // rcx
  wchar_t *v23; // rax
  NTSTATUS v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  wchar_t *v28; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR *v32; // [rsp+50h] [rbp-B0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  __int64 SystemInformation; // [rsp+88h] [rbp-78h] BYREF
  int v35; // [rsp+90h] [rbp-70h]
  wchar_t pszDest[264]; // [rsp+A0h] [rbp-60h] BYREF

  v32 = a4;
  ResultLength = 0;
  pszDest[0] = 0;
  *a9 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  SystemInformation = 0LL;
  v35 = 0;
  if ( RtlStringCchPrintfW(pszDest, 0x104uLL, L"\\REGISTRY\\MACHINE\\%s", a1) < 0 )
    goto LABEL_2;
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    if ( ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL) < 0 )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_28;
    }
    if ( (_WORD)SystemInformation != 9 || ZwOpenKey(&KeyHandle, 0x20219u, &ObjectAttributes) < 0 )
      goto LABEL_27;
  }
  if ( !a2 || !*a2 )
    goto LABEL_26;
  RtlInitUnicodeString(&DestinationString, a2);
  v15 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, 0LL, 0, &ResultLength);
  if ( v15 < 0 && v15 != -2147483643 && v15 != -1073741789 )
    goto LABEL_27;
  v13 = AslAlloc(v16, ResultLength);
  if ( !v13
    || ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v13, ResultLength, &ResultLength) < 0 )
  {
    goto LABEL_2;
  }
  v18 = v13[1];
  if ( !a3 )
  {
LABEL_26:
    *a9 = 1;
    goto LABEL_27;
  }
  if ( v18 == a3 )
  {
    v19 = (const wchar_t *)((char *)v13 + (unsigned int)v13[2]);
    if ( !v18 )
      goto LABEL_2;
    if ( v18 > 2 )
    {
      switch ( v18 )
      {
        case 3u:
          if ( Size != v13[3] )
            goto LABEL_27;
          v20 = memcmp(Buf1, (char *)v13 + (unsigned int)v13[2], Size) == 0;
          break;
        case 4u:
          v20 = a5 == *(_DWORD *)v19;
          break;
        case 7u:
          v23 = (wchar_t *)AslAlloc(v17, (unsigned int)v13[3]);
          v12 = v23;
          if ( !v23 )
            goto LABEL_2;
          *v23 = 0;
          while ( *v19 )
          {
            if ( *v12 )
            {
              v25 = -1LL;
              do
                ++v25;
              while ( v12[v25] );
              if ( RtlStringCchCatW(v12, (unsigned int)v13[3] - v25, L";") < 0 )
                goto LABEL_2;
              v26 = -1LL;
              do
                ++v26;
              while ( v12[v26] );
              v24 = RtlStringCchCatW(v12, (unsigned int)v13[3] - v26, v19);
            }
            else
            {
              v24 = RtlStringCchCopyW(v12, (unsigned int)v13[3], v19);
            }
            if ( v24 < 0 )
              goto LABEL_2;
            v27 = -1LL;
            do
              ++v27;
            while ( v19[v27] );
            v19 += v27 + 1;
          }
LABEL_50:
          if ( !(unsigned int)AslStringPatternMatchW(v32, v12) )
            goto LABEL_27;
          goto LABEL_26;
        case 0xBu:
          v20 = a6 == *(_QWORD *)v19;
          break;
        default:
LABEL_2:
          AslLogCallPrintf(1LL);
          goto LABEL_28;
      }
      if ( v20 )
        goto LABEL_26;
      goto LABEL_27;
    }
    v28 = (wchar_t *)AslAlloc(v17, (unsigned int)v13[3] + 2LL);
    v12 = v28;
    if ( !v28 )
      goto LABEL_2;
    memmove(v28, v19, (unsigned int)v13[3]);
    v12[(unsigned __int64)(unsigned int)v13[3] >> 1] = 0;
    goto LABEL_50;
  }
LABEL_27:
  v14 = 1;
LABEL_28:
  v21 = KeyHandle;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v13 )
    AslFree((__int64)v21, v13);
  if ( v12 )
    AslFree((__int64)v21, v12);
  return v14;
}
