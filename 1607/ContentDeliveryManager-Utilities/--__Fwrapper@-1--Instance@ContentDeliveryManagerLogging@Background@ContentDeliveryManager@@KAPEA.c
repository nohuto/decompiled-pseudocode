/*
 * XREFs of ??__Fwrapper@?1??Instance@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@KAPEAV123@XZ@YAXXZ @ 0x18005CFD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::`dynamic atexit destructor for 'wrapper''()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(
         &`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context) )
  {
    if ( !fPending )
      (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
}
