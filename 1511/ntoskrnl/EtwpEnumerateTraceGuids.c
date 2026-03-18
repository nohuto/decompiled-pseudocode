/*
 * XREFs of EtwpEnumerateTraceGuids @ 0x1404E307C
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x1404CCE6C (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpEnumerateTraceGuids(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned __int64 *NextGuidEntry; // r8
  __int64 v8; // rdi

  v4 = 0;
  v5 = 0;
  v6 = *a2 / 0x24u;
  NextGuidEntry = EtwpGetNextGuidEntry(0LL, 0);
  if ( NextGuidEntry )
  {
    v8 = a1 + 20;
    do
    {
      if ( ++v5 <= v6 )
      {
        *(_OWORD *)(v8 - 20) = *(_OWORD *)(NextGuidEntry + 3);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)NextGuidEntry + 16);
        *(_DWORD *)v8 = *((unsigned __int16 *)NextGuidEntry + 36);
        *(_DWORD *)(v8 + 4) = *((unsigned __int8 *)NextGuidEntry + 74);
        *(_BYTE *)(v8 + 12) = *((_BYTE *)NextGuidEntry + 75) & 1;
        v8 += 36LL;
      }
      NextGuidEntry = EtwpGetNextGuidEntry((ULONG_PTR)NextGuidEntry, 0);
    }
    while ( NextGuidEntry );
  }
  *a2 = 36 * v5;
  if ( v5 > v6 )
    return (unsigned int)-1073741789;
  return v4;
}
