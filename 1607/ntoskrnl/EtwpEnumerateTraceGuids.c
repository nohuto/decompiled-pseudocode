/*
 * XREFs of EtwpEnumerateTraceGuids @ 0x140528E08
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x14040B164 (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpEnumerateTraceGuids(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // edi
  unsigned __int64 *NextGuidEntry; // rcx
  __int64 v10; // rsi

  v6 = 0;
  v7 = *a3 / 0x24u;
  v8 = 0;
  NextGuidEntry = EtwpGetNextGuidEntry(a1, 0LL, 0);
  if ( NextGuidEntry )
  {
    v10 = a2 + 20;
    while ( ++v8 <= 0x71C71C7 )
    {
      if ( v8 <= v7 )
      {
        *(_OWORD *)(v10 - 20) = *(_OWORD *)(NextGuidEntry + 3);
        *(_DWORD *)(v10 + 8) = *((_DWORD *)NextGuidEntry + 16);
        *(_DWORD *)v10 = *((unsigned __int16 *)NextGuidEntry + 36);
        *(_DWORD *)(v10 + 4) = *((unsigned __int8 *)NextGuidEntry + 74);
        *(_BYTE *)(v10 + 12) = *((_BYTE *)NextGuidEntry + 75) & 1;
        v10 += 36LL;
      }
      NextGuidEntry = EtwpGetNextGuidEntry(a1, (unsigned __int64 **)NextGuidEntry, 0);
      if ( !NextGuidEntry )
        goto LABEL_9;
    }
    v6 = -2147483643;
  }
LABEL_9:
  *a3 = 36 * v8;
  if ( v6 >= 0 && v8 > v7 )
    return (unsigned int)-1073741789;
  return (unsigned int)v6;
}
