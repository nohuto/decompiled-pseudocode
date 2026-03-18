/*
 * XREFs of ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEAU_D3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C001ADA8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreatePathPersistentMonitorsIfNeeded(
        __int64 a1,
        struct _D3DKMT_GETPATHSMODALITY *a2,
        unsigned __int16 *a3)
{
  __int64 v5; // r14
  unsigned int i; // ebp
  __int64 v7; // rdi
  int v8; // ecx
  _QWORD *v10; // rax
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdx

  LODWORD(v5) = 0;
  if ( a3 )
    *a3 = 0;
  for ( i = 0; i < *((unsigned __int16 *)a2 + 10); ++i )
  {
    v7 = 216LL * i;
    v8 = *(_DWORD *)((char *)a2 + v7 + 48);
    if ( (v8 & 0x11000000) != 0x1000000 )
    {
      if ( (v8 & 0x2000000) != 0 )
      {
        v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))qword_1C0101330)(
                *(_QWORD *)((char *)a2 + v7 + 56),
                *(unsigned int *)((char *)a2 + v7 + 68),
                0LL,
                2LL);
        v5 = v11;
        if ( v11 < 0 )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdEvent();
          v16 = 216LL * i;
          v15[3] = *(int *)((char *)a2 + v16 + 60);
          v15[4] = *(unsigned int *)((char *)a2 + v16 + 56);
          v15[5] = *(unsigned int *)((char *)a2 + v16 + 68);
          v15[6] = v5;
          WdLogEvent5_WdEvent(v15);
          return (unsigned int)v5;
        }
        if ( (*(_DWORD *)((_BYTE *)a2 + v7 + 48) & 0x10000000) != 0 )
        {
          v12 = (_QWORD *)WdLogNewEntry5_WdTrace();
          v12[3] = *(int *)((char *)a2 + v7 + 60);
          v12[4] = *(unsigned int *)((char *)a2 + v7 + 56);
          v12[5] = *(unsigned int *)((char *)a2 + v7 + 68);
          WdLogEvent5_WdTrace(v12);
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
          v13 = (_QWORD *)WdLogNewEntry5_WdEvent();
          v14 = 216LL * i;
          v13[3] = *(unsigned int *)((char *)a2 + v14 + 68);
          v13[4] = *(int *)((char *)a2 + v14 + 60);
          v13[5] = *(unsigned int *)((char *)a2 + v14 + 56);
          WdLogEvent5_WdEvent(v13);
          LODWORD(v5) = -1073741811;
          return (unsigned int)v5;
        }
        v10 = (_QWORD *)WdLogNewEntry5_WdEvent();
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
