/*
 * XREFs of ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01EE850
 * Callers:
 *     ?xxxMKButtonClick@@YAHG@Z @ 0x1C01EE7F0 (-xxxMKButtonClick@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01EEEB0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 */

__int64 __fastcall xxxMKButtonSetState(unsigned __int16 a1)
{
  unsigned __int8 v2; // cl
  unsigned __int64 v3; // rdi
  LONGLONG v4; // rsi
  __int16 v5; // bx
  __int64 v6; // rcx
  __int64 v8; // [rsp+A8h] [rbp+10h] BYREF

  v8 = 2LL;
  v2 = gwMKButtonState;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = gliQpcFreq.QuadPart * (unsigned int)v3 / 1000;
  if ( a1 )
    v5 = gwMKButtonState & ~gwMKCurrentButton;
  else
    v5 = gwMKButtonState | gwMKCurrentButton;
  if ( (((unsigned __int8)v5 ^ (unsigned __int8)gwMKButtonState) & 1) != 0 )
  {
    xxxButtonEvent(
      1u,
      gptCursorAsync,
      0LL,
      a1,
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
      gliQpcFreq.QuadPart
    * (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
    / 1000,
      0LL,
      0LL,
      0LL,
      0,
      0,
      0,
      0,
      0,
      0LL,
      &v8);
    v2 = gwMKButtonState;
  }
  if ( (((unsigned __int8)v5 ^ v2) & 2) != 0 )
    xxxButtonEvent(2u, gptCursorAsync, 0LL, a1, v3, v4, 0LL, 0LL, 0LL, 0, 0, 0, 0, 0, 0LL, &v8);
  gwMKButtonState = v5;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
  PostEventMessageEx(v6, *(_QWORD *)(v6 + 384), 0xDu, 0LL, 0, 11LL, 3LL, 0LL);
  return 0LL;
}
