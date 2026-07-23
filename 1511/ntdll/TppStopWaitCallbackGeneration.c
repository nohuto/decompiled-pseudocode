/*
 * XREFs of TppStopWaitCallbackGeneration @ 0x180003F20
 * Callers:
 *     <none>
 * Callees:
 *     TppCancelWait @ 0x18000AA60 (TppCancelWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

void __fastcall TppStopWaitCallbackGeneration(__int64 a1, int a2)
{
  __int64 v2; // rdi
  _RTL_SRWLOCK *v3; // rsi
  signed int v6; // ecx
  signed int v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v3 = (_RTL_SRWLOCK *)(a1 + 232);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 232));
  TppCancelWait(a1, v2 + 112, a2 != 0 ? 2 : 0, &v7);
  ++*(_BYTE *)(a1 + 347);
  RtlReleaseSRWLockExclusive(v3);
  v6 = v7;
  if ( v7 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v7) == -v6 )
    (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
}
