/*
 * XREFs of CmpSetSystemBiosInformation @ 0x140744130
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x140743C5C (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140092408 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwMapViewOfSection @ 0x140150B20 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x140150B60 (ZwUnmapViewOfSection.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     NtSetValueKey @ 0x1403F2FD0 (NtSetValueKey.c)
 *     RtlCompareUnicodeString @ 0x14043D980 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     CmpGetBiosVersion @ 0x140744714 (CmpGetBiosVersion.c)
 *     CmpGetBiosDate @ 0x1407448E8 (CmpGetBiosDate.c)
 *     CmpGetAcpiBiosVersion @ 0x140744AE8 (CmpGetAcpiBiosVersion.c)
 *     CmpGetRegistryValue @ 0x140744B70 (CmpGetRegistryValue.c)
 */

void __fastcall CmpSetSystemBiosInformation(__int64 a1, void *a2, void *a3)
{
  unsigned int v4; // r13d
  __int64 v5; // r9
  _WORD *v6; // rsi
  __int64 v7; // r9
  _WORD *v8; // r14
  __int64 v9; // r12
  int i; // edi
  __int64 v11; // rdx
  PVOID v12; // rcx
  unsigned int v13; // ebx
  HANDLE v14; // r12
  wchar_t *v15; // rbx
  unsigned __int16 v16; // di
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  _STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+98h] [rbp-68h] BYREF
  PVOID Data; // [rsp+A0h] [rbp-60h]
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  CHAR SourceString[128]; // [rsp+C0h] [rbp-40h] BYREF

  v26 = a1;
  KeyHandle = a3;
  BaseAddress = 0LL;
  ViewSize = 0x10000LL;
  SectionOffset.QuadPart = 983040LL;
  v4 = 0;
  if ( ZwMapViewOfSection(
         a2,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0x10000uLL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0,
         4u) >= 0 )
  {
    Data = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
    LOBYTE(v5) = 1;
    v6 = Data;
    if ( (unsigned __int8)CmpGetBiosDate((char *)BaseAddress + 65525, 8LL, SourceString, v5) )
    {
      RtlInitAnsiString(&DestinationString, SourceString);
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"SystemBiosDate");
        if ( (int)CmpGetRegistryValue(a3) >= 0 )
        {
          v15 = *(wchar_t **)&String2.Length;
          if ( *(_QWORD *)&String2.Length )
          {
            String2.MaximumLength = *(_WORD *)(*(_QWORD *)&String2.Length + 8LL);
            v16 = String2.MaximumLength - 2;
            String2.Buffer = v15 + 6;
            String2.Length = String2.MaximumLength - 2;
            if ( RtlCompareUnicodeString(&UnicodeString, &String2, 1u) )
            {
              RtlInitUnicodeString(&ValueName, L"OldSystemBiosDate");
              NtSetValueKey(a3, &ValueName, 0, 1u, v15 + 6, v16 + 2);
            }
            ExFreePoolWithTag(v15, 0);
          }
        }
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    LOBYTE(v7) = 1;
    if ( (unsigned __int8)CmpGetBiosDate(BaseAddress, 0x10000LL, SourceString, v7) )
    {
      RtlInitUnicodeString(&ValueName, L"SystemBiosDate");
      RtlInitAnsiString(&DestinationString, SourceString);
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      {
        NtSetValueKey(a3, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    v8 = v6;
    if ( v6 )
    {
      v9 = v26;
      for ( i = 0; ; ++i )
      {
        if ( i )
        {
          if ( i == 1 )
          {
            v12 = BaseAddress;
            v11 = 0x10000LL;
          }
          else
          {
            v11 = 0LL;
            v12 = 0LL;
          }
          if ( !(unsigned __int8)CmpGetBiosVersion(v12, v11, SourceString) )
          {
LABEL_22:
            v6 = Data;
            v14 = KeyHandle;
            if ( v4 )
            {
              *v8 = 0;
              RtlInitUnicodeString(&ValueName, L"SystemBiosVersion");
              NtSetValueKey(v14, &ValueName, 0, 7u, v6, v4 + 2);
            }
            break;
          }
        }
        else if ( !(unsigned __int8)CmpGetAcpiBiosVersion(v9, SourceString) )
        {
          continue;
        }
        RtlInitAnsiString(&DestinationString, SourceString);
        if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
        {
          v13 = UnicodeString.Length + 2;
          memmove(v8, UnicodeString.Buffer, v13);
          v4 += v13;
          RtlFreeAnsiString(&UnicodeString);
          if ( (unsigned __int64)v4 + 260 > 0x1000 )
            goto LABEL_22;
          v8 = (_WORD *)((char *)v8 + v13);
        }
      }
    }
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
}
