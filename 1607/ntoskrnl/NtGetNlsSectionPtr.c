/*
 * XREFs of NtGetNlsSectionPtr @ 0x14047444C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     ZwOpenSection @ 0x14015A8D0 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x14015AB30 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     MmMapViewOfSection @ 0x14046AEB8 (MmMapViewOfSection.c)
 *     RtlpInitNlsSectionName @ 0x1404747A0 (RtlpInitNlsSectionName.c)
 *     MmMapViewInSystemSpace @ 0x140495FBC (MmMapViewInSystemSpace.c)
 *     RtlpInitNlsFileName @ 0x1404D23E8 (RtlpInitNlsFileName.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtGetNlsSectionPtr(
        ULONG SectionType,
        ULONG SectionData,
        PVOID ContextData,
        PVOID *SectionPointer,
        PULONG SectionSize)
{
  char PreviousMode; // dl
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rcx
  bool v12; // r15
  NTSTATUS result; // eax
  int v14; // ebx
  PVOID v15; // rdi
  int v16; // eax
  HANDLE SectionHandle; // [rsp+58h] [rbp-210h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-208h] BYREF
  PVOID MappedBase; // [rsp+68h] [rbp-200h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-1F8h] BYREF
  __int64 v21; // [rsp+78h] [rbp-1F0h] BYREF
  PVOID Section; // [rsp+80h] [rbp-1E8h] BYREF
  PVOID v23; // [rsp+88h] [rbp-1E0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-1D0h] BYREF
  char v25; // [rsp+C8h] [rbp-1A0h] BYREF
  char v26; // [rsp+D8h] [rbp-190h] BYREF
  OBJECT_ATTRIBUTES v27; // [rsp+E8h] [rbp-180h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+118h] [rbp-150h] BYREF
  _BYTE v29[128]; // [rsp+130h] [rbp-138h] BYREF
  _BYTE v30[128]; // [rsp+1B0h] [rbp-B8h] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  v23 = 0LL;
  MappedBase = 0LL;
  ViewSize = 0LL;
  if ( !SectionPointer )
    return -1073741582;
  if ( !SectionSize )
    return -1073741581;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = PreviousMode == 0;
  if ( PreviousMode )
  {
    v10 = (__int64)SectionPointer;
    if ( (unsigned __int64)SectionPointer >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = (__int64)SectionSize;
    if ( (unsigned __int64)SectionSize >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( ContextData )
    {
      if ( ((unsigned __int8)ContextData & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ContextData + 4 > 0x7FFFFFFF0000LL || (char *)ContextData + 4 < ContextData )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v9 = PreviousMode == 0;
  }
  v12 = v9;
  result = RtlpInitNlsSectionName(SectionType, SectionData, v29);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 720;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v25;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( SectionType - 11 > 1 )
    {
      v14 = -1073741823;
    }
    else
    {
      v14 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
      if ( v14 < 0 )
      {
        result = RtlpInitNlsFileName(SectionType, SectionData, v30);
        if ( result < 0 )
          return result;
        v27.Length = 48;
        v27.RootDirectory = 0LL;
        v27.Attributes = 576;
        v27.ObjectName = (PUNICODE_STRING)&v26;
        *(_OWORD *)&v27.SecurityDescriptor = 0LL;
        result = ZwOpenFile(&FileHandle, 0x100000u, &v27, &IoStatusBlock, 1u, 0);
        if ( result < 0 )
          return result;
        v14 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
        ZwClose(FileHandle);
      }
    }
    if ( v14 >= 0 )
    {
      v14 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Section, 0LL);
      v15 = Section;
      v23 = Section;
      ZwClose(SectionHandle);
      if ( v14 >= 0 )
      {
        v21 = 0LL;
        if ( v12 )
        {
          v16 = MmMapViewInSystemSpace(v15, &MappedBase, &ViewSize);
        }
        else
        {
          v15 = Section;
          v16 = MmMapViewOfSection(
                  (__int64)Section,
                  KeGetCurrentThread()->ApcState.Process,
                  &MappedBase,
                  0LL,
                  0LL,
                  &v21,
                  &ViewSize,
                  1,
                  0x400000u,
                  2u);
        }
        v14 = v16;
        ObfDereferenceObject(v15);
        if ( v14 >= 0 )
        {
          *SectionPointer = MappedBase;
          *(_QWORD *)SectionSize = ViewSize;
        }
      }
    }
    return v14;
  }
  return result;
}
