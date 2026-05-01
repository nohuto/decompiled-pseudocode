/*
 * XREFs of RmpCoreApiConnectToRmServer @ 0x1800469A8
 * Callers:
 *     RmCoreRpcSrvConnectToRmServer @ 0x180040730 (RmCoreRpcSrvConnectToRmServer.c)
 * Callees:
 *     RmpActivatorRegister @ 0x180024CB0 (RmpActivatorRegister.c)
 *     RmpActivatorUnregister @ 0x180040988 (RmpActivatorUnregister.c)
 */

__int64 __fastcall RmpCoreApiConnectToRmServer(PSID a1, int a2, _QWORD *a3, _QWORD *a4)
{
  int v8; // eax
  char *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v8 = RmpActivatorRegister(a1, a2, v13);
  v9 = (char *)v13[0];
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = *(_QWORD *)(v13[0] + 36LL);
    *a3 = v13[0];
    v9 = 0LL;
    v10 = 0;
    *a4 = v11;
  }
  if ( v9 )
    RmpActivatorUnregister(v9);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v10;
}
