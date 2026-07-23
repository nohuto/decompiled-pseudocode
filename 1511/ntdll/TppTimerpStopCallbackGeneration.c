/*
 * XREFs of TppTimerpStopCallbackGeneration @ 0x1800044A0
 * Callers:
 *     <none>
 * Callees:
 *     TppCancelTimer @ 0x18000B028 (TppCancelTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TppTimerpStopCallbackGeneration(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 232));
  v2 = *(_QWORD *)(a1 + 136);
  ++*(_BYTE *)(a1 + 347);
  result = TppCancelTimer(a1, v2 + 112, 0LL);
  if ( (_BYTE)result )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
