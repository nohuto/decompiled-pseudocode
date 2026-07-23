/*
 * XREFs of MiGetSystemPteStatistics @ 0x140661650
 * Callers:
 *     MmGetSessionMappedViewInformation @ 0x140657328 (MmGetSessionMappedViewInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1400BCD64 (MiGetNumberOfCachedPtes.c)
 *     RtlFindLongestRunClearEx @ 0x140212938 (RtlFindLongestRunClearEx.c)
 */

__int64 __fastcall MiGetSystemPteStatistics(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned int v3; // esi
  unsigned __int64 v7; // rax
  int NumberOfCachedPtes; // eax
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*(_BYTE *)(a1 + 24) & 4) != 0 )
    v3 = 16;
  v7 = v3 * RtlFindLongestRunClearEx((unsigned __int64 *)a1, &v11);
  if ( 0x2000000 - (unsigned __int64)v3 * *(_QWORD *)(a1 + 64) > v7 )
    v7 = 0x2000000 - v3 * *(_QWORD *)(a1 + 64);
  *a3 = v7;
  NumberOfCachedPtes = MiGetNumberOfCachedPtes(a1);
  result = v9 + v3 * NumberOfCachedPtes;
  *a2 = result + v3 * *(_QWORD *)(a1 + 96);
  return result;
}
