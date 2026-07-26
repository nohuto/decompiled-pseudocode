/*
 * XREFs of ndisMDeferredDpc @ 0x1C005C7D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisMProcessDeferred @ 0x1C0059F48 (ndisMProcessDeferred.c)
 */

void __fastcall ndisMDeferredDpc(
        struct _KDPC *Dpc,
        KSPIN_LOCK *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KSPIN_LOCK *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int i; // [rsp+38h] [rbp+10h]

  v4 = DeferredContext + 12;
  KeAcquireSpinLockAtDpcLevel(DeferredContext + 12);
  CurrentThread = KeGetCurrentThread();
  for ( *((_DWORD *)DeferredContext + 464) = 656920; ; *((_DWORD *)DeferredContext + 464) = 656922 )
  {
    DeferredContext[65] = (KSPIN_LOCK)CurrentThread;
    if ( !*((_BYTE *)DeferredContext + 89) )
      break;
    DeferredContext[65] = 0LL;
    *((_DWORD *)DeferredContext + 464) = 0;
    KeReleaseSpinLockFromDpcLevel(v4);
    for ( i = 0; i < 0x32; ++i )
      ;
    KeAcquireSpinLockAtDpcLevel(v4);
    CurrentThread = KeGetCurrentThread();
  }
  *((_BYTE *)DeferredContext + 89) = 1;
  *((_DWORD *)DeferredContext + 465) = 656922;
  DeferredContext[233] = (KSPIN_LOCK)KeGetCurrentThread();
  ndisMProcessDeferred((__int64)DeferredContext);
  *((_DWORD *)DeferredContext + 465) = 0;
  DeferredContext[233] = 0LL;
  DeferredContext[65] = 0LL;
  *((_DWORD *)DeferredContext + 464) = 0;
  *((_BYTE *)DeferredContext + 89) = 0;
  KeReleaseSpinLockFromDpcLevel(v4);
}
