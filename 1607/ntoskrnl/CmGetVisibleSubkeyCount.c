/*
 * XREFs of CmGetVisibleSubkeyCount @ 0x1403FAE50
 * Callers:
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmpQueryKeyDataFromNode @ 0x1404370E0 (CmpQueryKeyDataFromNode.c)
 *     CmpQueryKeyDataFromCache @ 0x1404A7428 (CmpQueryKeyDataFromCache.c)
 * Callees:
 *     CmEqualTrans @ 0x1403FC890 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140401CEC (CmListGetNextElement.c)
 */

__int64 __fastcall CmGetVisibleSubkeyCount(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rbp
  __int64 NextElement; // rax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a2 + 20) + *(_DWORD *)(a2 + 24);
  v10 = 0LL;
  if ( a1 && a3 )
  {
    v6 = a1 + 200;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v6, &v10, 32LL);
      v8 = NextElement;
      if ( !NextElement )
        break;
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), a3) )
      {
        v9 = *(_DWORD *)(v8 + 68);
        if ( v9 == 1 )
        {
          ++v4;
        }
        else if ( v9 == 3 )
        {
          --v4;
        }
      }
    }
  }
  return v4;
}
