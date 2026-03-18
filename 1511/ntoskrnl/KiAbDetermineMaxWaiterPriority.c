/*
 * XREFs of KiAbDetermineMaxWaiterPriority @ 0x1400EF2B4
 * Callers:
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbDetermineMaxWaiterPriority(__int64 a1, char *a2)
{
  __int64 v3; // rax
  char v4; // dl
  char v5; // cl

  a2[1] = *(_WORD *)(a1 + 90) != 0 ? 2 : 0;
  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 )
  {
    LOBYTE(v3) = *(_BYTE *)(v3 + 48);
    *a2 = v3;
  }
  else
  {
    *a2 = 0;
  }
  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
  {
    v4 = *(_BYTE *)(a1 - (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 24)) + 195);
    if ( v4 > 15 )
      v4 = 15;
    v5 = *a2;
    LOBYTE(v3) = v4;
    if ( v4 > *a2 )
      v5 = v4;
    *a2 = v5;
  }
  return v3;
}
