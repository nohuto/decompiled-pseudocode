/*
 * XREFs of DT_InitDrawTextInfo @ 0x1C024B15C
 * Callers:
 *     DrawTextExWorker @ 0x1C024B358 (DrawTextExWorker.c)
 * Callees:
 *     _GetTextMetricsW @ 0x1C0038BF0 (_GetTextMetricsW.c)
 *     GreGetTextCharsetInfo @ 0x1C00DD2CC (GreGetTextCharsetInfo.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     IsSysFontAndDefaultMode @ 0x1C024B5AC (IsSysFontAndDefaultMode.c)
 */

__int64 __fastcall DT_InitDrawTextInfo(HDC a1, _OWORD *a2, __int16 a3, __int64 a4, __int64 a5)
{
  int v9; // esi
  int v10; // r14d
  __int64 result; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  bool v14; // cf
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  int v23; // [rsp+20h] [rbp-60h] BYREF
  int v24; // [rsp+24h] [rbp-5Ch]
  int v25; // [rsp+28h] [rbp-58h] BYREF
  int v26; // [rsp+2Ch] [rbp-54h]
  _DWORD v27[16]; // [rsp+30h] [rbp-50h] BYREF

  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  memset(v27, 0, 60);
  if ( a5 )
  {
    v9 = *(_DWORD *)(a5 + 8);
    v10 = *(_DWORD *)(a5 + 12);
  }
  else
  {
    v10 = 0;
    v9 = 0;
  }
  result = GreGetDCPoint(a1, 1LL, &v23);
  if ( (_DWORD)result )
  {
    GreGetDCPoint(a1, 2LL, &v25);
    v13 = (v23 ^ v25) < 0 ? -1 : 1;
    v14 = (v24 ^ v26) < 0;
    *(_DWORD *)(a4 + 20) = v13;
    v15 = v14 ? -1 : 1;
    *(_DWORD *)(a4 + 24) = v15;
    if ( (a3 & 0x1000) != 0 || (unsigned int)IsSysFontAndDefaultMode(a1) )
    {
      v27[0] = *(_DWORD *)(GetDPIServerInfo(v13, v15, v12) + 40);
      v27[4] = *(_DWORD *)(GetDPIServerInfo(v27[0], v16, v17) + 60);
      v27[5] = *(_DWORD *)(GetDPIServerInfo(v27[4], v18, v19) + 64);
      v27[8] = *(_DWORD *)(GetDPIServerInfo(v27[5], v20, v21) + 76);
      LOBYTE(v27[14]) = GreGetTextCharsetInfo(*(HDC *)(gpDispInfo + 24LL), 0LL);
    }
    else if ( !(unsigned int)GetTextMetricsW(a1, (__int64)v27) )
    {
      v27[8] = 0;
    }
    *(_DWORD *)(a4 + 28) = *(_DWORD *)(a4 + 24) * v27[0];
    *(_DWORD *)(a4 + 16) = 8 * v27[5];
    *(_DWORD *)(a4 + 56) = v27[8];
    if ( gptiCurrent == gptiRit )
      *(_DWORD *)(a4 + 60) = 0;
    else
      *(_DWORD *)(a4 + 60) = *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiRit) + 720) & 4;
    if ( !*(_DWORD *)(a4 + 60) )
      *(_QWORD *)(a4 + 48) = UserTextOutWInternal;
    *(_OWORD *)a4 = *a2;
    if ( v9 | v10 )
    {
      *(_DWORD *)a4 += v9 * *(_DWORD *)(a4 + 20);
      v22 = v10 * *(_DWORD *)(a4 + 20);
      *(_DWORD *)(a4 + 40) = v22;
      *(_DWORD *)(a4 + 8) -= v22;
    }
    else
    {
      *(_DWORD *)(a4 + 40) = 0;
    }
    result = 1LL;
    *(_QWORD *)(a4 + 32) = (unsigned int)(*(_DWORD *)(a4 + 20) * (*(_DWORD *)(a4 + 8) - *(_DWORD *)a4));
  }
  return result;
}
