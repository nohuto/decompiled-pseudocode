/*
 * XREFs of TpWaitForTimer @ 0x18003B8F0
 * Callers:
 *     RtlDeleteTimer @ 0x180064690 (RtlDeleteTimer.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppWorkWait @ 0x18003B878 (TppWorkWait.c)
 *     TppTimerpValidateTimer @ 0x18003C1C8 (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18003C268 (TppCancelTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpWaitForTimer(__int64 a1, int a2)
{
  __int64 result; // rax
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // bp
  char v9; // bl
  __int64 v10; // r8
  char *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  result = TppTimerpValidateTimer(a1, 0LL);
  if ( (_DWORD)result )
  {
    v8 = 0;
    v9 = 0;
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240, v5, v6, v7);
      ++*(_BYTE *)(a1 + 355);
      LOBYTE(v10) = 1;
      v8 = TppCancelTimer(a1, *(_QWORD *)(a1 + 144) + 112LL, v10);
      if ( *(_DWORD *)(a1 + 56) )
        v9 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    result = TppWorkWait((_QWORD *)a1, a2, v6, v7);
    if ( v9 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240, v11, v12, v13);
      --*(_BYTE *)(a1 + 355);
      result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    if ( v8 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
