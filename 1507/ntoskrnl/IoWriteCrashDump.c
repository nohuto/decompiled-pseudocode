/*
 * XREFs of IoWriteCrashDump @ 0x1401F3B80
 * Callers:
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x14014E92C (KdCheckForDebugBreak.c)
 *     xKdEnumerateDebuggingDevices @ 0x140170968 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IoFillTriageDumpBuffer @ 0x1401F2E8C (IoFillTriageDumpBuffer.c)
 *     IoSaveBugCheckProgress @ 0x1401F3834 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x1401F38A4 (IoSetBugCheckProgressFlag.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1401F465C (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1401F4784 (IopDumpCallRemovePagesCallbacks.c)
 *     IopUpdateMinidumpContext @ 0x1401F4F1C (IopUpdateMinidumpContext.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401F5200 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401F5530 (IopWriteTriageDumpToFirmware.c)
 *     MmGetDumpRange @ 0x140218834 (MmGetDumpRange.c)
 *     MmSnapTriageDumpInformation @ 0x140218C8C (MmSnapTriageDumpInformation.c)
 *     RtlNumberOfSetBitsEx @ 0x140247D70 (RtlNumberOfSetBitsEx.c)
 *     VfDisableHalVerifier @ 0x14025A5C8 (VfDisableHalVerifier.c)
 */

char __fastcall IoWriteCrashDump(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  char v9; // bl
  unsigned int v13; // edi
  __int64 v15; // rcx
  unsigned int v16; // edx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  char v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r8
  _OWORD *v22; // rax
  __int64 v23; // r9
  _OWORD *v24; // rcx
  __int128 v25; // xmm1
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rsi
  int v35; // edi
  int v36; // [rsp+38h] [rbp-C8h]
  __int64 v37; // [rsp+78h] [rbp-88h] BYREF
  __int128 *v38; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  _QWORD v45[5]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v46[4]; // [rsp+D8h] [rbp-28h] BYREF

  v9 = 0;
  v41 = a7;
  v42 = a4;
  v43 = a3;
  v13 = 0;
  v44 = a8;
  v39 = 3583;
  v40 = 0;
  KdCheckForDebugBreak();
  if ( CapsuleTriageDumpBlockInitialized == 1 )
    return IopWriteCapsuleTriageDumpToFirmware(a1, a2, a3, v42, a5, (__int64)a6, v41);
  v46[3] = a5;
  v46[0] = a2;
  v46[1] = a3;
  v46[2] = v42;
  MmSnapTriageDumpInformation(a6, v46);
  v15 = CrashdmpDumpBlock;
  if ( !CrashdmpDumpBlock )
    return v9;
  if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 1) != 0 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 )
  {
    v16 = 0;
    v17 = (_DWORD *)(CrashdmpDumpBlock + 1372);
    while ( *v17 != a1 )
    {
      ++v16;
      ++v17;
      if ( v16 >= 8 )
        goto LABEL_11;
    }
    *(_DWORD *)(CrashdmpDumpBlock + 1336) = 5;
    v15 = CrashdmpDumpBlock;
  }
LABEL_11:
  if ( !a8 )
  {
    *(_QWORD *)(v15 + 8) = 0LL;
    v13 = 1;
    v39 = 3319;
  }
  qword_140353BE0(1LL, 0LL, v13);
  VfDisableHalVerifier();
  LOBYTE(v18) = 1;
  v19 = qword_140353C10(v18);
  IoSaveBugCheckProgress(32);
  v20 = 9LL;
  v21 = v43;
  v22 = a6;
  v23 = v42;
  *(_DWORD *)(CrashdmpDumpBlock + 24) = a1;
  *(_QWORD *)(CrashdmpDumpBlock + 32) = a2;
  *(_QWORD *)(CrashdmpDumpBlock + 40) = v21;
  *(_QWORD *)(CrashdmpDumpBlock + 48) = v23;
  *(_QWORD *)(CrashdmpDumpBlock + 56) = a5;
  v24 = (_OWORD *)(CrashdmpDumpBlock + 64);
  do
  {
    *v24 = *v22;
    v24[1] = v22[1];
    v24[2] = v22[2];
    v24[3] = v22[3];
    v24[4] = v22[4];
    v24[5] = v22[5];
    v24[6] = v22[6];
    v24 += 8;
    v25 = v22[7];
    v22 += 8;
    *(v24 - 1) = v25;
    --v20;
  }
  while ( v20 );
  *v24 = *v22;
  v24[1] = v22[1];
  v24[2] = v22[2];
  v24[3] = v22[3];
  v24[4] = v22[4];
  *(_QWORD *)(CrashdmpDumpBlock + 1296) = &KdDebuggerDataBlock;
  *(_QWORD *)(CrashdmpDumpBlock + 1304) = &PsActiveProcessHead;
  *(_QWORD *)(CrashdmpDumpBlock + 1312) = &PsLoadedModuleList;
  *(_QWORD *)(CrashdmpDumpBlock + 1320) = MmPfnDatabase;
  *(_QWORD *)(CrashdmpDumpBlock + 16) = &KeBugCheckReasonCallbackListHead;
  if ( a8 )
    v26 = *(_QWORD *)(*(_QWORD *)(v41 + 184) + 40LL);
  else
    v26 = __readcr3();
  *(_QWORD *)(CrashdmpDumpBlock + 1344) = v26 & 0xFFFFFFFFFFFFF000uLL;
  v27 = CrashdmpDumpBlock;
  if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) && v19 == 1 && a8 )
    goto LABEL_30;
  IopUpdateMinidumpContext(a1, a2, v21, v23, a5, (__int64)a6);
  MmSnapTriageDumpInformation(a6, v46);
  v28 = CrashdmpDumpBlock;
  v37 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
  v38 = &IopTriageDumpDataBlocks;
  if ( v19 != 1 )
  {
    v29 = *(_QWORD *)(CrashdmpDumpBlock + 1360);
    if ( v29 )
    {
      *(_QWORD *)(CrashdmpDumpBlock + 1328) = v29 + 12316;
      *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
LABEL_27:
      v28 = CrashdmpDumpBlock;
      goto LABEL_28;
    }
  }
  if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) && !a8 )
  {
    *(_QWORD *)(CrashdmpDumpBlock + 1328) = *(_QWORD *)(CrashdmpDumpBlock + 1360) + 0x2000LL;
    goto LABEL_27;
  }
