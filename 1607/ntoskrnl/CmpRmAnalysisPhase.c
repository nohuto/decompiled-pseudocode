/*
 * XREFs of CmpRmAnalysisPhase @ 0x140605680
 * Callers:
 *     CmpStartRMLog @ 0x1404BE0E4 (CmpStartRMLog.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x140401CEC (CmListGetNextElement.c)
 *     CmpTransSearchAddTransFromRm @ 0x1404C2298 (CmpTransSearchAddTransFromRm.c)
 */

__int64 __fastcall CmpRmAnalysisPhase(__int64 a1, CLFS_LSN a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r15
  _QWORD *v5; // r12
  NTSTATUS v6; // eax
  int v7; // esi
  CLFS_LSN v8; // rax
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
  CLFS_LSN plsnUser; // [rsp+D8h] [rbp+7Fh] BYREF

  plsnFirst = a2;
  pvReadContext = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  plsnUser.ullOffset = 0LL;
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
      v7 = CmpTransSearchAddTransFromRm((_QWORD *)a1, 0LL, (__int64)ppvReadBuffer + 16, 1, &plsnUser);
      if ( v7 < 0 )
        break;
      v8 = plsnUser;
      if ( !plsnUser.ullOffset )
      {
        v7 = -1072103422;
        break;
      }
      v9 = ppvReadBuffer;
      if ( *((_DWORD *)ppvReadBuffer + 2) == 16 )
      {
        *(_DWORD *)(plsnUser.ullOffset + 48) |= 4u;
        v8 = plsnUser;
        v9 = ppvReadBuffer;
      }
      if ( v9[2] == 8 )
      {
        *(_DWORD *)(v8.ullOffset + 48) |= 2u;
        v8 = plsnUser;
        v9 = ppvReadBuffer;
      }
      if ( v9[2] == 4 )
        *(_DWORD *)(v8.ullOffset + 48) |= 1u;
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
        plsnUser.ullOffset = (unsigned __int64)NextElement;
        if ( !NextElement )
          goto LABEL_25;
        if ( (*((_DWORD *)NextElement + 12) & 7) != 1 )
        {
          v11 = *(_QWORD *)NextElement;
          v12 = (char **)*((_QWORD *)NextElement + 1);
          if ( *(char **)(*(_QWORD *)NextElement + 8LL) != NextElement || *v12 != NextElement )
            __fastfail(3u);
          *v12 = (char *)v11;
          *(_QWORD *)(v11 + 8) = v12;
          ExFreePoolWithTag((PVOID)plsnUser.ullOffset, 0x72544D43u);
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
