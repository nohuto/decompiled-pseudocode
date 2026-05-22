/*
 * XREFs of ?OnOrientationChangeStatic@DWMInputDisplay@@KAXPEAXW4DISPLAYCONFIG_ROTATION@@@Z @ 0x18001B7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DWMInputDisplay::OnOrientationChangeStatic(void *a1, __int64 a2)
{
  if ( a1 )
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)a1 + 64LL))(a1, a2);
}
