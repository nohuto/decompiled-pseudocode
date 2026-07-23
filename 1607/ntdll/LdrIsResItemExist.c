/*
 * XREFs of LdrIsResItemExist @ 0x18003F138
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180030398 (LdrpSearchResourceSection_U.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037A68 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrRscIsTypeExist @ 0x18003E3E0 (LdrRscIsTypeExist.c)
 *     LdrpGetRcConfig @ 0x18003F1C4 (LdrpGetRcConfig.c)
 */

int __fastcall LdrIsResItemExist(void *a1, const wchar_t **a2, __int64 a3, unsigned int a4)
{
  unsigned int *RcConfig; // rax
  unsigned int *v7; // rbx
  int result; // eax
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  RcConfig = (unsigned int *)LdrpGetRcConfig(a1);
  v7 = RcConfig;
  if ( !RcConfig )
    return 0x80000;
  if ( (int)LdrRscIsTypeExist(RcConfig, *a2, a4, &v9) < 0 )
    return 393216;
  result = v9;
  if ( (v7[5] & 0x100) != 0 )
    result = v9 | 0x100000;
  if ( (v7[4] & 0x10) != 0 )
    return result | 0x200000;
  return result;
}
