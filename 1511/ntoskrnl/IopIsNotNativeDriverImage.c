/*
 * XREFs of IopIsNotNativeDriverImage @ 0x1405F7FA8
 * Callers:
 *     IopCheckIfNotNativeDriver @ 0x1405F73EC (IopCheckIfNotNativeDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x140150B20 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x140150B60 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x140150F60 (ZwCreateSection.c)
 */

bool __fastcall IopIsNotNativeDriverImage(UNICODE_STRING *a1)
{
  bool v1; // bl
  PIMAGE_NT_HEADERS v3; // rax
  HANDLE FileHandle; // [rsp+58h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-90h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK v9; // [rsp+A8h] [rbp-50h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v10; // [rsp+B8h] [rbp-40h] BYREF

  v1 = 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &v9, 5u, 0) < 0 )
    return 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateSection(&SectionHandle, 8u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle) < 0 )
  {
LABEL_4:
    ZwClose(FileHandle);
    return 0;
  }
  BaseAddress = 0LL;
  ViewSize = 0LL;
  KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)&v10);
  if ( ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         0LL,
         &ViewSize,
         ViewShare,
         0,
         2u) < 0 )
  {
    KiUnstackDetachProcess(&v10, 0LL);
    ZwClose(SectionHandle);
    goto LABEL_4;
  }
  v3 = RtlImageNtHeader(BaseAddress);
  if ( v3 )
    v1 = v3->FileHeader.Machine != 0x8664;
  ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  KiUnstackDetachProcess(&v10, 0LL);
  ZwClose(SectionHandle);
  ZwClose(FileHandle);
  return v1;
}
