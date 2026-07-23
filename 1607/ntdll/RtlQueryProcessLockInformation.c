/*
 * XREFs of RtlQueryProcessLockInformation @ 0x1800D5100
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18006D3A0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlpCommitQueryDebugInfo @ 0x18006DF7C (RtlpCommitQueryDebugInfo.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800D5714 (RtlpDeCommitQueryDebugInfo.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800F7334 (RtlIsAnyDebuggerPresent.c)
 */

__int64 __fastcall RtlQueryProcessLockInformation(_QWORD *a1)
{
  _QWORD *v1; // rsi
  int v2; // ebx
  char *DebugInfo; // rax
  char *v4; // r14
  _QWORD *v6; // r12
  _UNKNOWN **v7; // r15
  _UNKNOWN **v8; // r13
  char *v9; // rax
  char *v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  bool v13; // cl
  char *v14; // [rsp+20h] [rbp-78h]
  _UNKNOWN **v15; // [rsp+28h] [rbp-70h]
  _QWORD *v16; // [rsp+30h] [rbp-68h]
  bool v18; // [rsp+A8h] [rbp+10h]
  bool v19; // [rsp+B0h] [rbp+18h]

  v1 = a1;
  v2 = 0;
  DebugInfo = RtlpCommitQueryDebugInfo(a1, 8u);
  v4 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_DWORD *)DebugInfo = 0;
  v19 = 0;
  v18 = 0;
  RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
  v6 = RtlCriticalSectionList;
  v16 = RtlCriticalSectionList;
  v7 = (_UNKNOWN **)RtlCriticalSectionList;
  v15 = (_UNKNOWN **)RtlCriticalSectionList;
  while ( v7 != &RtlCriticalSectionList )
  {
    v8 = v7 - 2;
    v9 = RtlpCommitQueryDebugInfo(v1, 0x30u);
    v10 = v9;
    v14 = v9;
    if ( !v9 )
    {
      v2 = -1073741801;
LABEL_7:
      v1 = a1;
      break;
    }
    memset(v9, 0, 0x30uLL);
    *(_QWORD *)v10 = v8[1];
    *((_WORD *)v10 + 4) = *(_WORD *)v8;
    *((_WORD *)v10 + 5) = *((_WORD *)v8 + 1);
    if ( *((_WORD *)v10 + 4) )
    {
      if ( *((_WORD *)v10 + 4) == 1 )
      {
        v12 = v8[1];
        *((_DWORD *)v10 + 7) = *(_DWORD *)(v12[11] + 36LL);
        *((_QWORD *)v10 + 2) = v12[9];
        *((_DWORD *)v14 + 6) = *((_DWORD *)v12 + 17);
        *((_DWORD *)v14 + 10) = *((_DWORD *)v12 + 12);
        *((_DWORD *)v14 + 11) = *((_DWORD *)v12 + 16);
        v2 = 0;
        v13 = v18;
        v7 = v15;
        v6 = v16;
        goto LABEL_15;
      }
      if ( RtlIsAnyDebuggerPresent() )
        __debugbreak();
    }
    else
    {
      v11 = v8[1];
      *((_QWORD *)v10 + 2) = v11[2];
      *((_DWORD *)v10 + 6) = *((_DWORD *)v11 + 2);
      *((_DWORD *)v10 + 9) = *((_DWORD *)v11 + 3);
      *((_DWORD *)v10 + 7) = *((_DWORD *)v8 + 9);
      *((_DWORD *)v10 + 8) = *((_DWORD *)v8 + 8);
    }
    v13 = v19;
LABEL_15:
    ++*(_DWORD *)v4;
    v7 = (_UNKNOWN **)*v7;
    v15 = v7;
    if ( v7 == v6 )
    {
      v2 = -1073741595;
      goto LABEL_7;
    }
    if ( v13 )
    {
      v6 = (_QWORD *)*v6;
      v16 = v6;
    }
    v19 = !v13;
    v18 = !v13;
    v1 = a1;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  if ( v2 < 0 )
    RtlpDeCommitQueryDebugInfo(v1, v4, 8LL);
  else
    v1[15] = v4;
  return (unsigned int)v2;
}
