/*
 * XREFs of PowerIsDisplayIdleExpired @ 0x1C0076F00
 * Callers:
 *     <none>
 * Callees:
 *     IsTimeFromLastInput @ 0x1C00783D0 (IsTimeFromLastInput.c)
 *     PowerIsDisplayBurstActive @ 0x1C00B2FE0 (PowerIsDisplayBurstActive.c)
 *     PowerIsDisplayRequired @ 0x1C00B3090 (PowerIsDisplayRequired.c)
 */

__int64 __fastcall PowerIsDisplayIdleExpired(int a1, int *a2)
{
  int v3; // ecx
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( qword_1C011A4F0 >= (unsigned __int64)qword_1C011BAE8 )
  {
    if ( giPowerOffTimeOutMs > a1
      && (unsigned int)IsTimeFromLastInput((unsigned int)(giPowerOffTimeOutMs - a1))
      && !(unsigned int)PowerIsDisplayRequired()
      && !(unsigned int)PowerIsDisplayBurstActive(0LL) )
    {
      v3 = 12;
      goto LABEL_9;
    }
  }
  else if ( !(unsigned int)PowerIsDisplayBurstActive(&v5) )
  {
    v3 = v5;
LABEL_9:
    result = 1LL;
    goto LABEL_11;
  }
  result = 0LL;
  v3 = 0;
LABEL_11:
  if ( a2 )
    *a2 = v3;
  return result;
}
