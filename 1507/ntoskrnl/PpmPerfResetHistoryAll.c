/*
 * XREFs of PpmPerfResetHistoryAll @ 0x1405B1174
 * Callers:
 *     PpmCheckReInit @ 0x1405B0AB4 (PpmCheckReInit.c)
 * Callees:
 *     PpmPerfResetHistory @ 0x140167DA4 (PpmPerfResetHistory.c)
 */

__int64 PpmPerfResetHistoryAll()
{
  unsigned __int64 v0; // rdi
  unsigned __int16 i; // bx
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax

  v0 = qword_140320998[0];
  for ( i = 0; ; v0 = qword_140320998[i] )
  {
    while ( v0 )
    {
      _BitScanForward64(&v2, v0);
      v0 &= ~(1LL << v2);
      v3 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v2];
      if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
        v4 = 0LL;
      else
        v4 = KiProcessorBlock[v3];
      PpmPerfResetHistory(v4);
    }
    result = ++i;
    if ( i >= (unsigned int)LOWORD(PpmCheckRegistered[0]) )
      break;
  }
  return result;
}
