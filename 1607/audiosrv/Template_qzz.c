/*
 * XREFs of Template_qzz @ 0x18007EE44
 * Callers:
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18007E758 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qzz(__int64 a1, __int64 a2, int a3, const wchar_t *a4, const wchar_t *a5)
{
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rax
  int v8; // edx
  const wchar_t *v9; // r10
  const wchar_t *v10; // rax
  bool v11; // zf
  _QWORD v13[3]; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+38h] [rbp-28h]
  int v15; // [rsp+3Ch] [rbp-24h]
  const wchar_t *v16; // [rsp+40h] [rbp-20h]
  int v17; // [rsp+48h] [rbp-18h]
  int v18; // [rsp+4Ch] [rbp-14h]
  int v19; // [rsp+80h] [rbp+20h] BYREF

  v19 = a3;
  v13[1] = 4LL;
  v5 = -1LL;
  v13[0] = &v19;
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
  v14 = v8;
  v9 = L"NULL";
  v15 = 0;
  v10 = L"NULL";
  if ( a4 )
    v10 = a4;
  v13[2] = v10;
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
  v17 = v6;
  v16 = v9;
  v18 = 0;
  return EtwEventWrite(Microsoft_Windows_AudioHandle, &EVT_CAPTUREMONITOR_MONITOR_RESTART_LIMIT_HIT, 3LL, v13);
}
