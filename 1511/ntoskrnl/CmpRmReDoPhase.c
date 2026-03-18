/*
 * XREFs of CmpRmReDoPhase @ 0x1405E6190
 * Callers:
 *     CmpStartRMLog @ 0x140542840 (CmpStartRMLog.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     HvBufferCheckSum @ 0x1403D6638 (HvBufferCheckSum.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmpDoReadTxRBigLogRecord @ 0x1405E5E04 (CmpDoReadTxRBigLogRecord.c)
 *     CmpRealignLogBuffers @ 0x1405E5F18 (CmpRealignLogBuffers.c)
 *     CmpDoReDoRecord @ 0x1405ED194 (CmpDoReDoRecord.c)
 */

int __fastcall CmpRmReDoPhase(__int64 a1, CLFS_LSN a2)
{
  _QWORD *v2; // rax
  _DWORD *v4; // rbx
  PVOID pvReadContext; // [rsp+50h] [rbp-30h] BYREF
  _DWORD *v7; // [rsp+58h] [rbp-28h] BYREF
  char *v8; // [rsp+60h] [rbp-20h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+68h] [rbp-18h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+70h] [rbp-10h] BYREF
  CLFS_LSN plsnRecord; // [rsp+78h] [rbp-8h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+A0h] [rbp+20h] BYREF
  CLFS_LSN plsnFirst; // [rsp+A8h] [rbp+28h] BYREF
  ULONG pcbBuffer; // [rsp+B0h] [rbp+30h] BYREF
  PVOID ppvReadBuffer; // [rsp+B8h] [rbp+38h] BYREF

  plsnFirst = a2;
  pvReadContext = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  peRecordType = 0;
  if ( (_QWORD *)*v2 == v2 )
    return (int)v2;
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
  while ( (int)v2 >= 0 )
  {
    if ( (peRecordType & 1) != 0
      && (int)CmpSearchAddTrans(0LL, (_QWORD *)a1, 0LL, 0LL, (__int128 *)ppvReadBuffer + 1, 0, &v8) >= 0 )
    {
      v4 = ppvReadBuffer;
      v7 = ppvReadBuffer;
      if ( *((int *)ppvReadBuffer + 3) < 0 )
      {
        LODWORD(v2) = CmpDoReadTxRBigLogRecord(pvReadContext, (unsigned int *)ppvReadBuffer, (PVOID *)&v7);
        if ( (int)v2 < 0 )
          break;
        v4 = v7;
      }
      if ( *v4 == (unsigned int)HvBufferCheckSum((__int64)v4, v4[1]) )
      {
        CmpRealignLogBuffers((__int64)v4);
        if ( (int)CmpDoReDoRecord(v8, v4) < 0 )
          goto LABEL_13;
      }
      else
      {
        if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
          __debugbreak();
LABEL_13:
        *((_DWORD *)v8 + 26) |= 2u;
      }
      if ( *((int *)ppvReadBuffer + 3) < 0 )
        ExFreePoolWithTag(v4, 0);
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
    if ( (_DWORD)v2 == -1073741807 )
      break;
  }
  if ( pvReadContext )
    LODWORD(v2) = ClfsTerminateReadLog(pvReadContext);
  return (int)v2;
}
