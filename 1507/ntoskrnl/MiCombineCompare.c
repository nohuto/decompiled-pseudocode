/*
 * XREFs of MiCombineCompare @ 0x140227AFC
 * Callers:
 *     MiLocateCombineBlock @ 0x14022AA70 (MiLocateCombineBlock.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCombineCompare(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  unsigned int v6; // eax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v2 > v4 )
    return 1LL;
  if ( v2 < v4 )
    return 0xFFFFFFFFLL;
  v6 = *(_DWORD *)(a2 + 40);
  if ( v3 > v6 )
    return 1LL;
  return (unsigned int)-(v3 < v6);
}
