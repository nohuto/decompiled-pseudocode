/*
 * XREFs of CmpSetSystemBiosInformation @ 0x1407ACD84
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140074D74 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwMapViewOfSection @ 0x14015A6F0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14015A730 (ZwUnmapViewOfSection.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 *     CmpGetBiosVersion @ 0x1407AD364 (CmpGetBiosVersion.c)
 *     CmpGetBiosDate @ 0x1407AD538 (CmpGetBiosDate.c)
 *     CmpGetAcpiBiosVersion @ 0x1407AD738 (CmpGetAcpiBiosVersion.c)
 *     CmpGetRegistryValue @ 0x1407AD7C0 (CmpGetRegistryValue.c)
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
  PVOID v11; // rcx
  __int64 v12; // rdx
  HANDLE v13; // r12
  unsigned int v14; // ebx
  wchar_t *v15; // rbx
  unsigned __int16 v16; // di
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  _STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR ViewSize; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-58h]
  PVOID Data; // [rsp+B0h] [rbp-50h]
  HANDLE KeyHandle; // [rsp+B8h] [rbp-48h]
  CHAR SourceString[128]; // [rsp+C0h] [rbp-40h] BYREF

  v24 = a1;
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
      v9 = v24;
      for ( i = 0; ; ++i )
      {
        if ( i )
        {
          if ( i == 1 )
          {
            v11 = BaseAddress;
            v12 = 0x10000LL;
          }
          else
          {
            v12 = 0LL;
            v11 = 0LL;
          }
          if ( !(unsigned __int8)CmpGetBiosVersion(v11, v12, SourceString) )
          {
LABEL_15:
            v6 = Data;
            v13 = KeyHandle;
            if ( v4 )
            {
              *v8 = 0;
              RtlInitUnicodeString(&ValueName, L"SystemBiosVersion");
              NtSetValueKey(v13, &ValueName, 0, 7u, v6, v4 + 2);
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
          v14 = UnicodeString.Length + 2;
          memmove(v8, UnicodeString.Buffer, v14);
          v4 += v14;
          RtlFreeAnsiString(&UnicodeString);
          if ( (unsigned __int64)v4 + 260 > 0x1000 )
            goto LABEL_15;
          v8 = (_WORD *)((char *)v8 + v14);
        }
      }
    }
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
}
