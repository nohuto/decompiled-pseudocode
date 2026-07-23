/*
 * XREFs of KiGetNextTimer2ExpirationDueTime @ 0x1402098A0
 * Callers:
 *     PpmIdlePrepare @ 0x1400A91A0 (PpmIdlePrepare.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetNextTimer2ExpirationDueTime(char a1, unsigned __int64 *a2, _BYTE *a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  __int64 *v5; // rcx
  __int64 result; // rax

  v3 = 0LL;
  v4 = -1LL;
  *a3 = 0;
  if ( !a1 )
  {
    v5 = &qword_140338D90;
    do
    {
      if ( v3 != 3 && *v5 < v4 )
        v4 = *v5;
      ++v3;
      v5 += 3;
    }
    while ( (__int64)v5 < (__int64)&KiHighResolutionTimerClockIntervalRequest.Children[1] );
  }
  result = qword_140338DA8;
  if ( qword_140338DA8 < v4 )
  {
    v4 = qword_140338DA8;
    *a3 = 1;
  }
  *a2 = v4;
  return result;
}
