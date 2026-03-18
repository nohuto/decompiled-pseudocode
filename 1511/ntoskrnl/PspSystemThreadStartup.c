/*
 * XREFs of PspSystemThreadStartup @ 0x1400F7154
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PspDisablePrimaryTokenExchange @ 0x140445F6C (PspDisablePrimaryTokenExchange.c)
 */

__int64 __fastcall PspSystemThreadStartup(void (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx

  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (((unsigned __int8)*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) ^ 1) & 3) == 3 )
    a1(a2);
  return PspTerminateThreadByPointer((ULONG_PTR)CurrentThread);
}
