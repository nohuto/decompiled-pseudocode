/*
 * XREFs of DestroyDpiMetricsCache @ 0x140248C10
 * Callers:
 *     <none>
 * Callees:
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x140248CB8 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     ?ClearDpiServerInfo@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1402A62E0 (-ClearDpiServerInfo@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 */

__int64 DestroyDpiMetricsCache()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  void *v11; // rcx

  InvalidateKMDpiMetricsCacheDPIMETRICS();
  v2 = 0LL;
  v3 = 18LL;
  do
  {
    UserSessionState = W32GetUserSessionState(v1, v0);
    ClearDpiServerInfo((struct tagDPISERVERINFO *)(v2 + *(_QWORD *)(UserSessionState + 19904) + 5096LL));
    v2 += 104LL;
    --v3;
  }
  while ( v3 );
  v7 = *(_QWORD **)(W32GetUserSessionState(v1, v0) + 66240);
  while ( v7 )
  {
    v11 = v7;
    v7 = (_QWORD *)v7[1];
    Win32FreePool(v11);
  }
  *(_QWORD *)(W32GetUserSessionState(v6, v5) + 66248) = 0LL;
  result = W32GetUserSessionState(v9, v8);
  *(_QWORD *)(result + 66240) = 0LL;
  return result;
}
