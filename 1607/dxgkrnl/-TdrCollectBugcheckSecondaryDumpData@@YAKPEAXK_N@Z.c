/*
 * XREFs of ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0023378
 * Callers:
 *     _DxgDbgBugcheckCallback @ 0x1C00229D0 (_DxgDbgBugcheckCallback.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C014D450 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C0162400 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiGetDbgInfoAdapters @ 0x1C0029DB8 (DpiGetDbgInfoAdapters.c)
 */

__int64 __fastcall TdrCollectBugcheckSecondaryDumpData(_DWORD *a1, unsigned int a2, char a3)
{
  unsigned __int64 v3; // r15
  char v4; // r13
  unsigned __int16 v7; // si
  unsigned __int16 i; // dx
  int v9; // eax
  unsigned __int16 v10; // r14
  int v11; // edi
  __int64 v12; // rdi
  unsigned __int16 j; // r8
  int v14; // r9d
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rdx
  unsigned __int64 RecentEvents; // r9
  __int64 v19; // rdx
  int v20; // ecx
  _DWORD v22[9]; // [rsp+28h] [rbp-91h]
  __int64 v23; // [rsp+4Ch] [rbp-6Dh]
  _DWORD v24[28]; // [rsp+60h] [rbp-59h] BYREF

  v3 = a2;
  v4 = a3;
  if ( a2 <= 0xA0 )
    return 0LL;
  v7 = 0;
  if ( a1 )
  {
    for ( i = 0; i < 0x14u; ++i )
    {
      v9 = i;
      a1[2 * v9] = 0;
      a1[2 * v9 + 1] = 0;
    }
    *a1 = 20;
  }
  v10 = 0;
  v11 = 8;
  if ( v3 >= 0xA8 )
  {
    if ( a1 )
    {
      a1[40] = 2;
      v10 = 1;
      *((_BYTE *)a1 + 164) = word_1C0056E9D;
      *((_BYTE *)a1 + 165) = 0;
      a1[2] = 160;
      a1[3] = 9;
    }
  }
  else
  {
    v11 = 0;
  }
  v12 = (unsigned int)(v11 + 160);
  memset(v24, 0, sizeof(v24));
  if ( (int)DpiGetDbgInfoAdapters(v24) >= 0 )
  {
    for ( j = 0; j < 7u; ++j )
    {
      if ( (unsigned int)v12 >= (unsigned int)v3 )
        break;
      v14 = v24[4 * j];
      if ( !v14 )
        break;
      if ( v12 + 16 <= v3 )
      {
        ++v10;
        if ( a1 )
        {
          *(_DWORD *)((char *)a1 + v12 + 4) = v24[4 * j + 1];
          *(_DWORD *)((char *)a1 + v12 + 8) = v24[4 * j + 2];
          v15 = (*(_DWORD *)((char *)a1 + v12 + 12) ^ v24[4 * j + 3]) & 3;
          *(_DWORD *)((char *)a1 + v12) = v14;
          *(_DWORD *)((char *)a1 + v12 + 12) ^= v15;
          v16 = 2 * v10;
          a1[v16] = v12;
          a1[v16 + 1] = j + 32;
        }
        v12 = (unsigned int)(v12 + 16);
      }
    }
  }
  v22[0] = 1;
  v22[3] = 64;
  v22[4] = 64;
  v22[5] = 64;
  v22[7] = 64;
  v23 = 64LL;
  v22[1] = 32;
  v22[2] = 32;
  v22[6] = 32;
  v22[8] = 32;
  do
  {
    if ( (unsigned int)v12 >= (unsigned int)v3 )
      break;
    if ( v4 )
      v17 = 0xFFFFFFFFLL;
    else
      v17 = (unsigned int)v22[v7];
    RecentEvents = (unsigned int)WdLogGetRecentEvents(v7, v17, 0LL, 0LL);
    if ( v12 + RecentEvents < RecentEvents || v12 + RecentEvents > v3 )
      RecentEvents = (unsigned int)(v3 - v12);
    if ( (_DWORD)RecentEvents )
    {
      ++v10;
      if ( a1 )
      {
        if ( a3 )
          v19 = 0xFFFFFFFFLL;
        else
          v19 = (unsigned int)v22[v7];
        LODWORD(RecentEvents) = WdLogGetRecentEvents(v7, v19, (char *)a1 + (unsigned int)v12, RecentEvents);
        v20 = 2 * v10;
        a1[v20] = v12;
        a1[v20 + 1] = v7 + 16;
      }
      v12 = (unsigned int)(RecentEvents + v12);
    }
    v4 = a3;
    ++v7;
  }
  while ( v7 < 0xBu );
  return (unsigned int)v12;
}
