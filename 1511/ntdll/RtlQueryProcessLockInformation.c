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
  char *v4; // r14
  bool v6; // r13
  _QWORD *v7; // r12
  _UNKNOWN **v8; // r15
  char *v9; // rax
  char *v10; // rsi
  _QWORD *v11; // rdx
  _QWORD *v12; // rdx
  bool v13; // zf
  char *v14; // [rsp+20h] [rbp-78h]
  _QWORD *v15; // [rsp+28h] [rbp-70h]
  _UNKNOWN **v16; // [rsp+30h] [rbp-68h]
  bool v18; // [rsp+A8h] [rbp+10h]
  _UNKNOWN **v19; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = 0;
  DebugInfo = RtlpCommitQueryDebugInfo(a1, 8u);
  v4 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_DWORD *)DebugInfo = 0;
  v6 = 0;
  v18 = 0;
  RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
  v7 = RtlCriticalSectionList;
  v15 = RtlCriticalSectionList;
  v8 = (_UNKNOWN **)RtlCriticalSectionList;
  v19 = (_UNKNOWN **)RtlCriticalSectionList;
  while ( v8 != &RtlCriticalSectionList )
  {
    v16 = v8 - 2;
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
    *(_QWORD *)v10 = v16[1];
    *((_WORD *)v10 + 4) = *(_WORD *)v16;
    *((_WORD *)v10 + 5) = *((_WORD *)v16 + 1);
    if ( *((_WORD *)v10 + 4) )
    {
      if ( *((_WORD *)v10 + 4) == 1 )
      {
        v12 = v16[1];
        *((_DWORD *)v10 + 7) = *(_DWORD *)(v12[11] + 36LL);
        *((_QWORD *)v10 + 2) = v12[9];
        *((_DWORD *)v14 + 6) = *((_DWORD *)v12 + 17);
        *((_DWORD *)v14 + 10) = *((_DWORD *)v12 + 12);
        *((_DWORD *)v14 + 11) = *((_DWORD *)v12 + 16);
        v2 = 0;
        v6 = v18;
        v8 = v19;
        v7 = v15;
      }
      else if ( RtlIsAnyDebuggerPresent() )
      {
        __debugbreak();
      }
    }
    else
    {
      v11 = v16[1];
      *((_QWORD *)v10 + 2) = v11[2];
      *((_DWORD *)v10 + 6) = *((_DWORD *)v11 + 2);
      *((_DWORD *)v10 + 9) = *((_DWORD *)v11 + 3);
      *((_DWORD *)v10 + 7) = *((_DWORD *)v16 + 9);
      *((_DWORD *)v10 + 8) = *((_DWORD *)v16 + 8);
    }
    ++*(_DWORD *)v4;
    v8 = (_UNKNOWN **)*v8;
    v19 = v8;
    if ( v8 == v7 )
    {
      v2 = -1073741595;
      goto LABEL_7;
    }
    v13 = !v6;
    if ( v6 )
    {
      v7 = (_QWORD *)*v7;
      v15 = v7;
    }
    v6 = !v6;
    v18 = v13;
    v1 = a1;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  if ( v2 < 0 )
    RtlpDeCommitQueryDebugInfo((__int64)v1, (__int64)v4, 8u);
  else
    v1[15] = v4;
  return (unsigned int)v2;
}
