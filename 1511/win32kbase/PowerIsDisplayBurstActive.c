/*
 * XREFs of PowerIsDisplayBurstActive @ 0x1C00A9C90
 * Callers:
 *     PowerIsDisplayIdleExpired @ 0x1C0072600 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PowerIsDisplayBurstActive(int *a1)
{
  unsigned __int64 v2; // rdx
  unsigned int v3; // r9d
  unsigned int v4; // r8d
  unsigned int v5; // edx
  BOOL v6; // ecx
  unsigned int v7; // eax
  int v8; // eax

  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v3 = v2 - dword_1C0104728;
  v4 = v2 - HIDWORD(qword_1C0104720);
  v5 = v2 - qword_1C0104720;
  v6 = v3 <= 0x7D0 || v4 <= 0x1388 || v5 <= 0x61A8;
  v7 = v5;
  if ( v4 < v5 )
    v7 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - HIDWORD(qword_1C0104720);
  if ( v3 < v7 )
    goto LABEL_13;
  if ( v4 < v5 )
    v5 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - HIDWORD(qword_1C0104720);
  if ( v5 == v3 )
LABEL_13:
    v8 = 25;
  else
    v8 = (v5 != v4) + 5;
  if ( a1 )
    *a1 = v8;
  return v6;
}
