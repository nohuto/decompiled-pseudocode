/*
 * XREFs of NtCreateUserProcess @ 0x140509350
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspCreateObjectHandle @ 0x140421204 (PspCreateObjectHandle.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     PspBuildCreateProcessContext @ 0x14044EA2C (PspBuildCreateProcessContext.c)
 *     PspGetContextThreadInternal @ 0x140450184 (PspGetContextThreadInternal.c)
 *     PspDeleteCreateProcessContext @ 0x140450BA4 (PspDeleteCreateProcessContext.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     PspInsertProcess @ 0x14046A910 (PspInsertProcess.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1404765E4 (FsRtlFreeExtraCreateParameterList.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 *     PspCaptureProcessParameters @ 0x140508F30 (PspCaptureProcessParameters.c)
 *     MmCreateSpecialImageSection @ 0x140508F84 (MmCreateSpecialImageSection.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140509FD0 (PspCheckForInvalidAccessByProtection.c)
 *     IoCreateFileEx @ 0x14050A0C0 (IoCreateFileEx.c)
 *     PspUpdateCreateInfo @ 0x14050AE10 (PspUpdateCreateInfo.c)
 *     PspCreateUserProcessEcp @ 0x14050B0E0 (PspCreateUserProcessEcp.c)
 *     SeQuerySigningPolicy @ 0x14050B2FC (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14050B78C (PspReferenceTokenForNewProcess.c)
 *     PspCaptureCreateInfo @ 0x14050B804 (PspCaptureCreateInfo.c)
 *     PsTerminateProcess @ 0x1405579A8 (PsTerminateProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  struct _KTHREAD *CurrentThread; // r12
  _KPROCESS *Process; // r13
  char PreviousMode; // r15
  char v14; // r14
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  ULONG v17; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  NTSTATUS result; // eax
  NTSTATUS Info; // edi
  __int64 v22; // r8
  KPROCESSOR_MODE v23; // r14
  ULONG v24; // esi
  int v25; // eax
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // r8
  _KPROCESS *v29; // rcx
  __int64 *v30; // r12
  volatile signed __int64 *v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  char v38; // al
  unsigned int v39; // r8d
  unsigned int v40; // edi
  __int64 v41; // rax
  int inserted; // r15d
  PVOID v43; // r12
  __int64 v44; // r8
  __int64 v45; // r9
  struct _KTHREAD *v46; // rcx
  __int16 v47; // ax
  _OWORD *v48; // rax
  struct _KPROCESS *v49; // r15
  __int64 v50; // rcx
  unsigned __int8 v51; // al
  __int64 v52; // r8
  __int64 v53; // r9
  struct _KTHREAD *v54; // rcx
  __int16 v55; // ax
  KPROCESSOR_MODE v56; // al
  __int64 *FileAttributes; // [rsp+28h] [rbp-B90h]
  unsigned __int8 v58; // [rsp+80h] [rbp-B38h] BYREF
  char Blink; // [rsp+81h] [rbp-B37h] BYREF
  char v60[6]; // [rsp+82h] [rbp-B36h] BYREF
  _KPROCESS *v61; // [rsp+88h] [rbp-B30h]
  ACCESS_MASK v62; // [rsp+90h] [rbp-B28h]
  int v63[3]; // [rsp+94h] [rbp-B24h] BYREF
  ACCESS_MASK v64; // [rsp+A0h] [rbp-B18h]
  PVOID v65; // [rsp+A8h] [rbp-B10h] BYREF
  int v66; // [rsp+B0h] [rbp-B08h] BYREF
  PVOID v67; // [rsp+B8h] [rbp-B00h] BYREF
  struct _KTHREAD *v68; // [rsp+C0h] [rbp-AF8h]
  PHANDLE v69; // [rsp+C8h] [rbp-AF0h]
  _QWORD *v70; // [rsp+D0h] [rbp-AE8h]
  PVOID v71[2]; // [rsp+D8h] [rbp-AE0h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+E8h] [rbp-AD0h] BYREF
  PVOID Object; // [rsp+108h] [rbp-AB0h] BYREF
  PVOID v74; // [rsp+110h] [rbp-AA8h] BYREF
  POBJECT_ATTRIBUTES v75; // [rsp+118h] [rbp-AA0h]
  PPS_CREATE_INFO v76; // [rsp+120h] [rbp-A98h]
  volatile signed __int32 *v77; // [rsp+128h] [rbp-A90h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+130h] [rbp-A88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+160h] [rbp-A58h] BYREF
  __int64 v80; // [rsp+170h] [rbp-A48h] BYREF
  _BYTE v81[64]; // [rsp+190h] [rbp-A28h] BYREF
  _OWORD v82[25]; // [rsp+1D0h] [rbp-9E8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v83[12]; // [rsp+360h] [rbp-858h] BYREF
  ULONG v84; // [rsp+4E0h] [rbp-6D8h]
  char v85; // [rsp+4E4h] [rbp-6D4h]
  HANDLE v86; // [rsp+4E8h] [rbp-6D0h]
  __int64 v87[48]; // [rsp+4F0h] [rbp-6C8h] BYREF
  int v88; // [rsp+670h] [rbp-548h]
  HANDLE v89; // [rsp+678h] [rbp-540h]
  __int64 v90; // [rsp+680h] [rbp-538h] BYREF
  __int64 v91[154]; // [rsp+6A0h] [rbp-518h] BYREF

  v64 = ThreadDesiredAccess;
  v62 = ProcessDesiredAccess;
  v70 = ThreadHandle;
  v69 = ProcessHandle;
  v77 = (volatile signed __int32 *)ProcessObjectAttributes;
  v75 = ThreadObjectAttributes;
  *(_QWORD *)&v63[1] = ProcessParameters;
  v76 = CreateInfo;
  DriverContext.Size = 0;
  memset(&DriverContext.ExtraCreateParameter, 0, 24);
  memset(v81, 0, sizeof(v81));
  memset(v91, 0, sizeof(v91));
  CurrentThread = KeGetCurrentThread();
  v68 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v61 = Process;
  v71[1] = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v60[1] = PreviousMode;
  v14 = ProcessFlags;
  if ( (ProcessFlags & 0xFFFF6838) != 0 || (ThreadFlags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( (ProcessFlags & 0x8400) == 0x8400 )
    return -1073741776;
  v84 = 0;
  v85 = PreviousMode;
  if ( PreviousMode )
  {
    v15 = v69;
    if ( (unsigned __int64)v69 >= MmUserProbeAddress )
      v15 = (_QWORD *)MmUserProbeAddress;
    *v15 = *v15;
    v16 = v70;
    if ( (unsigned __int64)v70 >= MmUserProbeAddress )
      v16 = (_QWORD *)MmUserProbeAddress;
    *v16 = *v16;
  }
  if ( ProcessObjectAttributes )
  {
    if ( PreviousMode && ((unsigned __int8)ProcessObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v17 = ProcessObjectAttributes->Attributes & 0xDF2;
    else
      v17 = ProcessObjectAttributes->Attributes & 0x10FF2;
    v84 = v17;
  }
  memset(v82, 0, 0x188uLL);
  if ( !AttributeList
    || (LOBYTE(v18) = PreviousMode,
        result = PspBuildCreateProcessContext(AttributeList, v18, 0, (__int64)v82),
        result >= 0) )
  {
    if ( (ProcessFlags & 0x40) != 0 && (DWORD1(v82[0]) & 0x20000) != 0 && !BYTE8(v82[22]) )
    {
      v14 = ProcessFlags & 0xBF;
      ProcessFlags &= ~0x40u;
      DWORD1(v82[0]) &= ~0x20000u;
    }
    if ( (v14 & 4) != 0 )
    {
      if ( PreviousMode
        && (WORD2(v82[0]) & 0x800) == 0
        && (v14 & 0x40) == 0
        && (BYTE2(Process[2].ReadyListHead.Blink) & 7) != 0 )
      {
        goto LABEL_147;
      }
    }
    else if ( (WORD2(v82[0]) & 0x800) != 0 )
    {
      goto LABEL_147;
    }
    if ( (DWORD1(v82[0]) & 0x20000) != 0 && (v14 & 0x40) == 0 )
      goto LABEL_147;
    LOBYTE(v19) = PreviousMode;
    Info = PspCaptureCreateInfo(v19, v76, v82);
    if ( Info < 0 )
      goto LABEL_85;
    v23 = 1;
    if ( (BYTE4(v82[0]) & 1) != 0 )
    {
      Info = ObReferenceObjectByHandleWithTag(
               *(HANDLE *)&v82[7],
               0x80u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x72437350u,
               v71,
               0LL);
      if ( Info < 0 )
        goto LABEL_85;
      Process = (_KPROCESS *)v71[0];
      *((PVOID *)&v82[7] + 1) = v71[0];
    }
    else
    {
      v71[0] = Process;
    }
    if ( (BYTE9(v82[0]) & 6) == 2 && (Process != v61 || v61 == PsInitialSystemProcess) )
      goto LABEL_147;
    LOBYTE(v22) = PreviousMode;
    Info = PspReferenceTokenForNewProcess(Process, *((_QWORD *)&v82[8] + 1), v22, &v82[9]);
    if ( Info < 0 )
    {
      *(_QWORD *)&v82[9] = 0LL;
      goto LABEL_85;
    }
    if ( (BYTE4(v82[0]) & 0x20) != 0 )
    {
      v58 = (DWORD1(v82[0]) & 0x20000) != 0 ? BYTE8(v82[22]) : 0;
      v24 = ProcessFlags;
      Info = SeQuerySigningPolicy(
               *(HANDLE *)&v82[9],
               (PCUNICODE_STRING)&v82[14],
               (ULONG_PTR)&Blink,
               (__int64)v60,
               (__int64)&v58);
      if ( Info < 0 )
        goto LABEL_85;
      v25 = 0;
      if ( PreviousMode == 1 )
        v25 = 1024;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = v25 | 0x240;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v82[14];
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      Info = 0;
      if ( qword_14077E3D8 )
        Info = qword_14077E3D8(*(_QWORD *)&v82[9]);
      if ( Info < 0 )
        goto LABEL_85;
      Info = PspCreateUserProcessEcp(&DriverContext, *(_QWORD *)&v82[9]);
      if ( Info < 0 )
        goto LABEL_85;
      Info = IoCreateFileEx(
               (PHANDLE)&v82[10],
               DWORD2(v82[9]) | 0x100020,
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
               &DriverContext);
      if ( Info < 0 && DWORD2(v82[9]) )
        Info = IoCreateFileEx(
                 (PHANDLE)&v82[10],
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
                 &DriverContext);
      if ( Info < 0 )
      {
        *(_QWORD *)&v82[10] = 0LL;
        v50 = 1LL;
      }
      else
      {
        Info = ObReferenceObjectByHandle(
                 *(HANDLE *)&v82[10],
                 0x100020u,
                 (POBJECT_TYPE)IoFileObjectType,
                 0,
                 &Object,
                 0LL);
        *((_QWORD *)&v82[10] + 1) = Object;
        if ( Info < 0 )
        {
          *((_QWORD *)&v82[10] + 1) = 0LL;
          goto LABEL_85;
        }
        ObjectAttributes.ObjectName = 0LL;
        v26 = 1;
        if ( *(_QWORD *)&v82[23] )
          v26 = 5;
        Info = MmCreateSpecialImageSection(
                 (HANDLE *)&v82[11],
                 (__int64)&ObjectAttributes,
                 Blink,
                 *(__int64 *)&v82[10],
                 v26);
        if ( Info >= 0 )
        {
          Info = ObReferenceObjectByHandle(*(HANDLE *)&v82[11], 8u, MmSectionObjectType, 0, &v74, 0LL);
          *(_QWORD *)&v82[12] = v74;
          if ( Info < 0 )
          {
            *(_QWORD *)&v82[12] = 0LL;
            goto LABEL_85;
          }
          v29 = v61;
          LOBYTE(v28) = v58;
          if ( (v58 & 7) != 1 )
          {
            LOBYTE(v29) = PreviousMode;
            LOBYTE(v27) = BYTE2(v61[2].ReadyListHead.Blink);
            if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(v29, v27, v28) )
              BYTE8(v82[0]) |= 8u;
          }
          Info = PspCaptureProcessParameters(PreviousMode, *(__int64 *)&v63[1], (__int64)v82);
          if ( Info < 0 )
          {
            BYTE8(v82[0]) &= ~4u;
            goto LABEL_85;
          }
          v30 = &v90;
LABEL_51:
          Info = PspAllocateProcess(
                   (ULONG_PTR)Process,
                   PreviousMode,
                   v77,
                   v58,
                   Blink,
                   v60[0],
                   *(void **)&v82[12],
                   *(void **)&v82[9],
                   v24,
                   (__int64)v82,
                   *((_QWORD *)&v82[8] + 1) != 0LL,
                   (__int64)&v66,
                   &v65);
          if ( Info >= 0 )
          {
            v31 = (volatile signed __int64 *)v65;
            if ( *(_QWORD *)&v82[12] )
            {
              v32 = HIDWORD(v82[13]);
              if ( !*((_QWORD *)v65 + 133) )
                v32 = *((_QWORD *)v65 + 127);
              v91[6] = 0x1F800010000BLL;
              v91[31] = PspUserThreadStart;
              v91[16] = *(_QWORD *)&v82[3];
              v91[17] = v32;
              *(_DWORD *)((char *)&v91[7] + 2) = 2818091;
              *(_DWORD *)((char *)&v91[7] + 6) = 2818131;
              WORD1(v91[8]) = 43;
              LOWORD(v91[7]) = 51;
              LOWORD(v91[32]) = 639;
              LODWORD(v91[35]) = 8064;
            }
            ObfReferenceObjectWithTag(v65, 0x72437350u);
            if ( v30 )
            {
              *(_BYTE *)v30 = 0;
              v33 = *(_QWORD *)&v82[4];
              if ( *(_QWORD *)&v82[4] < 0x40000uLL )
                v33 = 0x40000LL;
              v30[3] = v33;
              v30[2] = *((_QWORD *)&v82[4] + 1);
              v30[1] = DWORD2(v82[3]);
            }
            v63[1] = 0;
            v34 = (ThreadFlags & 1) != 0;
            if ( (ThreadFlags & 2) != 0 )
              v34 |= 2u;
            if ( (ThreadFlags & 4) != 0 )
              v34 |= 4u;
            if ( (ThreadFlags & 0x10) != 0 )
              v34 |= 0x80u;
            if ( v66 )
            {
              v63[1] = 2;
              v34 |= 0x10u;
            }
            v80 = (__int64)v81;
            v63[0] = v34 | 0x60;
            Info = PspAllocateThread(
                     (ULONG_PTR)v31,
                     (__int64)v75,
                     PreviousMode,
                     (__int64)v82,
                     v91,
                     (PINITIAL_TEB *)&v80,
                     0LL,
                     0LL,
                     v63,
                     &v67,
                     (__int64)v30,
                     (__int64)v87);
            if ( Info < 0 )
            {
              if ( (_InterlockedExchangeAdd64(v31 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v31 + 91);
              KeAbPostRelease((ULONG_PTR)(v31 + 91));
              v54 = v68;
              v55 = v68->KernelApcDisable + 1;
              v68->KernelApcDisable = v55;
              if ( !v55
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v54->ApcState.ApcListHead[0].Flink != &v54->152
                && !v54->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
              v31 = (volatile signed __int64 *)v65;
              PspRundownSingleProcess((ULONG_PTR)v65, 0LL, v52, v53);
              goto LABEL_84;
            }
            LOBYTE(v35) = BYTE2(v61[2].ReadyListHead.Blink);
            LOBYTE(v37) = *((_BYTE *)v31 + 1714);
            LOBYTE(v36) = PreviousMode;
            v38 = PspCheckForInvalidAccessByProtection(v36, v35, v37);
            v39 = v62;
            if ( v38 )
            {
              if ( (v62 & 0x2000000) != 0 )
                v39 = ~*((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)v58 >> 4) + 1) & 0x1FFFFF | v62 & 0xFDFFFFFF;
              v40 = v64;
              if ( (v64 & 0x2000000) != 0 )
                v40 = ~*((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)v58 >> 4) + 2) & 0x1FFFFF | v64 & 0xFDFFFFFF;
            }
            else
            {
              v40 = v64;
            }
            if ( *((_QWORD *)&v82[12] + 1) )
              v41 = *((_QWORD *)&v82[12] + 1) + 112LL;
            else
              v41 = 0LL;
            inserted = PspInsertProcess(
                         (char *)v31,
                         (__int64)Process,
                         v39,
                         ProcessFlags,
                         *(HANDLE *)&v82[8],
                         v63[1],
                         v41,
                         (__int64)v83);
            FileAttributes = v30;
            v43 = v67;
            Info = PspInsertThread(
                     (ULONG_PTR)v67,
                     (__int64)v31,
                     (__int64)v81,
                     v63,
                     v40,
                     FileAttributes,
                     (unsigned __int8 *)v82,
                     0LL,
                     (__int64)v87,
                     v70,
                     *(_OWORD **)&v82[1]);
            v46 = v68;
            v47 = v68->KernelApcDisable + 1;
            v68->KernelApcDisable = v47;
            if ( !v47
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v46->ApcState.ApcListHead[0].Flink != &v46->152
              && !v46->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            if ( inserted < 0 )
            {
              PspRundownSingleProcess((ULONG_PTR)v31, 0LL, v44, v45);
              Info = inserted;
LABEL_83:
              ObfDereferenceObject(v43);
LABEL_84:
              ObfDereferenceObjectWithTag((PVOID)v31, 0x72437350u);
              goto LABEL_85;
            }
            if ( Info >= 0 )
            {
              Info = PspCreateObjectHandle((void *)v31, (__int64)v83, (struct _OBJECT_TYPE *)PsProcessType);
              if ( Info >= 0 )
              {
                v48 = *(_OWORD **)&v82[2];
                if ( *(_QWORD *)&v82[2] )
                {
                  **(_OWORD **)&v82[2] = v82[3];
                  v48[1] = v82[4];
                  v48[2] = v82[5];
                  v48[3] = v82[6];
                }
                *v69 = v86;
                v49 = v61;
                Info = PspUpdateCreateInfo(6LL, v82, v31);
                if ( Info >= 0 )
                  goto LABEL_81;
                if ( (v84 & 0x200) != 0 || (v56 = 1, v49 == PsInitialSystemProcess) )
                  v56 = 0;
                ObCloseHandle(v86, v56);
              }
              if ( (v88 & 0x200) != 0 || v61 == PsInitialSystemProcess )
                v23 = 0;
              ObCloseHandle(v89, v23);
            }
LABEL_81:
            SeDeleteAccessState(v83);
            if ( Info < 0 )
              PsTerminateProcess(v31, (unsigned int)Info);
            goto LABEL_83;
          }
LABEL_85:
          PspDeleteCreateProcessContext((__int64)v82);
          if ( DriverContext.ExtraCreateParameter )
            FsRtlFreeExtraCreateParameterList(DriverContext.ExtraCreateParameter);
          return Info;
        }
        *(_QWORD *)&v82[11] = 0LL;
        v50 = 2LL;
      }
      PspUpdateCreateInfo(v50, v82, 0LL);
      goto LABEL_85;
    }
    if ( Process == v61
      && PreviousMode
      && !*(_QWORD *)&v63[1]
      && (BYTE9(v82[0]) & 6) == 0
      && (SBYTE4(v82[0]) & 0x80u) == 0
      && (DWORD1(v82[0]) & 0x20000) == 0
      && (BYTE8(v82[0]) & 0x10) == 0 )
    {
      BYTE8(v82[0]) &= ~4u;
      v51 = BYTE2(Process[2].ReadyListHead.Blink);
      v58 = v51;
      v60[0] = BYTE1(Process[2].ReadyListHead.Blink);
      Blink = (char)Process[2].ReadyListHead.Blink;
      v24 = ProcessFlags;
      if ( (ProcessFlags & 0x40) != 0 && (v51 & 7) == 0 )
      {
        Info = -1073741790;
        goto LABEL_85;
      }
      LODWORD(v91[6]) = 1048603;
      Info = PspGetContextThreadInternal((__int64)CurrentThread, (__int64)v91, 0, 1, 1);
      if ( Info < 0 )
        goto LABEL_85;
      v91[15] = 297LL;
      v30 = 0LL;
      goto LABEL_51;
    }
LABEL_147:
    Info = -1073741811;
    goto LABEL_85;
  }
  return result;
}
