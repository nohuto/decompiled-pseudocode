/*
 * XREFs of LdrResSearchResource @ 0x18001AAA0
 * Callers:
 *     RtlLoadString @ 0x180066530 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x18006DD60 (LdrResFindResourceDirectory.c)
 *     LdrResFindResource @ 0x1800CC3D0 (LdrResFindResource.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x180018FCC (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetMappingSize @ 0x18001AFF0 (LdrpResGetMappingSize.c)
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlLcidToLocaleName @ 0x18001F420 (RtlLcidToLocaleName.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     LdrAddLoadAsDataTable @ 0x18006B290 (LdrAddLoadAsDataTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 *     LdrpResMapFile @ 0x1800CC53C (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800CC8D0 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFileHandle @ 0x1800CCF4C (LdrpResValidateFileHandle.c)
 *     LdrpResValidateFilePath @ 0x1800CCFA8 (LdrpResValidateFilePath.c)
 */

__int64 __fastcall LdrResSearchResource(
        unsigned __int64 Handle,
        void *Src,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6,
        void *a7,
        __int64 a8)
{
  __int64 v9; // r15
  void *v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 result; // rax
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  int v20; // eax
  HANDLE v21; // rdx
  unsigned int v22; // eax
  unsigned __int64 v23; // [rsp+50h] [rbp-E8h] BYREF
  wchar_t *v24; // [rsp+58h] [rbp-E0h]
  int v25; // [rsp+60h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-D0h] BYREF
  int v27; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+80h] [rbp-B8h]
  __int64 v29; // [rsp+88h] [rbp-B0h]
  __int64 v30; // [rsp+90h] [rbp-A8h]
  int v31; // [rsp+98h] [rbp-A0h] BYREF
  const wchar_t *v32; // [rsp+A0h] [rbp-98h]
  _BYTE v33[48]; // [rsp+A8h] [rbp-90h] BYREF
  _BYTE v34[16]; // [rsp+D8h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+E8h] [rbp-50h]

  v9 = a3;
  v30 = a5;
  v12 = a7;
  v28 = (__int64)a7;
  v13 = a8;
  v29 = a8;
  v24 = 0LL;
  *(_DWORD *)&DestinationString.Length = 3538996;
  DestinationString.Buffer = L"LdrResSearchResource Enter";
  v31 = 3407922;
  v32 = L"LdrResSearchResource Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(&DestinationString, MEMORY[0x7FFE0384]);
    v13 = v29;
  }
  if ( !Handle || !Src || a7 && !v13 )
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
      return 3221225713LL;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_23;
  }
  if ( (a4 & 0x41) == 0 )
    return 3221225714LL;
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
  v23 = 0LL;
  if ( (a4 & 0x20000) != 0 )
  {
    if ( (a4 & 0x400) == 0 || !a6 || !*a6 )
    {
      v14 = -1073741811;
      v25 = -1073741811;
      goto LABEL_94;
    }
    v23 = *a6;
  }
  if ( (a4 & 0x80000) != 0 )
  {
    if ( (a4 & 0x300) == 0 || !a6 || !*a6 )
    {
      v14 = -1073741811;
      v25 = -1073741811;
      goto LABEL_94;
    }
    v23 = *a6;
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
      if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v27) )
        return 3221225485LL;
    }
    else
    {
      v27 = 0;
    }
    SourceString = (PCWSTR)(unsigned __int16)v27;
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
        v19 = RtlLcidToLocaleName((unsigned int)SourceString, &DestinationString, 2LL),
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
      result = LdrpResValidateFilePath(Handle, 5120LL, 0LL);
    }
    else
    {
      if ( (a4 & 0x1000) == 0 )
        goto LABEL_80;
      result = LdrpResValidateFileHandle(Handle, 5120LL, 0LL);
    }
    if ( (int)result < 0 )
      return result;
LABEL_80:
    v20 = LdrpResMapFile((wchar_t *)Handle);
    v14 = v20;
    if ( v20 < 0 )
    {
      if ( v20 != -1073741302 )
        goto LABEL_94;
    }
    else
    {
      if ( (a4 & 0x400) != 0 )
        v21 = (HANDLE)Handle;
      else
        v21 = 0LL;
      result = LdrAddLoadAsDataTable(v24, v21, 0LL);
      if ( (int)result < 0 )
        return result;
    }
LABEL_87:
    v12 = (void *)v28;
LABEL_88:
    if ( (a4 & 0x8000) != 0 )
    {
      result = LdrpResValidateFileHandle(Handle, v17, v18);
      if ( (int)result < 0 )
        return result;
      v22 = LdrpResSearchResourceHandle((HANDLE)Handle, v30, (__int64)a6, (__int64)v12, v29);
    }
    else
    {
      v22 = LdrpResSearchResourceMappedFile(
              (unsigned __int64)v24,
              v23,
              a4,
              (__int64)v34,
              v9,
              (__int64 *)v30,
              a6,
              v12,
              (unsigned int *)v29);
    }
    v14 = v22;
    goto LABEL_94;
  }
  v24 = (wchar_t *)Handle;
  if ( (a4 & 0x200) == 0 )
    goto LABEL_69;
  if ( (Handle & 1) == 0 )
    v24 = (wchar_t *)(Handle | 1);
  if ( (a4 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(-1LL, Handle & 0xFFFFFFFFFFFFFFFCuLL, 0LL, v33, 48LL, 0LL), (int)result >= 0) )
  {
LABEL_69:
    result = LdrpResGetMappingSize(v24, &v23, a4, 0LL);
    if ( (int)result >= 0 || (a4 & 0x1000) == 0 )
      goto LABEL_88;
  }
  return result;
}
