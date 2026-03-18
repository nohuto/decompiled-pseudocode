/*
 * XREFs of ExpAcquireFannedOutPushLockExclusive @ 0x14012CCF4
 * Callers:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400DE500 (ExAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14009CFE0 (KeQueryMaximumProcessorCountEx.c)
 *     ExSaDecodeHandleForIndex @ 0x14012CDD8 (ExSaDecodeHandleForIndex.c)
 */

int __fastcall ExpAcquireFannedOutPushLockExclusive(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 *v6; // rax
  unsigned int v7; // ebx
  unsigned __int64 *v8; // rax
  unsigned int v9; // edi

  v6 = (unsigned __int64 *)ExSaDecodeHandleForIndex(a1, 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, a2, a3);
  v7 = 1;
  LODWORD(v8) = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v9 = (unsigned int)v8;
  while ( v7 < v9 )
  {
    v8 = (unsigned __int64 *)ExSaDecodeHandleForIndex(a1, v7);
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    {
      v8 = (unsigned __int64 *)ExSaDecodeHandleForIndex(a1, --v9);
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
        LODWORD(v8) = ExfAcquirePushLockExclusiveEx(v8, a2, a3);
    }
    else
    {
      ++v7;
    }
  }
  return (int)v8;
}
