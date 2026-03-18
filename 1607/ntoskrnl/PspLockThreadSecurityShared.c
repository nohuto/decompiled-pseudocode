/*
 * XREFs of PspLockThreadSecurityShared @ 0x1400870A0
 * Callers:
 *     ObOpenObjectByPointer @ 0x1404203C0 (ObOpenObjectByPointer.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     PsReferenceImpersonationToken @ 0x140499D10 (PsReferenceImpersonationToken.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405188AC (PspWow64ReadOrWriteThreadCpuArea.c)
 *     NtQueryInformationThread @ 0x140519650 (NtQueryInformationThread.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockThreadSecurityShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  --*(_WORD *)(a2 + 484);
  v2 = (volatile signed __int64 *)(a1 + 1712);
  v3 = KeAbPreAcquire(a1 + 1712, 0LL, 0);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(v2, v3, v2);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}
