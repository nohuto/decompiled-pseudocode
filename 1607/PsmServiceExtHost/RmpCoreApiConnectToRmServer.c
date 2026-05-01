/*
 * XREFs of RmpCoreApiConnectToRmServer @ 0x18002E170
 * Callers:
 *     RmCoreRpcSrvConnectToRmServer @ 0x18002E530 (RmCoreRpcSrvConnectToRmServer.c)
 * Callees:
 *     RmpActivatorRegister @ 0x18001F338 (RmpActivatorRegister.c)
 *     RmpActivatorUnregister @ 0x18002E718 (RmpActivatorUnregister.c)
 */

__int64 __fastcall RmpCoreApiConnectToRmServer(void *a1, int a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v14[0] = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v9 = RmpActivatorRegister(v8, a1, a2, v14);
  v10 = v14[0];
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = *(_QWORD *)(v14[0] + 36LL);
    *a3 = v14[0];
    v10 = 0LL;
    v11 = 0;
    *a4 = v12;
  }
  if ( v10 )
    RmpActivatorUnregister(v10);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v11;
}
