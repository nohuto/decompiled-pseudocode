/*
 * XREFs of EtwpGetTraceGroupList @ 0x14055CEF4
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x1404D0D3C (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGroupList(_OWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v5; // ebp
  unsigned int v6; // edi
  __int64 *i; // rcx
  unsigned __int64 *NextGuidEntry; // rax

  v4 = 0;
  v5 = *a2 >> 4;
  v6 = 0;
  for ( i = 0LL; ; i = (__int64 *)NextGuidEntry )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(i, 2, a3, a4);
    if ( !NextGuidEntry )
      break;
    if ( ++v6 > 0xFFFFFFF )
    {
      v4 = -2147483643;
      break;
    }
    if ( v6 <= v5 )
      *a1++ = *(_OWORD *)(NextGuidEntry + 3);
  }
  *a2 = 16 * v6;
  if ( v4 >= 0 && v6 > v5 )
    return (unsigned int)-1073741789;
  return (unsigned int)v4;
}
