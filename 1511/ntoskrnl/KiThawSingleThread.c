/*
 * XREFs of KiThawSingleThread @ 0x140095E5C
 * Callers:
 *     KeForceResumeProcess @ 0x1400946B4 (KeForceResumeProcess.c)
 *     KeThawProcess @ 0x140095D30 (KeThawProcess.c)
 * Callees:
 *     KiResumeThread @ 0x140028CF8 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 */

char __fastcall KiThawSingleThread(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // rdi
  char v5; // si
  char result; // al
  __int64 v8; // r8

  v3 = (volatile signed __int32 *)(a2 + 736);
  v5 = a3;
  result = KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736), a2, a3);
  if ( (*(_DWORD *)(a2 + 120) & 0x2000) != 0 || v5 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xDu);
    if ( !*(_BYTE *)(a2 + 644) )
    {
      LOBYTE(v8) = v5;
      result = KiResumeThread(a2, a1, v8);
    }
  }
  _InterlockedAnd(v3, 0xFFFFFF7F);
  return result;
}
