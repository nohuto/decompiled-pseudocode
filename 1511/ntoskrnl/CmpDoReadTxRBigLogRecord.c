/*
 * XREFs of CmpDoReadTxRBigLogRecord @ 0x1405E5E04
 * Callers:
 *     CmpRmReDoPhase @ 0x1405E6190 (CmpRmReDoPhase.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpDoReadTxRBigLogRecord(PVOID pvReadContext, unsigned int *a2, PVOID *a3)
{
  unsigned int v3; // r14d
  NTSTATUS v6; // ebx
  char *PoolWithTag; // rax
  char *v8; // rbp
  int v10; // esi
  CLFS_LSN plsnRecord; // [rsp+40h] [rbp-48h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+48h] [rbp-40h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+50h] [rbp-38h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+98h] [rbp+10h] BYREF
  ULONG pcbBuffer; // [rsp+A0h] [rbp+18h] BYREF
  PVOID ppvBuffer; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a2[12];
  peRecordType = 0;
  ppvBuffer = a2;
  v6 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, a2[1], 0x20204D43u);
  *a3 = PoolWithTag;
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = 0;
  while ( *((int *)ppvBuffer + 3) < 0 && *((_DWORD *)ppvBuffer + 13) == v10 )
  {
    memmove(v8, (char *)ppvBuffer + 64, *((unsigned int *)ppvBuffer + 14));
    ++v10;
    v8 += *((unsigned int *)ppvBuffer + 14);
    if ( !--v3 )
      goto LABEL_10;
    peRecordType = 1;
    v6 = ClfsReadNextLogRecord(
           pvReadContext,
           &ppvBuffer,
           &pcbBuffer,
           &peRecordType,
           0LL,
           &plsnUndoNext,
           &plsnPrevious,
           &plsnRecord);
    if ( v6 < 0 )
      goto LABEL_11;
  }
  v6 = -1073741762;
LABEL_10:
  if ( v6 >= 0 )
    return (unsigned int)v6;
LABEL_11:
  ExFreePoolWithTag(*a3, 0);
  *a3 = 0LL;
  return (unsigned int)v6;
}
