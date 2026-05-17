/*
 * XREFs of AvrfMiniLoadDll @ 0x1800C6398
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800C4CAC (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpGetProcedureAddress @ 0x180015BD0 (LdrpGetProcedureAddress.c)
 *     RtlImageNtHeader @ 0x180016830 (RtlImageNtHeader.c)
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180018438 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x18001FCD0 (RtlCopyUnicodeString.c)
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     LdrpCallInitRoutine @ 0x180024024 (LdrpCallInitRoutine.c)
 *     RtlAppendUnicodeStringToString @ 0x180040100 (RtlAppendUnicodeStringToString.c)
 *     LdrpCfgProcessLoadConfig @ 0x180040ECC (LdrpCfgProcessLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x180041130 (LdrInitSecurityCookie.c)
 *     LdrpGenRandom @ 0x18004133C (LdrpGenRandom.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800413CC (RtlInsertInvertedFunctionTable.c)
 *     LdrpProtectAndRelocateImage @ 0x1800733E4 (LdrpProtectAndRelocateImage.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x180093C30 (NtOpenFile.c)
 *     ZwQueryAttributesFile @ 0x180093CD0 (ZwQueryAttributesFile.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x180093E00 (ZwProtectVirtualMemory.c)
 *     NtQuerySection @ 0x180093E10 (NtQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x180093E80 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x180094A80 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x180094D40 (NtQuerySymbolicLinkObject.c)
 *     memset @ 0x180098540 (memset.c)
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
  int Section; // eax
  unsigned int *v26; // rax
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  unsigned __int64 v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 (__fastcall *v34)(__int64, _QWORD, __int64); // rcx
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
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v52; // [rsp+78h] [rbp-88h]
  int *v53; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v54; // [rsp+88h] [rbp-78h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v57; // [rsp+C8h] [rbp-38h]
  __int64 v58; // [rsp+D0h] [rbp-30h]
  int v59; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
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
  UNICODE_STRING v80; // [rsp+190h] [rbp+90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+1A0h] [rbp+A0h] BYREF
  UNICODE_STRING v82; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v84[20]; // [rsp+1D0h] [rbp+D0h] BYREF
  _DWORD v85[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v86[520]; // [rsp+2A8h] [rbp+1A8h] BYREF

  v61 = a2;
  v57 = a4;
  v58 = a3;
  v5 = (_QWORD *)(a5 + 280);
  v54 = 0LL;
  v52 = 0LL;
  Handle = 0LL;
  FileHandle = 0LL;
  v49 = 0LL;
  v60 = 0LL;
  v53 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SymbolicLinkObject = ZwOpenDirectoryObject();
  if ( SymbolicLinkObject >= 0 )
  {
    RtlInitUnicodeString(&v80, L"KnownDllPath");
    ObjectAttributes.RootDirectory = v54;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v80;
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
                *(_WORD *)(a5 + 362) = 520;
                *(_WORD *)(a5 + 360) = 0;
                *(_QWORD *)(a5 + 368) = a5 + 376;
                v48 = v86;
                LOWORD(v47) = v47 - 8;
                HIWORD(v47) -= 8;
                RtlCopyUnicodeString((unsigned __int16 *)(a5 + 360), (unsigned __int16 *)&v47);
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
                  v12 = RtlImageNtHeader((unsigned __int64)v49);
                  v13 = v12;
                  if ( !v12 )
                    goto LABEL_18;
                  v14 = v49;
                  *(_QWORD *)(a5 + 48) = v49;
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
                    v22 = &v14[*(unsigned int *)(v13 + 40)];
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
                  if ( v62 )
                    *(_QWORD *)(a5 + 248) -= v62;
                  if ( (*(_WORD *)(v13 + 22) & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_BYTE *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v26 = (unsigned int *)RtlImageDirectoryEntryToData(*(_QWORD *)(a5 + 48), 1, 1u, &v59);
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
                    memset(v84, 0, 0x98uLL);
                    v84[6] = a5;
                    SymbolicLinkObject = LdrpPrepareImportAddressTableForSnap(v84);
                    if ( SymbolicLinkObject >= 0 )
                    {
                      if ( v84[12] )
                      {
                        v30 = v57;
                        v31 = v28 - (_QWORD)v27;
                        while ( 1 )
                        {
                          SymbolicLinkObject = LdrpGetProcedureAddress(
                                                 v30,
                                                 (const char *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v27 + 2LL),
                                                 0,
                                                 (char **)((char *)v27 + v31));
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
                      v56 = 0LL;
                      v32 = LdrpGenRandom();
                      LdrInitSecurityCookie(
                        *(_QWORD *)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v32 ^ (unsigned int)dword_1801572E0,
                        &v56);
                      SymbolicLinkObject = LdrpCfgProcessLoadConfig(a5, (unsigned __int16 *)v13, v56);
                      if ( SymbolicLinkObject < 0 )
                        goto LABEL_44;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                    }
                    if ( (*(_DWORD *)(a5 + 104) & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable((unsigned __int64)v49, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v33 = *(_QWORD *)(a5 + 48);
                    v34 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a5 + 56);
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
                    v73 = v58;
                    v68 = RtlCommitDebugInfo;
                    v69 = RtlSetProcessDebugInformation;
                    v70 = RtlQueryImageFileExecutionOptions;
                    v53 = &v63;
                    v72 = 0LL;
                    if ( LdrpCallInitRoutine(v34, v33, 5u, (__int64)&v53)
                      && v53 == &v63
                      && (v35 = v72) != 0LL
                      && *v72 == 80
                      && (v36 = (_OWORD *)*((_QWORD *)&v71 + 1)) != 0LL
                      && **((_DWORD **)&v71 + 1) == 176 )
                    {
                      v37 = *(_OWORD *)(*((_QWORD *)&v71 + 1) + 16LL);
                      unk_180143C98 = **((_OWORD **)&v71 + 1);
                      v38 = *(_OWORD *)(*((_QWORD *)&v71 + 1) + 32LL);
                      *((_OWORD *)&unk_180143C98 + 1) = v37;
                      v39 = v36[3];
                      *((_OWORD *)&unk_180143C98 + 2) = v38;
                      v40 = v36[4];
                      *((_OWORD *)&unk_180143C98 + 3) = v39;
                      v41 = v36[5];
                      *((_OWORD *)&unk_180143C98 + 4) = v40;
                      v42 = v36[6];
                      *((_OWORD *)&unk_180143C98 + 5) = v41;
                      v43 = v36[8];
                      *((_OWORD *)&unk_180143C98 + 6) = v42;
                      *((_OWORD *)&unk_180143C98 + 7) = v36[7];
                      v44 = v36[9];
                      *((_OWORD *)&unk_180143C98 + 8) = v43;
                      v45 = v36[10];
                      *((_OWORD *)&unk_180143C98 + 9) = v44;
                      *((_OWORD *)&unk_180143C98 + 10) = v45;
                      RtlpDebugPageHeapTable = (_UNKNOWN *)v71;
                      v35[10] = AVrfpVerifierFlags;
                      v35[11] = AVrfpDebug;
                      v46 = *(_QWORD *)(a5 + 48);
                      v49 = 0LL;
                      LdrpLogDllState(v46, a5 + 72, 0x14AEu);
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
  if ( v49 )
  {
    NtUnmapViewOfSection();
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Handle )
    NtClose(Handle);
  if ( v54 )
    NtClose(v54);
  if ( v52 )
    NtClose(v52);
  return (unsigned int)SymbolicLinkObject;
}
