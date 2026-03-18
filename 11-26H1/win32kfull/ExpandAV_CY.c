/*
 * XREFs of ExpandAV_CY @ 0x140308AC0
 * Callers:
 *     <none>
 * Callees:
 *     BltAV_CY @ 0x1403088C0 (BltAV_CY.c)
 */

__int64 __fastcall ExpandAV_CY(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int16 *v3; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 312);
  if ( (*(_DWORD *)(v1 + 232))-- == 1 )
  {
    v3 = *(unsigned __int16 **)(v1 + 216);
    *(_DWORD *)(v1 + 232) = *v3;
    *(_QWORD *)(v1 + 216) = v3 + 1;
    return BltAV_CY(a1);
  }
  return result;
}
