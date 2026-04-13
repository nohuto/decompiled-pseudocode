/*
 * XREFs of ??__Fwrapper@?1??Instance@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@KAPEAV123@XZ@YAXXZ @ 0x180029E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::`dynamic atexit destructor for 'wrapper''()
{
  _QWORD *v0; // rbx
  bool v1; // zf
  __int64 v2; // rbx
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(
         &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && !fPending )
  {
    v0 = Context;
    v1 = *((_BYTE *)Context + 16) == 0;
    *(_QWORD *)Context = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    if ( !v1 )
    {
      v2 = v0[1];
      EventUnregister(*(_QWORD *)(v2 + 32));
      *(_QWORD *)(v2 + 32) = 0LL;
      *(_DWORD *)v2 = 0;
    }
  }
}
