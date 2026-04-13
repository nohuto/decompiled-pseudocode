/*
 * XREFs of ??__Fwrapper@?1??Instance@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@KAPEAV123@XZ@YAXXZ @ 0x180029DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

void __fastcall `ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::`dynamic atexit destructor for 'wrapper''()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(
         &`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context) )
  {
    if ( !fPending )
      (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
}
