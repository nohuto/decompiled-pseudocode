/*
 * XREFs of AudioServerDisconnect @ 0x1800060D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180017180 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerDisconnect(_QWORD *a1)
{
  CAudioDGProcess *v2; // rcx

  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  *a1 = 0LL;
  CAudioDGProcess::UnlockADGProcess(v2);
  return 0LL;
}
