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

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  _QWORD *v5; // r13
  int SymbolicLinkObject; // esi
  int AttributesFile; // eax
  NTSTATUS v8; // eax
  struct _TEB *v9; // rdi
  void *ArbitraryUserPointer; // rbx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // r10
  __int128 v15; // xmm0
  unsigned __int16 v16; // r9
  unsigned __int64 v17; // r8
  _WORD *i; // rdx
  __int16 v19; // ax
  _WORD *v20; // rdx
  __int16 v21; // cx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  int Section; // eax
  unsigned int *v26; // rax
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdx
  unsigned __int64 v31; // r12
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 (__fastcall *v35)(__int64, _QWORD, __int64); // rcx
  _DWORD *v36; // rdx
  _OWORD *v37; // rcx
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int64 v47; // rcx
  int v48; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v49; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v50; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h]
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v53; // [rsp+78h] [rbp-88h]
  int *v54; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v55; // [rsp+88h] [rbp-78h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v58; // [rsp+C8h] [rbp-38h]
  __int64 v59; // [rsp+D0h] [rbp-30h]
  int v60; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall *v65)(); // [rsp+108h] [rbp+8h]
  struct _PEB *(__fastcall *v66)(__int64, __int64); // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v67)(); // [rsp+118h] [rbp+18h]
  __int64 v68; // [rsp+120h] [rbp+20h]
  char *(__fastcall *v69)(_QWORD *, unsigned int); // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v70)(void *, int, __int64); // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v71)(__int64, __int64, unsigned int, __int64, int, __int64); // [rsp+138h] [rbp+38h]
  __int128 v72; // [rsp+140h] [rbp+40h]
  _DWORD *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v75)(unsigned __int16, unsigned __int16); // [rsp+160h] [rbp+60h]
  __int64 (__fastcall *v76)(_QWORD); // [rsp+168h] [rbp+68h]
  __int64 (__fastcall *v77)(); // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v78)(); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v79)(_QWORD, _QWORD); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v80)(_QWORD, _QWORD); // [rsp+188h] [rbp+88h]
  UNICODE_STRING v81; // [rsp+190h] [rbp+90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+1A0h] [rbp+A0h] BYREF
  UNICODE_STRING v83; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v85[20]; // [rsp+1D0h] [rbp+D0h] BYREF
  _DWORD v86[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v87[520]; // [rsp+2A8h] [rbp+1A8h] BYREF

  v62 = a2;
  v58 = a4;
  v59 = a3;
  v5 = (_QWORD *)(a5 + 280);
  v55 = 0LL;
  v53 = 0LL;
  Handle = 0LL;
  FileHandle = 0LL;
  v50 = 0LL;
  v61 = 0LL;
  v54 = 0LL;
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
    ObjectAttributes.RootDirectory = v55;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v81;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SymbolicLinkObject = ZwOpenSymbolicLinkObject();
    if ( SymbolicLinkObject >= 0 )
    {
      v49 = v87;
      v86[0] = 4128860;
      v86[1] = 6029375;
      v48 = 0x2000000;
      SymbolicLinkObject = NtQuerySymbolicLinkObject();
      if ( SymbolicLinkObject >= 0 )
      {
        v49 = v86;
        LOWORD(v48) = v48 + 8;
        HIWORD(v48) += 8;
        RtlInitUnicodeString(&v83, L"\\");
        SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v48, (__int16 *)&v83);
        if ( SymbolicLinkObject >= 0 )
        {
          SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v48, VerifierDllString);
          if ( SymbolicLinkObject >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v48;
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
                *(_WORD *)(a5 + 362) = 520;
                *(_WORD *)(a5 + 360) = 0;
                *(_QWORD *)(a5 + 368) = a5 + 376;
                v49 = v87;
                LOWORD(v48) = v48 - 8;
                HIWORD(v48) -= 8;
                RtlCopyUnicodeString((unsigned __int16 *)(a5 + 360), (unsigned __int16 *)&v48);
                v9 = NtCurrentTeb();
                ArbitraryUserPointer = v9->NtTib.ArbitraryUserPointer;
                v9->NtTib.ArbitraryUserPointer = v49;
                v11 = ZwMapViewOfSection();
                v9->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                SymbolicLinkObject = v11;
                if ( v11 == 1073741827 )
                  SymbolicLinkObject = LdrpProtectAndRelocateImage(v50);
                if ( SymbolicLinkObject >= 0 )
                {
                  v12 = RtlImageNtHeader(v50);
                  v13 = v12;
                  if ( !v12 )
                    goto LABEL_18;
                  v14 = v50;
                  *(_QWORD *)(a5 + 48) = v50;
                  *(_DWORD *)(a5 + 64) = *(_DWORD *)(v12 + 80);
                  *(_DWORD *)(a5 + 128) = *(_DWORD *)(v12 + 8);
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
                  if ( *(_DWORD *)(v13 + 40) )
                    v22 = v14 + *(unsigned int *)(v13 + 40);
                  else
                    v22 = 0LL;
                  *(_QWORD *)(a5 + 56) = v22;
                  *(_QWORD *)(a5 + 248) = *(_QWORD *)(v13 + 48);
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
                  Section = NtQuerySection();
                  if ( Section < 0 )
                  {
                    SymbolicLinkObject = Section;
                    goto LABEL_44;
                  }
                  if ( v63 )
                    *(_QWORD *)(a5 + 248) -= v63;
                  if ( (*(_WORD *)(v13 + 22) & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_BYTE *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v26 = (unsigned int *)RtlImageDirectoryEntryToData(*(_QWORD *)(a5 + 48), 1, 1u, &v60);
                  if ( !v26 )
                  {
LABEL_18:
                    SymbolicLinkObject = -1073741701;
                    goto LABEL_44;
                  }
                  v27 = (_QWORD *)(*(_QWORD *)(a5 + 48) + *v26);
                  v28 = *(_QWORD *)(a5 + 48) + v26[4];
                  if ( *v27 )
                  {
                    memset(v85, 0, 0x98uLL);
                    v85[6] = a5;
                    SymbolicLinkObject = LdrpPrepareImportAddressTableForSnap(v85, v29);
                    if ( SymbolicLinkObject >= 0 )
                    {
                      if ( v85[12] )
                      {
                        v31 = v58;
                        v32 = v28 - (_QWORD)v27;
                        while ( 1 )
                        {
                          SymbolicLinkObject = LdrpGetProcedureAddress(
                                                 v31,
                                                 (unsigned __int8 *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v27 + 2LL),
                                                 0,
                                                 (_QWORD *)((char *)v27 + v32));
                          if ( SymbolicLinkObject )
                            break;
                          if ( !*++v27 )
                          {
                            ZwProtectVirtualMemory();
                            goto LABEL_59;
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
LABEL_59:
                    if ( (*(_DWORD *)(a5 + 104) & 0x2004) == 4 )
                    {
                      v57 = 0LL;
                      v33 = LdrpGenRandom();
                      LdrInitSecurityCookie(
                        *(_QWORD *)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v33 ^ (unsigned int)dword_1801552E0,
                        &v57);
                      SymbolicLinkObject = LdrpCfgProcessLoadConfig(a5, (unsigned __int16 *)v13, v57);
                      if ( SymbolicLinkObject < 0 )
                        goto LABEL_44;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                    }
                    if ( (*(_DWORD *)(a5 + 104) & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable(v50, *(unsigned int *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v34 = *(_QWORD *)(a5 + 48);
                    v35 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a5 + 56);
                    v65 = RtlpGetStackTraceAddress;
                    v64 = 144;
                    v75 = RtlpGetStackTraceAddressEx;
                    v72 = 0LL;
                    v66 = AVrfInternalHeapFreeNotification;
                    v67 = RtlLogStackTrace;
                    v76 = RtlReleaseStackTrace;
                    v77 = RtlStdInitializeStackDatabase;
                    v78 = RtlStdDeleteStackDatabase;
                    v79 = RtlStdLogStackTrace;
                    v80 = RtlStdReleaseStackTrace;
                    v68 = v62;
                    v74 = v59;
                    v69 = RtlCommitDebugInfo;
                    v70 = RtlSetProcessDebugInformation;
                    v71 = RtlQueryImageFileExecutionOptions;
                    v54 = &v64;
                    v73 = 0LL;
                    if ( LdrpCallInitRoutine(v35, v34, 5u, (__int64)&v54)
                      && v54 == &v64
                      && (v36 = v73) != 0LL
                      && *v73 == 80
                      && (v37 = (_OWORD *)*((_QWORD *)&v72 + 1)) != 0LL
                      && **((_DWORD **)&v72 + 1) == 176 )
                    {
                      v38 = *(_OWORD *)(*((_QWORD *)&v72 + 1) + 16LL);
                      unk_1801420B8 = **((_OWORD **)&v72 + 1);
                      v39 = *(_OWORD *)(*((_QWORD *)&v72 + 1) + 32LL);
                      *((_OWORD *)&unk_1801420B8 + 1) = v38;
                      v40 = v37[3];
                      *((_OWORD *)&unk_1801420B8 + 2) = v39;
                      v41 = v37[4];
                      *((_OWORD *)&unk_1801420B8 + 3) = v40;
                      v42 = v37[5];
                      *((_OWORD *)&unk_1801420B8 + 4) = v41;
                      v43 = v37[6];
                      *((_OWORD *)&unk_1801420B8 + 5) = v42;
                      v44 = v37[8];
                      *((_OWORD *)&unk_1801420B8 + 6) = v43;
                      *((_OWORD *)&unk_1801420B8 + 7) = v37[7];
                      v45 = v37[9];
                      *((_OWORD *)&unk_1801420B8 + 8) = v44;
                      v46 = v37[10];
                      *((_OWORD *)&unk_1801420B8 + 9) = v45;
                      *((_OWORD *)&unk_1801420B8 + 10) = v46;
                      RtlpDebugPageHeapTable = (_UNKNOWN *)v72;
                      v36[10] = AVrfpVerifierFlags;
                      v36[11] = AVrfpDebug;
                      v47 = *(_QWORD *)(a5 + 48);
                      v50 = 0LL;
                      LdrpLogDllState(v47, a5 + 72, 0x14AEu);
                      *(_DWORD *)(a5 + 336) = 9;
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
LABEL_44:
  if ( v50 )
  {
    NtUnmapViewOfSection();
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Handle )
    NtClose(Handle);
  if ( v55 )
    NtClose(v55);
  if ( v53 )
    NtClose(v53);
  return (unsigned int)SymbolicLinkObject;
}
