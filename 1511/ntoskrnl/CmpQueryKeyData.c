/*
 * XREFs of CmpQueryKeyData @ 0x1403D66A8
 * Callers:
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 * Callees:
 *     CmpQueryKeyDataFromCache @ 0x1403D6770 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1403FCE20 (CmpQueryKeyDataFromNode.c)
 */

__int64 __fastcall CmpQueryKeyData(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int KeyDataFromNode; // edi
  __int64 v12; // rax
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = -1;
  if ( a2 == 4 )
  {
    return (unsigned int)CmpQueryKeyDataFromCache(a1, 4, a3, a4, a5, a6);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(a1 + 40),
            &v13);
    if ( v12 )
    {
      KeyDataFromNode = CmpQueryKeyDataFromNode(*(_QWORD *)(a1 + 32), v12, a2, a3, a4, a5, a1, a6);
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v13);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return KeyDataFromNode;
}
