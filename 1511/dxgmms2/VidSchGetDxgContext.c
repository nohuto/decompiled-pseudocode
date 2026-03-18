/*
 * XREFs of VidSchGetDxgContext @ 0x1C008B650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDxgContext(__int64 a1)
{
  if ( !a1 || *(_DWORD *)(a1 + 864) )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 56);
}
