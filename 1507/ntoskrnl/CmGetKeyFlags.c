/*
 * XREFs of CmGetKeyFlags @ 0x140663DA0
 * Callers:
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 * Callees:
 *     CmListGetPrevElement @ 0x140448C64 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x140449EE8 (CmEqualTrans.c)
 */

__int64 __fastcall CmGetKeyFlags(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rbp
  __int64 PrevElement; // rax
  __int64 v7; // rdi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 184);
  v9 = 0LL;
  v4 = v2 & 0xF;
  if ( a2 )
  {
    v5 = a1 + 200;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v5, &v9);
      v7 = PrevElement;
      if ( !PrevElement )
        break;
      if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), a2) && *(_DWORD *)(v7 + 68) == 7 )
        return *(unsigned int *)(v7 + 80);
    }
  }
  return v4;
}
