/*
 * XREFs of CmpGetEffectiveCellType @ 0x140663E18
 * Callers:
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 * Callees:
 *     CmListGetPrevElement @ 0x140448C64 (CmListGetPrevElement.c)
 */

__int64 __fastcall CmpGetEffectiveCellType(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 PrevElement; // rax
  __int64 v4; // r9
  int v5; // r11d
  unsigned int v6; // eax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 && *(_QWORD *)(a1 + 232) )
  {
    v8 = 0LL;
    v2 = a1 + 200;
    do
    {
      PrevElement = CmListGetPrevElement(v2, &v8);
      if ( !PrevElement )
      {
        v6 = *(_DWORD *)(v4 + 40);
        return v6 >> 31;
      }
    }
    while ( *(_DWORD *)(PrevElement + 68) != v5 );
    return *(unsigned int *)(PrevElement + 72);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 40);
    return v6 >> 31;
  }
}
