/*
 * XREFs of CmpQueryKeyData @ 0x1404A7348
 * Callers:
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 * Callees:
 *     CmpQueryKeyDataFromNode @ 0x1404370E0 (CmpQueryKeyDataFromNode.c)
 *     CmpQueryKeyDataFromCache @ 0x1404A7428 (CmpQueryKeyDataFromCache.c)
 */

__int64 __fastcall CmpQueryKeyData(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int KeyDataFromNode; // ebx
  __int64 v12; // rdx
  _DWORD v13[6]; // [rsp+40h] [rbp-18h] BYREF

  v13[0] = -1;
  v13[1] = 0;
  if ( a2 == 4 )
  {
    return (unsigned int)CmpQueryKeyDataFromCache(a1, 4, a3, a4, a5, a6);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
            *(_QWORD *)(a1 + 24),
            *(unsigned int *)(a1 + 32),
            v13);
    if ( v12 )
    {
      KeyDataFromNode = CmpQueryKeyDataFromNode(*(_QWORD *)(a1 + 24), v12, a2, a3, a4, a5, a1, a6);
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v13);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return KeyDataFromNode;
}
