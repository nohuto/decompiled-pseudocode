/*
 * XREFs of EtwpGetTraceGuidList @ 0x1406A06A4
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x14040B164 (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGuidList(__int64 a1, _OWORD *a2, _DWORD *a3)
{
  int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v5; // edi
  unsigned __int64 **v8; // rdx
  __int64 i; // r15
  unsigned __int64 *NextGuidEntry; // rax

  v3 = 0;
  v4 = *a3 >> 4;
  v5 = 0;
  v8 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, v8, 0);
    if ( !NextGuidEntry )
      break;
    if ( ++v5 > 0xFFFFFFF )
    {
      v3 = -2147483643;
      break;
    }
    if ( v5 <= v4 )
      *a2++ = *(_OWORD *)(NextGuidEntry + 3);
    v8 = (unsigned __int64 **)NextGuidEntry;
  }
  *a3 = 16 * v5;
  if ( v3 >= 0 && v5 > v4 )
    return (unsigned int)-1073741789;
  return (unsigned int)v3;
}
