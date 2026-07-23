/*
 * XREFs of CmpLoadHiveThread @ 0x14054D948
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetAllBits @ 0x140005744 (RtlSetAllBits.c)
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlNumberOfSetBits @ 0x140076850 (RtlNumberOfSetBits.c)
 *     RtlAreBitsClear @ 0x14008275C (RtlAreBitsClear.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpOpenHiveFile @ 0x1403F82C0 (CmpOpenHiveFile.c)
 *     CmpInitHiveFromFile @ 0x1403F89AC (CmpInitHiveFromFile.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 *     CmpGetFileSize @ 0x14047F3D4 (CmpGetFileSize.c)
 *     PsTerminateSystemThread @ 0x1404CFC1C (PsTerminateSystemThread.c)
 *     RtlAppendStringToString @ 0x140544C30 (RtlAppendStringToString.c)
 *     CmpInitBackupHive @ 0x14054DED8 (CmpInitBackupHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14054E064 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     HvpDropPagedBins @ 0x14054E0E8 (HvpDropPagedBins.c)
 *     CmpMarkCurrentValueDirty @ 0x14054E314 (CmpMarkCurrentValueDirty.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14054E3B4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpDiskFullWarning @ 0x1406036C8 (CmpDiskFullWarning.c)
 *     CmpLogFailureToGetFileSize @ 0x140606CA8 (CmpLogFailureToGetFileSize.c)
 *     ExRaiseHardError @ 0x1406B61A0 (ExRaiseHardError.c)
 */

