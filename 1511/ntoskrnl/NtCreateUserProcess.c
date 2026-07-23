/*
 * XREFs of NtCreateUserProcess @ 0x14044741C
 * Callers:
 *     <none>
 * Callees:
 *     PspUnlockProcessExclusive @ 0x14002BB54 (PspUnlockProcessExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspInsertProcess @ 0x1403E3600 (PspInsertProcess.c)
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x1403EFA94 (PspCreateObjectHandle.c)
 *     PspGetContextThreadInternal @ 0x1403EFE2C (PspGetContextThreadInternal.c)
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140422F98 (FsRtlFreeExtraCreateParameterList.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     IoCreateFileEx @ 0x1404393FC (IoCreateFileEx.c)
 *     PspDeleteCreateProcessContext @ 0x1404454E0 (PspDeleteCreateProcessContext.c)
 *     PspMapThreadCreationFlags @ 0x14044593C (PspMapThreadCreationFlags.c)
 *     PspBuildCreateProcessContext @ 0x14044629C (PspBuildCreateProcessContext.c)
 *     PspUpdateCreateInfo @ 0x140448110 (PspUpdateCreateInfo.c)
 *     PspReferenceTokenForNewProcess @ 0x140448388 (PspReferenceTokenForNewProcess.c)
 *     PspCaptureCreateInfo @ 0x140448400 (PspCaptureCreateInfo.c)
 *     PspCreateUserProcessEcp @ 0x1404484C4 (PspCreateUserProcessEcp.c)
 *     SeQuerySigningPolicy @ 0x14044869C (SeQuerySigningPolicy.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     MmCreateSpecialImageSection @ 0x14044FAE0 (MmCreateSpecialImageSection.c)
 *     PsTerminateProcess @ 0x140452368 (PsTerminateProcess.c)
 *     PspCaptureProcessParameters @ 0x140465404 (PspCaptureProcessParameters.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404A4564 (PspCheckForInvalidAccessByProtection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateUserProcess(
        PHANDLE ProcessHandle,
        PHANDLE ThreadHandle,
        ACCESS_MASK ProcessDesiredAccess,
        ACCESS_MASK ThreadDesiredAccess,
        POBJECT_ATTRIBUTES ProcessObjectAttributes,
        POBJECT_ATTRIBUTES ThreadObjectAttributes,
        ULONG ProcessFlags,
        ULONG ThreadFlags,
        PVOID ProcessParameters,
        PPS_CREATE_INFO CreateInfo,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  _BYTE *Process; // r13
  char PreviousMode; // r15
  char v13; // r12
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  ULONG v16; // eax
  __int64 v17; // rcx
  NTSTATUS result; // eax
  NTSTATUS Info; // edi
  __int64 v20; // r8
  KPROCESSOR_MODE v21; // r14
  int v22; // eax
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // edx
  int v29; // r9d
  __int64 *v30; // r12
  char *v31; // rsi
  __int64 Buffer_high; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  char v37; // al
  unsigned int v38; // r8d
  int v39; // edi
  wchar_t *v40; // rax
  int inserted; // r13d
  PVOID v42; // r15
  UNICODE_STRING *v43; // rax
  struct _KPROCESS *v44; // r13
  __int64 v45; // rcx
  unsigned __int8 v46; // al
  KPROCESSOR_MODE v47; // al
  unsigned __int8 v48; // [rsp+80h] [rbp-B28h] BYREF
  char v49; // [rsp+81h] [rbp-B27h] BYREF
  char v50[2]; // [rsp+82h] [rbp-B26h] BYREF
  int v51[3]; // [rsp+84h] [rbp-B24h] BYREF
  char v52[8]; // [rsp+90h] [rbp-B18h]
  int v53; // [rsp+98h] [rbp-B10h]
  ACCESS_MASK v54; // [rsp+9Ch] [rbp-B0Ch]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-B08h]
  int v56; // [rsp+A8h] [rbp-B00h] BYREF
  PVOID v57; // [rsp+B0h] [rbp-AF8h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-AF0h]
  PHANDLE v59; // [rsp+C0h] [rbp-AE8h]
  PVOID v60; // [rsp+C8h] [rbp-AE0h] BYREF
  PVOID v61; // [rsp+D0h] [rbp-AD8h] BYREF
  POBJECT_ATTRIBUTES v62; // [rsp+D8h] [rbp-AD0h]
  _BYTE *v63; // [rsp+E0h] [rbp-AC8h]
  PVOID v64; // [rsp+E8h] [rbp-AC0h] BYREF
  POBJECT_ATTRIBUTES v65; // [rsp+F0h] [rbp-AB8h]
  PVOID Object; // [rsp+F8h] [rbp-AB0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp-AA8h] BYREF
  _BYTE DriverContext[40]; // [rsp+130h] [rbp-A78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+158h] [rbp-A50h] BYREF
  __int64 v70[3]; // [rsp+168h] [rbp-A40h] BYREF
  _QWORD v71[8]; // [rsp+180h] [rbp-A28h] BYREF
  UNICODE_STRING v72[25]; // [rsp+1C0h] [rbp-9E8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v73[12]; // [rsp+350h] [rbp-858h] BYREF
  ULONG v74; // [rsp+4D0h] [rbp-6D8h]
  char v75; // [rsp+4D4h] [rbp-6D4h]
  HANDLE v76; // [rsp+4D8h] [rbp-6D0h]
  unsigned int v77[96]; // [rsp+4E0h] [rbp-6C8h] BYREF
  int v78; // [rsp+660h] [rbp-548h]
  HANDLE v79; // [rsp+668h] [rbp-540h]
  __int64 v80; // [rsp+670h] [rbp-538h] BYREF
  __int64 v81[154]; // [rsp+690h] [rbp-518h] BYREF

  v53 = ThreadDesiredAccess;
  v54 = ProcessDesiredAccess;
  v58 = (__int64)ThreadHandle;
  v59 = ProcessHandle;
  v65 = ProcessObjectAttributes;
  v62 = ThreadObjectAttributes;
  *(_QWORD *)v52 = ProcessParameters;
  *(_WORD *)DriverContext = 0;
  memset(&DriverContext[8], 0, 0x20uLL);
  memset(v71, 0, sizeof(v71));
  memset(v81, 0, sizeof(v81));
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_QWORD *)&v51[1] = Process;
  v63 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v50[1] = PreviousMode;
  v13 = ProcessFlags;
  if ( (ProcessFlags & 0xFFFF6838) != 0 || (ThreadFlags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( (ProcessFlags & 0x8400) == 0x8400 )
    return -1073741776;
  v74 = 0;
  v75 = PreviousMode;
  if ( PreviousMode )
  {
    v14 = v59;
    if ( (unsigned __int64)v59 >= MmUserProbeAddress )
      v14 = (_QWORD *)MmUserProbeAddress;
    *v14 = *v14;
    v15 = (_QWORD *)v58;
    if ( v58 >= MmUserProbeAddress )
      v15 = (_QWORD *)MmUserProbeAddress;
    *v15 = *v15;
  }
  if ( ProcessObjectAttributes )
  {
    if ( PreviousMode && ((unsigned __int8)ProcessObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v16 = ProcessObjectAttributes->Attributes & 0x1DF2;
    else
      v16 = ProcessObjectAttributes->Attributes & 0x11FF2;
    v74 = v16;
  }
  memset(v72, 0, sizeof(v72));
  if ( !AttributeList
    || (result = PspBuildCreateProcessContext(AttributeList, PreviousMode, 0, (__int64)v72), result >= 0) )
  {
    if ( (ProcessFlags & 0x40) != 0
      && (*(_DWORD *)(&v72[0].MaximumLength + 1) & 0x20000) != 0
      && !LOBYTE(v72[22].Buffer) )
    {
      v13 = ProcessFlags & 0xBF;
      ProcessFlags &= ~0x40u;
      *(_DWORD *)(&v72[0].MaximumLength + 1) &= ~0x20000u;
    }
    if ( (v13 & 4) != 0 )
    {
      if ( PreviousMode && (*(&v72[0].MaximumLength + 1) & 0x800) == 0 && (v13 & 0x40) == 0 && (Process[1722] & 7) != 0 )
        goto LABEL_131;
    }
    else if ( (*(&v72[0].MaximumLength + 1) & 0x800) != 0 )
    {
      goto LABEL_131;
    }
    if ( (*(_DWORD *)(&v72[0].MaximumLength + 1) & 0x20000) != 0 && (v13 & 0x40) == 0 )
      goto LABEL_131;
    LOBYTE(v17) = PreviousMode;
    Info = PspCaptureCreateInfo(v17, CreateInfo, v72);
    if ( Info < 0 )
      goto LABEL_75;
    v21 = 1;
    if ( (*(_BYTE *)(&v72[0].MaximumLength + 1) & 1) != 0 )
    {
      Info = ObReferenceObjectByHandleWithTag(
               *(HANDLE *)&v72[7].Length,
               0x80u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x72437350u,
               &v61,
               0LL);
      if ( Info < 0 )
        goto LABEL_75;
      Process = v61;
      v72[7].Buffer = (wchar_t *)v61;
    }
    if ( (BYTE1(v72[0].Buffer) & 6) == 2
      && (Process != *(_BYTE **)&v51[1] || *(PEPROCESS *)&v51[1] == PsInitialSystemProcess) )
    {
      goto LABEL_131;
    }
    LOBYTE(v20) = PreviousMode;
    Info = PspReferenceTokenForNewProcess(Process, v72[8].Buffer, v20, &v72[9]);
    if ( Info < 0 )
    {
      *(_QWORD *)&v72[9].Length = 0LL;
      goto LABEL_75;
    }
    if ( (*(_BYTE *)(&v72[0].MaximumLength + 1) & 0x20) != 0 )
    {
      v48 = (*(_DWORD *)(&v72[0].MaximumLength + 1) & 0x20000) != 0 ? LOBYTE(v72[22].Buffer) : 0;
      Info = SeQuerySigningPolicy(
               *(PACCESS_TOKEN *)&v72[9].Length,
               &v72[14],
               (ULONG_PTR)&v49,
               (__int64)v50,
               (__int64)&v48);
      if ( Info < 0 )
        goto LABEL_75;
      v22 = 0;
      if ( PreviousMode == 1 )
        v22 = 1024;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = v22 | 0x240;
      ObjectAttributes.ObjectName = &v72[14];
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      Info = 0;
      if ( qword_1406FB3E8 )
        Info = qword_1406FB3E8(*(_QWORD *)&v72[9].Length);
      if ( Info < 0 )
        goto LABEL_75;
      Info = PspCreateUserProcessEcp(DriverContext, *(_QWORD *)&v72[9].Length);
      if ( Info < 0 )
        goto LABEL_75;
      Info = IoCreateFileEx(
               (PHANDLE)&v72[10],
               LODWORD(v72[9].Buffer) | 0x100020,
               &ObjectAttributes,
               &IoStatusBlock,
               0LL,
               0x80u,
               5u,
               1u,
               0x60u,
               0LL,
               0,
               CreateFileTypeNone,
               0LL,
               0,
               (PIO_DRIVER_CREATE_CONTEXT)DriverContext);
      if ( Info < 0 && LODWORD(v72[9].Buffer) )
        Info = IoCreateFileEx(
                 (PHANDLE)&v72[10],
                 0x100020u,
                 &ObjectAttributes,
                 &IoStatusBlock,
                 0LL,
                 0x80u,
                 5u,
                 1u,
                 0x60u,
                 0LL,
                 0,
                 CreateFileTypeNone,
                 0LL,
                 0,
                 (PIO_DRIVER_CREATE_CONTEXT)DriverContext);
      if ( Info < 0 )
      {
        *(_QWORD *)&v72[10].Length = 0LL;
        v45 = 1LL;
      }
      else
      {
        Info = ObReferenceObjectByHandle(
                 *(HANDLE *)&v72[10].Length,
                 0x100020u,
                 (POBJECT_TYPE)IoFileObjectType,
                 0,
                 &Object,
                 0LL);
        v72[10].Buffer = (wchar_t *)Object;
        if ( Info < 0 )
        {
          v72[10].Buffer = 0LL;
          goto LABEL_75;
        }
        ObjectAttributes.ObjectName = 0LL;
        v24 = 1;
        if ( *(_QWORD *)&v72[23].Length && **(_QWORD **)&v72[23].Length )
          v24 = 5;
        LOBYTE(v23) = v49;
        Info = MmCreateSpecialImageSection(&v72[11], &ObjectAttributes, v23, *(_QWORD *)&v72[10].Length, v24);
        if ( Info >= 0 )
        {
          Info = ObReferenceObjectByHandle(*(HANDLE *)&v72[11].Length, 8u, MmSectionObjectType, 0, &v64, 0LL);
          *(_QWORD *)&v72[12].Length = v64;
          if ( Info < 0 )
          {
            *(_QWORD *)&v72[12].Length = 0LL;
            goto LABEL_75;
          }
          v27 = *(_QWORD *)&v51[1];
          LOBYTE(v26) = v48;
          if ( (v48 & 7) != 1 )
          {
            LOBYTE(v27) = PreviousMode;
            LOBYTE(v25) = *(_BYTE *)(*(_QWORD *)&v51[1] + 1722LL);
            if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(v27, v25, v26) )
              LOBYTE(v72[0].Buffer) |= 8u;
          }
          LOBYTE(v27) = PreviousMode;
          Info = PspCaptureProcessParameters(v27, *(_QWORD *)v52, v72);
          if ( Info < 0 )
          {
            LOBYTE(v72[0].Buffer) &= ~4u;
            goto LABEL_75;
          }
          v30 = &v80;
          goto LABEL_49;
        }
        *(_QWORD *)&v72[11].Length = 0LL;
        v45 = 2LL;
      }
      PspUpdateCreateInfo(v45, v72, 0LL);
      goto LABEL_75;
    }
    if ( Process == *(_BYTE **)&v51[1]
      && PreviousMode
      && !*(_QWORD *)v52
      && (BYTE1(v72[0].Buffer) & 6) == 0
      && *((char *)&v72[0].MaximumLength + 2) >= 0
      && (*(_DWORD *)(&v72[0].MaximumLength + 1) & 0x20000) == 0
      && ((__int64)v72[0].Buffer & 0x10) == 0 )
    {
      LOBYTE(v72[0].Buffer) &= ~4u;
      v46 = Process[1722];
      v48 = v46;
      v50[0] = Process[1721];
      v49 = Process[1720];
      if ( (v13 & 0x40) != 0 && (v46 & 7) == 0 )
      {
        Info = -1073741790;
        goto LABEL_75;
      }
      LODWORD(v81[6]) = 1048603;
      Info = PspGetContextThreadInternal((__int64)CurrentThread, (__int64)v81, 0, 1, 1);
      if ( Info < 0 )
        goto LABEL_75;
      v81[15] = 297LL;
      v30 = 0LL;
LABEL_49:
      LOBYTE(v29) = v48;
      LOBYTE(v28) = PreviousMode;
      Info = PspAllocateProcess(
               (_DWORD)Process,
               v28,
               (_DWORD)v65,
               v29,
               v49,
               v50[0],
               *(__int64 *)&v72[12].Length,
               *(__int64 *)&v72[9].Length,
               ProcessFlags,
               (__int64)v72,
               v72[8].Buffer != 0LL,
               (__int64)&v56,
               (__int64)&v57);
      if ( Info >= 0 )
      {
        v31 = (char *)v57;
        if ( *(_QWORD *)&v72[12].Length )
        {
          Buffer_high = HIDWORD(v72[13].Buffer);
          if ( !*((_QWORD *)v57 + 133) )
            Buffer_high = *((_QWORD *)v57 + 127);
          v81[6] = 0x1F800010000BLL;
          v81[31] = PspUserThreadStart;
          v81[16] = *(_QWORD *)&v72[3].Length;
          v81[17] = Buffer_high;
          *(_DWORD *)((char *)&v81[7] + 2) = 2818091;
          *(_DWORD *)((char *)&v81[7] + 6) = 2818131;
          WORD1(v81[8]) = 43;
          LOWORD(v81[7]) = 51;
          LOWORD(v81[32]) = 639;
          LODWORD(v81[35]) = 8064;
        }
        ObfReferenceObjectWithTag(v57, 0x72437350u);
        if ( v30 )
        {
          *(_BYTE *)v30 = 0;
          v33 = *(_QWORD *)&v72[4].Length;
          if ( *(_QWORD *)&v72[4].Length < 0x40000uLL )
            v33 = 0x40000LL;
          v30[3] = v33;
          v30[2] = (__int64)v72[4].Buffer;
          v30[1] = LODWORD(v72[3].Buffer);
        }
        *(_DWORD *)v52 = 0;
        PspMapThreadCreationFlags(ThreadFlags, v51);
        if ( v56 )
        {
          *(_DWORD *)v52 = 2;
          v51[0] |= 0x10u;
        }
        v70[0] = (__int64)v71;
        v51[0] |= 0x60u;
        Info = PspAllocateThread(
                 (ULONG_PTR)v31,
                 (__int64)v62,
                 PreviousMode,
                 (__int64)v72,
                 (__int64)v81,
                 v70,
                 0LL,
                 0LL,
                 v51,
                 (__int64 *)&v60,
                 v30,
                 v77);
        if ( Info < 0 )
        {
          PspUnlockProcessExclusive((__int64)v31, (__int64)CurrentThread);
          PspRundownSingleProcess((ULONG_PTR)v31, 0);
          goto LABEL_74;
        }
        LOBYTE(v34) = *(_BYTE *)(*(_QWORD *)&v51[1] + 1722LL);
        LOBYTE(v36) = v31[1722];
        LOBYTE(v35) = PreviousMode;
        v37 = PspCheckForInvalidAccessByProtection(v35, v34, v36);
        v38 = v54;
        if ( v37 )
        {
          if ( (v54 & 0x2000000) != 0 )
            v38 = ~*((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)v48 >> 4) + 1) & 0x1FFFFF | v54 & 0xFDFFFFFF;
          v39 = v53;
          if ( (v53 & 0x2000000) != 0 )
            v39 = ~*((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)v48 >> 4) + 2) & 0x1FFFFF | v53 & 0xFDFFFFFF;
        }
        else
        {
          v39 = v53;
        }
        if ( v72[12].Buffer )
          v40 = v72[12].Buffer + 56;
        else
          v40 = 0LL;
        inserted = PspInsertProcess(
                     v31,
                     (__int64)Process,
                     v38,
                     ProcessFlags,
                     *(HANDLE *)&v72[8].Length,
                     v52[0],
                     (__int64)v40,
                     (__int64)v73);
        v42 = v60;
        Info = PspInsertThread(
                 (char *)v60,
                 (ULONG_PTR)v31,
                 (__int64)v71,
                 v51,
                 v39,
                 v30,
                 (unsigned __int8 *)v72,
                 0LL,
                 (__int64)v77,
                 (_QWORD *)v58,
                 *(_OWORD **)&v72[1].Length);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        if ( inserted < 0 )
        {
          PspRundownSingleProcess((ULONG_PTR)v31, 0);
          Info = inserted;
LABEL_73:
          ObfDereferenceObject(v42);
LABEL_74:
          ObfDereferenceObjectWithTag(v31, 0x72437350u);
          goto LABEL_75;
        }
        if ( Info >= 0 )
        {
          Info = PspCreateObjectHandle(v31, (__int64)v73, (struct _OBJECT_TYPE *)PsProcessType);
          if ( Info >= 0 )
          {
            v43 = *(UNICODE_STRING **)&v72[2].Length;
            if ( *(_QWORD *)&v72[2].Length )
            {
              **(_OWORD **)&v72[2].Length = v72[3];
              v43[1] = v72[4];
              v43[2] = v72[5];
              v43[3] = v72[6];
            }
            *v59 = v76;
            v44 = *(struct _KPROCESS **)&v51[1];
            Info = PspUpdateCreateInfo(6LL, v72, v31);
            if ( Info >= 0 )
              goto LABEL_71;
            if ( (v74 & 0x200) != 0 || (v47 = 1, v44 == PsInitialSystemProcess) )
              v47 = 0;
            ObCloseHandle(v76, v47);
          }
          if ( (v78 & 0x200) != 0 || *(PEPROCESS *)&v51[1] == PsInitialSystemProcess )
            v21 = 0;
          ObCloseHandle(v79, v21);
        }
LABEL_71:
        SeDeleteAccessState(v73);
        if ( Info < 0 )
          PsTerminateProcess(v31, (unsigned int)Info);
        goto LABEL_73;
      }
LABEL_75:
      PspDeleteCreateProcessContext((__int64)v72);
      if ( *(_QWORD *)&DriverContext[8] )
        FsRtlFreeExtraCreateParameterList(*(PECP_LIST *)&DriverContext[8]);
      return Info;
    }
LABEL_131:
    Info = -1073741811;
    goto LABEL_75;
  }
  return result;
}
