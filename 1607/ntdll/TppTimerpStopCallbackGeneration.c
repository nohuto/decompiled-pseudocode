/*
 * XREFs of TppTimerpStopCallbackGeneration @ 0x180064070
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x18003C268 (TppCancelTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TppTimerpStopCallbackGeneration(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  signed __int32 v7; // eax

  RtlAcquireSRWLockExclusive(a1 + 240, a2, a3, a4);
  v5 = *(_QWORD *)(a1 + 144);
  ++*(_BYTE *)(a1 + 355);
  LOBYTE(v7) = TppCancelTimer(a1, (char *)(v5 + 112), 0LL, v6);
  if ( (_BYTE)v7 )
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( v7 == 1 )
      LOBYTE(v7) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return v7;
}