void __fastcall CmpLoadHiveThread(PVOID StartContext)
{
  unsigned int v1; // r12d
  __int64 v2; // rsi
  ULONG_PTR inited; // rbx
  wchar_t *v4; // rdi
  ULONG_PTR v5; // rdi
  wchar_t *v6; // rcx
  int v7; // eax
  STRING *v8; // r13
  char v9; // r14
  char v10; // al
  HANDLE v11; // r15
  HANDLE v12; // r13
  NTSTATUS FileSize; // eax
  __int64 v14; // rcx
  int v15; // ebx
  HANDLE v16; // r14
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rax
  __int128 v21; // xmm0
  ULONG v22; // ebx
  ULONG i; // r14d
  __int64 v24; // rax
  __int64 v25; // rax
  struct _KEVENT *v26; // r14
  __int64 v27; // r15
  int Timeout; // [rsp+28h] [rbp-E0h]
  int v29; // [rsp+38h] [rbp-D0h]
  int v30; // [rsp+40h] [rbp-C8h]
  char v31; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+5Ch] [rbp-ACh] BYREF
  ULONG_PTR v33; // [rsp+60h] [rbp-A8h] BYREF
  ULONG Length[2]; // [rsp+68h] [rbp-A0h] BYREF
  STRING *Source; // [rsp+70h] [rbp-98h]
  STRING *Source_8[2]; // [rsp+78h] [rbp-90h] BYREF
  int v37; // [rsp+88h] [rbp-80h] BYREF
  int v38; // [rsp+8Ch] [rbp-7Ch] BYREF
  _BYTE v39[8]; // [rsp+90h] [rbp-78h] BYREF
  HANDLE v40; // [rsp+98h] [rbp-70h] BYREF
  HANDLE v41; // [rsp+A0h] [rbp-68h] BYREF
  HANDLE v42; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h] BYREF
  STRING *v44; // [rsp+B8h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+C0h] [rbp-48h]
  ULONG_PTR BugCheckParameter2[44]; // [rsp+C8h] [rbp-40h] BYREF

  v1 = (unsigned int)StartContext;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  BugCheckParameter3 = v1;
  v2 = 19LL * v1;
  LODWORD(inited) = 0;
  KeWaitForSingleObject(&CmpMachineHiveList[v2 + 8], Executive, 0, 0, 0LL);
  if ( v1 == CmpCheckHiveIndex )
  {
    KeWaitForSingleObject(&CmpLoadWorkerDebugEvent, Executive, 0, 0, 0LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v4 = CmpMachineHiveList[v2 + 3];
  BYTE2(CmpMachineHiveList[v2 + 7]) = 1;
  if ( !v4 )
  {
    inited = (int)CmpInitHiveFromFile(
                    (UNICODE_STRING *)&CmpMachineHiveList[v2 + 17],
                    (unsigned int)CmpMachineHiveList[v2 + 4],
                    &v33,
                    (_BYTE *)&CmpMachineHiveList[v2 + 7] + 3,
                    17367041,
                    0LL,
                    v29,
                    v30,
                    (__int64)&v31,
                    BugCheckParameter2);
    if ( v1 == 6 && !byte_1402F304C && ((_DWORD)inited == -1073741772 || (_DWORD)inited == -1073741765)
      || ((__int64)CmpMachineHiveList[v2 + 4] & 0x8000) != 0
      && !BYTE4(CmpMachineHiveList[v2 + 7])
      && (_DWORD)inited == -1073741772 )
    {
      LODWORD(inited) = 0;
      goto LABEL_14;
    }
    if ( (_DWORD)inited == -1073741431 )
    {
      if ( (CmpShutdownRundown.Count & 1) != 0 )
        goto LABEL_14;
    }
    else if ( (inited & 0x80000000) == 0LL )
    {
      v5 = v33;
      if ( ((__int64)CmpMachineHiveList[v2 + 4] & 0x8000) != 0 || *(_QWORD *)(v33 + 2696) && *(_QWORD *)(v33 + 2704) )
      {
        *(_DWORD *)(v33 + 5360) = HIDWORD(CmpMachineHiveList[v2 + 4]) | 4;
        CmpMachineHiveList[v2 + 6] = (wchar_t *)v5;
        if ( v31 )
        {
          CmpInitRmLogOnLoad = 1;
          v26 = &stru_1402F2CC0;
          v27 = 6LL;
          do
          {
            KeSetEvent(v26, 0, 0);
            v26 = (struct _KEVENT *)((char *)v26 + 152);
            --v27;
          }
          while ( v27 );
        }
        if ( (*(_DWORD *)(v5 + 144) & 0x8001) == 0 && (int)CmpInitBackupHive(v5, (ULONG_PTR)CmpMachineHiveList[v2]) < 0 )
          CmpDoIdleProcessing = 0;
        goto LABEL_14;
      }
    }
    CmpPuntBoot = 1;
    KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)BugCheckParameter2, v1, inited);
  }
  v7 = *((_DWORD *)v4 + 36);
  v33 = (ULONG_PTR)v4;
  if ( (v7 & 0x8001) != 0 )
  {
    if ( CmpMiniNTBoot || CmpVolatileBoot )
    {
      if ( (v7 & 2) != 0 )
      {
        CmpLockRegistry();
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v4 + 356), 1u);
        *((_DWORD *)v4 + 36) &= ~2u;
        ExReleaseResourceLite(*((PERESOURCE *)v4 + 356));
        CmpUnlockRegistry();
      }
      *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
      SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
      RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)&CmpMachineHiveList[v2 + 17]);
    }
    goto LABEL_48;
  }
  v8 = (STRING *)&CmpMachineHiveList[v2 + 17];
  Source = v8;
  v9 = 0;
  LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v8, 0, &v40, &v32, 7, 0LL, (__int64)Length, 0LL, 0LL);
  if ( (inited & 0x80000000) != 0LL )
  {
    Timeout = 0;
LABEL_72:
    *((_QWORD *)v4 + 7) = BugCheckParameter2;
    BugCheckParameter2[0] = (ULONG_PTR)v4;
    SetFailureLocation((__int64)BugCheckParameter2, 0, 22, inited, Timeout);
    goto LABEL_78;
  }
  if ( v32 == 2 )
  {
    v9 = 1;
    v10 = 16;
  }
  else
  {
    v10 = 0;
  }
  LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v8, 4u, &v41, &v37, v10 | 2u, 0LL, 0LL, 0LL, 0LL);
  if ( (inited & 0x80000000) != 0LL )
  {
    Timeout = 16;
    goto LABEL_72;
  }
  LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v8, 5u, &v42, &v38, (v9 != 0 ? 0x10 : 0) | 2u, 0LL, 0LL, 0LL, 0LL);
  if ( (inited & 0x80000000) != 0LL )
  {
    Timeout = 32;
    goto LABEL_72;
  }
  v11 = v40;
  LODWORD(inited) = CmpGetFileSize(v40, &v43);
  if ( (inited & 0x80000000) != 0LL )
  {
    Timeout = 40;
    goto LABEL_72;
  }
  v12 = v41;
  FileSize = CmpGetFileSize(v41, Source_8);
  v15 = FileSize;
  if ( FileSize < 0 )
  {
    CmpLogFailureToGetFileSize(v14, 4LL, (unsigned int)FileSize);
    *((_QWORD *)v4 + 7) = BugCheckParameter2;
    BugCheckParameter2[0] = (ULONG_PTR)v4;
    SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v15, 43);
    Source_8[0] = 0LL;
  }
  v16 = v42;
  v17 = CmpGetFileSize(v42, &Source_8[1]);
  v19 = v17;
  if ( v17 < 0 )
  {
    CmpLogFailureToGetFileSize(v18, 5LL, (unsigned int)v17);
    *((_QWORD *)v4 + 7) = BugCheckParameter2;
    BugCheckParameter2[0] = (ULONG_PTR)v4;
    SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v19, 45);
    Source_8[1] = 0LL;
  }
  CmpBecomeActiveFlusherAndReconciler(v4);
  CmpLockRegistry();
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v4 + 356), 1u);
  v20 = v43;
  v21 = *(_OWORD *)Source_8;
  *((_QWORD *)v4 + 333) = v11;
  *((_QWORD *)v4 + 337) = v12;
  *((_QWORD *)v4 + 338) = v16;
  *((_QWORD *)v4 + 371) = v20;
  *((_OWORD *)v4 + 186) = v21;
  *((_DWORD *)v4 + 36) &= ~2u;
  *((_DWORD *)v4 + 1340) = HIDWORD(CmpMachineHiveList[v2 + 4]);
  *((_DWORD *)v4 + 42) = Length[1];
  if ( (int)CmpDoFileSetSizeEx((__int64)v4, 0, (unsigned int)(*((_DWORD *)v4 + 350) + 4096), 1) < 0 )
  {
    BYTE2(NlsMbCodePageTag) = 1;
    *((_DWORD *)v4 + 36) &= ~0x20000u;
  }
  v22 = Length[0];
  if ( *((_DWORD *)v4 + 30) != Length[0] )
  {
    for ( i = 0; i < *((_DWORD *)v4 + 18); i += v22 )
    {
      if ( !RtlAreBitsClear((PRTL_BITMAP)(v4 + 36), i, v22) )
        RtlSetBits((PRTL_BITMAP)(v4 + 36), i, v22);
    }
    *((_DWORD *)v4 + 22) = RtlNumberOfSetBits((PRTL_BITMAP)(v4 + 36));
    *((_DWORD *)v4 + 30) = v22;
  }
  v24 = *((_QWORD *)v4 + 8);
  if ( *(_DWORD *)(v24 + 4092) || (*(_DWORD *)(v24 + 4088) & 4) != 0 )
  {
    RtlSetAllBits((PRTL_BITMAP)(v4 + 36));
    *((_DWORD *)v4 + 22) = *((_DWORD *)v4 + 18);
  }
  ExReleaseResourceLite(*((PERESOURCE *)v4 + 356));
  CmpUnlockRegistry();
  CmpLockRegistryExclusive();
  if ( v1 == 3 )
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)v4 + 356), 1u);
    CmpMarkCurrentValueDirty((ULONG_PTR)v4);
    ExReleaseResourceLite(*((PERESOURCE *)v4 + 356));
  }
  CmpMachineHiveList[v2 + 6] = v4;
  LODWORD(inited) = HvpDropPagedBins((ULONG_PTR)v4);
  if ( (inited & 0x80000000) != 0LL )
  {
    *((_QWORD *)v4 + 7) = BugCheckParameter2;
    BugCheckParameter2[0] = (ULONG_PTR)v4;
    SetFailureLocation((__int64)BugCheckParameter2, 0, 22, inited, 80);
    v8 = Source;
LABEL_78:
    v44 = v8;
    CmpPuntBoot = 1;
    ExRaiseHardError(3221226008LL, 1LL, 1LL, &v44, 1, v39);
    KeBugCheckEx(0x74u, 2uLL, 1uLL, BugCheckParameter3, (int)inited);
  }
  CmpUnlockRegistry();
  CmpFinishBeingActiveFlusherAndReconciler(v4);
  v25 = *((_QWORD *)v4 + 8);
  if ( *(_DWORD *)(v25 + 4092) || (*(_DWORD *)(v25 + 4088) & 4) != 0 )
  {
    CmpFlushHive((ULONG_PTR)v4, 0xCu);
    CmpLockRegistry();
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v4 + 356), 1u);
    *(_DWORD *)(*((_QWORD *)v4 + 8) + 4092LL) = 0;
    *(_DWORD *)(*((_QWORD *)v4 + 8) + 4088LL) &= ~4u;
    ExReleaseResourceLite(*((PERESOURCE *)v4 + 356));
    CmpUnlockRegistry();
  }
  if ( BYTE2(NlsMbCodePageTag) )
    CmpDiskFullWarning();
  SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
  *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
  RtlAppendStringToString(&SystemHiveFullPathName, Source);
  if ( (int)CmpInitBackupHive((ULONG_PTR)v4, (ULONG_PTR)CmpMachineHiveList[v2]) < 0 )
    CmpDoIdleProcessing = 0;
LABEL_48:
  *((_DWORD *)v4 + 1340) |= 4u;
  if ( v1 == 3 )
  {
    CmpLockRegistry();
    ExAcquireResourceSharedLite(*((PERESOURCE *)v4 + 356), 1u);
    *((_DWORD *)v4 + 36) |= 0x200u;
    ExReleaseResourceLite(*((PERESOURCE *)v4 + 356));
    CmpUnlockRegistry();
  }
LABEL_14:
  BYTE1(CmpMachineHiveList[v2 + 7]) = 1;
  KeSetEvent((PRKEVENT)&CmpMachineHiveList[v2 + 11], 0, 0);
  if ( _InterlockedIncrement(&CmpLoadWorkerIncrement) == 5 && (unsigned int)CmpCheckHiveIndex < 6 )
    KeSetEvent(&CmpLoadWorkerDebugEvent, 0, 0);
  v6 = CmpMachineHiveList[v2 + 18];
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    LODWORD(CmpMachineHiveList[v2 + 17]) = 0;
    CmpMachineHiveList[v2 + 18] = 0LL;
  }
  PsTerminateSystemThread(inited);
}
