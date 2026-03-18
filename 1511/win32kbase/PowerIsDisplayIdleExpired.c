/*
 * XREFs of PowerIsDisplayIdleExpired @ 0x1C0072600
 * Callers:
 *     <none>
 * Callees:
 *     IsTimeFromLastInput @ 0x1C0074560 (IsTimeFromLastInput.c)
 *     PowerIsDisplayBurstActive @ 0x1C00A9C90 (PowerIsDisplayBurstActive.c)
 *     PowerIsDisplayRequired @ 0x1C00A9D30 (PowerIsDisplayRequired.c)
 */

__int64 __fastcall PowerIsDisplayIdleExpired(int a1, int *a2)
{
  int v3; // eax
  __int64 v4; // r8
  __int64 result; // rax
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = (unsigned int)(v3 - dword_1C01030E8);
  if ( (unsigned int)v4 <= v3 - dword_1C010471C )
  {
    if ( giPowerOffTimeOutMs > a1
      && (unsigned int)IsTimeFromLastInput((unsigned int)(giPowerOffTimeOutMs - a1))
      && !(unsigned int)PowerIsDisplayRequired()
      && !(unsigned int)PowerIsDisplayBurstActive(0LL, v7, v8, v9) )
    {
      v6 = 12;
      goto LABEL_13;
    }
LABEL_3:
    result = 0LL;
    v6 = 0;
    goto LABEL_4;
  }
  if ( (unsigned int)PowerIsDisplayBurstActive(&v10, a2, v4, (unsigned int)a1) )
    goto LABEL_3;
  v6 = v10;
LABEL_13:
  result = 1LL;
LABEL_4:
  if ( a2 )
    *a2 = v6;
  return result;
}
