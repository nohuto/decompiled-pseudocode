/*
 * XREFs of EmpMapPhysicalAddress @ 0x14075EFF8
 * Callers:
 *     EmpCacheBiosDate @ 0x14075EECC (EmpCacheBiosDate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x140150B20 (ZwMapViewOfSection.c)
 *     ZwOpenSection @ 0x140150D00 (ZwOpenSection.c)
 */

char *__fastcall EmpMapPhysicalAddress(
        SIZE_T a1,
        __int64 a2,
        HANDLE *a3,
        PVOID *a4,
        $D4FCF91253F76F57393CBFE908971F67 *a5)
{
  __int64 v5; // rbx
  char *v8; // rax
  LARGE_INTEGER SectionOffset; // [rsp+50h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  SIZE_T CommitSize; // [rsp+C0h] [rbp+5Fh] BYREF
  PVOID BaseAddress; // [rsp+D8h] [rbp+77h] BYREF

  CommitSize = a1;
  v5 = 0LL;
  *a4 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenSection(a3, 4u, &ObjectAttributes) >= 0 )
  {
    BaseAddress = 0LL;
    CommitSize = 8LL;
    SectionOffset.QuadPart = 1044480LL;
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)a5);
    if ( ZwMapViewOfSection(
           *a3,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           CommitSize,
           &SectionOffset,
           &CommitSize,
           ViewUnmap,
           0,
           4u) < 0 )
    {
      KiUnstackDetachProcess(a5, 0LL);
      ZwClose(*a3);
      *a3 = 0LL;
    }
    else
    {
      v8 = (char *)BaseAddress;
      *a4 = BaseAddress;
      return v8 + 4085;
    }
  }
  return (char *)v5;
}
