/*
 * XREFs of AvrfMiniLoadDll @ 0x1800D76D4
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D6028 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180010430 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x180015210 (RtlCopyUnicodeString.c)
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     LdrpCallInitRoutine @ 0x1800188B4 (LdrpCallInitRoutine.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002F760 (RtlInsertInvertedFunctionTable.c)
 *     LdrpGenRandom @ 0x18002F8CC (LdrpGenRandom.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002FB1C (LdrpCfgProcessLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x18002FDC0 (LdrInitSecurityCookie.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800310D8 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x180031C10 (RtlImageNtHeader.c)
 *     LdrpGetProcedureAddress @ 0x180032360 (LdrpGetProcedureAddress.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     LdrpProtectAndRelocateImage @ 0x180084C30 (LdrpProtectAndRelocateImage.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x1800A6A80 (NtOpenFile.c)
 *     ZwQueryAttributesFile @ 0x1800A6BC0 (ZwQueryAttributesFile.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 *     NtQuerySection @ 0x1800A6E40 (NtQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x1800A6F20 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A87D0 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A8D70 (NtQuerySymbolicLinkObject.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r13
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
  NTSTATUS v24; // eax
  unsigned int *v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rdi
  unsigned __int64 v29; // r12
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _DWORD *v34; // rdx
  _OWORD *v35; // rcx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int64 v45; // rcx
  _UNICODE_STRING LinkTarget; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-98h] BYREF
  int *v49; // [rsp+70h] [rbp-90h]
  HANDLE FileHandle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE DirectoryHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE LinkHandle; // [rsp+88h] [rbp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-40h] BYREF
  ULONG Size; // [rsp+C8h] [rbp-38h] BYREF
  ULONG OldProtect; // [rsp+CCh] [rbp-34h] BYREF
  ULONG_PTR ViewSize; // [rsp+D0h] [rbp-30h] BYREF
  __int64 SectionInformation; // [rsp+D8h] [rbp-28h] BYREF
  int v59[2]; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  __int64 v61; // [rsp+F0h] [rbp-10h]
  int v62; // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall *v63)(); // [rsp+108h] [rbp+8h]
  int (__fastcall *v64)(__int64, __int64); // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v65)(); // [rsp+118h] [rbp+18h]
  __int64 v66; // [rsp+120h] [rbp+20h]
  PVOID (__cdecl *v67)(PRTL_DEBUG_INFORMATION, SIZE_T); // [rsp+128h] [rbp+28h]
  NTSTATUS (__cdecl *v68)(HANDLE, ULONG, PRTL_DEBUG_INFORMATION); // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v69)(__int64, __int64, __int64, __int64, int, __int64); // [rsp+138h] [rbp+38h]
  __int128 v70; // [rsp+140h] [rbp+40h]
  _DWORD *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v73)(unsigned __int16, unsigned __int16); // [rsp+160h] [rbp+60h]
  __int64 (__fastcall *v74)(_QWORD); // [rsp+168h] [rbp+68h]
  __int64 (__fastcall *v75)(); // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v76)(); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v77)(_QWORD, _QWORD); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v78)(_QWORD, _QWORD); // [rsp+188h] [rbp+88h]
  _UNICODE_STRING DestinationString; // [rsp+190h] [rbp+90h] BYREF
  _UNICODE_STRING v80; // [rsp+1A0h] [rbp+A0h] BYREF
  _UNICODE_STRING Source; // [rsp+1B0h] [rbp+B0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v83[20]; // [rsp+1D0h] [rbp+D0h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+270h] [rbp+170h] BYREF
  _DWORD v85[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v86[520]; // [rsp+2A8h] [rbp+1A8h] BYREF

  v60 = a2;
  *(_QWORD *)v59 = a4;
  v61 = a3;
  v5 = (__int64 *)(a5 + 288);
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  SectionHandle = 0LL;
  FileHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v49 = 0LL;
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
      LinkTarget.Buffer = (wchar_t *)v86;
      v85[0] = 4128860;
      v85[1] = 6029375;
      *(_DWORD *)&LinkTarget.Length = 0x2000000;
      appended = NtQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
      if ( appended >= 0 )
      {
        LinkTarget.Buffer = (wchar_t *)v85;
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
                *(_WORD *)(a5 + 370) = 520;
                *(_WORD *)(a5 + 368) = 0;
                *(_QWORD *)(a5 + 376) = a5 + 384;
                LinkTarget.Buffer = (wchar_t *)v86;
                LinkTarget.Length -= 8;
                LinkTarget.MaximumLength -= 8;
                RtlCopyUnicodeString((PUNICODE_STRING)(a5 + 368), &LinkTarget);
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
                  v15 = *(_OWORD *)(a5 + 368);
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
                  *(_QWORD *)(a5 + 296) = a5 + 288;
                  *v5 = (__int64)v5;
                  *(_QWORD *)(a5 + 160) = v5;
                  *(_QWORD *)(a5 + 168) = v5;
                  *v5 = a5 + 160;
                  *(_QWORD *)(a5 + 296) = a5 + 160;
                  *(_DWORD *)(a5 + 276) = 2;
                  v23 = *v5;
                  *(_DWORD *)(a5 + 312) = -1;
                  *(_WORD *)(v23 - 52) = -1;
                  v24 = NtQuerySection(SectionHandle, SectionRelocationInformation, &SectionInformation, 8uLL, 0LL);
                  if ( v24 < 0 )
                  {
                    appended = v24;
                    goto LABEL_42;
                  }
                  if ( SectionInformation )
                    *(_QWORD *)(a5 + 248) -= SectionInformation;
                  if ( (v13->FileHeader.Characteristics & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_BYTE *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v25 = (unsigned int *)RtlImageDirectoryEntryToData(*(PVOID *)(a5 + 48), 1u, 1u, &Size);
                  if ( !v25 )
                  {
LABEL_18:
                    appended = -1073741701;
                    goto LABEL_42;
                  }
                  v26 = (_QWORD *)(*(_QWORD *)(a5 + 48) + *v25);
                  v27 = *(_QWORD *)(a5 + 48) + v25[4];
                  if ( *v26 )
                  {
                    memset(v83, 0, 0x98uLL);
                    v83[6] = a5;
                    appended = LdrpPrepareImportAddressTableForSnap((__int64)v83);
                    if ( appended >= 0 )
                    {
                      if ( v83[12] )
                      {
                        v29 = *(_QWORD *)v59;
                        v30 = v27 - (_QWORD)v26;
                        while ( 1 )
                        {
                          appended = LdrpGetProcedureAddress(
                                       v29,
                                       (const char *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v26 + 2LL),
                                       0,
                                       (char **)((char *)v26 + v30));
                          if ( appended )
                            break;
                          if ( !*++v26 )
                          {
                            ZwProtectVirtualMemory(
                              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                              (PVOID *)&v83[12],
                              &v83[13],
                              v83[16],
                              &OldProtect);
                            goto LABEL_57;
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
LABEL_57:
                    if ( (*(_DWORD *)(a5 + 104) & 0x2004) == 4 )
                    {
                      v54 = 0LL;
                      v31 = LdrpGenRandom();
                      LdrInitSecurityCookie(
                        *(void **)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v31 ^ LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[7]),
                        &v54);
                      appended = LdrpCfgProcessLoadConfig(a5, (unsigned __int16 *)v13, v54);
                      if ( appended < 0 )
                        goto LABEL_42;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                    }
                    if ( (*(_DWORD *)(a5 + 104) & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable(BaseAddress, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v32 = *(_QWORD *)(a5 + 48);
                    v33 = *(_QWORD *)(a5 + 56);
                    v63 = RtlpGetStackTraceAddress;
                    v62 = 144;
                    v73 = RtlpGetStackTraceAddressEx;
                    v70 = 0LL;
                    v64 = AVrfInternalHeapFreeNotification;
                    v65 = RtlLogStackTrace;
                    v74 = RtlReleaseStackTrace;
                    v75 = RtlStdInitializeStackDatabase;
                    v76 = RtlStdDeleteStackDatabase;
                    v77 = RtlStdLogStackTrace;
                    v78 = RtlStdReleaseStackTrace;
                    v66 = v60;
                    v72 = v61;
                    v67 = RtlCommitDebugInfo;
                    v68 = RtlSetProcessDebugInformation;
                    v69 = RtlQueryImageFileExecutionOptions;
                    v49 = &v62;
                    v71 = 0LL;
                    if ( LdrpCallInitRoutine(v33, v32, 5)
                      && v49 == &v62
                      && (v34 = v71) != 0LL
                      && *v71 == 80
                      && (v35 = (_OWORD *)*((_QWORD *)&v70 + 1)) != 0LL
                      && **((_DWORD **)&v70 + 1) == 176 )
                    {
                      v36 = *(_OWORD *)(*((_QWORD *)&v70 + 1) + 16LL);
                      unk_18014C408 = **((_OWORD **)&v70 + 1);
                      v37 = *(_OWORD *)(*((_QWORD *)&v70 + 1) + 32LL);
                      *((_OWORD *)&unk_18014C408 + 1) = v36;
                      v38 = v35[3];
                      *((_OWORD *)&unk_18014C408 + 2) = v37;
                      v39 = v35[4];
                      *((_OWORD *)&unk_18014C408 + 3) = v38;
                      v40 = v35[5];
                      *((_OWORD *)&unk_18014C408 + 4) = v39;
                      v41 = v35[6];
                      *((_OWORD *)&unk_18014C408 + 5) = v40;
                      v42 = v35[8];
                      *((_OWORD *)&unk_18014C408 + 6) = v41;
                      *((_OWORD *)&unk_18014C408 + 7) = v35[7];
                      v43 = v35[9];
                      *((_OWORD *)&unk_18014C408 + 8) = v42;
                      v44 = v35[10];
                      *((_OWORD *)&unk_18014C408 + 9) = v43;
                      *((_OWORD *)&unk_18014C408 + 10) = v44;
                      RtlpDebugPageHeapTable = (_UNKNOWN *)v70;
                      v34[10] = AVrfpVerifierFlags;
                      v34[11] = AVrfpDebug;
                      v45 = *(_QWORD *)(a5 + 48);
                      BaseAddress = 0LL;
                      LdrpLogDllState(v45, a5 + 72, 0x14AEu);
                      *(_DWORD *)(a5 + 344) = 9;
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
LABEL_42:
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
