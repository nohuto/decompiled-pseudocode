/*
 * XREFs of CcOkToAddWriteBehindThread @ 0x1401B16AC
 * Callers:
 *     CcWorkerThread @ 0x140071500 (CcWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 CcOkToAddWriteBehindThread()
{
  __int64 v0; // rdx
  unsigned int v1; // ebx
  _DWORD *v2; // r9
  unsigned int v3; // r10d
  int v4; // r11d
  unsigned int v5; // eax
  unsigned int v6; // r8d
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx

  v0 = (unsigned int)CcActiveExtraWriteBehindThreads;
  v1 = 0;
  v2 = CcThroughputStats;
  v3 = 0;
  v4 = CcPagesYetToWrite;
  v5 = *((_DWORD *)CcThroughputStats + 2 * (unsigned int)CcActiveExtraWriteBehindThreads);
  if ( v5 >= CcPagesYetToWrite )
    v3 = v5 - CcPagesYetToWrite;
  *((_DWORD *)CcThroughputStats + 2 * (unsigned int)CcActiveExtraWriteBehindThreads) = CcPagesYetToWrite;
  v6 = 1;
  if ( (_DWORD)v0 )
    v1 = v2[2 * (unsigned int)(v0 - 1) + 1];
  v2[2 * v0 + 1] = v3;
  if ( v3 )
  {
    v7 = CcThroughputTrend;
    if ( v3 < v1 )
    {
      if ( CcThroughputTrend > 0 )
        v7 = 0;
      v8 = v7 - 1;
    }
    else
    {
      if ( CcThroughputTrend < 0 )
        v7 = 0;
      v8 = v7 + 1;
    }
    CcThroughputTrend = v8;
    if ( v8 == 3 )
    {
      CcThroughputTrend = 0;
      v6 = 2;
      if ( (unsigned int)v0 < CcMaxExtraWriteBehindThreads )
      {
        v9 = (unsigned int)(v0 + 1);
        v2[2 * v9] = v4;
        v2[2 * v9 + 1] = 0;
      }
    }
    else if ( v8 == -3 )
    {
      CcThroughputTrend = 0;
      v6 = 3;
      if ( (_DWORD)v0 )
      {
        v10 = (unsigned int)(v0 - 1);
        v2[2 * v10] = v4;
        v2[2 * v10 + 1] = 0;
      }
    }
  }
  return v6;
}
