/*
 * XREFs of TpSetTimerEx @ 0x18003C000
 * Callers:
 *     TpSetTimer @ 0x18003BFF0 (TpSetTimer.c)
 *     RtlUpdateTimer @ 0x180064310 (RtlUpdateTimer.c)
 *     RtlDeleteTimer @ 0x180064690 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180064830 (RtlCreateTimer.c)
 *     RtlpWnfSetRetryTimer @ 0x1800D9EEC (RtlpWnfSetRetryTimer.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TpIsTimerSet @ 0x18003BF60 (TpIsTimerSet.c)
 *     TppTimerpValidateTimer @ 0x18003C1C8 (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18003C268 (TppCancelTimer.c)
 *     TppSetTimer @ 0x18003C388 (TppSetTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpSetTimerEx(__int64 a1, __int64 a2, int a3, int a4)
{
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  bool v12; // di
  __int64 v13; // r8
  unsigned __int8 v14; // si

  if ( (unsigned int)TppTimerpValidateTimer(a1, 0LL) )
  {
    v11 = *(_QWORD *)(a1 + 144);
    v12 = a2 != 0;
    RtlAcquireSRWLockExclusive(a1 + 240, v8, v9, v10);
    LOBYTE(v13) = a2 != 0;
    v14 = TppCancelTimer(a1, v11 + 112, v13);
    if ( a2 && *(_BYTE *)(a1 + 355) )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      v12 = 0;
    }
    if ( !v14 )
    {
      if ( !v12 )
        return v14;
      if ( (unsigned int)TpIsTimerSet(a1) )
      {
LABEL_11:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
        return v14;
      }
      _InterlockedIncrement((volatile signed __int32 *)a1);
    }
    if ( !v12 )
    {
      if ( v14 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      }
      return v14;
    }
    TppSetTimer(a1, v11 + 112, a2, a3, a4);
    goto LABEL_11;
  }
  return 0LL;
}
