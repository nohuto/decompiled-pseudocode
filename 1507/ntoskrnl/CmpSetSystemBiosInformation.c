/*
 * XREFs of CmpSetSystemBiosInformation @ 0x1407D84CC
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x1407D7FF8 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     sprintf_s @ 0x1401777DC (sprintf_s.c)
 *     ZwMapViewOfSection @ 0x14017F4F0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14017F530 (ZwUnmapViewOfSection.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     RtlCompareUnicodeString @ 0x14043A4D0 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     CmpGetBiosVersion @ 0x1407D8AB8 (CmpGetBiosVersion.c)
 *     CmpGetBiosDate @ 0x1407D8C8C (CmpGetBiosDate.c)
 *     CmpGetRegistryValue @ 0x1407D8E8C (CmpGetRegistryValue.c)
 */

void __fastcall CmpSetSystemBiosInformation(__int64 a1, void *a2, void *a3)
{
  __int64 v3; // r15
  unsigned int v5; // r13d
  _WORD *PoolWithTag; // rax
  __int64 v7; // r9
  _WORD *v8; // rsi
  __int64 v9; // r9
  _WORD *v10; // r14
  int i; // edi
  __int64 v12; // rdx
  PVOID v13; // rcx
  unsigned int v14; // ebx
  CHAR *v15; // rbx
  __int64 Table; // rax
  HANDLE v17; // r12
  wchar_t *v18; // rbx
  unsigned __int16 v19; // di
  unsigned int v20; // edx
  CHAR *v21; // r8
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  _STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+98h] [rbp-68h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-60h]
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp-50h]
  CHAR SourceString[128]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = a1;
  v28 = a1;
  KeyHandle = a3;
  BaseAddress = 0LL;
  ViewSize = 0x10000LL;
  SectionOffset.QuadPart = 983040LL;
  v5 = 0;
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
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
    LOBYTE(v7) = 1;
    v8 = PoolWithTag;
    if ( (unsigned __int8)CmpGetBiosDate((char *)BaseAddress + 65525, 8LL, SourceString, v7) )
    {
      RtlInitAnsiString(&DestinationString, SourceString);
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"SystemBiosDate");
        if ( (int)CmpGetRegistryValue(a3) >= 0 )
        {
          v18 = *(wchar_t **)&String2.Length;
          if ( *(_QWORD *)&String2.Length )
          {
            String2.MaximumLength = *(_WORD *)(*(_QWORD *)&String2.Length + 8LL);
            v19 = String2.MaximumLength - 2;
            String2.Buffer = v18 + 6;
            String2.Length = String2.MaximumLength - 2;
            if ( RtlCompareUnicodeString(&UnicodeString, &String2, 1u) )
            {
              RtlInitUnicodeString(&ValueName, L"OldSystemBiosDate");
              NtSetValueKey(a3, &ValueName, 0, 1u, v18 + 6, v19 + 2);
            }
            ExFreePoolWithTag(v18, 0);
          }
        }
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    LOBYTE(v9) = 1;
    if ( (unsigned __int8)CmpGetBiosDate(BaseAddress, 0x10000LL, SourceString, v9) )
    {
      RtlInitUnicodeString(&ValueName, L"SystemBiosDate");
      RtlInitAnsiString(&DestinationString, SourceString);
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      {
        NtSetValueKey(a3, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    v10 = v8;
    if ( v8 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i )
        {
          if ( i == 1 )
          {
            v13 = BaseAddress;
            v12 = 0x10000LL;
          }
          else
          {
            v12 = 0LL;
            v13 = 0LL;
          }
          if ( !(unsigned __int8)CmpGetBiosVersion(v13, v12, SourceString) )
          {
LABEL_22:
            v17 = KeyHandle;
            if ( v5 )
            {
              *v10 = 0;
              RtlInitUnicodeString(&ValueName, L"SystemBiosVersion");
              NtSetValueKey(v17, &ValueName, 0, 7u, v8, v5 + 2);
            }
            break;
          }
        }
        else
        {
          v15 = SourceString;
          Table = HalAcpiGetTableEx(v3, 1413763922LL, 0LL, 0LL);
          if ( !Table )
            continue;
          v20 = 0;
          v21 = (CHAR *)(Table + 10);
          do
          {
            if ( !*v21 )
              break;
            *v15 = *v21;
            ++v20;
            ++v15;
            ++v21;
          }
          while ( v20 < 6 );
          sprintf_s(v15, 128 - v20, " - %x", *(_DWORD *)(Table + 24));
        }
        RtlInitAnsiString(&DestinationString, SourceString);
        if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
        {
          v14 = UnicodeString.Length + 2;
          memmove(v10, UnicodeString.Buffer, v14);
          v5 += v14;
          RtlFreeAnsiString(&UnicodeString);
          if ( (unsigned __int64)v5 + 260 > 0x1000 )
            goto LABEL_22;
          v10 = (_WORD *)((char *)v10 + v14);
          v3 = v28;
        }
      }
    }
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
}
