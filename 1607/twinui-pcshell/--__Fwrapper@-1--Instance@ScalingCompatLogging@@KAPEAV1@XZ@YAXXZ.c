/*
 * XREFs of ??__Fwrapper@?1??Instance@ScalingCompatLogging@@KAPEAV1@XZ@YAXXZ @ 0x180031EA0
 * Callers:
 *     <none>
 * Callees:
 *     InitOnceBeginInitialize_0 @ 0x18002F67C (InitOnceBeginInitialize_0.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `ScalingCompatLogging::Instance'::`2'::`dynamic atexit destructor for 'wrapper''()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
}
