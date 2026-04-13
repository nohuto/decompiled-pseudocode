/*
 * XREFs of IsOpenStateExplicitPresent @ 0x1800700F8
 * Callers:
 *     ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x180067964 (-GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180070150 (ApiSetQueryApiSetPresence_0.c)
 */

char IsOpenStateExplicitPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800F4314 == 1 )
    return 1;
  if ( dword_1800F4314 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800F4314 = 2 - (v1 != 0);
  return result;
}
