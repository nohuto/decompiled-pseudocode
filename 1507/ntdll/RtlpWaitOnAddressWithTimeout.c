/*
 * XREFs of RtlpWaitOnAddressWithTimeout @ 0x180036050
 * Callers:
 *     RtlpWaitOnAddress @ 0x180035EEC (RtlpWaitOnAddress.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18006E06C (RtlpWaitOnAddressRemoveWaitBlock.c)
 * Callees:
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18006E06C (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     NtWaitForAlertByThreadId @ 0x180095430 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpWaitOnAddressWithTimeout(__int64 a1, LARGE_INTEGER *a2, unsigned int a3)
{
  int v4; // ecx
  unsigned __int32 v5; // edi

  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v4 = 0;
    if ( a3 )
    {
      while ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        _mm_pause();
        if ( ++v4 >= a3 )
          goto LABEL_3;
      }
      return 0LL;
    }
  }
LABEL_3:
  if ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 40), 0) )
    return 0LL;
  v5 = NtWaitForAlertByThreadId(*(PVOID *)a1, a2);
  if ( v5 == 258 )
  {
    if ( _InterlockedExchange((volatile __int32 *)(a1 + 40), 4) == 2 )
      v5 = NtWaitForAlertByThreadId(*(PVOID *)a1, 0LL);
    else
      RtlpWaitOnAddressRemoveWaitBlock(a1);
  }
  if ( v5 == 257 )
    return 0;
  return v5;
}
