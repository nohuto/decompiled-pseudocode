/*
 * XREFs of PiLookupInDDB @ 0x1405158D4
 * Callers:
 *     PpCheckInDriverDatabase @ 0x140515BB0 (PpCheckInDriverDatabase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x14015A6F0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14015A730 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x14015AB30 (ZwCreateSection.c)
 *     SdbInitDatabaseInMemory @ 0x140495C8C (SdbInitDatabaseInMemory.c)
 *     SdbReleaseDatabase @ 0x1404CEA90 (SdbReleaseDatabase.c)
 *     PiIsDriverBlocked @ 0x140515678 (PiIsDriverBlocked.c)
 *     PnpLogEvent @ 0x14062DB4C (PnpLogEvent.c)
 */

__int64 __fastcall PiLookupInDDB(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rdx
  int IsDriverBlocked; // ebx
  int v11; // eax
  const WCHAR *v12; // rdx
  PVOID BaseAddress; // [rsp+58h] [rbp-39h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-31h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING v16; // [rsp+70h] [rbp-21h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp+27h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp+37h] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  if ( *(_QWORD *)&PpDDBHandle )
    goto LABEL_2;
  RtlInitUnicodeString(&DestinationString, PiDDBPath);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IsDriverBlocked = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( IsDriverBlocked < 0 )
  {
    if ( InitIsWinPEMode || (PiLoggedErrorEventsMask & 0x10) != 0 )
      goto LABEL_14;
    v11 = PiLoggedErrorEventsMask | 0x10;
    v12 = L"DATABASE OPEN FAILED";
LABEL_19:
    PiLoggedErrorEventsMask = v11;
    RtlInitUnicodeString(&v16, v12);
    PnpLogEvent(&v16, 0LL, 3221226349LL, 0LL, 0);
    goto LABEL_14;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IsDriverBlocked = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  if ( IsDriverBlocked < 0 )
  {
    if ( (PiLoggedErrorEventsMask & 0x20) != 0 )
      goto LABEL_14;
    v11 = PiLoggedErrorEventsMask | 0x20;
    v12 = L"DATABASE SECTION FAILED";
    goto LABEL_19;
  }
  ViewSize = 0LL;
  IsDriverBlocked = ZwMapViewOfSection(
                      SectionHandle,
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      &BaseAddress,
                      0LL,
                      0LL,
                      0LL,
                      &ViewSize,
                      ViewShare,
                      0,
                      2u);
  if ( IsDriverBlocked < 0 )
  {
    if ( (PiLoggedErrorEventsMask & 0x40) != 0 )
      goto LABEL_14;
    v11 = PiLoggedErrorEventsMask | 0x40;
    v12 = L"DATABASE MAPPING FAILED";
    goto LABEL_19;
  }
  *(_QWORD *)&PpDDBHandle = SdbInitDatabaseInMemory((__int64)BaseAddress, ViewSize);
  if ( !*(_QWORD *)&PpDDBHandle )
  {
    IsDriverBlocked = -1073741823;
    if ( (PiLoggedErrorEventsMask & 0x80u) != 0 )
      goto LABEL_14;
    v11 = PiLoggedErrorEventsMask | 0x80;
    v12 = L"INIT DATABASE FAILED";
    goto LABEL_19;
  }
LABEL_2:
  IsDriverBlocked = PiIsDriverBlocked(a1, a1, a2, a3, a4);
  if ( !BaseAddress )
    goto LABEL_3;
  SdbReleaseDatabase(*(__int64 *)&PpDDBHandle, v8);
  *(_QWORD *)&PpDDBHandle = 0LL;
LABEL_14:
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
LABEL_3:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)IsDriverBlocked;
}
