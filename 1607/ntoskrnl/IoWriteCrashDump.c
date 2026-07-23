/*
 * XREFs of IoWriteCrashDump @ 0x1401C645C
 * Callers:
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x140114668 (KdCheckForDebugBreak.c)
 *     RtlNumberOfSetBitsEx @ 0x14013B248 (RtlNumberOfSetBitsEx.c)
 *     xKdEnumerateDebuggingDevices @ 0x14014CF94 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IoFillTriageDumpBuffer @ 0x1401C5708 (IoFillTriageDumpBuffer.c)
 *     IoSaveBugCheckProgress @ 0x1401C6100 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x1401C6180 (IoSetBugCheckProgressFlag.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1401C7004 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1401C7128 (IopDumpCallRemovePagesCallbacks.c)
 *     IopUpdateMinidumpContext @ 0x1401C7970 (IopUpdateMinidumpContext.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401C7CC4 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401C7FF4 (IopWriteTriageDumpToFirmware.c)
 *     MmGetDumpRange @ 0x1401E79D4 (MmGetDumpRange.c)
 *     MmSnapTriageDumpInformation @ 0x1401E7E6C (MmSnapTriageDumpInformation.c)
 *     VfDisableHalVerifier @ 0x14022293C (VfDisableHalVerifier.c)
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
  __int64 v11; // r14
  unsigned int v13; // edi
  __int64 v15; // rcx
  unsigned int v16; // edx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  char v19; // r15
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
  unsigned int v31; // r14d
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rsi
  int v35; // edi
  int v36; // [rsp+38h] [rbp-C8h]
  __int128 v37; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v38; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+84h] [rbp-7Ch]
  int v40; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int64 v45; // [rsp+B0h] [rbp-50h]
  _QWORD v46[6]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v47[4]; // [rsp+E8h] [rbp-18h] BYREF

  v9 = 0;
  v42 = a7;
  v11 = a2;
  v41 = a4;
  v43 = a3;
  v13 = 0;
  v44 = a2;
  v45 = a8;
  v39 = 3583;
  v40 = 0;
  v38 = 0;
  KdCheckForDebugBreak();
  if ( CapsuleTriageDumpBlockInitialized == 1 )
    return IopWriteCapsuleTriageDumpToFirmware(a1, v11, a3, v41, a5, (__int64)a6, v42);
  v47[3] = a5;
  v47[0] = v11;
  v47[1] = a3;
  v47[2] = v41;
  MmSnapTriageDumpInformation(a6, v47);
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
  qword_140328A30(1LL, 0LL, v13);
  VfDisableHalVerifier();
  LOBYTE(v18) = 1;
  v19 = qword_140328A60(v18);
  IoSaveBugCheckProgress(32);
  v20 = 9LL;
  v21 = v43;
  v22 = a6;
  v23 = v41;
  *(_DWORD *)(CrashdmpDumpBlock + 24) = a1;
  *(_QWORD *)(CrashdmpDumpBlock + 32) = v11;
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
    v26 = *(_QWORD *)(*(_QWORD *)(v42 + 184) + 40LL);
  else
    v26 = __readcr3();
  *(_QWORD *)(CrashdmpDumpBlock + 1344) = v26 & 0xFFFFFFFFFFFFF000uLL;
  v27 = CrashdmpDumpBlock;
  if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) && v19 == 1 && a8 )
    goto LABEL_30;
  IopUpdateMinidumpContext(a1, v11, v21, v23, a5, (__int64)a6);
  MmSnapTriageDumpInformation(a6, v47);
  v28 = CrashdmpDumpBlock;
  *(_QWORD *)&v37 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
  *((_QWORD *)&v37 + 1) = &IopTriageDumpDataBlocks;
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
              v42,
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
      memset(v46, 0, sizeof(v46));
      *(_QWORD *)&v37 = *(_QWORD *)(v30 + 48);
      v31 = 1;
      v46[3] = v30;
      *((_QWORD *)&v37 + 1) = v30 + 56;
      v46[2] = &v37;
      v46[0] = IoSetDumpRange;
      v46[1] = IoFreeDumpRange;
      v46[4] = 0LL;
      v32 = *(_DWORD *)(v27 + 1336);
      if ( v32 == 6 )
      {
        v31 = 0;
        if ( a9 )
          v38 = 1;
      }
      else if ( v32 == 5 && (*(_DWORD *)(v27 + 1368) & 2) != 0 )
      {
        v31 = 0;
        v38 = 2;
      }
      IopDumpCallAddPagesCallbacks(a1);
      IoSaveBugCheckProgress(33);
      MmGetDumpRange(v46, v31, v38);
      IopDumpCallRemovePagesCallbacks(a1);
      IoSaveBugCheckProgress(34);
      v33 = RtlNumberOfSetBitsEx(&v37);
      LODWORD(v11) = v44;
      *(_QWORD *)(v30 + 40) = v33;
      v27 = CrashdmpDumpBlock;
    }
    v34 = v45;
    v35 = qword_140328A38(v27, v45);
    if ( v35 == -1073741267 )
    {
      if ( *(_QWORD *)(CrashdmpDumpBlock + 1328) )
      {
        IoSetBugCheckProgressFlag(0x2000000);
        *(_QWORD *)((char *)&v37 + 4) = 0LL;
        IopUpdateMinidumpContext(a1, v11, v43, v41, a5, (__int64)a6);
        MmSnapTriageDumpInformation(a6, v47);
        *(_QWORD *)&v37 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
        *((_QWORD *)&v37 + 1) = &IopTriageDumpDataBlocks;
        v35 = IoFillTriageDumpBuffer(
                0x3E000u,
                *(__int64 **)(CrashdmpDumpBlock + 1328),
                1,
                3583,
                0LL,
                (__int64)a6,
                v42,
                v36,
                65,
                1u,
                (__int64)&v37,
                (__int64)&v37,
                &v40);
        if ( v35 >= 0 )
        {
          v35 = qword_140328A38(CrashdmpDumpBlock, v34);
          IoSaveBugCheckProgress(35);
        }
      }
    }
    if ( (DumpPolicyAttemptOffline & 1) != 0 && v35 < 0 || (DumpPolicyAttemptOffline & 2) != 0 && !v19 )
    {
      IoSaveBugCheckProgress(36);
      if ( (int)off_1402F25E8() >= 0 )
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
