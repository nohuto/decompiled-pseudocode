/*
 * XREFs of CmGetVisibleSubkeyCount @ 0x1403DB0B4
 * Callers:
 *     CmpQueryKeyDataFromCache @ 0x1403D6770 (CmpQueryKeyDataFromCache.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpQueryKeyDataFromNode @ 0x1403FCE20 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     CmListGetNextElement @ 0x1403D72EC (CmListGetNextElement.c)
 *     CmEqualTrans @ 0x1403E0784 (CmEqualTrans.c)
 */

__int64 __fastcall CmGetVisibleSubkeyCount(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rbp
  char *NextElement; // rax
  char *v7; // rdi
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a2 + 20) + *(_DWORD *)(a2 + 24);
  v9 = 0LL;
  if ( a1 && a3 )
  {
    v5 = (_QWORD *)(a1 + 200);
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v5, &v9, 32);
      v7 = NextElement;
      if ( !NextElement )
        break;
      if ( (unsigned __int8)CmEqualTrans(*((_QWORD *)NextElement + 7)) )
      {
        v8 = *((_DWORD *)v7 + 17);
        if ( v8 == 1 )
        {
          ++v3;
        }
        else if ( v8 == 3 )
        {
          --v3;
        }
      }
    }
  }
  return v3;
}
