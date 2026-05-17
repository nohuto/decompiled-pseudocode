/*
 * XREFs of TpSetTimerEx @ 0x18000AF20
 * Callers:
 *     RtlDeleteTimer @ 0x180007F40 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x1800081A0 (RtlCreateTimer.c)
 *     TpSetTimer @ 0x18000AF10 (TpSetTimer.c)
 *     RtlUpdateTimer @ 0x180081910 (RtlUpdateTimer.c)
 *     RtlpWnfSetRetryTimer @ 0x1800D1B3C (RtlpWnfSetRetryTimer.c)
 * Callees:
 *     TpIsTimerSet @ 0x18000AED0 (TpIsTimerSet.c)
 *     TppCancelTimer @ 0x18000B028 (TppCancelTimer.c)
 *     TppTimerpValidateTimer @ 0x18000B2BC (TppTimerpValidateTimer.c)
 *     TppSetTimer @ 0x18000B34C (TppSetTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TpSetTimerEx(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // r14
  bool v9; // bl
  __int64 v10; // r8
  unsigned __int8 v11; // si

  if ( (unsigned int)TppTimerpValidateTimer(a1, 0LL, a2 != 0) )
  {
    v8 = *(_QWORD *)(a1 + 136);
    v9 = a2 != 0;
    RtlAcquireSRWLockExclusive(a1 + 232);
    LOBYTE(v10) = a2 != 0;
    v11 = TppCancelTimer(a1, v8 + 112, v10);
    if ( a2 && *(_BYTE *)(a1 + 347) )
    {
      RtlReleaseSRWLockExclusive(a1 + 232);
      v9 = 0;
    }
    if ( !v11 )
    {
      if ( !v9 )
        return v11;
      if ( (unsigned int)TpIsTimerSet(a1) )
      {
LABEL_8:
        RtlReleaseSRWLockExclusive(a1 + 232);
        return v11;
      }
      _InterlockedIncrement((volatile signed __int32 *)a1);
    }
    if ( !v9 )
    {
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      }
      return v11;
    }
    TppSetTimer(a1, v8 + 112, a2, a3, a4);
    goto LABEL_8;
  }
  return 0LL;
}
