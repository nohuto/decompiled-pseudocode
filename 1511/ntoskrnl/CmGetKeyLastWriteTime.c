/*
 * XREFs of CmGetKeyLastWriteTime @ 0x1403D6958
 * Callers:
 *     CmpQueryKeyDataFromCache @ 0x1403D6770 (CmpQueryKeyDataFromCache.c)
 * Callees:
 *     CmListGetPrevElement @ 0x1403DF088 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x1403E0784 (CmEqualTrans.c)
 */

__int64 __fastcall CmGetKeyLastWriteTime(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rbp
  __int64 PrevElement; // rax
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 4);
    if ( !a1 )
      return v3;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 168);
  }
  if ( a3 )
  {
    v5 = a1 + 200;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v5, &v9);
      v7 = PrevElement;
      if ( !PrevElement )
        break;
      v8 = CmEqualTrans(*(_QWORD *)(PrevElement + 56));
      if ( v8 && *(_DWORD *)(v7 + 68) == 8 )
        return *(_QWORD *)(v7 + 80);
    }
  }
  return v3;
}
