/*
 * XREFs of KiGetNextTimer2ExpirationDueTime @ 0x140035414
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x1400352DC (KiGetNextTimerExpirationDueTime.c)
 *     PpmIdlePrepare @ 0x1400488C0 (PpmIdlePrepare.c)
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
    if ( qword_1402E8910[3 * i] < v3 )
    {
      v3 = qword_1402E8910[3 * i];
      if ( i == 3 )
        *a3 = 1;
    }
  }
  *a2 = v3;
  return result;
}
