/*
 * XREFs of EtwpEnumerateTraceGuids @ 0x14055E30C
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x1404D0D3C (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpEnumerateTraceGuids(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // ebp
  unsigned __int64 *NextGuidEntry; // r8
  __int64 v10; // r9
  __int64 v11; // rsi

  v6 = 0;
  v7 = 0;
  v8 = *a2 / 0x24u;
  NextGuidEntry = EtwpGetNextGuidEntry(0LL, 0, (unsigned int)*a2, a4);
  if ( NextGuidEntry )
  {
    v11 = a1 + 20;
    while ( ++v7 <= 0x71C71C7 )
    {
      if ( v7 <= v8 )
      {
        *(_OWORD *)(v11 - 20) = *(_OWORD *)(NextGuidEntry + 3);
        *(_DWORD *)(v11 + 8) = *((_DWORD *)NextGuidEntry + 16);
        *(_DWORD *)v11 = *((unsigned __int16 *)NextGuidEntry + 36);
        *(_DWORD *)(v11 + 4) = *((unsigned __int8 *)NextGuidEntry + 74);
        *(_BYTE *)(v11 + 12) = *((_BYTE *)NextGuidEntry + 75) & 1;
        v11 += 36LL;
      }
      NextGuidEntry = EtwpGetNextGuidEntry((__int64 *)NextGuidEntry, 0, (__int64)NextGuidEntry, v10);
      if ( !NextGuidEntry )
        goto LABEL_9;
    }
    v6 = -2147483643;
  }
LABEL_9:
  *a2 = 36 * v7;
  if ( v6 >= 0 && v7 > v8 )
    return (unsigned int)-1073741789;
  return (unsigned int)v6;
}
