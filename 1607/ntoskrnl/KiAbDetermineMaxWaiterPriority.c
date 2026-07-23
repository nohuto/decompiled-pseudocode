/*
 * XREFs of KiAbDetermineMaxWaiterPriority @ 0x14006B564
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006B728 (KiAbProcessThreadLocks.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbDetermineMaxWaiterPriority(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v3; // rax
  char v4; // cl

  v2 = *(_WORD *)(a1 + 90);
  *(_DWORD *)a2 = 0;
  if ( (v2 & 0x1FE) != 0 )
    *(_BYTE *)(a2 + 1) = 2;
  if ( (v2 & 0xFE00) != 0 )
    *(_BYTE *)(a2 + 2) = 1;
  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 )
  {
    LOBYTE(v3) = *(_BYTE *)(v3 + 48);
    *(_BYTE *)a2 = v3;
  }
  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 - (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 24)) + 195);
    v4 = v3;
    if ( (char)v3 > 15 )
      v4 = 15;
    if ( v4 > *(char *)a2 )
      *(_BYTE *)a2 = v4;
  }
  return v3;
}
