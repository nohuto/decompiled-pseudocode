/*
 * XREFs of sub_140587464 @ 0x140587464
 * Callers:
 *     sub_140261F50 @ 0x140261F50 (sub_140261F50.c)
 *     sub_1405870FC @ 0x1405870FC (sub_1405870FC.c)
 *     ExQueryFastCacheAppOrigin @ 0x1406EBA8C (ExQueryFastCacheAppOrigin.c)
 * Callees:
 *     ExQueryClipSp @ 0x14015B0B0 (ExQueryClipSp.c)
 *     sub_1405874F8 @ 0x1405874F8 (sub_1405874F8.c)
 */

__int64 __fastcall sub_140587464(unsigned int a1, int a2, __int64 a3, char a4, int a5, void *a6, unsigned int *a7)
{
  __int64 result; // rax
  int v11; // r8d

  if ( a1 >= 5 )
    return 3221225485LL;
  result = ExQueryClipSp(a1, a2, a3, a5, a6, a7);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
  {
    LOBYTE(v11) = a4;
    return sub_1405874F8(a1, a2, v11, a5, a6, (__int64)a7);
  }
  return result;
}
