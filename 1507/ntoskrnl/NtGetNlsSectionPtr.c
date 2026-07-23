/*
 * XREFs of NtGetNlsSectionPtr @ 0x14040FF20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     ZwOpenSection @ 0x14017F6D0 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x14017F930 (ZwCreateSection.c)
 *     RtlpInitNlsSectionName @ 0x140410278 (RtlpInitNlsSectionName.c)
 *     MmMapViewOfSection @ 0x140466864 (MmMapViewOfSection.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSystemSpace @ 0x14051B270 (MmMapViewInSystemSpace.c)
 *     RtlpInitNlsFileName @ 0x14055BB08 (RtlpInitNlsFileName.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  bool v12; // r15
  NTSTATUS result; // eax
  int v14; // ebx
  PVOID v15; // rdi
  NTSTATUS v16; // eax
  HANDLE SectionHandle; // [rsp+58h] [rbp-210h] BYREF
  PVOID MappedBase; // [rsp+60h] [rbp-208h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-200h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-1F8h] BYREF
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
    v10 = SectionPointer;
    if ( (unsigned __int64)SectionPointer >= MmUserProbeAddress )
      v10 = (_QWORD *)MmUserProbeAddress;
    *v10 = *v10;
    v11 = SectionSize;
    if ( (unsigned __int64)SectionSize >= MmUserProbeAddress )
      v11 = (_QWORD *)MmUserProbeAddress;
    *v11 = *v11;
    if ( ContextData )
    {
      if ( ((unsigned __int8)ContextData & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ContextData + 4 > MmUserProbeAddress || (char *)ContextData + 4 < ContextData )
        *(_BYTE *)MmUserProbeAddress = 0;
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
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v26;
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
        v27.ObjectName = (PUNICODE_STRING)&v25;
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
                  (_DWORD)Section,
                  KeGetCurrentThread()->ApcState.Process,
                  (unsigned int)&MappedBase,
                  0,
                  0LL,
                  (__int64)&v21,
                  (__int64)&ViewSize,
                  1,
                  0x400000,
                  2);
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
