/*
 * XREFs of DT_InitDrawTextInfo @ 0x1C024742C
 * Callers:
 *     DrawTextExWorker @ 0x1C0247624 (DrawTextExWorker.c)
 * Callees:
 *     _GetTextMetricsW @ 0x1C0011560 (_GetTextMetricsW.c)
 *     GreGetTextCharsetInfo @ 0x1C0023ACC (GreGetTextCharsetInfo.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     IsSysFontAndDefaultMode @ 0x1C0247874 (IsSysFontAndDefaultMode.c)
 */

__int64 __fastcall DT_InitDrawTextInfo(HDC a1, _OWORD *a2, __int16 a3, __int64 a4, __int64 a5)
{
  int v9; // esi
  int v10; // r14d
  __int64 result; // rax
  bool v12; // cf
  __int64 v13; // rdx
  int v14; // eax
  int v15; // [rsp+20h] [rbp-60h] BYREF
  int v16; // [rsp+24h] [rbp-5Ch]
  int v17; // [rsp+28h] [rbp-58h] BYREF
  int v18; // [rsp+2Ch] [rbp-54h]
  _DWORD v19[16]; // [rsp+30h] [rbp-50h] BYREF

  v17 = 0;
  v18 = 0;
  v15 = 0;
  v16 = 0;
  memset(v19, 0, 0x3CuLL);
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
  result = GreGetDCPoint(a1, 1LL, &v17);
  if ( (_DWORD)result )
  {
    GreGetDCPoint(a1, 2LL, &v15);
    v12 = (v18 ^ v16) < 0;
    *(_DWORD *)(a4 + 20) = (v17 ^ v15) < 0 ? -1 : 1;
    *(_DWORD *)(a4 + 24) = v12 ? -1 : 1;
    if ( (a3 & 0x1000) != 0 || (unsigned int)IsSysFontAndDefaultMode(a1) )
    {
      v19[0] = *(_DWORD *)(GetDPIServerInfo() + 40);
      v19[4] = *(_DWORD *)(GetDPIServerInfo() + 60);
      v19[5] = *(_DWORD *)(GetDPIServerInfo() + 64);
      v19[8] = *(_DWORD *)(GetDPIServerInfo() + 76);
      LOBYTE(v19[14]) = GreGetTextCharsetInfo(*(HDC *)(gpDispInfo + 24LL), 0LL);
    }
    else if ( !(unsigned int)GetTextMetricsW(a1, (__int64)v19) )
    {
      v19[8] = 0;
    }
    *(_DWORD *)(a4 + 28) = *(_DWORD *)(a4 + 24) * v19[0];
    *(_DWORD *)(a4 + 16) = 8 * v19[5];
    *(_DWORD *)(a4 + 56) = v19[8];
    if ( gptiCurrent == gptiRit )
      *(_DWORD *)(a4 + 60) = 0;
    else
      *(_DWORD *)(a4 + 60) = *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiRit, v13) + 712) & 4;
    if ( !*(_DWORD *)(a4 + 60) )
      *(_QWORD *)(a4 + 48) = UserTextOutWInternal;
    *(_OWORD *)a4 = *a2;
    if ( v9 | v10 )
    {
      *(_DWORD *)a4 += v9 * *(_DWORD *)(a4 + 20);
      v14 = v10 * *(_DWORD *)(a4 + 20);
      *(_DWORD *)(a4 + 40) = v14;
      *(_DWORD *)(a4 + 8) -= v14;
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
