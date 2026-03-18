/*
 * XREFs of xxxUserPowerCalloutWorker @ 0x1C00095A0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C70 (PushW32ThreadLock_0.c)
 *     IsxxxSetInformationThreadSupported_0 @ 0x1C00021C0 (IsxxxSetInformationThreadSupported_0.c)
 *     xxxSetInformationThread_0 @ 0x1C00021C8 (xxxSetInformationThread_0.c)
 *     IsxxxUserPowerStateCalloutWorkerSupported_0 @ 0x1C00021D0 (IsxxxUserPowerStateCalloutWorkerSupported_0.c)
 *     xxxUserPowerStateCalloutWorker_0 @ 0x1C00021D8 (xxxUserPowerStateCalloutWorker_0.c)
 *     PopW32ThreadLock_0 @ 0x1C00021E0 (PopW32ThreadLock_0.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C00096D4 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0009738 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 xxxUserPowerCalloutWorker()
{
  int v0; // esi
  int v1; // edi
  struct tagPOWERREQUEST *i; // rbx
  struct _WIN32_POWEREVENT_PARAMETERS *v3; // rcx
  int v4; // eax

  v0 = 0;
  v1 = 1;
  if ( grpdeskRitInput )
  {
    if ( (int)IsxxxSetInformationThreadSupported_0() < 0 || (int)xxxSetInformationThread_0() < 0 )
      v1 = 0;
    else
      v0 = 1;
  }
  for ( i = UnqueuePowerRequest(); i; i = UnqueuePowerRequest() )
  {
    if ( v1 )
    {
      PushW32ThreadLock_0();
      v3 = (struct _WIN32_POWEREVENT_PARAMETERS *)*((_QWORD *)i + 8);
      gpPowerRequestCurrent = i;
      if ( v3 )
      {
        v4 = xxxUserPowerEventCalloutWorker(v3);
      }
      else if ( (int)IsxxxUserPowerStateCalloutWorkerSupported_0() < 0 )
      {
        v4 = -1073741637;
      }
      else
      {
        v4 = xxxUserPowerStateCalloutWorker_0();
      }
      gpPowerRequestCurrent = 0LL;
      *((_DWORD *)i + 14) = v4;
      PopW32ThreadLock_0();
    }
    if ( *((_BYTE *)i + 72) )
      KeSetEvent((PRKEVENT)((char *)i + 16), 1, 0);
    else
      Win32FreePool(i);
  }
  if ( v0 && (int)IsxxxSetInformationThreadSupported_0() >= 0 )
    xxxSetInformationThread_0();
  return 1LL;
}
