/*
 * XREFs of CmpRmReDoPhase @ 0x1406057D4
 * Callers:
 *     CmpStartRMLog @ 0x1404DAAE0 (CmpStartRMLog.c)
 * Callees:
 *     MiDeleteSubsection @ 0x140087410 (MiDeleteSubsection.c)
 *     CmpTransSearchAddTransFromRm @ 0x1404DEC94 (CmpTransSearchAddTransFromRm.c)
 *     CmpDoReadTxRBigLogRecord @ 0x140605378 (CmpDoReadTxRBigLogRecord.c)
 *     CmpRealignLogBuffers @ 0x1406054E8 (CmpRealignLogBuffers.c)
 *     CmpVerifyLogRecord @ 0x140605B40 (CmpVerifyLogRecord.c)
 *     CmpDoReDoRecord @ 0x140611924 (CmpDoReDoRecord.c)
 */

int __fastcall CmpRmReDoPhase(__int64 a1, CLFS_LSN a2)
{
  _QWORD *v2; // rax
  struct _PRIVILEGE_SET *v4; // rdi
  int v5; // eax
  PVOID ppvReadBuffer; // [rsp+58h] [rbp+7h] BYREF
  PVOID pvReadContext; // [rsp+60h] [rbp+Fh] BYREF
  struct _PRIVILEGE_SET *v9; // [rsp+68h] [rbp+17h] BYREF
  __int64 v10; // [rsp+70h] [rbp+1Fh] BYREF
  CLFS_LSN plsnPrevious; // [rsp+78h] [rbp+27h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+80h] [rbp+2Fh] BYREF
  CLFS_LSN plsnRecord; // [rsp+88h] [rbp+37h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+B8h] [rbp+67h] BYREF
  CLFS_LSN plsnFirst; // [rsp+C0h] [rbp+6Fh] BYREF
  CLFS_LSN plsnUser; // [rsp+C8h] [rbp+77h] BYREF
  ULONG pcbBuffer; // [rsp+D0h] [rbp+7Fh] BYREF

  plsnFirst = a2;
  pvReadContext = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  peRecordType = 0;
  if ( (_QWORD *)*v2 != v2 )
  {
    LODWORD(v2) = ClfsReadLogRecord(
                    *(PVOID *)(a1 + 96),
                    &plsnFirst,
                    ClfsContextForward,
                    &ppvReadBuffer,
                    &pcbBuffer,
                    &peRecordType,
                    &plsnUndoNext,
                    &plsnPrevious,
                    &pvReadContext);
    do
    {
      if ( (int)v2 < 0 )
        break;
      if ( (peRecordType & 1) != 0 )
      {
        LODWORD(v2) = CmpTransSearchAddTransFromRm((_QWORD *)a1, 0LL, (__int64)ppvReadBuffer + 16, 0, &v10);
        if ( (int)v2 >= 0 )
        {
          v4 = (struct _PRIVILEGE_SET *)ppvReadBuffer;
          v9 = (struct _PRIVILEGE_SET *)ppvReadBuffer;
          plsnUser.offset.idxRecord = pcbBuffer;
          if ( pcbBuffer < 0x30 )
            break;
          if ( *((int *)ppvReadBuffer + 3) < 0 )
          {
            LODWORD(v2) = CmpDoReadTxRBigLogRecord(
                            pvReadContext,
                            (unsigned int *)ppvReadBuffer,
                            pcbBuffer,
                            &v9,
                            &plsnUser);
            if ( (int)v2 < 0 )
              break;
            v4 = v9;
          }
          v5 = CmpVerifyLogRecord(v4);
          if ( v5 >= 0 )
          {
            CmpRealignLogBuffers((__int64)v4);
            v5 = CmpDoReDoRecord(v10, v4);
          }
          else if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
          {
            __debugbreak();
          }
          if ( v5 < 0 )
            *(_DWORD *)(v10 + 48) |= 2u;
          if ( *((int *)ppvReadBuffer + 3) < 0 )
            MiDeleteSubsection(v4);
        }
      }
      peRecordType = 1;
      LODWORD(v2) = ClfsReadNextLogRecord(
                      pvReadContext,
                      &ppvReadBuffer,
                      &pcbBuffer,
                      &peRecordType,
                      0LL,
                      &plsnUndoNext,
                      &plsnPrevious,
                      &plsnRecord);
    }
    while ( (_DWORD)v2 != -1073741807 );
    if ( pvReadContext )
      LODWORD(v2) = ClfsTerminateReadLog(pvReadContext);
  }
  return (int)v2;
}
