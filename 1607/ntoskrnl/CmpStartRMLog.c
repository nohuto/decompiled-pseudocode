/*
 * XREFs of CmpStartRMLog @ 0x1404BE0E4
 * Callers:
 *     CmpStartRMLogs @ 0x1404BDCF0 (CmpStartRMLogs.c)
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1403F5028 (CmpQueryFileSecurityDescriptor.c)
 *     RtlStringFromGUIDEx @ 0x1403F6D4C (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpStartCLFSLog @ 0x1404BE47C (CmpStartCLFSLog.c)
 *     CmpQueryNameString @ 0x1404CC8A8 (CmpQueryNameString.c)
 *     LockRMLog @ 0x14051A148 (LockRMLog.c)
 *     CmpRmAnalysisPhase @ 0x140605680 (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x140605888 (CmpRmReDoPhase.c)
 *     CmpRmUnDoPhase @ 0x140605A30 (CmpRmUnDoPhase.c)
 */

__int64 __fastcall CmpStartRMLog(char *a1, _OWORD *a2)
{
  unsigned int v2; // edi
  CLFS_INFORMATION *PoolWithTag; // r15
  bool v6; // zf
  int started; // ebx
  __int64 v8; // r12
  ULONG_PTR v9; // rax
  PVOID *v10; // r14
  PLOG_FILE_OBJECT *v11; // r13
  __int64 v12; // rax
  CLFS_INFORMATION *v13; // rax
  CLFS_INFORMATION *v14; // rbx
  FILE_OBJECT *v15; // rcx
  PVOID v16; // rcx
  NTSTATUS v17; // ecx
  CLFS_LSN LastLsn; // rax
  PVOID v19; // rcx
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  CLFS_LSN v28; // rbx
  FILE_OBJECT *v29; // rcx
  int ppvReadContext; // [rsp+20h] [rbp-A9h]
  CLFS_LSN plsn2; // [rsp+50h] [rbp-79h] BYREF
  PVOID pvCursorContext; // [rsp+58h] [rbp-71h] BYREF
  PVOID P; // [rsp+60h] [rbp-69h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-61h] BYREF
  ULONG pcbInfoBuffer; // [rsp+78h] [rbp-51h] BYREF
  ULONG pcbRestartBuffer; // [rsp+7Ch] [rbp-4Dh] BYREF
  ULONG pcbReadBuffer; // [rsp+80h] [rbp-49h] BYREF
  PVOID pvReadContext; // [rsp+88h] [rbp-41h] BYREF
  PCUNICODE_STRING Source; // [rsp+90h] [rbp-39h]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-31h] BYREF
  PVOID ppvRestartBuffer; // [rsp+A8h] [rbp-21h] BYREF
  CLFS_LSN plsn; // [rsp+B0h] [rbp-19h] BYREF
  CLFS_LSN plsnFirst; // [rsp+B8h] [rbp-11h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+C0h] [rbp-9h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+C8h] [rbp-1h] BYREF
  PVOID ppvReadBuffer; // [rsp+D0h] [rbp+7h] BYREF
  CLFS_LSN plsnRecord; // [rsp+D8h] [rbp+Fh] BYREF
  CLS_LSN pvRestartBuffer[8]; // [rsp+E0h] [rbp+17h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+130h] [rbp+67h] BYREF
  char v50; // [rsp+140h] [rbp+77h]
  ULONG pcbWritten; // [rsp+148h] [rbp+7Fh] BYREF

  v2 = 0;
  v50 = 1;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  pcbRestartBuffer = 0;
  pvCursorContext = 0LL;
  P = 0LL;
  LockRMLog(a1);
  if ( (*((_DWORD *)a1 + 26) & 1) != 0 )
    goto LABEL_41;
  PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  if ( !PoolWithTag )
  {
    v2 = -1073741670;
LABEL_41:
    ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v25, v26, v27);
    return v2;
  }
  *((_DWORD *)a1 + 26) |= 2u;
  v6 = a1 == CmRmSystem;
  *((_QWORD *)a1 + 15) = CLFS_LSN_INVALID_EXT;
  if ( v6 )
  {
    Source = &CmpLogPath;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(qword_1402F2E60 + 64) + 128LL) = *a2;
    started = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(qword_1402F2E60 + 64) + 128LL), &GuidString, 1u);
    if ( started < 0 )
      goto LABEL_33;
    v8 = (__int64)(a1 + 72);
    *((_QWORD *)a1 + 9) = 5242880LL;
    v9 = qword_1402F2E60;
  }
  else
  {
    started = CmpQueryNameString(*(_QWORD *)(*((_QWORD *)a1 + 10) + 2664LL), &UnicodeString);
    if ( started < 0 )
      goto LABEL_33;
    Source = &UnicodeString;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL) = *a2;
    started = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL), &GuidString, 1u);
    if ( started < 0 )
      goto LABEL_33;
    v9 = *((_QWORD *)a1 + 10);
    v8 = (__int64)(a1 + 72);
    *((_QWORD *)a1 + 9) = 0x100000LL;
  }
  started = CmpQueryFileSecurityDescriptor(*(HANDLE *)(v9 + 2664), &P);
  if ( started < 0 )
  {
    P = 0LL;
  }
  else
  {
    v10 = (PVOID *)(a1 + 96);
    v11 = (PLOG_FILE_OBJECT *)(a1 + 88);
    v12 = (__int64)(a1 + 68);
    while ( 1 )
    {
      started = CmpStartCLFSLog(Source, &GuidString, ppvReadContext, v8, v12, (__int64)v11, (__int64)(a1 + 96));
      if ( started < 0 )
        break;
      pcbInfoBuffer = 120;
      v13 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
      v14 = v13;
      if ( v13 )
      {
        ClfsGetLogFileInformation(*v11, v13, &pcbInfoBuffer);
        ExFreePoolWithTag(v14, 0);
      }
      v15 = *v11;
      pcbWritten = 120;
      started = ClfsGetLogFileInformation(v15, PoolWithTag, &pcbWritten);
      *((_QWORD *)a1 + 15) = PoolWithTag->BaseLsn.ullOffset;
      if ( started < 0 )
        break;
      if ( ClfsReadRestartArea(*v10, &ppvRestartBuffer, &pcbRestartBuffer, &plsn, &pvCursorContext) == 1075445772
        || !ppvRestartBuffer )
      {
        plsn2 = PoolWithTag->BaseLsn;
      }
      else
      {
        plsn2 = *(CLFS_LSN *)ppvRestartBuffer;
        if ( ClfsLsnEqual(&plsn, &plsn2) )
        {
          v16 = *v10;
          plsnFirst = plsn2;
          pvReadContext = 0LL;
          peRecordType = 0;
          if ( ClfsReadLogRecord(
                 v16,
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
            v17 = ClfsReadNextLogRecord(
                    pvReadContext,
                    &ppvReadBuffer,
                    &pcbReadBuffer,
                    &peRecordType,
                    0LL,
                    &plsnUndoNext,
                    &plsnPrevious,
                    &plsnRecord);
            if ( v17 == -1073741807 )
            {
              LastLsn = PoolWithTag->LastLsn;
            }
            else
            {
              LastLsn = plsn2;
              if ( v17 >= 0 )
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
        v28 = plsn2;
        if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))CmpRmAnalysisPhase)(a1, (CLFS_LSN)plsn2.ullOffset) >= 0 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD))CmpRmReDoPhase)(a1, (CLFS_LSN)v28.ullOffset);
          CmpRmUnDoPhase(a1);
        }
        *((_DWORD *)a1 + 26) &= ~4u;
      }
      v19 = *v10;
      pvRestartBuffer[0] = PoolWithTag->LastLsn;
      v20 = ClfsWriteRestartArea(v19, pvRestartBuffer, 8u, 0LL, 0, &pcbWritten, 0LL);
      started = v20;
      if ( !v50 || v20 != -1072037859 && *((_DWORD *)a1 + 17) <= 0xAu )
        break;
      v50 = 0;
      if ( pvCursorContext )
      {
        ClfsTerminateReadLog(pvCursorContext);
        pvCursorContext = 0LL;
      }
      v11 = (PLOG_FILE_OBJECT *)(a1 + 88);
      ClfsDeleteLogByPointer(*((PLOG_FILE_OBJECT *)a1 + 11));
      ClfsDeleteMarshallingArea(*v10);
      v29 = (FILE_OBJECT *)*((_QWORD *)a1 + 11);
      *v10 = 0LL;
      ClfsCloseLogFileObject(v29);
      v12 = (__int64)(a1 + 68);
      *((_QWORD *)a1 + 11) = 0LL;
      *((_DWORD *)a1 + 17) = 0;
    }
    if ( pvCursorContext )
      ClfsTerminateReadLog(pvCursorContext);
    if ( started < 0 )
    {
      if ( *v10 )
        *v10 = 0LL;
    }
    else
    {
      *((_DWORD *)a1 + 26) = *((_DWORD *)a1 + 26) & 0xFFFFFFFC | 1;
    }
  }
LABEL_33:
  ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  if ( GuidString.Buffer )
    RtlFreeAnsiString(&GuidString);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)started;
}
