/*
 * XREFs of RtlpWaitOnAddressWithTimeout @ 0x180066A4C
 * Callers:
 *     RtlpWaitOnAddress @ 0x1800668E4 (RtlpWaitOnAddress.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x180066B7C (RtlpWaitOnAddressRemoveWaitBlock.c)
 * Callees:
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x180066B7C (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     NtWaitForAlertByThreadId @ 0x1800A9B90 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpWaitOnAddressWithTimeout(__int64 a1, volatile signed __int32 *a2, __int64 a3, unsigned int a4)
{
  int v6; // edx
  unsigned int v7; // edi

  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v6 = 0;
    if ( a4 )
    {
      while ( (a2[10] & 1) != 0 )
      {
        _mm_pause();
        if ( ++v6 >= a4 )
          goto LABEL_3;
      }
      return 0LL;
    }
  }
LABEL_3:
  if ( !_interlockedbittestandreset(a2 + 10, 0) )
    return 0LL;
  v7 = NtWaitForAlertByThreadId(*(_QWORD *)a2, a3);
  if ( v7 == 258 )
  {
    if ( _InterlockedExchange(a2 + 10, 4) == 2 )
      v7 = NtWaitForAlertByThreadId(*(_QWORD *)a2, 0LL);
    else
      RtlpWaitOnAddressRemoveWaitBlock(a1, a2);
  }
  if ( v7 == 257 )
    return 0;
  return v7;
}
