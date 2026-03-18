/*
 * XREFs of xxxUserPowerCalloutWorker @ 0x1C000BDB0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C90 (PushW32ThreadLock_0.c)
 *     IsxxxSetInformationThreadSupported_0 @ 0x1C0002230 (IsxxxSetInformationThreadSupported_0.c)
 *     xxxSetInformationThread_0 @ 0x1C0002238 (xxxSetInformationThread_0.c)
 *     PopW32ThreadLock_0 @ 0x1C0002240 (PopW32ThreadLock_0.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C000B3FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C000BECC (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     xxxUserPowerStateCalloutWorker @ 0x1C00846A4 (xxxUserPowerStateCalloutWorker.c)
 */

__int64 xxxUserPowerCalloutWorker()
{
  int v0; // esi
  int v1; // edi
  struct tagPOWERREQUEST *i; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _WIN32_POWEREVENT_PARAMETERS *v5; // rcx
  int v6; // eax

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
      v5 = (struct _WIN32_POWEREVENT_PARAMETERS *)*((_QWORD *)i + 8);
      gpPowerRequestCurrent = i;
      if ( v5 )
        v6 = xxxUserPowerEventCalloutWorker(v5, v3, v4);
      else
        v6 = xxxUserPowerStateCalloutWorker(0LL, v3, v4);
      gpPowerRequestCurrent = 0LL;
      *((_DWORD *)i + 14) = v6;
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
