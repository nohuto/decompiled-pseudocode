/*
 * XREFs of CmpDoReadTxRBigLogRecord @ 0x14065CEE8
 * Callers:
 *     CmpRmReDoPhase @ 0x14065D354 (CmpRmReDoPhase.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpVerifyBigLogRecordChunk @ 0x14065D634 (CmpVerifyBigLogRecordChunk.c)
 */

__int64 __fastcall CmpDoReadTxRBigLogRecord(void *a1, unsigned int *a2, ULONG a3, char **a4, _DWORD *a5)
{
  unsigned int *v5; // rdi
  NTSTATUS v6; // ebx
  SIZE_T v7; // r12
  char *PoolWithTag; // rax
  char *v9; // rsi
  int v10; // r15d
  char *v11; // r13
  unsigned int v12; // ebp
  __int64 v13; // r14
  unsigned int v15; // [rsp+40h] [rbp-78h]
  PVOID ppvBuffer; // [rsp+48h] [rbp-70h] BYREF
  CLFS_LSN plsnRecord; // [rsp+50h] [rbp-68h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+58h] [rbp-60h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+60h] [rbp-58h] BYREF
  ULONG pcbBuffer; // [rsp+C8h] [rbp+10h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+D0h] [rbp+18h] BYREF
  char **v23; // [rsp+D8h] [rbp+20h]

  v23 = a4;
  v5 = a2;
  ppvBuffer = a2;
  pcbBuffer = a3;
  v6 = CmpVerifyBigLogRecordChunk(a2, a3);
  if ( v6 >= 0 )
  {
    v7 = v5[1];
    v15 = v5[12];
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x4D43u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v7);
      v10 = 0;
      v11 = v9;
      v12 = v7;
      while ( 1 )
      {
        if ( v5[13] != v10 )
          goto LABEL_10;
        v13 = v5[14];
        if ( (unsigned int)v13 > v12 )
          goto LABEL_10;
        memmove(v11, v5 + 16, (unsigned int)v13);
        v11 += v13;
        v12 -= v13;
        if ( ++v10 >= v15 )
          break;
        peRecordType = 1;
        v6 = ClfsReadNextLogRecord(
               a1,
               &ppvBuffer,
               &pcbBuffer,
               &peRecordType,
               0LL,
               &plsnUndoNext,
               &plsnPrevious,
               &plsnRecord);
        if ( v6 >= 0 )
        {
          v5 = (unsigned int *)ppvBuffer;
          v6 = CmpVerifyBigLogRecordChunk(ppvBuffer, pcbBuffer);
          if ( v6 >= 0 )
            continue;
        }
        goto LABEL_11;
      }
      if ( v12 )
      {
LABEL_10:
        v6 = -1073741762;
        goto LABEL_11;
      }
      *v23 = v9;
      v9 = 0LL;
      v6 = 0;
      *a5 = v7;
LABEL_11:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
