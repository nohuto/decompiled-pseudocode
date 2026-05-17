/*
 * XREFs of AvrfMiniLoadDll @ 0x1800D7614
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D5F68 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180010440 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x180015220 (RtlCopyUnicodeString.c)
 *     LdrpLogDllState @ 0x180015E20 (LdrpLogDllState.c)
 *     LdrpCallInitRoutine @ 0x1800188C4 (LdrpCallInitRoutine.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002F770 (RtlInsertInvertedFunctionTable.c)
 *     LdrpGenRandom @ 0x18002F8DC (LdrpGenRandom.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002FB2C (LdrpCfgProcessLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x18002FDD0 (LdrInitSecurityCookie.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800310E8 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x180031C20 (RtlImageNtHeader.c)
 *     LdrpGetProcedureAddress @ 0x180032370 (LdrpGetProcedureAddress.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     LdrpProtectAndRelocateImage @ 0x180084C40 (LdrpProtectAndRelocateImage.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
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

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 *v5; // r13
  int SymbolicLinkObject; // esi
  int AttributesFile; // eax
  NTSTATUS v8; // eax
  struct _TEB *v9; // rdi
  void *ArbitraryUserPointer; // rbx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r15
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
  int Section; // eax
  unsigned int *v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rdx
  unsigned __int64 v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
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
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v48; // [rsp+58h] [rbp-A8h]
  char *v49; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h]
  int *v51; // [rsp+70h] [rbp-90h]
  HANDLE FileHandle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v53; // [rsp+80h] [rbp-80h]
  HANDLE v54; // [rsp+88h] [rbp-78h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-40h] BYREF
  int v57; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-30h]
  __int64 v59; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  __int64 v62; // [rsp+F0h] [rbp-10h]
  int v63; // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall *v64)(); // [rsp+108h] [rbp+8h]
  struct _PEB *(__fastcall *v65)(__int64, __int64); // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v66)(); // [rsp+118h] [rbp+18h]
  __int64 v67; // [rsp+120h] [rbp+20h]
  char *(__fastcall *v68)(_QWORD *, unsigned int); // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v69)(void *, int, __int64); // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v70)(__int64, __int64, unsigned int, __int64, int, __int64); // [rsp+138h] [rbp+38h]
  __int128 v71; // [rsp+140h] [rbp+40h]
  _DWORD *v72; // [rsp+150h] [rbp+50h]
  __int64 v73; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v74)(unsigned __int16, unsigned __int16); // [rsp+160h] [rbp+60h]
  __int64 (__fastcall *v75)(_QWORD); // [rsp+168h] [rbp+68h]
  __int64 (__fastcall *v76)(); // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v77)(); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v78)(_QWORD, _QWORD); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v79)(_QWORD, _QWORD); // [rsp+188h] [rbp+88h]
  UNICODE_STRING DestinationString; // [rsp+190h] [rbp+90h] BYREF
  UNICODE_STRING v81; // [rsp+1A0h] [rbp+A0h] BYREF
  UNICODE_STRING v82; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v84[20]; // [rsp+1D0h] [rbp+D0h] BYREF
  _DWORD v85[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v86[520]; // [rsp+2A8h] [rbp+1A8h] BYREF

  v61 = a2;
  v60 = a4;
  v62 = a3;
  v5 = (__int64 *)(a5 + 288);
  v53 = 0LL;
  v54 = 0LL;
  Handle = 0LL;
  FileHandle = 0LL;
  v49 = 0LL;
  v58 = 0LL;
  v51 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SymbolicLinkObject = ZwOpenDirectoryObject();
  if ( SymbolicLinkObject >= 0 )
  {
    RtlInitUnicodeString(&v81, L"KnownDllPath");
    ObjectAttributes.RootDirectory = v53;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v81;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SymbolicLinkObject = ZwOpenSymbolicLinkObject();
    if ( SymbolicLinkObject >= 0 )
    {
      v48 = v86;
      v85[0] = 4128860;
      v85[1] = 6029375;
      v47 = 0x2000000;
      SymbolicLinkObject = NtQuerySymbolicLinkObject();
      if ( SymbolicLinkObject >= 0 )
      {
        v48 = v85;
        LOWORD(v47) = v47 + 8;
        HIWORD(v47) += 8;
        RtlInitUnicodeString(&v82, L"\\");
        SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v47, (__int16 *)&v82);
        if ( SymbolicLinkObject >= 0 )
        {
          SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v47, VerifierDllString);
          if ( SymbolicLinkObject >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v47;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            AttributesFile = ZwQueryAttributesFile();
            if ( AttributesFile != -1073741757 && AttributesFile != -1073741790 && AttributesFile < 0 )
              goto LABEL_9;
            v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            SymbolicLinkObject = v8;
            if ( v8 >= 0 )
            {
              SymbolicLinkObject = NtCreateSection();
              if ( SymbolicLinkObject >= 0 )
              {
                *(_WORD *)(a5 + 370) = 520;
                *(_WORD *)(a5 + 368) = 0;
                *(_QWORD *)(a5 + 376) = a5 + 384;
                v48 = v86;
                LOWORD(v47) = v47 - 8;
                HIWORD(v47) -= 8;
                RtlCopyUnicodeString((unsigned __int16 *)(a5 + 368), (unsigned __int16 *)&v47);
                v9 = NtCurrentTeb();
                ArbitraryUserPointer = v9->NtTib.ArbitraryUserPointer;
                v9->NtTib.ArbitraryUserPointer = v48;
                v11 = ZwMapViewOfSection();
                v9->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                SymbolicLinkObject = v11;
                if ( v11 == 1073741827 )
                  SymbolicLinkObject = LdrpProtectAndRelocateImage(v49);
                if ( SymbolicLinkObject >= 0 )
                {
                  v12 = RtlImageNtHeader((__int64)v49);
                  v13 = v12;
                  if ( !v12 )
                    goto LABEL_18;
                  v14 = v49;
                  *(_QWORD *)(a5 + 48) = v49;
                  *(_DWORD *)(a5 + 64) = *(_DWORD *)(v12 + 80);
                  *(_DWORD *)(a5 + 128) = *(_DWORD *)(v12 + 8);
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
                  if ( *(_DWORD *)(v13 + 40) )
                    v22 = &v14[*(unsigned int *)(v13 + 40)];
                  else
                    v22 = 0LL;
                  *(_QWORD *)(a5 + 56) = v22;
                  *(_QWORD *)(a5 + 248) = *(_QWORD *)(v13 + 48);
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
                  Section = NtQuerySection();
                  if ( Section < 0 )
                  {
                    SymbolicLinkObject = Section;
                    goto LABEL_42;
                  }
                  if ( v59 )
                    *(_QWORD *)(a5 + 248) -= v59;
                  if ( (*(_WORD *)(v13 + 22) & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_BYTE *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v25 = (unsigned int *)RtlImageDirectoryEntryToData(*(_QWORD *)(a5 + 48), 1, 1u, &v57);
                  if ( !v25 )
                  {
LABEL_18:
                    SymbolicLinkObject = -1073741701;
                    goto LABEL_42;
                  }
                  v26 = (_QWORD *)(*(_QWORD *)(a5 + 48) + *v25);
                  v27 = *(_QWORD *)(a5 + 48) + v25[4];
                  if ( *v26 )
                  {
                    memset(v84, 0, 0x98uLL);
                    v84[6] = a5;
                    SymbolicLinkObject = LdrpPrepareImportAddressTableForSnap(v84, v28);
                    if ( SymbolicLinkObject >= 0 )
                    {
                      if ( v84[12] )
                      {
                        v30 = v60;
                        v31 = v27 - (_QWORD)v26;
                        while ( 1 )
                        {
                          SymbolicLinkObject = LdrpGetProcedureAddress(
                                                 v30,
                                                 (const char *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v26 + 2LL),
                                                 0,
                                                 (char **)((char *)v26 + v31));
                          if ( SymbolicLinkObject )
                            break;
                          if ( !*++v26 )
                          {
                            ZwProtectVirtualMemory();
                            goto LABEL_57;
                          }
                        }
                      }
                      else
                      {
                        SymbolicLinkObject = -1073741701;
                      }
                    }
                  }
                  else
                  {
LABEL_57:
                    if ( (*(_DWORD *)(a5 + 104) & 0x2004) == 4 )
                    {
                      v56 = 0LL;
                      v32 = LdrpGenRandom();
                      LdrInitSecurityCookie(
                        *(_QWORD *)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v32 ^ (unsigned int)dword_180163300,
                        &v56);
                      SymbolicLinkObject = LdrpCfgProcessLoadConfig(a5, (unsigned __int16 *)v13, v56);
                      if ( SymbolicLinkObject < 0 )
                        goto LABEL_42;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                    }
                    if ( (*(_DWORD *)(a5 + 104) & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable((unsigned __int64)v49, *(unsigned int *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v33 = *(_QWORD *)(a5 + 48);
                    v34 = *(_QWORD *)(a5 + 56);
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
                    v73 = v62;
                    v68 = RtlCommitDebugInfo;
                    v69 = RtlSetProcessDebugInformation;
                    v70 = RtlQueryImageFileExecutionOptions;
                    v51 = &v63;
                    v72 = 0LL;
                    if ( LdrpCallInitRoutine(v34, v33, 5)
                      && v51 == &v63
                      && (v35 = v72) != 0LL
                      && *v72 == 80
                      && (v36 = (_OWORD *)*((_QWORD *)&v71 + 1)) != 0LL
                      && **((_DWORD **)&v71 + 1) == 176 )
                    {
                      v37 = *(_OWORD *)(*((_QWORD *)&v71 + 1) + 16LL);
                      unk_18014C408 = **((_OWORD **)&v71 + 1);
                      v38 = *(_OWORD *)(*((_QWORD *)&v71 + 1) + 32LL);
                      *((_OWORD *)&unk_18014C408 + 1) = v37;
                      v39 = v36[3];
                      *((_OWORD *)&unk_18014C408 + 2) = v38;
                      v40 = v36[4];
                      *((_OWORD *)&unk_18014C408 + 3) = v39;
                      v41 = v36[5];
                      *((_OWORD *)&unk_18014C408 + 4) = v40;
                      v42 = v36[6];
                      *((_OWORD *)&unk_18014C408 + 5) = v41;
                      v43 = v36[8];
                      *((_OWORD *)&unk_18014C408 + 6) = v42;
                      *((_OWORD *)&unk_18014C408 + 7) = v36[7];
                      v44 = v36[9];
                      *((_OWORD *)&unk_18014C408 + 8) = v43;
                      v45 = v36[10];
                      *((_OWORD *)&unk_18014C408 + 9) = v44;
                      *((_OWORD *)&unk_18014C408 + 10) = v45;
                      RtlpDebugPageHeapTable = (_UNKNOWN *)v71;
                      v35[10] = AVrfpVerifierFlags;
                      v35[11] = AVrfpDebug;
                      v46 = *(_QWORD *)(a5 + 48);
                      v49 = 0LL;
                      LdrpLogDllState(v46, a5 + 72, 0x14AEu);
                      *(_DWORD *)(a5 + 344) = 9;
                    }
                    else
                    {
                      SymbolicLinkObject = -1073741502;
                    }
                  }
                }
              }
            }
            else if ( v8 == -1073741772 )
            {
LABEL_9:
              SymbolicLinkObject = -1073741515;
            }
          }
        }
      }
    }
  }
LABEL_42:
  if ( v49 )
  {
    NtUnmapViewOfSection();
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Handle )
    NtClose(Handle);
  if ( v53 )
    NtClose(v53);
  if ( v54 )
    NtClose(v54);
  return (unsigned int)SymbolicLinkObject;
}
