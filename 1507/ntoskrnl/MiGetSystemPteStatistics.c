/*
 * XREFs of MiGetSystemPteStatistics @ 0x1406A8808
 * Callers:
 *     MmGetSessionMappedViewInformation @ 0x1406A0A34 (MmGetSessionMappedViewInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1400140EC (MiGetNumberOfCachedPtes.c)
 *     RtlFindLongestRunClearEx @ 0x1402476D0 (RtlFindLongestRunClearEx.c)
 */

__int64 __fastcall MiGetSystemPteStatistics(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned int v4; // esi
  unsigned __int64 v7; // rax
  int NumberOfCachedPtes; // eax
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = 1;
  if ( (*(_BYTE *)(a1 + 24) & 4) != 0 )
    v4 = 16;
  v7 = v4 * RtlFindLongestRunClearEx((unsigned __int64 *)a1, &v11);
  if ( 0x2000000 - (unsigned __int64)v4 * *(_QWORD *)(a1 + 64) > v7 )
    v7 = 0x2000000 - v4 * *(_QWORD *)(a1 + 64);
  *a3 = v7;
  NumberOfCachedPtes = MiGetNumberOfCachedPtes(a1);
  result = v9 + v4 * NumberOfCachedPtes;
  *a2 = result + v4 * *(_QWORD *)(a1 + 88);
  return result;
}
