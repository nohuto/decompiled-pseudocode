/*
 * XREFs of sub_140669FD4 @ 0x140669FD4
 * Callers:
 *     ExReArmFastCache @ 0x14066869C (ExReArmFastCache.c)
 *     sub_140668B98 @ 0x140668B98 (sub_140668B98.c)
 *     sub_140785A2C @ 0x140785A2C (sub_140785A2C.c)
 * Callees:
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     sub_14054598C @ 0x14054598C (sub_14054598C.c)
 */

__int64 __fastcall sub_140669FD4(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  char *v5; // rdi
  __int64 v6; // rcx
  size_t v7; // [rsp+20h] [rbp-38h]
  UNICODE_STRING v8; // [rsp+40h] [rbp-18h] BYREF

  if ( a2 && ExpFastCacheReArmed )
    return 3221267077LL;
  v4 = 9LL * a1;
  v5 = (char *)&unk_1406FB430 + 8 * v4;
  if ( *((_QWORD *)v5 + 7)
    || (result = sub_14054598C((UNICODE_STRING *)((char *)&unk_1406FB430 + 8 * v4 + 40), (PVOID *)v5 + 7),
        (int)result >= 0) )
  {
    v6 = *((_QWORD *)v5 + 7);
    if ( a2 )
    {
      LODWORD(v7) = a2[2] + 24;
      return CmSetValueKey(v6, &stru_1406A17A8, 3u, a2, v7, 0LL, 0);
    }
    else
    {
      v8 = stru_1406A17A8;
      result = CmDeleteValueKey(v6, (int)&v8, 0LL, 0);
      if ( (_DWORD)result == -1073741772 )
        return 0LL;
    }
  }
  return result;
}
