/*
 * XREFs of ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEAU_D3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C00615E0
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0063200 (DrvSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreatePathPersistentMonitorsIfNeeded(
        __int64 a1,
        struct _D3DKMT_GETPATHSMODALITY *a2,
        unsigned __int16 *a3)
{
  __int64 v5; // r14
  unsigned int i; // ebp
  __int64 v7; // rdi
  __int64 v8; // rcx
  _QWORD *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdx

  LODWORD(v5) = 0;
  if ( a3 )
    *a3 = 0;
  for ( i = 0; i < *((unsigned __int16 *)a2 + 10); ++i )
  {
    v7 = 216LL * i;
    v8 = *(unsigned int *)((char *)a2 + v7 + 48);
    if ( (*(_DWORD *)((_BYTE *)a2 + v7 + 48) & 0x11000000) != 0x1000000 )
    {
      if ( (v8 & 0x2000000) != 0 )
      {
        v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))qword_1C011B490)(
                *(_QWORD *)((char *)a2 + v7 + 56),
                *(unsigned int *)((char *)a2 + v7 + 68),
                0LL,
                2LL);
        v5 = v11;
        if ( v11 < 0 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, a2);
          v17 = 216LL * i;
          v16[3] = *(int *)((char *)a2 + v17 + 60);
          v16[4] = *(unsigned int *)((char *)a2 + v17 + 56);
          v16[5] = *(unsigned int *)((char *)a2 + v17 + 68);
          v16[6] = v5;
          WdLogEvent5_WdEvent(v16);
          return (unsigned int)v5;
        }
        if ( (*(_DWORD *)((_BYTE *)a2 + v7 + 48) & 0x10000000) != 0 )
        {
          v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
          v13[3] = *(int *)((char *)a2 + v7 + 60);
          v13[4] = *(unsigned int *)((char *)a2 + v7 + 56);
          v13[5] = *(unsigned int *)((char *)a2 + v7 + 68);
          WdLogEvent5_WdTrace(v13);
        }
        else if ( a3 )
        {
          ++*a3;
        }
      }
      else
      {
        if ( (v8 & 0x10000000) == 0 )
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, a2);
          v15 = 216LL * i;
          v14[3] = *(unsigned int *)((char *)a2 + v15 + 68);
          v14[4] = *(int *)((char *)a2 + v15 + 60);
          v14[5] = *(unsigned int *)((char *)a2 + v15 + 56);
          WdLogEvent5_WdEvent(v14);
          LODWORD(v5) = -1073741811;
          return (unsigned int)v5;
        }
        v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, a2);
        v10[3] = *(unsigned int *)((char *)a2 + v7 + 68);
        v10[4] = *(int *)((char *)a2 + v7 + 60);
        v10[5] = *(unsigned int *)((char *)a2 + v7 + 56);
        v10[6] = 1LL;
        WdLogEvent5_WdEvent(v10);
      }
    }
  }
  return (unsigned int)v5;
}
