/*
 * XREFs of sub_1406ED5D0 @ 0x1406ED5D0
 * Callers:
 *     ExReArmFastCache @ 0x1406EBBEC (ExReArmFastCache.c)
 *     sub_1406EC140 @ 0x1406EC140 (sub_1406EC140.c)
 *     sub_1407DB064 @ 0x1407DB064 (sub_1407DB064.c)
 * Callees:
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     sub_1405BC990 @ 0x1405BC990 (sub_1405BC990.c)
 */

__int64 __fastcall sub_1406ED5D0(unsigned int a1, _DWORD *a2)
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
  v5 = (char *)&unk_14077E460 + 8 * v4;
  if ( *((_QWORD *)v5 + 7)
    || (result = sub_1405BC990((UNICODE_STRING *)((char *)&unk_14077E460 + 8 * v4 + 40), (PVOID *)v5 + 7),
        (int)result >= 0) )
  {
    v6 = *((_QWORD *)v5 + 7);
    if ( a2 )
    {
      LODWORD(v7) = a2[2] + 24;
      return CmSetValueKey(v6, &stru_140721A08, 3u, a2, v7, 0LL, 0);
    }
    else
    {
      v8 = stru_140721A08;
      result = CmDeleteValueKey(v6, (int)&v8, 0LL, 0);
      if ( (_DWORD)result == -1073741772 )
        return 0LL;
    }
  }
  return result;
}
