/*
 * XREFs of ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C001E1A8
 * Callers:
 *     _DxgDbgBugcheckCallback @ 0x1C001D9B0 (_DxgDbgBugcheckCallback.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0124038 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C013973C (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiGetDbgInfoAdapters @ 0x1C002335C (DpiGetDbgInfoAdapters.c)
 */

__int64 __fastcall TdrCollectBugcheckSecondaryDumpData(_DWORD *a1, unsigned int a2, char a3)
{
  unsigned __int64 v3; // r15
  char v4; // r13
  int v7; // ecx
  unsigned __int16 v8; // si
  _DWORD *v9; // rax
  __int64 v10; // r8
  _DWORD *v11; // rdx
  unsigned __int16 v12; // r14
  __int64 v13; // rdi
  unsigned __int16 i; // dx
  int v15; // r9d
  __int64 v16; // rdx
  unsigned __int64 RecentEvents; // r9
  __int64 v18; // rdx
  _DWORD v20[10]; // [rsp+28h] [rbp-81h]
  _DWORD v21[28]; // [rsp+50h] [rbp-59h] BYREF

  v3 = a2;
  v4 = a3;
  if ( a2 <= 0x98 )
    return 0LL;
  v7 = 8;
  v8 = 0;
  if ( a1 )
  {
    v9 = a1;
    v10 = 19LL;
    v11 = a1 + 1;
    do
    {
      *v9 = 0;
      v9 += 2;
      *v11 = 0;
      v11 += 2;
      --v10;
    }
    while ( v10 );
    *a1 = 19;
  }
  v12 = 0;
  if ( v3 >= 0xA0 )
  {
    if ( a1 )
    {
      a1[38] = 2;
      v12 = 1;
      *((_BYTE *)a1 + 156) = byte_1C0046C5C;
      *((_BYTE *)a1 + 157) = 0;
      a1[2] = 152;
      a1[3] = 9;
    }
  }
  else
  {
    v7 = 0;
  }
  v13 = (unsigned int)(v7 + 152);
  memset(v21, 0, sizeof(v21));
  if ( (int)DpiGetDbgInfoAdapters(v21) >= 0 )
  {
    for ( i = 0; i < 7u; ++i )
    {
      if ( (unsigned int)v13 >= (unsigned int)v3 )
        break;
      v15 = v21[4 * i];
      if ( !v15 )
        break;
      if ( v13 + 16 <= v3 )
      {
        ++v12;
        if ( a1 )
        {
          *(_DWORD *)((char *)a1 + v13 + 4) = v21[4 * i + 1];
          *(_DWORD *)((char *)a1 + v13 + 8) = v21[4 * i + 2];
          *(_DWORD *)((char *)a1 + v13 + 12) ^= (*(_DWORD *)((char *)a1 + v13 + 12) ^ v21[4 * i + 3]) & 3;
          *(_DWORD *)((char *)a1 + v13) = v15;
          a1[2 * v12] = v13;
          a1[2 * v12 + 1] = i + 32;
        }
        v13 = (unsigned int)(v13 + 16);
      }
    }
  }
  v20[0] = 1;
  v20[3] = 64;
  v20[4] = 64;
  v20[5] = 64;
  v20[7] = 64;
  v20[9] = 64;
  v20[1] = 32;
  v20[2] = 32;
  v20[6] = 32;
  v20[8] = 32;
  do
  {
    if ( (unsigned int)v13 >= (unsigned int)v3 )
      break;
    if ( v4 )
      v16 = 0xFFFFFFFFLL;
    else
      v16 = (unsigned int)v20[v8];
    RecentEvents = (unsigned int)WdLogGetRecentEvents(v8, v16, 0LL, 0LL);
    if ( v13 + RecentEvents < RecentEvents || v13 + RecentEvents > v3 )
      RecentEvents = (unsigned int)(v3 - v13);
    if ( (_DWORD)RecentEvents )
    {
      ++v12;
      if ( a1 )
      {
        if ( a3 )
          v18 = 0xFFFFFFFFLL;
        else
          v18 = (unsigned int)v20[v8];
        LODWORD(RecentEvents) = WdLogGetRecentEvents(v8, v18, (char *)a1 + (unsigned int)v13, RecentEvents);
        a1[2 * v12] = v13;
        a1[2 * v12 + 1] = v8 + 16;
      }
      v13 = (unsigned int)(RecentEvents + v13);
    }
    v4 = a3;
    ++v8;
  }
  while ( v8 < 0xAu );
  return (unsigned int)v13;
}
