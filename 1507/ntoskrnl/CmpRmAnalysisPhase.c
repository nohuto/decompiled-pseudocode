/*
 * XREFs of CmpRmAnalysisPhase @ 0x14065D144
 * Callers:
 *     CmpStartRMLog @ 0x1405B8B98 (CmpStartRMLog.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpRmAnalysisPhase(__int64 a1, CLFS_LSN a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // r14
  _QWORD *v5; // r15
  NTSTATUS v6; // eax
  int v7; // edi
  _DWORD *v8; // rax
  _DWORD *v9; // rcx
  char *NextElement; // rax
  __int64 v11; // rdx
  char **v12; // rcx
  PVOID ppvReadBuffer; // [rsp+50h] [rbp-9h] BYREF
  PVOID pvReadContext; // [rsp+58h] [rbp-1h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+60h] [rbp+7h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+70h] [rbp+17h] BYREF
  CLFS_LSN plsnRecord; // [rsp+78h] [rbp+1Fh] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+C0h] [rbp+67h] BYREF
  CLFS_LSN plsnFirst; // [rsp+C8h] [rbp+6Fh] BYREF
  ULONG pcbBuffer; // [rsp+D0h] [rbp+77h] BYREF
  PVOID P; // [rsp+D8h] [rbp+7Fh] BYREF

  plsnFirst = a2;
  pvReadContext = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  P = 0LL;
  peRecordType = 0;
  if ( (_QWORD *)*v2 == v2 )
  {
    v4 = 0LL;
    v5 = 0LL;
  }
  else
  {
    *(_QWORD *)(*v2 + 8LL) = *(_QWORD *)(a1 + 24);
    **(_QWORD **)(a1 + 24) = *v2;
    v4 = *v2;
    v5 = *(_QWORD **)(*v2 + 8LL);
    *(_QWORD *)(a1 + 24) = a1 + 16;
    *v2 = v2;
  }
  v6 = ClfsReadLogRecord(
         *(PVOID *)(a1 + 96),
         &plsnFirst,
         ClfsContextForward,
         &ppvReadBuffer,
         &pcbBuffer,
         &peRecordType,
         &plsnUndoNext,
         &plsnPrevious,
         &pvReadContext);
  v7 = v6;
  while ( v6 >= 0 )
  {
    if ( (peRecordType & 1) != 0 && pcbBuffer >= 0x30 )
    {
      v7 = CmpSearchAddTrans(0LL, (_QWORD *)a1, 0LL, 0LL, (__int128 *)ppvReadBuffer + 1, 1, (char **)&P);
      if ( v7 < 0 )
        break;
      v8 = P;
      if ( !P )
      {
        v7 = -1072103422;
        break;
      }
      v9 = ppvReadBuffer;
      if ( *((_DWORD *)ppvReadBuffer + 2) == 16 )
      {
        *((_DWORD *)P + 26) |= 4u;
        v8 = P;
        v9 = ppvReadBuffer;
      }
      if ( v9[2] == 8 )
      {
        v8[26] |= 2u;
        v8 = P;
        v9 = ppvReadBuffer;
      }
      if ( v9[2] == 4 )
        v8[26] |= 1u;
    }
    peRecordType = 1;
    v6 = ClfsReadNextLogRecord(
           pvReadContext,
           &ppvReadBuffer,
           &pcbBuffer,
           &peRecordType,
           0LL,
           &plsnUndoNext,
           &plsnPrevious,
           &plsnRecord);
    v7 = v6;
    if ( v6 == -1073741807 )
    {
      v7 = 0;
LABEL_18:
      v18 = 0LL;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v2, &v18, 0);
        P = NextElement;
        if ( !NextElement )
          goto LABEL_25;
        if ( (*((_DWORD *)NextElement + 26) & 7) != 1 )
        {
          v11 = *(_QWORD *)NextElement;
          v12 = (char **)*((_QWORD *)NextElement + 1);
          if ( *(char **)(*(_QWORD *)NextElement + 8LL) != NextElement || *v12 != NextElement )
            __fastfail(3u);
          *v12 = (char *)v11;
          *(_QWORD *)(v11 + 8) = v12;
          ExFreePoolWithTag(P, 0x72544D43u);
          goto LABEL_18;
        }
      }
    }
  }
LABEL_25:
  if ( pvReadContext )
    ClfsTerminateReadLog(pvReadContext);
  if ( v4 )
  {
    *v5 = v2;
    *(_QWORD *)(v4 + 8) = *(_QWORD *)(a1 + 24);
    **(_QWORD **)(a1 + 24) = v4;
    *(_QWORD *)(a1 + 24) = v5;
  }
  return (unsigned int)v7;
}
