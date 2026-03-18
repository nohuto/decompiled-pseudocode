/*
 * XREFs of ?SetProperty@CAnalogCompositor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801652E0
 * Callers:
 *     ?ProcessSetExclusiveOpacity@CAnalogCompositor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGCOMPOSITOR_SETEXCLUSIVEOPACITY@@@Z @ 0x18010E904 (-ProcessSetExclusiveOpacity@CAnalogCompositor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGCOMPOSI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnalogCompositor::SetProperty(__int64 a1, int a2, int a3)
{
  if ( a3 == 18 && a2 == 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)xmmword_1801F03A0 + 56LL))(xmmword_1801F03A0);
  return 0LL;
}
