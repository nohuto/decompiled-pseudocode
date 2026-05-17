/*
 * XREFs of TppPoolAddWorker @ 0x180070374
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall TppPoolAddWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 UniqueThread_low; // r8
  __int64 v7; // rax
  _QWORD *v8; // rdx

  UniqueThread_low = LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  *(_DWORD *)(a2 + 40) = UniqueThread_low;
  *(_QWORD *)(a2 + 48) = a1;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 72), (char *)a2, UniqueThread_low, a4);
  v7 = a2 + 16;
  v8 = *(_QWORD **)(a1 + 104);
  *(_QWORD *)(a2 + 16) = a1 + 96;
  *(_QWORD *)(a2 + 24) = v8;
  if ( *v8 != a1 + 96 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(a1 + 104) = v7;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
}
