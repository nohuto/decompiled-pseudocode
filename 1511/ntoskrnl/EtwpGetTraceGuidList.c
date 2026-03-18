/*
 * XREFs of EtwpGetTraceGuidList @ 0x140660664
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x1404CCE6C (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGuidList(_OWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebp
  ULONG_PTR v5; // rcx
  unsigned int v7; // ebx
  unsigned __int64 *NextGuidEntry; // rax

  v2 = 0;
  v3 = *a2 >> 4;
  v5 = 0LL;
  v7 = 0;
  while ( 1 )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(v5, 0);
    if ( !NextGuidEntry )
      break;
    if ( ++v7 <= v3 )
      *a1++ = *(_OWORD *)(NextGuidEntry + 3);
    v5 = (ULONG_PTR)NextGuidEntry;
  }
  *a2 = 16 * v7;
  if ( v7 > v3 )
    return (unsigned int)-1073741789;
  return v2;
}
