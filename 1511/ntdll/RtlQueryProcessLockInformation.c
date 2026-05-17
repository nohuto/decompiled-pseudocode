/*
 * XREFs of RtlQueryProcessLockInformation @ 0x1800CD0E0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18006C270 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlpCommitQueryDebugInfo @ 0x18006CDEC (RtlpCommitQueryDebugInfo.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x18008E440 (RtlpDeCommitQueryDebugInfo.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800EE648 (RtlIsAnyDebuggerPresent.c)
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
  bool v9; // r13
  _QWORD *v10; // r12
  _UNKNOWN **v11; // r15
  char *v12; // rax
  char *v13; // rsi
  _QWORD *v14; // rdx
  _QWORD *v15; // rdx
  bool v16; // zf
  char *v17; // [rsp+20h] [rbp-78h]
  _QWORD *v18; // [rsp+28h] [rbp-70h]
  _UNKNOWN **v19; // [rsp+30h] [rbp-68h]
  bool v21; // [rsp+A8h] [rbp+10h]
  _UNKNOWN **v22; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = 0;
  DebugInfo = RtlpCommitQueryDebugInfo(a1, 8u);
  v7 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_DWORD *)DebugInfo = 0;
  v9 = 0;
  v21 = 0;
  RtlAcquireSRWLockShared(&RtlCriticalSectionLock, v4, v5, v6);
  v10 = RtlCriticalSectionList;
  v18 = RtlCriticalSectionList;
  v11 = (_UNKNOWN **)RtlCriticalSectionList;
  v22 = (_UNKNOWN **)RtlCriticalSectionList;
  while ( v11 != &RtlCriticalSectionList )
  {
    v19 = v11 - 2;
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
    *(_QWORD *)v13 = v19[1];
    *((_WORD *)v13 + 4) = *(_WORD *)v19;
    *((_WORD *)v13 + 5) = *((_WORD *)v19 + 1);
    if ( *((_WORD *)v13 + 4) )
    {
      if ( *((_WORD *)v13 + 4) == 1 )
      {
        v15 = v19[1];
        *((_DWORD *)v13 + 7) = *(_DWORD *)(v15[11] + 36LL);
        *((_QWORD *)v13 + 2) = v15[9];
        *((_DWORD *)v17 + 6) = *((_DWORD *)v15 + 17);
        *((_DWORD *)v17 + 10) = *((_DWORD *)v15 + 12);
        *((_DWORD *)v17 + 11) = *((_DWORD *)v15 + 16);
        v2 = 0;
        v9 = v21;
        v11 = v22;
        v10 = v18;
      }
      else if ( (unsigned __int8)RtlIsAnyDebuggerPresent() )
      {
        __debugbreak();
      }
    }
    else
    {
      v14 = v19[1];
      *((_QWORD *)v13 + 2) = v14[2];
      *((_DWORD *)v13 + 6) = *((_DWORD *)v14 + 2);
      *((_DWORD *)v13 + 9) = *((_DWORD *)v14 + 3);
      *((_DWORD *)v13 + 7) = *((_DWORD *)v19 + 9);
      *((_DWORD *)v13 + 8) = *((_DWORD *)v19 + 8);
    }
    ++*(_DWORD *)v7;
    v11 = (_UNKNOWN **)*v11;
    v22 = v11;
    if ( v11 == v10 )
    {
      v2 = -1073741595;
      goto LABEL_7;
    }
    v16 = !v9;
    if ( v9 )
    {
      v10 = (_QWORD *)*v10;
      v18 = v10;
    }
    v9 = !v9;
    v21 = v16;
    v1 = a1;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  if ( v2 < 0 )
    RtlpDeCommitQueryDebugInfo((__int64)v1, (__int64)v7, 8u);
  else
    v1[15] = v7;
  return (unsigned int)v2;
}
