/*
 * XREFs of CmpLoadHiveThread @ 0x140598084
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     RtlSetAllBits @ 0x1400D8FF8 (RtlSetAllBits.c)
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     RtlAreBitsClear @ 0x14011717C (RtlAreBitsClear.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SetFailureLocation @ 0x1401DE608 (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpInitHiveFromFile @ 0x14044A738 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 *     CmpGetFileSize @ 0x1404AF9D0 (CmpGetFileSize.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     PsTerminateSystemThread @ 0x140557A14 (PsTerminateSystemThread.c)
 *     RtlAppendStringToString @ 0x14055A36C (RtlAppendStringToString.c)
 *     CmpInitBackupHive @ 0x1405985E0 (CmpInitBackupHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14059876C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     HvpDropPagedBins @ 0x1405987EC (HvpDropPagedBins.c)
 *     CmpMarkCurrentValueDirty @ 0x1405989E8 (CmpMarkCurrentValueDirty.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140598A84 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpDiskFullWarning @ 0x14065AE40 (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x1406F78B0 (ExRaiseHardError.c)
 */

void __fastcall CmpLoadHiveThread(PVOID StartContext)
{
  unsigned int v1; // r12d
  char v2; // r14
  ULONG_PTR v3; // r15
  __int64 v4; // rsi
  ULONG_PTR inited; // rbx
  wchar_t *v6; // rdi
  ULONG_PTR v7; // rdi
  wchar_t *v8; // rcx
  bool v9; // zf
  UNICODE_STRING *v10; // r13
  char v11; // al
  HANDLE v12; // r14
  HANDLE v13; // rax
  ULONG v14; // r14d
  ULONG v15; // ebx
  ULONG v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  struct _KEVENT *v19; // r14
  __int64 v20; // r15
  int Timeout; // [rsp+28h] [rbp-E0h]
  int v22; // [rsp+38h] [rbp-D0h]
  int v23; // [rsp+40h] [rbp-C8h]
  char v24; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+5Ch] [rbp-ACh] BYREF
  ULONG Length[2]; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR v27; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE v28; // [rsp+70h] [rbp-98h] BYREF
  HANDLE v29; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v30[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v31; // [rsp+88h] [rbp-80h] BYREF
  HANDLE v32; // [rsp+90h] [rbp-78h] BYREF
  ULONG_PTR v33; // [rsp+98h] [rbp-70h]
  int v34; // [rsp+A0h] [rbp-68h] BYREF
  wchar_t **v35; // [rsp+A8h] [rbp-60h] BYREF
  int v36; // [rsp+B0h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2[44]; // [rsp+B8h] [rbp-50h] BYREF

  v1 = (unsigned int)StartContext;
  v2 = 0;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v3 = (unsigned int)StartContext;
  v4 = 19LL * (unsigned int)StartContext;
  v33 = (unsigned int)StartContext;
  LODWORD(inited) = 0;
  KeWaitForSingleObject(&CmpMachineHiveList[v4 + 8], Executive, 0, 0, 0LL);
  if ( v1 == CmpCheckHiveIndex )
  {
    KeWaitForSingleObject(&CmpLoadWorkerDebugEvent, Executive, 0, 0, 0LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v6 = CmpMachineHiveList[v4 + 3];
  BYTE2(CmpMachineHiveList[v4 + 7]) = 1;
  if ( !v6 )
  {
    inited = (int)CmpInitHiveFromFile(
                    (PCUNICODE_STRING)&CmpMachineHiveList[v4 + 17],
                    (unsigned int)CmpMachineHiveList[v4 + 4],
                    &v27,
                    (char *)&CmpMachineHiveList[v4 + 7] + 3,
                    0x1000001u,
                    0LL,
                    v22,
                    v23,
                    (__int64)&v24,
                    BugCheckParameter2);
    if ( v1 == 6 && !byte_140316AAC && ((_DWORD)inited == -1073741772 || (_DWORD)inited == -1073741765)
      || ((__int64)CmpMachineHiveList[v4 + 4] & 0x8000) != 0
      && !BYTE4(CmpMachineHiveList[v4 + 7])
      && (_DWORD)inited == -1073741772 )
    {
      LODWORD(inited) = 0;
    }
    else
    {
      if ( (inited & 0x80000000) != 0LL
        || (v7 = v27, ((__int64)CmpMachineHiveList[v4 + 4] & 0x8000) == 0)
        && (!*(_QWORD *)(v27 + 2696) || !*(_QWORD *)(v27 + 2704)) )
      {
        CmpPuntBoot = 1;
        KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)BugCheckParameter2, v1, inited);
      }
      *(_DWORD *)(v27 + 5360) = HIDWORD(CmpMachineHiveList[v4 + 4]) | 4;
      CmpMachineHiveList[v4 + 6] = (wchar_t *)v7;
      if ( v24 )
      {
        CmpInitRmLogOnLoad = 1;
        v19 = &stru_140316720;
        v20 = 6LL;
        do
        {
          KeSetEvent(v19, 0, 0);
          v19 = (struct _KEVENT *)((char *)v19 + 152);
          --v20;
        }
        while ( v20 );
      }
      if ( (*(_DWORD *)(v7 + 144) & 0x8001) == 0 && (int)CmpInitBackupHive(v7, (ULONG_PTR)CmpMachineHiveList[v4]) < 0 )
        CmpDoIdleProcessing = 0;
    }
    goto LABEL_13;
  }
  v9 = (*((_DWORD *)v6 + 36) & 0x8001) == 0;
  v27 = (ULONG_PTR)v6;
  if ( !v9 )
  {
    if ( CmpMiniNTBoot || CmpVolatileBoot )
    {
      *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
      SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
      RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)&CmpMachineHiveList[v4 + 17]);
    }
    goto LABEL_43;
  }
  v10 = (UNICODE_STRING *)&CmpMachineHiveList[v4 + 17];
  LODWORD(inited) = CmpOpenHiveFile(v10, 0, &v32, &v25, 7, 0LL, (__int64)Length, 0LL, 0LL);
  if ( (inited & 0x80000000) != 0LL )
  {
    Timeout = 0;
    goto LABEL_71;
  }
  if ( v25 == 2 )
  {
    v2 = 1;
    v11 = 16;
  }
  else
  {
    v11 = 0;
  }
  LODWORD(inited) = CmpOpenHiveFile(v10, 4u, &v28, &v34, v11 | 2u, 0LL, 0LL, 0LL, 0LL);
  if ( (inited & 0x80000000) != 0LL )
  {
    Timeout = 16;
    goto LABEL_71;
  }
  LODWORD(inited) = CmpOpenHiveFile(v10, 5u, &v29, &v36, (v2 != 0 ? 0x10 : 0) | 2u, 0LL, 0LL, 0LL, 0LL);
  if ( (inited & 0x80000000) != 0LL )
  {
    Timeout = 32;
    goto LABEL_71;
  }
  v12 = v32;
  LODWORD(inited) = CmpGetFileSize(v32, &v31);
  if ( (inited & 0x80000000) != 0LL )
  {
    Timeout = 40;
    goto LABEL_71;
  }
  CmpBecomeActiveFlusherAndReconciler(v6);
  CmpLockRegistry();
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v6 + 356), 1u);
  v13 = v28;
  *((_QWORD *)v6 + 333) = v12;
  *((_QWORD *)v6 + 337) = v13;
  *((_QWORD *)v6 + 338) = v29;
  *((_QWORD *)v6 + 371) = v31;
  *((_DWORD *)v6 + 36) &= ~2u;
  *((_DWORD *)v6 + 1340) = HIDWORD(CmpMachineHiveList[v4 + 4]);
  *((_DWORD *)v6 + 42) = Length[1];
  v14 = 0;
  if ( (int)CmpDoFileSetSizeEx((__int64)v6, 0, (unsigned int)(*((_DWORD *)v6 + 350) + 4096), 1) < 0 )
  {
    BYTE2(NlsMbCodePageTag) = 1;
    *((_DWORD *)v6 + 36) &= ~0x20000u;
  }
  v15 = Length[0];
  if ( *((_DWORD *)v6 + 30) != Length[0] )
  {
    if ( *((_DWORD *)v6 + 18) )
    {
      do
      {
        if ( !RtlAreBitsClear((PRTL_BITMAP)(v6 + 36), v14, v15) )
          RtlSetBits((PRTL_BITMAP)(v6 + 36), v14, v15);
        v14 += v15;
      }
      while ( v14 < *((_DWORD *)v6 + 18) );
    }
    v16 = RtlNumberOfSetBits((PRTL_BITMAP)(v6 + 36));
    v3 = v33;
    *((_DWORD *)v6 + 22) = v16;
    *((_DWORD *)v6 + 30) = v15;
  }
  v17 = *((_QWORD *)v6 + 8);
  if ( *(_DWORD *)(v17 + 4092) || (*(_DWORD *)(v17 + 4088) & 4) != 0 )
  {
    RtlSetAllBits((PRTL_BITMAP)(v6 + 36));
    *((_DWORD *)v6 + 22) = *((_DWORD *)v6 + 18);
  }
  ExReleaseResourceLite(*((PERESOURCE *)v6 + 356));
  CmpUnlockRegistry();
  CmpLockRegistryExclusive();
  if ( v1 == 3 )
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)v6 + 356), 1u);
    CmpMarkCurrentValueDirty((ULONG_PTR)v6);
    ExReleaseResourceLite(*((PERESOURCE *)v6 + 356));
  }
  CmpMachineHiveList[v4 + 6] = v6;
  LODWORD(inited) = HvpDropPagedBins((ULONG_PTR)v6);
  if ( (inited & 0x80000000) != 0LL )
  {
    Timeout = 80;
LABEL_71:
    *((_QWORD *)v6 + 7) = BugCheckParameter2;
    BugCheckParameter2[0] = (ULONG_PTR)v6;
    SetFailureLocation((__int64)BugCheckParameter2, 0, 22, inited, Timeout);
    v35 = &CmpMachineHiveList[v4 + 17];
    CmpPuntBoot = 1;
    ExRaiseHardError(3221226008LL, 1LL, 1LL, &v35, 1, v30);
    KeBugCheckEx(0x74u, 2uLL, 1uLL, v3, (int)inited);
  }
  CmpUnlockRegistry();
  CmpFinishBeingActiveFlusherAndReconciler(v6);
  v18 = *((_QWORD *)v6 + 8);
  if ( *(_DWORD *)(v18 + 4092) || (*(_DWORD *)(v18 + 4088) & 4) != 0 )
  {
    CmpFlushHive((ULONG_PTR)v6, 0xCu);
    CmpLockRegistry();
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v6 + 356), 1u);
    *(_DWORD *)(*((_QWORD *)v6 + 8) + 4092LL) = 0;
    *(_DWORD *)(*((_QWORD *)v6 + 8) + 4088LL) &= ~4u;
    ExReleaseResourceLite(*((PERESOURCE *)v6 + 356));
    CmpUnlockRegistry();
  }
  if ( BYTE2(NlsMbCodePageTag) )
    CmpDiskFullWarning();
  *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
  SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
  RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)v10);
  if ( (int)CmpInitBackupHive((ULONG_PTR)v6, (ULONG_PTR)CmpMachineHiveList[v4]) < 0 )
    CmpDoIdleProcessing = 0;
LABEL_43:
  *((_DWORD *)v6 + 1340) |= 4u;
  if ( v1 == 3 )
  {
    CmpLockRegistry();
    ExAcquireResourceSharedLite(*((PERESOURCE *)v6 + 356), 1u);
    *((_DWORD *)v6 + 36) |= 0x200u;
    ExReleaseResourceLite(*((PERESOURCE *)v6 + 356));
    CmpUnlockRegistry();
  }
LABEL_13:
  BYTE1(CmpMachineHiveList[v4 + 7]) = 1;
  KeSetEvent((PRKEVENT)&CmpMachineHiveList[v4 + 11], 0, 0);
  if ( _InterlockedIncrement(&CmpLoadWorkerIncrement) == 5 && (unsigned int)CmpCheckHiveIndex < 6 )
    KeSetEvent(&CmpLoadWorkerDebugEvent, 0, 0);
  v8 = CmpMachineHiveList[v4 + 18];
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    LODWORD(CmpMachineHiveList[v4 + 17]) = 0;
    CmpMachineHiveList[v4 + 18] = 0LL;
  }
  PsTerminateSystemThread(inited);
}
