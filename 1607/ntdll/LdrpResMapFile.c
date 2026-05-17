/*
 * XREFs of LdrpResMapFile @ 0x1800DD12C
 * Callers:
 *     LdrResSearchResource @ 0x180039310 (LdrResSearchResource.c)
 * Callees:
 *     RtlReleaseRelativeName @ 0x18000E930 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180011740 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrRemoveLoadAsDataTable @ 0x18002CE00 (LdrRemoveLoadAsDataTable.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     ZwCreateFile @ 0x1800A6EC0 (ZwCreateFile.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC874 (LdrpTraceLoadMUIDll.c)
 *     LdrpResFileSize @ 0x1800DD040 (LdrpResFileSize.c)
 */

__int64 __fastcall LdrpResMapFile(wchar_t *String2, wchar_t **a2, _QWORD *a3, int a4)
{
  int File; // ebx
  unsigned __int64 v9; // r15
  __int64 v10; // rdx
  __int64 result; // rax
  HANDLE v12; // [rsp+68h] [rbp-98h]
  __int64 v13; // [rsp+80h] [rbp-80h] BYREF
  int v14; // [rsp+88h] [rbp-78h] BYREF
  const wchar_t *v15; // [rsp+90h] [rbp-70h]
  __int128 v16; // [rsp+98h] [rbp-68h] BYREF
  int v17; // [rsp+A8h] [rbp-58h] BYREF
  const wchar_t *v18; // [rsp+B0h] [rbp-50h]
  __int128 v19; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v20; // [rsp+C8h] [rbp-38h]
  int v21; // [rsp+D8h] [rbp-28h]
  __int64 v22; // [rsp+E0h] [rbp-20h]
  __int128 *v23; // [rsp+E8h] [rbp-18h]
  int v24; // [rsp+F0h] [rbp-10h]
  __int128 v25; // [rsp+F8h] [rbp-8h]
  wchar_t *Handle; // [rsp+150h] [rbp+50h]

  v15 = L"LdrpResMapFile Enter";
  v14 = 2752552;
  v18 = L"LdrpResMapFile Exit";
  v17 = 2621478;
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v14);
  if ( !String2 || !a2 || !a3 )
    goto LABEL_29;
  *a2 = 0LL;
  if ( (int)LdrRemoveLoadAsDataTable(String2, a2, a3, a4 | 0x200000u) >= 0 )
  {
    File = -1073741302;
    goto LABEL_30;
  }
  if ( (a4 & 0x400) != 0 )
  {
    if ( !RtlDosPathNameToRelativeNtPathName_U((int)String2, (int)&v16, 0LL, (__int64)&v19) )
    {
      File = -1073020927;
      goto LABEL_30;
    }
    v9 = *((_QWORD *)&v16 + 1);
    if ( (_WORD)v19 )
    {
      v10 = v20;
      v16 = v19;
    }
    else
    {
      v10 = 0LL;
      v20 = 0LL;
    }
    v21 = 48;
    v24 = 64;
    v22 = v10 & -(__int64)(v9 != 0);
    v23 = &v16;
    v25 = 0LL;
    File = ZwCreateFile();
    if ( v9 )
    {
      RtlReleaseRelativeName((__int64)&v19);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
    }
    if ( File < 0 )
      goto LABEL_30;
    String2 = Handle;
    goto LABEL_20;
  }
  if ( (a4 & 0x800) == 0 )
  {
LABEL_29:
    File = -1073741811;
    goto LABEL_30;
  }
  Handle = String2;
LABEL_20:
  if ( (a4 & 0x20000) == 0 )
    goto LABEL_24;
  result = LdrpResFileSize((__int64)String2, &v13);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned __int64)(unsigned int)v13 > *a3 )
  {
    File = -1073741793;
  }
  else
  {
LABEL_24:
    File = NtCreateSection();
    if ( (~(_WORD)a4 & 0x800) != 0 )
      NtClose(Handle);
    if ( File >= 0 )
    {
      File = ZwMapViewOfSection();
      NtClose(v12);
      if ( File >= 0 )
      {
        *a2 = (wchar_t *)1;
        *a3 = 0LL;
      }
    }
  }
LABEL_30:
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v17);
  return (unsigned int)File;
}
