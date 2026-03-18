/*
 * XREFs of CmpSearchKCBForTransChildByName @ 0x140448BF4
 * Callers:
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 * Callees:
 *     CmListGetPrevElement @ 0x140448C64 (CmListGetPrevElement.c)
 *     CmpDoCompareKeyName @ 0x1404CB110 (CmpDoCompareKeyName.c)
 */

__int64 __fastcall CmpSearchKCBForTransChildByName(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = a1 + 200;
  while ( 1 )
  {
    result = CmListGetPrevElement(v2, &v6);
    if ( !result )
      break;
    if ( *(_DWORD *)(result + 68) == 1 )
    {
      v5 = *(_QWORD *)(result + 80);
      if ( (*(_DWORD *)(v5 + 4) & 0x20000) == 0
        && !(unsigned int)CmpDoCompareKeyName(*(_QWORD *)(v5 + 32), a2, 0LL, *(unsigned int *)(v5 + 40)) )
      {
        return v5;
      }
    }
  }
  return result;
}
