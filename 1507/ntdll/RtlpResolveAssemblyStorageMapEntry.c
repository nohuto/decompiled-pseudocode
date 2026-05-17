/*
 * XREFs of RtlpResolveAssemblyStorageMapEntry @ 0x18005381C
 * Callers:
 *     RtlGetAssemblyStorageRoot @ 0x180053150 (RtlGetAssemblyStorageRoot.c)
 * Callees:
 *     DbgPrintEx @ 0x18000F9B0 (DbgPrintEx.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18001C000 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180054028 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180054164 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlReleaseRelativeName @ 0x1800546C0 (RtlReleaseRelativeName.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     wcsrchr @ 0x180089C80 (wcsrchr.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenFile @ 0x180093C30 (NtOpenFile.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall RtlpResolveAssemblyStorageMapEntry(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        void (__fastcall *a4)(__int64, unsigned int **, __int64),
        __int64 a5)
{
  __int64 v5; // r14
  NTSTATUS v9; // ebx
  __int64 v11; // rdx
  char *v12; // r9
  char *v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned int *v19; // rax
  int v20; // ecx
  int v21; // eax
  unsigned __int64 v22; // rdi
  int v23; // eax
  const wchar_t *v24; // rsi
  wchar_t *v25; // rax
  unsigned __int16 v26; // di
  void **v27; // rcx
  void *v28; // rax
  int v29; // eax
  int inserted; // eax
  int v31; // eax
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  ULONG OpenOptions[2]; // [rsp+28h] [rbp-D8h]
  char v34; // [rsp+40h] [rbp-C0h]
  int *v35; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 StringRoutine; // [rsp+68h] [rbp-98h]
  unsigned int *v39; // [rsp+70h] [rbp-90h]
  unsigned int *v40; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h]
  unsigned int *v42; // [rsp+90h] [rbp-70h]
  int v43; // [rsp+98h] [rbp-68h] BYREF
  _BYTE *v44; // [rsp+A0h] [rbp-60h]
  char v45; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v46; // [rsp+B0h] [rbp-50h]
  char v47; // [rsp+B8h] [rbp-48h]
  _WORD v48[4]; // [rsp+C0h] [rbp-40h] BYREF
  char *v49; // [rsp+C8h] [rbp-38h]
  __int128 v50; // [rsp+D0h] [rbp-30h] BYREF
  int v51; // [rsp+E0h] [rbp-20h] BYREF
  char *v52; // [rsp+E8h] [rbp-18h]
  __int64 v53; // [rsp+F0h] [rbp-10h]
  __int128 v54; // [rsp+F8h] [rbp-8h] BYREF
  void *v55; // [rsp+108h] [rbp+8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v58[544]; // [rsp+160h] [rbp+60h] BYREF
  char v59; // [rsp+380h] [rbp+280h] BYREF

  v5 = a3;
  v53 = a5;
  v34 = 0;
  FileHandle = 0LL;
  v9 = 0;
  v51 = 34078720;
  v52 = &v59;
  v37 = 0;
  StringRoutine = 0LL;
  LODWORD(v50) = 0;
  *((_QWORD *)&v50 + 1) = 0LL;
  v39 = 0LL;
  if ( !a1 )
  {
    v31 = 0;
    goto LABEL_70;
  }
  if ( !a2 || !(_DWORD)v5 || (unsigned int)v5 > *(_DWORD *)(a1 + 4) )
  {
    v31 = *(_DWORD *)(a1 + 4);
LABEL_70:
    DbgPrintEx(
      51,
      0,
      "SXS: %s() bad parameters\n"
      "SXS:   Map                : %p\n"
      "SXS:   Data               : %p\n"
      "SXS:   AssemblyRosterIndex: 0x%lx\n"
      "SXS:   Map->AssemblyCount : 0x%lx\n",
      "RtlpResolveAssemblyStorageMapEntry",
      (const void *)a1,
      a2,
      v5,
      v31);
    v9 = -1073741811;
    v22 = 0LL;
    goto LABEL_23;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5) )
    return (unsigned int)v9;
  _mm_lfence();
  v11 = a2[6];
  v12 = (char *)a2 + *(unsigned int *)((char *)&a2[6 * v5 + 4] + *(unsigned int *)((char *)a2 + v11 + 12));
  v13 = (char *)a2 + *(unsigned int *)((char *)a2 + v11 + 16);
  v14 = *((_DWORD *)v12 + 20);
  if ( v14 > 0xFFFE )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: Assembly directory name stored in assembly information too long (%lu bytes) - ACTIVATION_CONTEXT_DATA at %p\n",
      v14,
      a2);
    v9 = -1073741562;
    goto LABEL_45;
  }
  if ( (v12[4] & 0x10) == 0 )
  {
    v35 = 0LL;
    v48[0] = *((_WORD *)v12 + 40);
    v48[1] = v48[0];
    v15 = *((unsigned int *)v12 + 21);
    v40 = a2;
    v49 = &v13[v15];
    LODWORD(v41) = v5;
    v44 = v58;
    v42 = 0LL;
    v43 = 34996224;
    v45 = 0;
    v47 = 0;
    v46 = 0LL;
    a4(1LL, &v40, a5);
    if ( v47 )
    {
      v9 = -1073741536;
    }
    else
    {
      if ( !v45 )
      {
        v17 = v46;
        v18 = 0LL;
        v19 = v42;
        v39 = v42;
        v34 = 1;
        if ( v46 )
        {
          while ( 1 )
          {
            v40 = v19;
            v41 = v18;
            v44 = v58;
            v43 = 34996224;
            LOWORD(v42) = 0;
            a4(2LL, &v40, v53);
            if ( (_BYTE)v42 )
              break;
            if ( BYTE1(v42) )
            {
              if ( !(_WORD)v43 )
                goto LABEL_63;
              v17 = v18 + 1;
            }
            if ( (_WORD)v43 )
            {
              v20 = (int)FileHandle;
              if ( FileHandle )
              {
                NtClose(FileHandle);
                FileHandle = 0LL;
              }
              v21 = RtlpProbeAssemblyStorageRootForAssembly(
                      v20,
                      (unsigned int)&v43,
                      (unsigned int)v48,
                      (unsigned int)&v51,
                      (__int64)&v37,
                      (__int64)&v35,
                      (__int64)&FileHandle);
              v9 = v21;
              if ( v21 >= 0 )
                goto LABEL_18;
              if ( v21 != -1072365564 )
              {
                OpenOptions[0] = v21;
                DbgPrintEx(
                  51,
                  0,
                  "SXS: Attempt to probe assembly storage root %wZ for assembly directory %wZ failed with status = 0x%08lx\n",
                  &v43,
                  v48,
                  *(_QWORD *)OpenOptions);
                goto LABEL_64;
              }
            }
            if ( ++v18 >= v17 )
              goto LABEL_18;
            v19 = v39;
          }
          v9 = -1073741536;
          goto LABEL_64;
        }
LABEL_18:
        if ( v18 == v17 )
        {
LABEL_63:
          DbgPrintEx(51, 0, "SXS: Unable to resolve storage root for assembly directory %wZ in %Iu tries\n", v48, v18);
          v9 = -1072365564;
LABEL_64:
          v22 = 0LL;
LABEL_24:
          v40 = v39;
          a4(4LL, &v40, v53);
          goto LABEL_25;
        }
        goto LABEL_19;
      }
      v29 = RtlpProbeAssemblyStorageRootForAssembly(
              v16,
              (unsigned int)&v43,
              (unsigned int)v48,
              (unsigned int)&v51,
              (__int64)&v37,
              (__int64)&v35,
              (__int64)&FileHandle);
      v9 = v29;
      if ( v29 < 0 )
      {
        ShareAccess[0] = v29;
        DbgPrintEx(
          51,
          0,
          "SXS: Attempt to probe known root of assembly storage (\"%wZ\") failed; Status = 0x%08lx\n",
          &v43,
          *(_QWORD *)ShareAccess);
        goto LABEL_45;
      }
      inserted = RtlpInsertAssemblyStorageMapEntry(a1, (unsigned int)v5, &v43, &FileHandle);
      v9 = inserted;
      if ( inserted >= 0 )
      {
        v9 = 0;
        v22 = 0LL;
LABEL_25:
        if ( StringRoutine )
          NtdllpFreeStringRoutine(StringRoutine);
        goto LABEL_27;
      }
      DbgPrintEx(
        51,
        0,
        "SXS: Attempt to insert well known storage root into assembly storage map assembly roster index %lu failed; Status = 0x%08lx\n",
        v5,
        inserted);
    }
LABEL_45:
    v22 = 0LL;
    goto LABEL_25;
  }
  v35 = &v51;
  v24 = (const wchar_t *)&v13[*((unsigned int *)v12 + 6)];
  if ( !v24 )
    return (unsigned int)-1073741595;
  v25 = wcsrchr(v24, 0x5Cu);
  if ( !v25 )
  {
    v9 = -1073741595;
    goto LABEL_45;
  }
  v26 = 2 * (v25 - v24 + 2);
  if ( v26 <= 0x208u )
  {
    v27 = (void **)v35;
LABEL_37:
    memmove(v27[1], v24, v26 - 2LL);
    *(_WORD *)(*((_QWORD *)v35 + 1) + 2 * ((unsigned __int64)v26 >> 1) - 2) = 0;
    *(_WORD *)v35 = v26 - 2;
LABEL_19:
    if ( FileHandle )
    {
      v22 = 0LL;
    }
    else
    {
      if ( !RtlDosPathNameToRelativeNtPathName_U(*((_QWORD *)v35 + 1), (int)&v50, 0LL, (__int64)&v54) )
      {
        DbgPrintEx(
          51,
          0,
          "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n",
          *((const wchar_t **)v35 + 1));
        v22 = 0LL;
        v9 = -1073741766;
        goto LABEL_23;
      }
      v22 = *((_QWORD *)&v50 + 1);
      if ( (_WORD)v54 )
      {
        v28 = v55;
        v50 = v54;
      }
      else
      {
        v28 = 0LL;
        v55 = 0LL;
      }
      ObjectAttributes.RootDirectory = v28;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v50;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
      RtlReleaseRelativeName(&v54);
      if ( v9 < 0 )
      {
        DbgPrintEx(
          51,
          0,
          "SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
          *((const wchar_t **)v35 + 1),
          v9);
        goto LABEL_23;
      }
    }
    v23 = RtlpInsertAssemblyStorageMapEntry(a1, (unsigned int)v5, v35, &FileHandle);
    v9 = v23;
    if ( v23 < 0 )
      DbgPrintEx(51, 0, "SXS: Storage resolution failed to insert entry to storage map; Status = 0x%08lx\n", v23);
    else
      v9 = 0;
LABEL_23:
    if ( !v34 )
      goto LABEL_25;
    goto LABEL_24;
  }
  if ( v26 == 0xFFFF )
  {
    v22 = 0LL;
    v9 = -1073741562;
    goto LABEL_25;
  }
  HIWORD(v37) = 2 * (v25 - v24 + 2);
  StringRoutine = NtdllpAllocateStringRoutine(v26);
  if ( StringRoutine )
  {
    v27 = (void **)&v37;
    v35 = &v37;
    goto LABEL_37;
  }
  v22 = 0LL;
  v9 = -1073741801;
LABEL_27:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( v22 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v22);
  return (unsigned int)v9;
}
