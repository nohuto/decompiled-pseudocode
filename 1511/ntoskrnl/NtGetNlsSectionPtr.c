/*
 * XREFs of NtGetNlsSectionPtr @ 0x140461AE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     ZwOpenSection @ 0x140150D00 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x140150F60 (ZwCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x1403B5C20 (MmMapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     RtlpInitNlsFileName @ 0x140461828 (RtlpInitNlsFileName.c)
 *     RtlpInitNlsSectionName @ 0x140461A80 (RtlpInitNlsSectionName.c)
 *     MmMapViewOfSection @ 0x1404644F4 (MmMapViewOfSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v15; // r9
  PVOID v16; // rdi
  NTSTATUS v17; // eax
  HANDLE SectionHandle; // [rsp+58h] [rbp-210h] BYREF
  PVOID MappedBase; // [rsp+60h] [rbp-208h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-200h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-1F8h] BYREF
  __int64 v22; // [rsp+78h] [rbp-1F0h] BYREF
  PVOID Section; // [rsp+80h] [rbp-1E8h] BYREF
  PVOID v24; // [rsp+88h] [rbp-1E0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-1D0h] BYREF
  UNICODE_STRING v26; // [rsp+C8h] [rbp-1A0h] BYREF
  UNICODE_STRING v27; // [rsp+D8h] [rbp-190h] BYREF
  OBJECT_ATTRIBUTES v28; // [rsp+E8h] [rbp-180h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+118h] [rbp-150h] BYREF
  wchar_t v30[64]; // [rsp+130h] [rbp-138h] BYREF
  wchar_t v31[64]; // [rsp+1B0h] [rbp-B8h] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  v24 = 0LL;
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
  result = RtlpInitNlsSectionName(SectionType, SectionData, v30, (__int64)SectionPointer, &v27);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 720;
    ObjectAttributes.ObjectName = &v27;
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
        result = RtlpInitNlsFileName(SectionType, SectionData, v31, v15, &v26);
        if ( result < 0 )
          return result;
        v28.Length = 48;
        v28.RootDirectory = 0LL;
        v28.Attributes = 576;
        v28.ObjectName = &v26;
        *(_OWORD *)&v28.SecurityDescriptor = 0LL;
        result = ZwOpenFile(&FileHandle, 0x100000u, &v28, &IoStatusBlock, 1u, 0);
        if ( result < 0 )
          return result;
        v14 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
        ZwClose(FileHandle);
      }
    }
    if ( v14 >= 0 )
    {
      v14 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Section, 0LL);
      v16 = Section;
      v24 = Section;
      ZwClose(SectionHandle);
      if ( v14 >= 0 )
      {
        v22 = 0LL;
        if ( v12 )
        {
          v17 = MmMapViewInSystemSpace(v16, &MappedBase, &ViewSize);
        }
        else
        {
          v16 = Section;
          v17 = MmMapViewOfSection(
                  (_DWORD)Section,
                  KeGetCurrentThread()->ApcState.Process,
                  (unsigned int)&MappedBase,
                  0,
                  0LL,
                  (__int64)&v22,
                  (__int64)&ViewSize,
                  1,
                  0x400000,
                  2);
        }
        v14 = v17;
        ObfDereferenceObject(v16);
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