LABEL_28:
  if ( (int)IoFillTriageDumpBuffer(
              0x3E000u,
              *(__int64 **)(v28 + 1328),
              1,
              v39,
              0LL,
              (__int64)a6,
              v41,
              v36,
              65,
              1u,
              (__int64)&v37,
              (__int64)&v37,
              &v40) >= 0 )
  {
    v27 = CrashdmpDumpBlock;
LABEL_30:
    v30 = *(_QWORD *)(v27 + 8);
    if ( v30 )
    {
      memset(v45, 0, sizeof(v45));
      v37 = *(_QWORD *)(v30 + 48);
      v31 = 1LL;
      v45[3] = 0LL;
      v38 = (__int128 *)(v30 + 56);
      v45[2] = &v37;
      v45[0] = IoSetDumpRange;
      v45[1] = IoFreeDumpRange;
      v32 = *(_DWORD *)(v27 + 1336);
      if ( v32 == 6 )
      {
        v31 = 0LL;
        v33 = a9 != 0;
      }
      else if ( v32 == 5 && (*(_DWORD *)(v27 + 1368) & 2) != 0 )
      {
        v31 = 0LL;
        v33 = 2LL;
      }
      else
      {
        v33 = 0LL;
      }
      MmGetDumpRange(v45, v31, v33);
      IopDumpCallAddPagesCallbacks(a1);
      IoSaveBugCheckProgress(33);
      IopDumpCallRemovePagesCallbacks(a1);
      IoSaveBugCheckProgress(34);
      *(_QWORD *)(v30 + 40) = RtlNumberOfSetBitsEx(&v37);
      v27 = CrashdmpDumpBlock;
    }
    v34 = v44;
    v35 = qword_140353BE8(v27, v44);
    if ( v35 == -1073741267 )
    {
      if ( *(_QWORD *)(CrashdmpDumpBlock + 1328) )
      {
        IoSetBugCheckProgressFlag(0x2000000);
        IopUpdateMinidumpContext(a1, a2, v43, v42, a5, (__int64)a6);
        MmSnapTriageDumpInformation(a6, v46);
        v37 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
        v38 = &IopTriageDumpDataBlocks;
        v35 = IoFillTriageDumpBuffer(
                0x3E000u,
                *(__int64 **)(CrashdmpDumpBlock + 1328),
                1,
                3583,
                0LL,
                (__int64)a6,
                v41,
                v36,
                65,
                1u,
                (__int64)&v37,
                (__int64)&v37,
                &v40);
        if ( v35 >= 0 )
        {
          v35 = qword_140353BE8(CrashdmpDumpBlock, v34);
          IoSaveBugCheckProgress(35);
        }
      }
    }
    if ( (DumpPolicyAttemptOffline & 1) != 0 && v35 < 0 || (DumpPolicyAttemptOffline & 2) != 0 && !v19 )
    {
      IoSaveBugCheckProgress(36);
      if ( (int)off_140321A98() >= 0 )
      {
        IoSetBugCheckProgressFlag(0x8000000);
        while ( 1 )
        {
          KeStallExecutionProcessor(0xF4240u);
          ++AttemptOfflineStallCount;
        }
      }
    }
    else if ( v35 >= 0 )
    {
      if ( v19 != 1 && *(_QWORD *)(CrashdmpDumpBlock + 1360) )
      {
        IoSetBugCheckProgressFlag(0x4000000);
        v35 = IopWriteTriageDumpToFirmware(*(PVOID *)(CrashdmpDumpBlock + 1360));
        IoSetBugCheckProgressFlag(0x10000000);
      }
      return v35 >= 0;
    }
  }
  return v9;
}
