/*
 * XREFs of sub_1406AF7F8 @ 0x1406AF7F8
 * Callers:
 *     ExReArmFastCache @ 0x1406AE194 (ExReArmFastCache.c)
 *     sub_1406AE54C @ 0x1406AE54C (sub_1406AE54C.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 * Callees:
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     ExpObtainFastCacheKeyBody @ 0x14057AB9C (ExpObtainFastCacheKeyBody.c)
 */

__int64 __fastcall sub_1406AF7F8(unsigned int a1, _DWORD *a2)
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
  v5 = (char *)&unk_1407474A0 + 8 * v4;
  if ( *((_QWORD *)v5 + 7)
    || (result = ExpObtainFastCacheKeyBody((UNICODE_STRING *)((char *)&unk_1407474A0 + 8 * v4 + 40), (PVOID *)v5 + 7),
        (int)result >= 0) )
  {
    v6 = *((_QWORD *)v5 + 7);
    if ( a2 )
    {
      LODWORD(v7) = a2[2] + 24;
      return CmSetValueKey(v6, (UNICODE_STRING *)&stru_1406E9910, 3, a2, v7, 0LL, 0);
    }
    else
    {
      v8 = stru_1406E9910;
      result = CmDeleteValueKey(v6, &v8, 0LL, 0);
      if ( (_DWORD)result == -1073741772 )
        return 0LL;
    }
  }
  return result;
}
