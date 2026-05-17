/*
 * XREFs of TpSetTimerEx @ 0x18003CE70
 * Callers:
 *     TpSetTimer @ 0x18003CE60 (TpSetTimer.c)
 *     RtlUpdateTimer @ 0x18007ACF0 (RtlUpdateTimer.c)
 *     RtlDeleteTimer @ 0x18007C6E0 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x18007C830 (RtlCreateTimer.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800C8B68 (RtlpWnfCalculateAndSetNextTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TpIsTimerSet @ 0x18003CE20 (TpIsTimerSet.c)
 *     TppCancelTimer @ 0x18003CF70 (TppCancelTimer.c)
 *     TppTimerpValidateTimer @ 0x18003D1F8 (TppTimerpValidateTimer.c)
 *     TppSetTimer @ 0x18003D288 (TppSetTimer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TpSetTimerEx(__int64 a1, __int64 a2, int a3, int a4)
{
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  bool v12; // bl
  __int64 v13; // r8
  unsigned __int8 v14; // si

  if ( (unsigned int)TppTimerpValidateTimer(a1, 0LL, a2 != 0) )
  {
    v11 = *(_QWORD *)(a1 + 136);
    v12 = a2 != 0;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 232), v8, v9, v10);
    LOBYTE(v13) = a2 != 0;
    v14 = TppCancelTimer(a1, v11 + 112, v13);
    if ( a2 && *(_BYTE *)(a1 + 347) )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 232));
      v12 = 0;
    }
    if ( !v14 )
    {
      if ( !v12 )
        return v14;
      if ( (unsigned int)TpIsTimerSet(a1) )
      {
LABEL_8:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 232));
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
    goto LABEL_8;
  }
  return 0LL;
}
