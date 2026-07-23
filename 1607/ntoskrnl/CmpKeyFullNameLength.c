/*
 * XREFs of CmpKeyFullNameLength @ 0x140092170
 * Callers:
 *     CmpConstructNameFromKeyNodes @ 0x14002D310 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1401B48A0 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyFullNameLength(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx
  unsigned int v3; // r8d

  v1 = 0;
  while ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 178) & 4) != 0 && *(_QWORD *)(a1 + 64) )
    {
      a1 = *(_QWORD *)(a1 + 64);
    }
    else
    {
      v2 = *(_QWORD *)(a1 + 72);
      if ( (*(_DWORD *)v2 & 1) != 0 )
        v3 = v1 + 2 * *(unsigned __int16 *)(v2 + 24);
      else
        v3 = *(unsigned __int16 *)(v2 + 24) + v1;
      a1 = *(_QWORD *)(a1 + 64);
      v1 = v3 + 2;
    }
  }
  return v1;
}
