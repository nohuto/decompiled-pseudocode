/*
 * XREFs of Template_qzz @ 0x1800961E0
 * Callers:
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x180095A64 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qzz(__int64 a1, __int64 a2, int a3, const wchar_t *a4, const wchar_t *a5)
{
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rax
  unsigned int v8; // edx
  const wchar_t *v9; // r10
  const wchar_t *v10; // rax
  bool v11; // zf
  int *v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h]
  const wchar_t *v15; // [rsp+30h] [rbp-30h]
  __int64 v16; // [rsp+38h] [rbp-28h]
  const wchar_t *v17; // [rsp+40h] [rbp-20h]
  int v18; // [rsp+48h] [rbp-18h]
  int v19; // [rsp+4Ch] [rbp-14h]
  int v20; // [rsp+80h] [rbp+20h] BYREF

  v20 = a3;
  v14 = 4LL;
  v5 = -1LL;
  v13 = &v20;
  v6 = 10;
  if ( a4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a4[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v16 = v8;
  v9 = L"NULL";
  v10 = L"NULL";
  if ( a4 )
    v10 = a4;
  v15 = v10;
  v11 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v5;
    while ( a5[v5] );
    v6 = 2 * v5 + 2;
    v11 = a5 == 0LL;
  }
  if ( !v11 )
    v9 = a5;
  v18 = v6;
  v17 = v9;
  v19 = 0;
  return EtwEventWrite(
           Microsoft_Windows_AudioHandle,
           &EVT_CAPTUREMONITOR_MONITOR_RESTART_LIMIT_HIT,
           3LL,
           &v13,
           v13,
           v14,
           v15,
           v16);
}
