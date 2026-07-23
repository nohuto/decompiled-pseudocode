/*
 * XREFs of KiGetNextTimer2ExpirationDueTime @ 0x14009C9E8
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x14009C8B8 (KiGetNextTimerExpirationDueTime.c)
 *     PpmIdlePrepare @ 0x1400D9B50 (PpmIdlePrepare.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetNextTimer2ExpirationDueTime(char a1, unsigned __int64 *a2, _BYTE *a3)
{
  unsigned __int64 v3; // r9
  __int64 result; // rax
  __int64 i; // rcx

  v3 = -1LL;
  *a3 = 0;
  result = (unsigned int)(a1 != 0) + 2;
  for ( i = (int)result; i <= 3; ++i )
  {
    result = 3 * i;
    if ( qword_14030E330[3 * i] < v3 )
    {
      v3 = qword_14030E330[3 * i];
      if ( i == 3 )
        *a3 = 1;
    }
  }
  *a2 = v3;
  return result;
}
