/*
 * XREFs of RtlpProbeAssemblyStorageRootForAssembly @ 0x180042A34
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18004227C (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x18003D350 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180042E60 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenFile @ 0x1800A5720 (NtOpenFile.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlpProbeAssemblyStorageRootForAssembly(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        HANDLE *a7)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  _BYTE *v13; // rbx
  _WORD *v14; // r15
  const void **v15; // rcx
  unsigned __int16 v16; // r15
  void *v17; // rax
  NTSTATUS v18; // edi
  HANDLE *v19; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  void *StringRoutine; // rax
  char v24; // [rsp+60h] [rbp-A0h]
  HANDLE FileHandle[3]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v26; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp-70h]
  const void **v28; // [rsp+98h] [rbp-68h]
  HANDLE *v29; // [rsp+A0h] [rbp-60h]
  __int128 v30; // [rsp+A8h] [rbp-58h] BYREF
  void *v31; // [rsp+B8h] [rbp-48h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE Src[528]; // [rsp+110h] [rbp+10h] BYREF

  v28 = (const void **)a3;
  v29 = a7;
  memset((char *)&FileHandle[1] + 2, 0, 14);
  v24 = 0;
  v26 = 0uLL;
  v27 = 0LL;
  FileHandle[0] = 0LL;
  if ( a6 )
    *(_QWORD *)a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( a2 && a3 && a4 && a5 && a6 && a7 )
  {
    v9 = *a2;
    if ( (_WORD)v9 )
    {
      v10 = *((_QWORD *)a2 + 1);
      v11 = (unsigned __int64)(unsigned int)v9 >> 1;
      if ( *(_WORD *)(v10 + 2 * v11 - 2) != 92 && *(_WORD *)(v10 + 2 * v11 - 2) != 47 )
      {
        v24 = 1;
        v9 += 2LL;
      }
    }
    v12 = v9 + *a3 + 4LL;
    if ( v12 > 0xFFFE )
    {
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: Assembly storage resolution failing probe because combined path length does not fit in an UNICODE_STRING.\n");
      v18 = -1073741562;
      goto LABEL_27;
    }
    if ( v12 > 0x208 )
    {
      FileHandle[2] = (HANDLE)NtdllpAllocateStringRoutine((unsigned __int16)v12);
      v13 = FileHandle[2];
      if ( !FileHandle[2] )
      {
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: Assembly storage resolution failing probe because attempt to allocate %u bytes failed.\n",
          (unsigned __int16)v12);
        v18 = -1073741801;
        goto LABEL_31;
      }
    }
    else
    {
      v13 = Src;
      FileHandle[2] = Src;
    }
    memmove(v13, *((const void **)a2 + 1), *a2);
    v14 = &v13[*a2];
    if ( v24 )
      *v14++ = 92;
    memmove(v14, v28[1], *(unsigned __int16 *)v28);
    v15 = v28;
    *(_WORD *)((char *)v14 + *(unsigned __int16 *)v28) = 0;
    v16 = *(_WORD *)v15 + (v24 != 0 ? 2 : 0) + *a2;
    if ( !(unsigned __int8)RtlDosPathNameToRelativeNtPathName_U(v13, &v26, 0LL, &v30) )
    {
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n",
        (const wchar_t *)v13);
      v18 = -1073741766;
      goto LABEL_28;
    }
    v27 = *((_QWORD *)&v26 + 1);
    if ( (_WORD)v30 )
    {
      v17 = v31;
      v26 = v30;
    }
    else
    {
      v17 = 0LL;
      v31 = 0LL;
    }
    ObjectAttributes.RootDirectory = v17;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v26;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v18 = NtOpenFile(FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    RtlReleaseRelativeName((__int64)&v30);
    if ( v18 < 0 )
    {
      v21 = (unsigned int)(v18 + 1073741809);
      if ( (unsigned int)v21 <= 0x2B && (v22 = 0x82000000001LL, _bittest64(&v22, v21)) )
        v18 = -1072365564;
      else
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
          (const wchar_t *)v13,
          v18);
    }
    else
    {
      if ( v12 <= *(unsigned __int16 *)(a4 + 2) )
      {
        memmove(*(void **)(a4 + 8), v13, v16);
        *(_QWORD *)a6 = a4;
LABEL_24:
        v18 = 0;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a6 + 8LL) + v16) = 92;
        v19 = v29;
        **(_WORD **)a6 = v16 + 2;
        *v19 = FileHandle[0];
        FileHandle[0] = 0LL;
        goto LABEL_25;
      }
      if ( v13 != Src )
      {
        *(_QWORD *)(a5 + 8) = v13;
        v13 = 0LL;
        FileHandle[2] = 0LL;
LABEL_50:
        *(_WORD *)(a5 + 2) = v12;
        *(_QWORD *)a6 = a5;
        goto LABEL_24;
      }
      StringRoutine = (void *)NtdllpAllocateStringRoutine(v12);
      *(_QWORD *)(a5 + 8) = StringRoutine;
      if ( StringRoutine )
      {
        memmove(StringRoutine, v13, v16);
        goto LABEL_50;
      }
      v18 = -1073741801;
    }
  }
  else
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() bad parameters\n"
      "SXS:  Flags:               0x%lx\n"
      "SXS:  Root:                %p\n"
      "SXS:  AssemblyDirectory:   %p\n"
      "SXS:  PreAllocatedString:  %p\n"
      "SXS:  DynamicString:       %p\n"
      "SXS:  StringUsed:          %p\n"
      "SXS:  OpenDirectoryHandle: %p\n",
      "RtlpProbeAssemblyStorageRootForAssembly",
      0,
      a2,
      a3,
      (const void *)a4,
      (const void *)a5,
      a6,
      a7);
    v13 = FileHandle[2];
    v18 = -1073741811;
  }
LABEL_25:
  if ( v27 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v27);
LABEL_27:
    v13 = FileHandle[2];
  }
LABEL_28:
  if ( v13 && v13 != Src )
    NtdllpFreeStringRoutine((__int64)v13);
LABEL_31:
  if ( FileHandle[0] )
    NtClose(FileHandle[0]);
  return (unsigned int)v18;
}
