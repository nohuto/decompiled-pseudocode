/*
 * XREFs of NtCreateUserProcess @ 0x140459A10
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     PspUnlockProcessExclusive @ 0x1400F0128 (PspUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140413E58 (FsRtlFreeExtraCreateParameterList.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     PspDeleteCreateProcessContext @ 0x140457A6C (PspDeleteCreateProcessContext.c)
 *     PspMapThreadCreationFlags @ 0x140457EFC (PspMapThreadCreationFlags.c)
 *     PspBuildCreateProcessContext @ 0x1404588B8 (PspBuildCreateProcessContext.c)
 *     IoCreateFileEx @ 0x14045A624 (IoCreateFileEx.c)
 *     PspUpdateCreateInfo @ 0x14045B498 (PspUpdateCreateInfo.c)
 *     PspCreateUserProcessEcp @ 0x14045B718 (PspCreateUserProcessEcp.c)
 *     SeQuerySigningPolicy @ 0x14045B8FC (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14045BE54 (PspReferenceTokenForNewProcess.c)
 *     PspCaptureCreateInfo @ 0x14045BECC (PspCaptureCreateInfo.c)
 *     MmCreateSpecialImageSection @ 0x14045CE40 (MmCreateSpecialImageSection.c)
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 *     PspInsertProcess @ 0x14045E490 (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspCaptureProcessParameters @ 0x14049B890 (PspCaptureProcessParameters.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404A6F78 (PspCheckForInvalidAccessByProtection.c)
 *     PsTerminateProcess @ 0x1404CE4F8 (PsTerminateProcess.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x1404FA2C4 (PspCreateObjectHandle.c)
 *     PspGetContextThreadInternal @ 0x1404FADF4 (PspGetContextThreadInternal.c)
 *     EtwTraceDeniedTokenCreation @ 0x1406A1474 (EtwTraceDeniedTokenCreation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
  KPROCESSOR_MODE PreviousMode; // r15
  ULONG v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rcx
  ULONG v17; // eax
  __int64 v18; // rcx
  NTSTATUS result; // eax
  int Info; // edi
  __int64 v21; // r8
  KPROCESSOR_MODE v22; // r14
  int v23; // r9d
  int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // edx
  int v30; // r9d
  __int64 *v31; // r12
  int v32; // eax
  PVOID v33; // rsi
  __int64 Buffer_high; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // edi
  wchar_t *v39; // rax
  int inserted; // r13d
  PVOID v41; // r15
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  UNICODE_STRING *v45; // rax
  struct _KPROCESS *v46; // r13
  __int64 v47; // rcx
  unsigned __int8 v48; // al
  KPROCESSOR_MODE v49; // al
  unsigned __int8 v50; // [rsp+80h] [rbp-B58h] BYREF
  char v51; // [rsp+81h] [rbp-B57h] BYREF
  char v52[2]; // [rsp+82h] [rbp-B56h] BYREF
  _DWORD v53[3]; // [rsp+84h] [rbp-B54h] BYREF
  char v54[8]; // [rsp+90h] [rbp-B48h]
  int v55; // [rsp+98h] [rbp-B40h]
  ACCESS_MASK v56; // [rsp+9Ch] [rbp-B3Ch]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-B38h]
  PVOID v58; // [rsp+A8h] [rbp-B30h] BYREF
  int v59; // [rsp+B0h] [rbp-B28h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-B20h]
  PVOID v61; // [rsp+C0h] [rbp-B18h] BYREF
  PPS_CREATE_INFO v62; // [rsp+C8h] [rbp-B10h]
  PVOID v63; // [rsp+D0h] [rbp-B08h] BYREF
  PVOID Object; // [rsp+D8h] [rbp-B00h] BYREF
  PVOID v65; // [rsp+E0h] [rbp-AF8h] BYREF
  POBJECT_ATTRIBUTES v66; // [rsp+E8h] [rbp-AF0h]
  POBJECT_ATTRIBUTES v67; // [rsp+F0h] [rbp-AE8h]
  PHANDLE v68; // [rsp+F8h] [rbp-AE0h]
  _BYTE *v69; // [rsp+100h] [rbp-AD8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp-AD0h] BYREF
  _BYTE DriverContext[40]; // [rsp+138h] [rbp-AA0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+160h] [rbp-A78h] BYREF
  __int64 v73[4]; // [rsp+170h] [rbp-A68h] BYREF
  _BYTE v74[64]; // [rsp+190h] [rbp-A48h] BYREF
  UNICODE_STRING v75[27]; // [rsp+1D0h] [rbp-A08h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+380h] [rbp-858h] BYREF
  ULONG v77; // [rsp+500h] [rbp-6D8h]
  KPROCESSOR_MODE v78; // [rsp+504h] [rbp-6D4h]
  HANDLE v79; // [rsp+508h] [rbp-6D0h]
  struct _ACCESS_STATE v80; // [rsp+510h] [rbp-6C8h] BYREF
  int v81; // [rsp+690h] [rbp-548h]
  HANDLE v82; // [rsp+698h] [rbp-540h]
  __int64 v83; // [rsp+6A0h] [rbp-538h] BYREF
  __int64 v84[154]; // [rsp+6C0h] [rbp-518h] BYREF

  v55 = ThreadDesiredAccess;
  v56 = ProcessDesiredAccess;
  v60 = (__int64)ThreadHandle;
  v68 = ProcessHandle;
  v66 = ProcessObjectAttributes;
  v67 = ThreadObjectAttributes;
  *(_QWORD *)v54 = ProcessParameters;
  v62 = CreateInfo;
  *(_WORD *)DriverContext = 0;
  memset(&DriverContext[8], 0, 0x20uLL);
  memset(v74, 0, sizeof(v74));
  memset(v84, 0, sizeof(v84));
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_QWORD *)&v53[1] = Process;
  v69 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v52[1] = PreviousMode;
  v14 = ProcessFlags;
  if ( (ProcessFlags & 0xFFFF6838) != 0 || (ThreadFlags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( (ProcessFlags & 0x8400) == 0x8400 )
    return -1073741776;
  v77 = 0;
  v78 = PreviousMode;
  if ( PreviousMode )
  {
    v15 = (__int64)ProcessHandle;
    if ( (unsigned __int64)ProcessHandle >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = v60;
    if ( (unsigned __int64)v60 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  if ( ProcessObjectAttributes )
  {
    if ( PreviousMode && ((unsigned __int8)ProcessObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v17 = ProcessObjectAttributes->Attributes & 0x1DF2;
    else
      v17 = ProcessObjectAttributes->Attributes & 0x11FF2;
    v77 = v17;
  }
  memset(v75, 0, 0x1A8uLL);
  if ( !AttributeList
    || (result = PspBuildCreateProcessContext((__int64 *)AttributeList, PreviousMode, 0LL, (__int64)v75), result >= 0) )
  {
    if ( (ProcessFlags & 0x40) != 0
      && (*(_DWORD *)(&v75[0].MaximumLength + 1) & 0x20000) != 0
      && !LOBYTE(v75[22].Buffer) )
    {
      v14 = ProcessFlags & 0xFFFFFFBF;
      *(_DWORD *)(&v75[0].MaximumLength + 1) &= ~0x20000u;
    }
    if ( (v14 & 4) != 0 )
    {
      if ( PreviousMode && (*(&v75[0].MaximumLength + 1) & 0x800) == 0 && (v14 & 0x40) == 0 && (Process[1738] & 7) != 0 )
        goto LABEL_131;
    }
    else if ( (*(&v75[0].MaximumLength + 1) & 0x800) != 0 )
    {
      goto LABEL_131;
    }
    if ( (*(_DWORD *)(&v75[0].MaximumLength + 1) & 0x20000) != 0 && (v14 & 0x40) == 0 )
      goto LABEL_131;
    LOBYTE(v18) = PreviousMode;
    Info = PspCaptureCreateInfo(v18, v62, v75);
    if ( Info < 0 )
    {
LABEL_75:
      PspDeleteCreateProcessContext((__int64)v75);
      if ( *(_QWORD *)&DriverContext[8] )
        FsRtlFreeExtraCreateParameterList(*(PECP_LIST *)&DriverContext[8]);
      return Info;
    }
    v22 = 1;
    if ( (*(_BYTE *)(&v75[0].MaximumLength + 1) & 1) != 0 )
    {
      Info = ObReferenceObjectByHandleWithTag(
               *(HANDLE *)&v75[7].Length,
               0x80u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x72437350u,
               &v63,
               0LL);
      if ( Info < 0 )
        goto LABEL_75;
      Process = v63;
      v75[7].Buffer = (wchar_t *)v63;
    }
    if ( (BYTE1(v75[0].Buffer) & 0xC) == 4
      && (Process != *(_BYTE **)&v53[1] || *(PEPROCESS *)&v53[1] == PsInitialSystemProcess) )
    {
      goto LABEL_131;
    }
    LOBYTE(v21) = PreviousMode;
    Info = PspReferenceTokenForNewProcess(Process, v75[8].Buffer, v21, &v75[9]);
    if ( Info < 0 )
    {
      *(_QWORD *)&v75[9].Length = 0LL;
      goto LABEL_75;
    }
    if ( (*(_BYTE *)(&v75[0].MaximumLength + 1) & 0x20) != 0 )
    {
      v50 = (*(_DWORD *)(&v75[0].MaximumLength + 1) & 0x20000) != 0 ? LOBYTE(v75[22].Buffer) : 0;
      Info = SeQuerySigningPolicy(
               *(PACCESS_TOKEN *)&v75[9].Length,
               &v75[14],
               (ULONG_PTR)&v51,
               (__int64)v52,
               (__int64)&v50);
      if ( Info < 0 )
        goto LABEL_75;
      v24 = 0;
      if ( PreviousMode == 1 )
        v24 = 1024;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = v24 | 0x240;
      ObjectAttributes.ObjectName = &v75[14];
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      Info = 0;
      if ( qword_1407473F0 )
        Info = qword_1407473F0(*(_QWORD *)&v75[9].Length);
      if ( Info < 0 )
        goto LABEL_75;
      Info = PspCreateUserProcessEcp(DriverContext, *(_QWORD *)&v75[9].Length);
      if ( Info < 0 )
        goto LABEL_75;
      Info = IoCreateFileEx(
               (PHANDLE)&v75[10],
               LODWORD(v75[9].Buffer) | 0x100020,
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
      if ( Info < 0 && LODWORD(v75[9].Buffer) )
        Info = IoCreateFileEx(
                 (PHANDLE)&v75[10],
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
        *(_QWORD *)&v75[10].Length = 0LL;
        v47 = 1LL;
      }
      else
      {
        Info = ObReferenceObjectByHandle(
                 *(HANDLE *)&v75[10].Length,
                 0x100020u,
                 (POBJECT_TYPE)IoFileObjectType,
                 0,
                 &Object,
                 0LL);
        v75[10].Buffer = (wchar_t *)Object;
        if ( Info < 0 )
        {
          v75[10].Buffer = 0LL;
          goto LABEL_75;
        }
        ObjectAttributes.ObjectName = 0LL;
        v26 = 1;
        if ( *(_QWORD *)&v75[23].Length && **(_QWORD **)&v75[23].Length )
          v26 = 5;
        LOBYTE(v25) = v51;
        Info = MmCreateSpecialImageSection(
                 &v75[11],
                 &ObjectAttributes,
                 *(_QWORD *)&v75[9].Length,
                 v25,
                 *(_QWORD *)&v75[10].Length,
                 v26);
        if ( Info >= 0 )
        {
          Info = ObReferenceObjectByHandle(*(HANDLE *)&v75[11].Length, 8u, MmSectionObjectType, 0, &v65, 0LL);
          *(_QWORD *)&v75[12].Length = v65;
          if ( Info < 0 )
          {
            *(_QWORD *)&v75[12].Length = 0LL;
            goto LABEL_75;
          }
          v28 = *(_QWORD *)&v53[1];
          if ( (v50 & 7) != 1 )
          {
            LOBYTE(v28) = PreviousMode;
            LOBYTE(v27) = *(_BYTE *)(*(_QWORD *)&v53[1] + 1738LL);
            if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(v28, v27) )
              LOBYTE(v75[0].Buffer) |= 8u;
          }
          LOBYTE(v28) = PreviousMode;
          Info = PspCaptureProcessParameters(v28, *(_QWORD *)v54, v75);
          if ( Info < 0 )
          {
            LOBYTE(v75[0].Buffer) &= ~4u;
            goto LABEL_75;
          }
          v31 = &v83;
LABEL_49:
          LOBYTE(v30) = v50;
          LOBYTE(v29) = PreviousMode;
          v32 = PspAllocateProcess(
                  (_DWORD)Process,
                  v29,
                  (_DWORD)v66,
                  v30,
                  v51,
                  v52[0],
                  *(__int64 *)&v75[12].Length,
                  *(__int64 *)&v75[9].Length,
                  v14,
                  (__int64)v75,
                  v75[8].Buffer != 0LL,
                  (__int64)&v59,
                  (__int64)&v58);
          Info = v32;
          if ( v32 < 0 )
          {
            if ( v32 == -1073740643 )
              EtwTraceDeniedTokenCreation(Process, *(_QWORD *)v54);
            goto LABEL_75;
          }
          v33 = v58;
          if ( *(_QWORD *)&v75[12].Length )
          {
            Buffer_high = HIDWORD(v75[13].Buffer);
            if ( !*((_QWORD *)v58 + 133) )
              Buffer_high = *((_QWORD *)v58 + 127);
            v84[6] = 0x1F800010000BLL;
            v84[31] = PspUserThreadStart;
            v84[16] = *(_QWORD *)&v75[3].Length;
            v84[17] = Buffer_high;
            *(_DWORD *)((char *)&v84[7] + 2) = 2818091;
            *(_DWORD *)((char *)&v84[7] + 6) = 2818131;
            WORD1(v84[8]) = 43;
            LOWORD(v84[7]) = 51;
            LOWORD(v84[32]) = 639;
            LODWORD(v84[35]) = 8064;
          }
          ObfReferenceObjectWithTag(v58, 0x72437350u);
          if ( v31 )
          {
            *(_BYTE *)v31 = 0;
            v35 = *(_QWORD *)&v75[4].Length;
            if ( *(_QWORD *)&v75[4].Length < 0x40000uLL )
              v35 = 0x40000LL;
            v31[3] = v35;
            v31[2] = (__int64)v75[4].Buffer;
            v31[1] = LODWORD(v75[3].Buffer);
          }
          *(_DWORD *)v54 = 0;
          PspMapThreadCreationFlags(ThreadFlags, v53);
          if ( v59 )
          {
            *(_DWORD *)v54 = 2;
            v53[0] |= 0x10u;
          }
          v73[0] = (__int64)v74;
          v53[0] |= 0x60u;
          Info = PspAllocateThread(
                   (ULONG_PTR)v33,
                   (__int64)v84,
                   (__int64)v73,
                   0LL,
                   0LL,
                   (__int64)v53,
                   (__int64)&v61,
                   (__int64)v31,
                   (__int64)&v80);
          if ( Info < 0 )
          {
            PspUnlockProcessExclusive((__int64)v33, (__int64)CurrentThread);
            PspRundownSingleProcess((ULONG_PTR)v33);
            goto LABEL_74;
          }
          LOBYTE(v36) = *(_BYTE *)(*(_QWORD *)&v53[1] + 1738LL);
          LOBYTE(v37) = PreviousMode;
          if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(v37, v36) )
          {
            v38 = v55;
            if ( (v55 & 0x2000000) != 0 )
              v38 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v50 >> 4) + 8] & 0x1FFFFF | v55 & 0xFDFFFFFF;
          }
          else
          {
            v38 = v55;
          }
          if ( v75[12].Buffer )
            v39 = v75[12].Buffer + 56;
          else
            v39 = 0LL;
          inserted = PspInsertProcess(v33, *(HANDLE *)&v75[8].Length, v54[0], (__int64)v39, &AccessState);
          v41 = v61;
          Info = PspInsertThread(v61, v38, (__int64)v31, (__int64)v75, 0LL, &v80, v60, *(__int64 *)&v75[1].Length);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v42, v43, v44);
          if ( inserted < 0 )
          {
            PspRundownSingleProcess((ULONG_PTR)v33);
            Info = inserted;
LABEL_73:
            ObfDereferenceObject(v41);
LABEL_74:
            ObfDereferenceObjectWithTag(v33, 0x72437350u);
            goto LABEL_75;
          }
          if ( Info >= 0 )
          {
            Info = PspCreateObjectHandle(v33, &AccessState, PsProcessType);
            if ( Info >= 0 )
            {
              v45 = *(UNICODE_STRING **)&v75[2].Length;
              if ( *(_QWORD *)&v75[2].Length )
              {
                **(_OWORD **)&v75[2].Length = v75[3];
                v45[1] = v75[4];
                v45[2] = v75[5];
                v45[3] = v75[6];
              }
              *v68 = v79;
              v46 = *(struct _KPROCESS **)&v53[1];
              Info = PspUpdateCreateInfo(6LL, v75, v33);
              if ( Info >= 0 )
                goto LABEL_71;
              if ( (v77 & 0x200) != 0 || (v49 = 1, v46 == PsInitialSystemProcess) )
                v49 = 0;
              ObCloseHandle(v79, v49);
            }
            if ( (v81 & 0x200) != 0 || *(PEPROCESS *)&v53[1] == PsInitialSystemProcess )
              v22 = 0;
            ObCloseHandle(v82, v22);
          }
LABEL_71:
          SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&AccessState);
          if ( Info < 0 )
            PsTerminateProcess(v33, (unsigned int)Info);
          goto LABEL_73;
        }
        *(_QWORD *)&v75[11].Length = 0LL;
        v47 = 2LL;
      }
      PspUpdateCreateInfo(v47, v75, 0LL);
      goto LABEL_75;
    }
    if ( Process == *(_BYTE **)&v53[1]
      && PreviousMode
      && !*(_QWORD *)v54
      && (BYTE1(v75[0].Buffer) & 0xC) == 0
      && *((char *)&v75[0].MaximumLength + 2) >= 0
      && (*(_DWORD *)(&v75[0].MaximumLength + 1) & 0x20000) == 0
      && ((__int64)v75[0].Buffer & 0x10) == 0 )
    {
      LOBYTE(v75[0].Buffer) &= ~4u;
      v48 = Process[1738];
      v50 = v48;
      v52[0] = Process[1737];
      v51 = Process[1736];
      if ( (v14 & 0x40) != 0 && (v48 & 7) == 0 )
      {
        Info = -1073741790;
        goto LABEL_75;
      }
      LODWORD(v84[6]) = 1048603;
      LOBYTE(v23) = 1;
      Info = PspGetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)v84, 0, v23, 1);
      if ( Info < 0 )
        goto LABEL_75;
      v84[15] = 297LL;
      v31 = 0LL;
      goto LABEL_49;
    }
LABEL_131:
    Info = -1073741811;
    goto LABEL_75;
  }
  return result;
}
