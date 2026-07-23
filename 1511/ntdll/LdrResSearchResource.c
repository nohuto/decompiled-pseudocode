/*
 * XREFs of LdrResSearchResource @ 0x1800394E0
 * Callers:
 *     LdrResFindResourceDirectory @ 0x1800399F0 (LdrResFindResourceDirectory.c)
 *     RtlLoadString @ 0x1800700A0 (RtlLoadString.c)
 *     LdrResFindResource @ 0x1800D4C10 (LdrResFindResource.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlLcidToLocaleName @ 0x18001CA60 (RtlLcidToLocaleName.c)
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037C1C (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetMappingSize @ 0x1800397F0 (LdrpResGetMappingSize.c)
 *     LdrAddLoadAsDataTable @ 0x180076850 (LdrAddLoadAsDataTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 *     LdrpResMapFile @ 0x1800D4D7C (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800D5110 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFileHandle @ 0x1800D578C (LdrpResValidateFileHandle.c)
 *     LdrpResValidateFilePath @ 0x1800D57E8 (LdrpResValidateFilePath.c)
 */

NTSTATUS __fastcall LdrResSearchResource(
        WCHAR *DosFileName,
        void *Src,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        SIZE_T *a6,
        void *a7,
        __int64 a8)
{
  __int64 v9; // r15
  void *v12; // r14
  __int64 v13; // rax
  bool v14; // zf
  int v15; // ebx
  NTSTATUS result; // eax
  NTSTATUS v17; // eax
  int v18; // eax
  WCHAR *v19; // r9
  WCHAR *v20; // rdx
  PVOID Module; // [rsp+50h] [rbp-E8h] BYREF
  SIZE_T Size; // [rsp+58h] [rbp-E0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-C8h]
  DWORD Lcid; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+80h] [rbp-B8h]
  int v27; // [rsp+88h] [rbp-B0h]
  __int64 v28; // [rsp+90h] [rbp-A8h]
  int v29; // [rsp+98h] [rbp-A0h] BYREF
  const wchar_t *v30; // [rsp+A0h] [rbp-98h]
  _BYTE MemoryInformation[48]; // [rsp+A8h] [rbp-90h] BYREF
  _BYTE v32[16]; // [rsp+D8h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+E8h] [rbp-50h]

  v9 = a3;
  v28 = a5;
  v12 = a7;
  v24 = (__int64)a7;
  v13 = a8;
  v26 = a8;
  Module = 0LL;
  *(_DWORD *)&DestinationString.Length = 3538996;
  DestinationString.Buffer = L"LdrResSearchResource Enter";
  v29 = 3407922;
  v30 = L"LdrResSearchResource Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(&DestinationString, MEMORY[0x7FFE0384]);
    v13 = v26;
  }
  if ( !DosFileName || !Src || a7 && !v13 )
    goto LABEL_92;
  if ( (a4 & 0xF00) == 0 )
    a4 |= 0x100u;
  if ( (a4 & 0x2000) == 0 )
    a4 |= 0x1000u;
  if ( (a4 & 0xFFF80000) != 0 )
    goto LABEL_21;
  if ( (unsigned int)v9 < 3 && (a4 & 2) == 0 || (unsigned int)v9 > 4 )
  {
    v15 = -1073741583;
    goto LABEL_22;
  }
  if ( (a4 & 0x41) != 0 )
  {
    if ( (_DWORD)v9 != 4 )
      return -1073741583;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_16;
  }
  if ( (a4 & 0x41) == 0 )
    return -1073741582;
LABEL_16:
  if ( (a4 & 0x100) != 0 )
  {
    v14 = (a4 & 0xE00) == 0;
    goto LABEL_18;
  }
  if ( (a4 & 0x200) == 0 )
  {
    if ( (a4 & 0xC00) != 0xC00 )
      goto LABEL_19;
LABEL_21:
    v15 = -1073741582;
    goto LABEL_22;
  }
  v14 = (a4 & 0xC00) == 0;
LABEL_18:
  if ( !v14 )
    goto LABEL_21;
