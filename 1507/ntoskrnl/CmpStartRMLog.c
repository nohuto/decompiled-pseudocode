/*
 * XREFs of CmpStartRMLog @ 0x1405B8B98
 * Callers:
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x1404F2804 (CmpStartRMLogs.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14044B65C (CmpQueryFileSecurityDescriptor.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmpQueryNameString @ 0x1404EC478 (CmpQueryNameString.c)
 *     LockRMLog @ 0x1404F2704 (LockRMLog.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 *     CmpStartCLFSLog @ 0x1405B9014 (CmpStartCLFSLog.c)
 *     CmpRmAnalysisPhase @ 0x14065D144 (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x14065D354 (CmpRmReDoPhase.c)
 *     CmpRmUnDoPhase @ 0x14065D500 (CmpRmUnDoPhase.c)
 */

__int64 __fastcall CmpStartRMLog(char *a1, _OWORD *a2)
{
  CLFS_INFORMATION *PoolWithTag; // r14
  bool v5; // zf
  int started; // ebx
  __int64 v7; // r15
  ULONG_PTR v8; // rax
  PVOID *v9; // rsi
  PLOG_FILE_OBJECT *v10; // r13
  _DWORD *i; // r12
  CLFS_INFORMATION *v12; // rax
  CLFS_INFORMATION *v13; // rbx
  FILE_OBJECT *v14; // rcx
  PVOID v15; // rcx
  NTSTATUS v16; // ecx
  CLFS_LSN LastLsn; // rax
  PVOID v18; // rcx
  NTSTATUS v19; // eax
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v24; // ax
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  CLFS_LSN v27; // rbx
  FILE_OBJECT *v28; // rcx
  int ppvReadContext; // [rsp+20h] [rbp-A9h]
  CLFS_LSN plsn2; // [rsp+50h] [rbp-79h] BYREF
  PVOID pvCursorContext; // [rsp+58h] [rbp-71h] BYREF
  PVOID P; // [rsp+60h] [rbp-69h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-61h] BYREF
  PVOID pvReadContext; // [rsp+78h] [rbp-51h] BYREF
  PCUNICODE_STRING Source; // [rsp+80h] [rbp-49h]
  ULONG pcbReadBuffer; // [rsp+88h] [rbp-41h] BYREF
  ULONG pcbInfoBuffer; // [rsp+8Ch] [rbp-3Dh] BYREF
  ULONG pcbRestartBuffer; // [rsp+90h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-31h] BYREF
  PVOID ppvRestartBuffer; // [rsp+A8h] [rbp-21h] BYREF
  CLFS_LSN plsnRecord; // [rsp+B0h] [rbp-19h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+B8h] [rbp-11h] BYREF
  CLS_LSN pvRestartBuffer; // [rsp+C0h] [rbp-9h] BYREF
  PVOID ppvReadBuffer; // [rsp+C8h] [rbp-1h] BYREF
  CLFS_LSN plsn; // [rsp+D0h] [rbp+7h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+D8h] [rbp+Fh] BYREF
  CLFS_LSN plsnFirst; // [rsp+E0h] [rbp+17h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+130h] [rbp+67h] BYREF
  char v49; // [rsp+140h] [rbp+77h]
  ULONG pcbWritten; // [rsp+148h] [rbp+7Fh] BYREF

  v49 = 1;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  pcbRestartBuffer = 0;
  pvCursorContext = 0LL;
  P = 0LL;
  LockRMLog((__int64)a1);
  if ( (*((_DWORD *)a1 + 26) & 1) != 0 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
    CurrentThread = KeGetCurrentThread();
    v24 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v24;
    if ( !v24
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 0LL;
  }
  else
  {
    PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
    if ( PoolWithTag )
    {
      *((_DWORD *)a1 + 26) |= 2u;
      v5 = a1 == CmRmSystem;
      *((_QWORD *)a1 + 15) = CLFS_LSN_INVALID_EXT;
      if ( v5 )
      {
        Source = &CmpLogPath;
        if ( a2 )
          *(_OWORD *)(*(_QWORD *)(qword_1403168C0 + 64) + 128LL) = *a2;
        started = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(qword_1403168C0 + 64) + 128LL), &GuidString, 1u);
        if ( started < 0 )
          goto LABEL_33;
        v7 = (__int64)(a1 + 72);
        *((_QWORD *)a1 + 9) = 5242880LL;
        v8 = qword_1403168C0;
      }
      else
      {
        started = CmpQueryNameString(*(void **)(*((_QWORD *)a1 + 10) + 2664LL), &UnicodeString);
        if ( started < 0 )
          goto LABEL_33;
        Source = &UnicodeString;
        if ( a2 )
          *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL) = *a2;
        started = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL), &GuidString, 1u);
        if ( started < 0 )
          goto LABEL_33;
        v8 = *((_QWORD *)a1 + 10);
        v7 = (__int64)(a1 + 72);
        *((_QWORD *)a1 + 9) = 0x100000LL;
      }
      started = CmpQueryFileSecurityDescriptor(*(HANDLE *)(v8 + 2664), &P);
      if ( started < 0 )
      {
        P = 0LL;
      }
      else
      {
        v9 = (PVOID *)(a1 + 96);
        v10 = (PLOG_FILE_OBJECT *)(a1 + 88);
        for ( i = a1 + 68; ; *i = 0 )
        {
          started = CmpStartCLFSLog(
                      Source,
                      &GuidString,
                      ppvReadContext,
                      v7,
                      (__int64)i,
                      (__int64)(a1 + 88),
                      (__int64)(a1 + 96));
          if ( started < 0 )
            break;
          pcbInfoBuffer = 120;
          v12 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
          v13 = v12;
          if ( v12 )
          {
            ClfsGetLogFileInformation(*v10, v12, &pcbInfoBuffer);
            ExFreePoolWithTag(v13, 0);
          }
          v14 = *v10;
          pcbWritten = 120;
          started = ClfsGetLogFileInformation(v14, PoolWithTag, &pcbWritten);
          *((_QWORD *)a1 + 15) = PoolWithTag->BaseLsn.ullOffset;
          if ( started < 0 )
            break;
          if ( ClfsReadRestartArea(*v9, &ppvRestartBuffer, &pcbRestartBuffer, &plsn, &pvCursorContext) == 1075445772
            || !ppvRestartBuffer )
          {
            plsn2 = PoolWithTag->BaseLsn;
          }
          else
          {
            plsn2 = *(CLFS_LSN *)ppvRestartBuffer;
            if ( ClfsLsnEqual(&plsn, &plsn2) )
            {
              v15 = *v9;
              plsnFirst = plsn2;
              pvReadContext = 0LL;
              peRecordType = 0;
              if ( ClfsReadLogRecord(
                     v15,
                     &plsnFirst,
                     ClfsContextForward,
                     &ppvReadBuffer,
                     &pcbReadBuffer,
                     &peRecordType,
                     &plsnUndoNext,
                     &plsnPrevious,
                     &pvReadContext) >= 0 )
              {
                peRecordType = 1;
                v16 = ClfsReadNextLogRecord(
                        pvReadContext,
                        &ppvReadBuffer,
                        &pcbReadBuffer,
                        &peRecordType,
                        0LL,
                        &plsnUndoNext,
                        &plsnPrevious,
                        &plsnRecord);
                if ( v16 == -1073741807 )
                {
                  LastLsn = PoolWithTag->LastLsn;
                }
                else
                {
                  LastLsn = plsn2;
                  if ( v16 >= 0 )
                    LastLsn = plsnRecord;
                }
                plsn2 = LastLsn;
              }
              if ( pvReadContext )
                ClfsTerminateReadLog(pvReadContext);
            }
          }
          if ( pvCursorContext )
          {
            ClfsTerminateReadLog(pvCursorContext);
            pvCursorContext = 0LL;
          }
          if ( !ClfsLsnEqual(&plsn2, &PoolWithTag->LastLsn) && (*((_DWORD *)a1 + 26) & 4) != 0 )
          {
            v27 = plsn2;
            if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))CmpRmAnalysisPhase)(a1, (CLFS_LSN)plsn2.ullOffset) >= 0 )
            {
              ((void (__fastcall *)(_QWORD, _QWORD))CmpRmReDoPhase)(a1, (CLFS_LSN)v27.ullOffset);
              CmpRmUnDoPhase(a1);
            }
            *((_DWORD *)a1 + 26) &= ~4u;
          }
          v18 = *v9;
          pvRestartBuffer = PoolWithTag->LastLsn;
          v19 = ClfsWriteRestartArea(v18, &pvRestartBuffer, 8u, 0LL, 0, &pcbWritten, 0LL);
          started = v19;
          if ( !v49 )
            break;
          i = a1 + 68;
          if ( v19 != -1072037859 && *i <= 0xAu )
            break;
          v49 = 0;
          if ( pvCursorContext )
          {
            ClfsTerminateReadLog(pvCursorContext);
            pvCursorContext = 0LL;
          }
          ClfsDeleteLogByPointer(*v10);
          ClfsDeleteMarshallingArea(*v9);
          v28 = *v10;
          *v9 = 0LL;
          ClfsCloseLogFileObject(v28);
          *v10 = 0LL;
        }
        if ( pvCursorContext )
          ClfsTerminateReadLog(pvCursorContext);
        if ( started < 0 )
        {
          if ( *v9 )
            *v9 = 0LL;
        }
        else
        {
          *((_DWORD *)a1 + 26) = *((_DWORD *)a1 + 26) & 0xFFFFFFFC | 1;
        }
      }
LABEL_33:
      ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
      v20 = KeGetCurrentThread();
      v21 = v20->KernelApcDisable + 1;
      v20->KernelApcDisable = v21;
      if ( !v21
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
        && !v20->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( UnicodeString.Buffer )
        RtlFreeAnsiString(&UnicodeString);
      if ( GuidString.Buffer )
        RtlFreeAnsiString(&GuidString);
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)started;
    }
    ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
    v25 = KeGetCurrentThread();
    v26 = v25->KernelApcDisable + 1;
    v25->KernelApcDisable = v26;
    if ( !v26
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
      && !v25->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225626LL;
  }
}
