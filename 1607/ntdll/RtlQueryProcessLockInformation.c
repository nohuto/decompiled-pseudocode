/*
 * XREFs of RtlQueryProcessLockInformation @ 0x1800D5040
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18006D3B0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlpCommitQueryDebugInfo @ 0x18006DF8C (RtlpCommitQueryDebugInfo.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800D5654 (RtlpDeCommitQueryDebugInfo.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800F7334 (RtlIsAnyDebuggerPresent.c)
 */

__int64 __fastcall RtlQueryProcessLockInformation(_QWORD *a1)
{
  _QWORD *v1; // rsi
  int v2; // ebx
  char *DebugInfo; // rax
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // r14
  _QWORD *v9; // r12
  _UNKNOWN **v10; // r15
  _UNKNOWN **v11; // r13
  char *v12; // rax
  char *v13; // rsi
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  bool v16; // cl
  char *v17; // [rsp+20h] [rbp-78h]
  _UNKNOWN **v18; // [rsp+28h] [rbp-70h]
  _QWORD *v19; // [rsp+30h] [rbp-68h]
  bool v21; // [rsp+A8h] [rbp+10h]
  bool v22; // [rsp+B0h] [rbp+18h]

  v1 = a1;
  v2 = 0;
  DebugInfo = RtlpCommitQueryDebugInfo(a1, 8u);
  v7 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_DWORD *)DebugInfo = 0;
  v22 = 0;
  v21 = 0;
  RtlAcquireSRWLockShared(&RtlCriticalSectionLock, v4, v5, v6);
  v9 = RtlCriticalSectionList;
  v19 = RtlCriticalSectionList;
  v10 = (_UNKNOWN **)RtlCriticalSectionList;
  v18 = (_UNKNOWN **)RtlCriticalSectionList;
  while ( v10 != &RtlCriticalSectionList )
  {
    v11 = v10 - 2;
    v12 = RtlpCommitQueryDebugInfo(v1, 0x30u);
    v13 = v12;
    v17 = v12;
    if ( !v12 )
    {
      v2 = -1073741801;
LABEL_7:
      v1 = a1;
      break;
    }
    memset(v12, 0, 0x30uLL);
    *(_QWORD *)v13 = v11[1];
    *((_WORD *)v13 + 4) = *(_WORD *)v11;
    *((_WORD *)v13 + 5) = *((_WORD *)v11 + 1);
    if ( *((_WORD *)v13 + 4) )
    {
      if ( *((_WORD *)v13 + 4) == 1 )
      {
        v15 = v11[1];
        *((_DWORD *)v13 + 7) = *(_DWORD *)(v15[11] + 36LL);
        *((_QWORD *)v13 + 2) = v15[9];
        *((_DWORD *)v17 + 6) = *((_DWORD *)v15 + 17);
        *((_DWORD *)v17 + 10) = *((_DWORD *)v15 + 12);
        *((_DWORD *)v17 + 11) = *((_DWORD *)v15 + 16);
        v2 = 0;
        v16 = v21;
        v10 = v18;
        v9 = v19;
        goto LABEL_15;
      }
      if ( (unsigned __int8)RtlIsAnyDebuggerPresent() )
        __debugbreak();
    }
    else
    {
      v14 = v11[1];
      *((_QWORD *)v13 + 2) = v14[2];
      *((_DWORD *)v13 + 6) = *((_DWORD *)v14 + 2);
      *((_DWORD *)v13 + 9) = *((_DWORD *)v14 + 3);
      *((_DWORD *)v13 + 7) = *((_DWORD *)v11 + 9);
      *((_DWORD *)v13 + 8) = *((_DWORD *)v11 + 8);
    }
    v16 = v22;
LABEL_15:
    ++*(_DWORD *)v7;
    v10 = (_UNKNOWN **)*v10;
    v18 = v10;
    if ( v10 == v9 )
    {
      v2 = -1073741595;
      goto LABEL_7;
    }
    if ( v16 )
    {
      v9 = (_QWORD *)*v9;
      v19 = v9;
    }
    v22 = !v16;
    v21 = !v16;
    v1 = a1;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  if ( v2 < 0 )
    RtlpDeCommitQueryDebugInfo(v1, v7, 8LL);
  else
    v1[15] = v7;
  return (unsigned int)v2;
}