LABEL_19:
  if ( (~(_WORD)a4 & 0x810) != 0 && (a4 & 0x8000) != 0 || (a4 & 0x3000) == 0x3000 || (a4 & 0x18) == 0x18 )
    goto LABEL_21;
  Size = 0LL;
  if ( (a4 & 0x20000) != 0 )
  {
    if ( (a4 & 0x400) == 0 || !a6 || !*a6 )
    {
      v15 = -1073741811;
      v27 = -1073741811;
      goto LABEL_22;
    }
    Size = *a6;
  }
  memmove(v32, Src, 8 * v9);
  if ( (_DWORD)v9 != 3 )
  {
    if ( (unsigned int)v9 <= 3 )
      goto LABEL_30;
    LODWORD(v9) = 3;
  }
  if ( (unsigned __int64)SourceString < 0x10000 )
  {
    if ( !SourceString )
      goto LABEL_30;
    if ( ((unsigned __int16)SourceString & 0x3FF) != 0 && SourceString != (PCWSTR)127 )
    {
      DestinationString.Length = 0;
      *(_QWORD *)&DestinationString.MaximumLength = 0LL;
      *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
      HIWORD(DestinationString.Buffer) = 0;
      if ( RtlLcidToLocaleName((LCID)SourceString, &DestinationString, 2u, 1u) >= 0 )
      {
        if ( DestinationString.Buffer )
          RtlFreeAnsiString(&DestinationString);
        goto LABEL_30;
      }
    }
LABEL_92:
    v15 = -1073741811;
    goto LABEL_22;
  }
  if ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      return -1073741811;
  }
  else
  {
    Lcid = 0;
  }
  SourceString = (PCWSTR)(unsigned __int16)Lcid;
LABEL_30:
  if ( (a4 & 0x300) == 0 )
  {
    if ( (a4 & 0x400) == 0 && ((a4 & 0x800) == 0 || (~(_WORD)a4 & 0x8000) == 0) )
      goto LABEL_89;
    if ( (a4 & 0x1400) == 0x1400 )
    {
      result = LdrpResValidateFilePath(DosFileName);
    }
    else
    {
      if ( (a4 & 0x1000) == 0 )
        goto LABEL_82;
      result = LdrpResValidateFileHandle(DosFileName);
    }
    if ( result < 0 )
      return result;
LABEL_82:
    v18 = LdrpResMapFile(DosFileName, &Module, &Size);
    v15 = v18;
    if ( v18 >= 0 )
    {
      if ( (a4 & 0x400) != 0 )
      {
        v19 = 0LL;
        v20 = DosFileName;
      }
      else
      {
        v19 = DosFileName;
        v20 = 0LL;
      }
      result = LdrAddLoadAsDataTable(Module, v20, Size, v19, 0LL);
      if ( result < 0 )
        return result;
      goto LABEL_89;
    }
    if ( v18 == -1073741302 )
    {
LABEL_89:
      v12 = (void *)v24;
LABEL_33:
      if ( (a4 & 0x8000) != 0 )
      {
        result = LdrpResValidateFileHandle(DosFileName);
        if ( result < 0 )
          return result;
        v17 = LdrpResSearchResourceHandle(DosFileName, v28, (__int64)a6, (__int64)v12, v26);
      }
      else
      {
        v17 = LdrpResSearchResourceMappedFile(
                Module,
                Size,
                a4,
                (__int64)v32,
                v9,
                (__int64 *)v28,
                (__int64 *)a6,
                v12,
                (unsigned int *)v26);
      }
      v15 = v17;
    }
LABEL_22:
    if ( (MEMORY[0x7FFE0385] & 1) != 0 )
      LdrpTraceLoadMUIDll(&v29, MEMORY[0x7FFE0384]);
    return v15;
  }
  Module = DosFileName;
  if ( (a4 & 0x200) == 0 )
    goto LABEL_71;
  if ( ((unsigned __int8)DosFileName & 1) == 0 )
    Module = (PVOID)((unsigned __int64)DosFileName | 1);
  if ( (a4 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID)((unsigned __int64)DosFileName & 0xFFFFFFFFFFFFFFFCuLL),
                   MemoryBasicInformation,
                   MemoryInformation,
                   0x30uLL,
                   0LL),
        result >= 0) )
  {
LABEL_71:
    result = LdrpResGetMappingSize(Module, &Size, a4, 0LL);
    if ( result >= 0 || (a4 & 0x1000) == 0 )
      goto LABEL_33;
  }
  return result;
}
