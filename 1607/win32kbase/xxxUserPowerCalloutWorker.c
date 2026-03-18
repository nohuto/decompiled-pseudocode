/*
 * XREFs of xxxUserPowerCalloutWorker @ 0x1C006F920
 * Callers:
 *     <none>
 * Callees:
 *     IsxxxSetInformationThreadSupported_0 @ 0x1C0001D88 (IsxxxSetInformationThreadSupported_0.c)
 *     xxxSetInformationThread_0 @ 0x1C0001D90 (xxxSetInformationThread_0.c)
 *     PushW32ThreadLock_0 @ 0x1C0001D98 (PushW32ThreadLock_0.c)
 *     PopW32ThreadLock_0 @ 0x1C0001DA0 (PopW32ThreadLock_0.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C006FA48 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006FAAC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0085BC8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 */

__int64 xxxUserPowerCalloutWorker()
{
  int v0; // edi
  int v1; // ebx
  __int64 v2; // rsi
  struct tagPOWERREQUEST *v3; // rbx
  struct _WIN32_POWEREVENT_PARAMETERS *v4; // rcx
  int v5; // eax

  v0 = 0;
  v1 = 1;
  if ( grpdeskRitInput )
  {
    if ( (int)IsxxxSetInformationThreadSupported_0() < 0 || (int)xxxSetInformationThread_0() < 0 )
      v1 = 0;
    else
      v0 = 1;
  }
  gpPowerThread = KeGetCurrentThread();
  v2 = v1;
  while ( 1 )
  {
    v3 = UnqueuePowerRequest();
    if ( !v3 )
      break;
    if ( v2 )
    {
      PushW32ThreadLock_0();
      gpPowerRequestCurrent = v3;
      v4 = (struct _WIN32_POWEREVENT_PARAMETERS *)*((_QWORD *)v3 + 8);
      if ( v4 )
        v5 = xxxUserPowerEventCalloutWorker(v4);
      else
        v5 = xxxUserPowerStateCalloutWorker();
      *((_DWORD *)v3 + 14) = v5;
      gpPowerRequestCurrent = 0LL;
      PopW32ThreadLock_0();
    }
    if ( *((_BYTE *)v3 + 72) )
      KeSetEvent((PRKEVENT)((char *)v3 + 16), 1, 0);
    else
      Win32FreePool();
  }
  if ( v0 && (int)IsxxxSetInformationThreadSupported_0() >= 0 )
    xxxSetInformationThread_0();
  return 1LL;
}
