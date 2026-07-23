/*
 * XREFs of AvrfMiniLoadDll @ 0x1800CF6C8
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800CDFDC (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     RtlInsertInvertedFunctionTable @ 0x18000F9C4 (RtlInsertInvertedFunctionTable.c)
 *     LdrpGenRandom @ 0x18000FDE0 (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x18000FE38 (LdrInitSecurityCookie.c)
 *     LdrpCfgProcessLoadConfig @ 0x180010044 (LdrpCfgProcessLoadConfig.c)
 *     LdrpLogDllState @ 0x180012678 (LdrpLogDllState.c)
 *     LdrpCallInitRoutine @ 0x18001527C (LdrpCallInitRoutine.c)
 *     RtlCopyUnicodeString @ 0x180019A70 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18003052C (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x180032600 (RtlImageNtHeader.c)
 *     LdrpGetProcedureAddress @ 0x180034810 (LdrpGetProcedureAddress.c)
 *     LdrpProtectAndRelocateImage @ 0x1800803C0 (LdrpProtectAndRelocateImage.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x1800A5720 (NtOpenFile.c)
 *     ZwQueryAttributesFile @ 0x1800A5860 (ZwQueryAttributesFile.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x1800A5AC0 (ZwProtectVirtualMemory.c)
 *     NtQuerySection @ 0x1800A5AE0 (NtQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x1800A5BC0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A7410 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A7990 (NtQuerySymbolicLinkObject.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r13
  int appended; // esi
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  struct _TEB *v9; // rdi
  void *ArbitraryUserPointer; // rbx
  NTSTATUS v11; // eax
  PIMAGE_NT_HEADERS v12; // rax
  PIMAGE_NT_HEADERS v13; // r15
  char *v14; // r10
  __int128 v15; // xmm0
  unsigned __int16 v16; // r9
  unsigned __int64 v17; // r8
  _WORD *i; // rdx
  __int16 v19; // ax
  _WORD *v20; // rdx
  __int16 v21; // cx
  char *v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  NTSTATUS v25; // eax
  unsigned int *v26; // rax
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  unsigned __int64 v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v33; // rdx
  _RTL_DYNAMIC_HASH_TABLE *v34; // rcx
  _DWORD *v35; // rdx
  _OWORD *v36; // rcx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // rcx
  _UNICODE_STRING LinkTarget; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE LinkHandle; // [rsp+78h] [rbp-88h] BYREF
  int *v52; // [rsp+80h] [rbp-80h] BYREF
  HANDLE DirectoryHandle; // [rsp+88h] [rbp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-40h] BYREF
  int v56[2]; // [rsp+C8h] [rbp-38h]
  __int64 v57; // [rsp+D0h] [rbp-30h]
  ULONG Size; // [rsp+D8h] [rbp-28h] BYREF
  ULONG_PTR ViewSize; // [rsp+E0h] [rbp-20h] BYREF
  ULONG OldProtect; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v61; // [rsp+F0h] [rbp-10h]
  __int64 SectionInformation; // [rsp+F8h] [rbp-8h] BYREF
  int v63; // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall *v64)(); // [rsp+108h] [rbp+8h]
  int (__fastcall *v65)(__int64, __int64); // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v66)(); // [rsp+118h] [rbp+18h]
  __int64 v67; // [rsp+120h] [rbp+20h]
  PVOID (__cdecl *v68)(PRTL_DEBUG_INFORMATION, SIZE_T); // [rsp+128h] [rbp+28h]
  NTSTATUS (__cdecl *v69)(HANDLE, ULONG, PRTL_DEBUG_INFORMATION); // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v70)(__int64, __int64, __int64, __int64, int, __int64); // [rsp+138h] [rbp+38h]
  __int128 v71; // [rsp+140h] [rbp+40h]
  _DWORD *v72; // [rsp+150h] [rbp+50h]
  __int64 v73; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v74)(unsigned __int16, unsigned __int16); // [rsp+160h] [rbp+60h]
  __int64 (__fastcall *v75)(_QWORD); // [rsp+168h] [rbp+68h]
  __int64 (__fastcall *v76)(); // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v77)(); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v78)(_QWORD, _QWORD); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v79)(_QWORD, _QWORD); // [rsp+188h] [rbp+88h]
  _UNICODE_STRING v80; // [rsp+190h] [rbp+90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+1A0h] [rbp+A0h] BYREF
  _UNICODE_STRING Source; // [rsp+1B0h] [rbp+B0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v84[20]; // [rsp+1D0h] [rbp+D0h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+270h] [rbp+170h] BYREF
  _DWORD v86[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v87[520]; // [rsp+2A8h] [rbp+1A8h] BYREF

  v61 = a2;
  *(_QWORD *)v56 = a4;
  v57 = a3;
  v5 = (_QWORD *)(a5 + 280);
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  SectionHandle = 0LL;
  FileHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v52 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  appended = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes);
  if ( appended >= 0 )
  {
    RtlInitUnicodeString(&v80, L"KnownDllPath");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v80;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( appended >= 0 )
    {
      LinkTarget.Buffer = (unsigned __int16 *)v87;
      v86[0] = 4128860;
      v86[1] = 6029375;
      *(_DWORD *)&LinkTarget.Length = 0x2000000;
      appended = NtQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
      if ( appended >= 0 )
      {
        LinkTarget.Buffer = (unsigned __int16 *)v86;
        LinkTarget.Length += 8;
        LinkTarget.MaximumLength += 8;
        RtlInitUnicodeString(&Source, L"\\");
        appended = RtlAppendUnicodeStringToString(&LinkTarget, &Source);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&LinkTarget, &VerifierDllString);
          if ( appended >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &LinkTarget;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v7 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
            if ( v7 != -1073741757 && v7 != -1073741790 && v7 < 0 )
              goto LABEL_9;
            v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            appended = v8;
            if ( v8 >= 0 )
            {
              appended = NtCreateSection(&SectionHandle, 0xFu, 0LL, 0LL, 0x10u, 0x1000000u, FileHandle);
              if ( appended >= 0 )
              {
                *(_WORD *)(a5 + 362) = 520;
                *(_WORD *)(a5 + 360) = 0;
                *(_QWORD *)(a5 + 368) = a5 + 376;
                LinkTarget.Buffer = (unsigned __int16 *)v87;
                LinkTarget.Length -= 8;
                LinkTarget.MaximumLength -= 8;
                RtlCopyUnicodeString((PUNICODE_STRING)(a5 + 360), &LinkTarget);
                v9 = NtCurrentTeb();
                ArbitraryUserPointer = v9->NtTib.ArbitraryUserPointer;
                v9->NtTib.ArbitraryUserPointer = LinkTarget.Buffer;
                v11 = ZwMapViewOfSection(
                        SectionHandle,
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &BaseAddress,
                        0LL,
                        0LL,
                        0LL,
                        &ViewSize,
                        ViewShare,
                        0,
                        4u);
                v9->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                appended = v11;
                if ( v11 == 1073741827 )
                  appended = LdrpProtectAndRelocateImage(BaseAddress);
                if ( appended >= 0 )
                {
                  v12 = RtlImageNtHeader(BaseAddress);
                  v13 = v12;
                  if ( !v12 )
                    goto LABEL_18;
                  v14 = (char *)BaseAddress;
                  *(_QWORD *)(a5 + 48) = BaseAddress;
                  *(_DWORD *)(a5 + 64) = v12->OptionalHeader.SizeOfImage;
                  *(_DWORD *)(a5 + 128) = v12->FileHeader.TimeDateStamp;
                  *(_QWORD *)(a5 + 144) = 0LL;
                  v15 = *(_OWORD *)(a5 + 360);
                  *(_DWORD *)(a5 + 104) = 0;
                  *(_OWORD *)(a5 + 72) = v15;
                  v16 = *(_WORD *)(a5 + 72);
                  v17 = *(_QWORD *)(a5 + 80);
                  for ( i = (_WORD *)(v17 + 2 * (((unsigned __int64)v16 >> 1) - 1)); (unsigned __int64)i > v17; --i )
                  {
                    if ( *i == 92 )
                      goto LABEL_24;
                  }
                  if ( *i == 92 )
                  {
LABEL_24:
                    v19 = *(_WORD *)(a5 + 74);
                    v20 = i + 1;
                    *(_QWORD *)(a5 + 96) = v20;
                    v21 = 2 * ((__int64)((__int64)v20 - v17) >> 1);
                    *(_WORD *)(a5 + 88) = v16 - v21;
                    *(_WORD *)(a5 + 90) = v19 - v21;
                    goto LABEL_26;
                  }
                  *(_OWORD *)(a5 + 88) = v15;
LABEL_26:
                  if ( v13->OptionalHeader.AddressOfEntryPoint )
                    v22 = &v14[v13->OptionalHeader.AddressOfEntryPoint];
                  else
                    v22 = 0LL;
                  *(_QWORD *)(a5 + 56) = v22;
                  *(_QWORD *)(a5 + 248) = v13->OptionalHeader.ImageBase;
                  *(_QWORD *)(a5 + 152) = v5;
                  memset(v5, 0, 0x50uLL);
                  *(_QWORD *)(a5 + 288) = a5 + 280;
                  v23 = a5 + 160;
                  *v5 = v5;
                  *(_QWORD *)(a5 + 160) = v5;
                  *(_QWORD *)(a5 + 168) = v5;
                  if ( (_QWORD *)*v5 != v5 )
                    __fastfail(3u);
                  *v5 = v23;
                  *(_QWORD *)(a5 + 288) = v23;
                  *(_DWORD *)(a5 + 276) = 2;
                  v24 = (_QWORD *)*v5;
                  *(_DWORD *)(a5 + 304) = -1;
                  *((_WORD *)v24 - 26) = -1;
                  v25 = NtQuerySection(SectionHandle, SectionRelocationInformation, &SectionInformation, 8uLL, 0LL);
                  if ( v25 < 0 )
                  {
                    appended = v25;
                    goto LABEL_44;
                  }
                  if ( SectionInformation )
                    *(_QWORD *)(a5 + 248) -= SectionInformation;
                  if ( (v13->FileHeader.Characteristics & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_BYTE *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v26 = (unsigned int *)RtlImageDirectoryEntryToData(*(PVOID *)(a5 + 48), 1u, 1u, &Size);
                  if ( !v26 )
                  {
LABEL_18:
                    appended = -1073741701;
                    goto LABEL_44;
                  }
                  v27 = (_QWORD *)(*(_QWORD *)(a5 + 48) + *v26);
                  v28 = *(_QWORD *)(a5 + 48) + v26[4];
                  if ( *v27 )
                  {
                    memset(v84, 0, 0x98uLL);
                    v84[6] = a5;
                    appended = LdrpPrepareImportAddressTableForSnap((__int64)v84);
                    if ( appended >= 0 )
                    {
                      if ( v84[12] )
                      {
                        v30 = *(_QWORD *)v56;
                        v31 = v28 - (_QWORD)v27;
                        while ( 1 )
                        {
                          appended = LdrpGetProcedureAddress(
                                       v30,
                                       (unsigned __int8 *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v27 + 2LL),
                                       0,
                                       (_QWORD *)((char *)v27 + v31));
                          if ( appended )
                            break;
                          if ( !*++v27 )
                          {
                            ZwProtectVirtualMemory(
                              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                              (PVOID *)&v84[12],
                              &v84[13],
                              v84[16],
                              &OldProtect);
                            goto LABEL_59;
                          }
                        }
                      }
                      else
                      {
                        appended = -1073741701;
                      }
                    }
                  }
                  else
                  {
LABEL_59:
                    if ( (*(_DWORD *)(a5 + 104) & 0x2004) == 4 )
                    {
                      v55 = 0LL;
                      v32 = LdrpGenRandom();
                      LdrInitSecurityCookie(
                        *(void **)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v32 ^ LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[7]),
                        &v55);
                      appended = LdrpCfgProcessLoadConfig(a5, (unsigned __int16 *)v13, v55);
                      if ( appended < 0 )
                        goto LABEL_44;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                    }
                    if ( (*(_DWORD *)(a5 + 104) & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable(BaseAddress, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v33 = *(_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR **)(a5 + 48);
                    v34 = *(_RTL_DYNAMIC_HASH_TABLE **)(a5 + 56);
                    v64 = RtlpGetStackTraceAddress;
                    v63 = 144;
                    v74 = RtlpGetStackTraceAddressEx;
                    v71 = 0LL;
                    v65 = AVrfInternalHeapFreeNotification;
                    v66 = RtlLogStackTrace;
                    v75 = RtlReleaseStackTrace;
                    v76 = RtlStdInitializeStackDatabase;
                    v77 = RtlStdDeleteStackDatabase;
                    v78 = RtlStdLogStackTrace;
                    v79 = RtlStdReleaseStackTrace;
                    v67 = v61;
                    v73 = v57;
                    v68 = RtlCommitDebugInfo;
                    v69 = RtlSetProcessDebugInformation;
                    v70 = RtlQueryImageFileExecutionOptions;
                    v52 = &v63;
                    v72 = 0LL;
                    if ( LdrpCallInitRoutine(v34, v33, 5u, (__int64)&v52)
                      && v52 == &v63
                      && (v35 = v72) != 0LL
                      && *v72 == 80
                      && (v36 = (_OWORD *)*((_QWORD *)&v71 + 1)) != 0LL
                      && **((_DWORD **)&v71 + 1) == 176 )
                    {
                      v37 = *(_OWORD *)(*((_QWORD *)&v71 + 1) + 16LL);
                      unk_1801420B8 = **((_OWORD **)&v71 + 1);
                      v38 = *(_OWORD *)(*((_QWORD *)&v71 + 1) + 32LL);
                      *((_OWORD *)&unk_1801420B8 + 1) = v37;
                      v39 = v36[3];
                      *((_OWORD *)&unk_1801420B8 + 2) = v38;
                      v40 = v36[4];
                      *((_OWORD *)&unk_1801420B8 + 3) = v39;
                      v41 = v36[5];
                      *((_OWORD *)&unk_1801420B8 + 4) = v40;
                      v42 = v36[6];
                      *((_OWORD *)&unk_1801420B8 + 5) = v41;
                      v43 = v36[8];
                      *((_OWORD *)&unk_1801420B8 + 6) = v42;
                      *((_OWORD *)&unk_1801420B8 + 7) = v36[7];
                      v44 = v36[9];
                      *((_OWORD *)&unk_1801420B8 + 8) = v43;
                      v45 = v36[10];
                      *((_OWORD *)&unk_1801420B8 + 9) = v44;
                      *((_OWORD *)&unk_1801420B8 + 10) = v45;
                      RtlpDebugPageHeapTable = (_UNKNOWN *)v71;
                      v35[10] = AVrfpVerifierFlags;
                      v35[11] = AVrfpDebug;
                      v46 = *(_QWORD *)(a5 + 48);
                      BaseAddress = 0LL;
                      LdrpLogDllState(v46, a5 + 72, 0x14AEu);
                      *(_DWORD *)(a5 + 336) = 9;
                    }
                    else
                    {
                      appended = -1073741502;
                    }
                  }
                }
              }
            }
            else if ( v8 == -1073741772 )
            {
LABEL_9:
              appended = -1073741515;
            }
          }
        }
      }
    }
  }
LABEL_44:
  if ( BaseAddress )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( DirectoryHandle )
    NtClose(DirectoryHandle);
  if ( LinkHandle )
    NtClose(LinkHandle);
  return (unsigned int)appended;
}
