/*
 * XREFs of LdrResSearchResource @ 0x180039300
 * Callers:
 *     RtlLoadString @ 0x18002DC00 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x180039A50 (LdrResFindResourceDirectory.c)
 *     LdrResFindResource @ 0x1800DD080 (LdrResFindResource.c)
 * Callees:
 *     LdrAddLoadAsDataTable @ 0x18002D150 (LdrAddLoadAsDataTable.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037A68 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetMappingSize @ 0x180039850 (LdrpResGetMappingSize.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     RtlLcidToLocaleName @ 0x180042E70 (RtlLcidToLocaleName.c)
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC934 (LdrpTraceLoadMUIDll.c)
 *     LdrpResMapFile @ 0x1800DD1EC (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800DD580 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFileHandle @ 0x1800DDBF4 (LdrpResValidateFileHandle.c)
 *     LdrpResValidateFilePath @ 0x1800DDC50 (LdrpResValidateFilePath.c)
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
  void *v12; // rsi
  __int64 v13; // rax
  int v14; // ebx
  NTSTATUS result; // eax
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // r8
  NTSTATUS v19; // eax
  int v20; // eax
  WCHAR *v21; // r9
  WCHAR *v22; // rdx
  int v23; // eax
  SIZE_T Size; // [rsp+58h] [rbp-E0h] BYREF
  PVOID Module; // [rsp+60h] [rbp-D8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-D0h] BYREF
  DWORD Lcid; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+80h] [rbp-B8h]
  __int64 v29; // [rsp+88h] [rbp-B0h]
  __int64 v30; // [rsp+90h] [rbp-A8h]
  int v31; // [rsp+98h] [rbp-A0h] BYREF
  const wchar_t *v32; // [rsp+A0h] [rbp-98h]
  _BYTE MemoryInformation[48]; // [rsp+A8h] [rbp-90h] BYREF
  _BYTE v34[16]; // [rsp+D8h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+E8h] [rbp-50h]

  v9 = a3;
  v30 = a5;
  v12 = a7;
  v28 = (__int64)a7;
  v13 = a8;
  v29 = a8;
  Module = 0LL;
  *(_DWORD *)&DestinationString.Length = 3538996;
  DestinationString.Buffer = L"LdrResSearchResource Enter";
  v31 = 3407922;
  v32 = L"LdrResSearchResource Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(&DestinationString, MEMORY[0x7FFE0384]);
    v13 = v29;
  }
  if ( !DosFileName || !Src || a7 && !v13 )
    goto LABEL_93;
  if ( (a4 & 0xF00) == 0 )
    a4 |= 0x100u;
  if ( (a4 & 0x2000) == 0 )
    a4 |= 0x1000u;
  if ( (a4 & 0xFFF00000) != 0 )
    goto LABEL_12;
  if ( (unsigned int)v9 < 3 && (a4 & 2) == 0 || (unsigned int)v9 > 4 )
  {
    v14 = -1073741583;
    goto LABEL_94;
  }
  if ( (a4 & 0x41) != 0 )
  {
    if ( (_DWORD)v9 != 4 )
      return -1073741583;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_23;
  }
  if ( (a4 & 0x41) == 0 )
    return -1073741582;
LABEL_23:
  if ( (a4 & 0x100) != 0 )
  {
    v16 = (a4 & 0xE00) == 0;
    goto LABEL_25;
  }
  if ( (a4 & 0x200) != 0 )
  {
    v16 = (a4 & 0xC00) == 0;
LABEL_25:
    if ( !v16 )
      goto LABEL_12;
    goto LABEL_30;
  }
  if ( (a4 & 0xC00) == 0xC00 )
  {
LABEL_12:
    v14 = -1073741582;
LABEL_94:
    if ( (MEMORY[0x7FFE0385] & 1) != 0 )
      LdrpTraceLoadMUIDll(&v31, MEMORY[0x7FFE0384]);
    return v14;
  }
LABEL_30:
  if ( (a4 & 0x8000) != 0 && (~(_WORD)a4 & 0x810) != 0 || (a4 & 0x3000) == 0x3000 || (a4 & 0x18) == 0x18 )
    goto LABEL_12;
  Size = 0LL;
  if ( (a4 & 0x20000) != 0 )
  {
    if ( (a4 & 0x400) == 0 || !a6 || !*a6 )
    {
      v14 = -1073741811;
      goto LABEL_94;
    }
    Size = *a6;
  }
  if ( (a4 & 0x80000) != 0 )
  {
    if ( (a4 & 0x300) == 0 || !a6 || !*a6 )
    {
      v14 = -1073741811;
      goto LABEL_94;
    }
    Size = *a6;
  }
  memmove(v34, Src, 8 * v9);
  if ( (unsigned int)v9 <= 3 )
  {
    if ( (_DWORD)v9 != 3 )
      goto LABEL_61;
  }
  else
  {
    LODWORD(v9) = 3;
  }
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
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
    goto LABEL_61;
  }
  v18 = 0LL;
  if ( !SourceString )
    goto LABEL_62;
  if ( ((unsigned __int16)SourceString & 0x3FF) == 0
    || SourceString == (PCWSTR)127
    || (DestinationString.Length = 0,
        *(_QWORD *)&DestinationString.MaximumLength = 0LL,
        *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0,
        HIWORD(DestinationString.Buffer) = 0,
        v19 = RtlLcidToLocaleName((LCID)SourceString, &DestinationString, 2u, 1u),
        v18 = 0LL,
        v19 < 0) )
  {
LABEL_93:
    v14 = -1073741811;
    goto LABEL_94;
  }
  if ( !DestinationString.Buffer )
    goto LABEL_62;
  RtlFreeAnsiString(&DestinationString);
LABEL_61:
  v18 = 0LL;
LABEL_62:
  if ( (a4 & 0x300) == 0 )
  {
    if ( (a4 & 0x400) == 0 && ((a4 & 0x800) == 0 || (~a4 & 0x8000) == 0) )
      goto LABEL_87;
    if ( (a4 & 0x1400) == 0x1400 )
    {
      result = LdrpResValidateFilePath(DosFileName);
    }
    else
    {
      if ( (a4 & 0x1000) == 0 )
        goto LABEL_80;
      result = LdrpResValidateFileHandle(DosFileName, 5120LL, 0LL);
    }
    if ( result < 0 )
      return result;
LABEL_80:
    v20 = LdrpResMapFile(DosFileName, &Module, &Size);
    v14 = v20;
    if ( v20 < 0 )
    {
      if ( v20 != -1073741302 )
        goto LABEL_94;
    }
    else
    {
      if ( (a4 & 0x400) != 0 )
      {
        v21 = 0LL;
        v22 = DosFileName;
      }
      else
      {
        v21 = DosFileName;
        v22 = 0LL;
      }
      result = LdrAddLoadAsDataTable(Module, v22, Size, v21, 0LL);
      if ( result < 0 )
        return result;
    }
LABEL_87:
    v12 = (void *)v28;
LABEL_88:
    if ( (a4 & 0x8000) != 0 )
    {
      result = LdrpResValidateFileHandle(DosFileName, v17, v18);
      if ( result < 0 )
        return result;
      v23 = LdrpResSearchResourceHandle(DosFileName, v30, (__int64)a6, (__int64)v12, v29);
    }
    else
    {
      v23 = LdrpResSearchResourceMappedFile(
              Module,
              Size,
              a4,
              (__int64)v34,
              v9,
              (unsigned int **)v30,
              (__int64 *)a6,
              v12,
              (unsigned int *)v29);
    }
    v14 = v23;
    goto LABEL_94;
  }
  Module = DosFileName;
  if ( (a4 & 0x200) == 0 )
    goto LABEL_69;
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
LABEL_69:
    result = LdrpResGetMappingSize(Module, &Size, a4, 0LL);
    if ( result >= 0 || (a4 & 0x1000) == 0 )
      goto LABEL_88;
  }
  return result;
}
