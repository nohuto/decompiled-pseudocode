/*
 * XREFs of HvlQueryProcessorTopologyEx @ 0x1401BAF54
 * Callers:
 *     HvlQueryProcessorTopology @ 0x1401BAF10 (HvlQueryProcessorTopology.c)
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x1401BB874 (HvlpGetLpcbByLpIndex.c)
 */

__int64 __fastcall HvlQueryProcessorTopologyEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
{
  __int64 LpcbByLpIndex; // rax
  _DWORD *v7; // r9
  _DWORD *v8; // r10
  _WORD *v9; // r11
  int v10; // ecx
  int v11; // eax

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  if ( (unsigned int)a1 >= 0x200 )
    return 3221225485LL;
  LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1, a2, a3, a4);
  if ( !LpcbByLpIndex )
    return 3221225485LL;
  if ( v9 )
    *v9 = *(_WORD *)(LpcbByLpIndex + 12);
  if ( v8 )
    *v8 = *(_DWORD *)(LpcbByLpIndex + 16);
  if ( v7 )
    *v7 = *(_DWORD *)(LpcbByLpIndex + 20);
  if ( a5 )
  {
    v10 = *(_DWORD *)(LpcbByLpIndex + 24);
    v11 = -1;
    if ( v10 != -1 )
      v11 = v10;
    *a5 = v11;
  }
  return 0LL;
}
