/*
 * XREFs of AVrfpFindClosestThunkDuplicate @ 0x1800D6C08
 * Callers:
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800D6690 (AVrfpChainDuplicateVerificationLayers.c)
 * Callees:
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     _stricmp @ 0x180097DC0 (_stricmp.c)
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 */

const char *__fastcall AVrfpFindClosestThunkDuplicate(__int64 a1, const wchar_t *a2, const char *a3)
{
  __int64 *v3; // rdi
  __int64 *v6; // rsi
  const wchar_t **v7; // rsi
  unsigned int v8; // r14d
  const wchar_t **v9; // rbx
  const char **v10; // rbx
  __int64 v11; // rbp
  const char **v12; // r15

  v3 = *(__int64 **)(a1 + 8);
  do
  {
LABEL_16:
    if ( v3 == &AVrfpVerifierProvidersList )
      return 0LL;
    v6 = v3;
    v3 = (__int64 *)v3[1];
    if ( (AVrfpDebug & 0x20) != 0 )
      DbgPrint("AVRF: chain: searching in %ws\n", v6[3]);
    v7 = (const wchar_t **)v6[5];
    v8 = 0;
  }
  while ( !*v7 );
  v9 = v7;
  while ( 1 )
  {
    if ( (AVrfpDebug & 0x20) != 0 )
    {
      v9 = &v7[4 * v8];
      DbgPrint("AVRF: chain: dll: %ws\n", *v9);
    }
    if ( !wcsicmp(*v9, a2) )
    {
      v10 = (const char **)v9[3];
      v11 = 0LL;
      if ( *v10 )
        break;
    }
LABEL_15:
    v9 = &v7[4 * ++v8];
    if ( !*v9 )
      goto LABEL_16;
  }
  v12 = v10;
  while ( 1 )
  {
    if ( (AVrfpDebug & 0x20) != 0 )
    {
      v12 = &v10[3 * v11];
      DbgPrint("AVRF: chain: thunk: %s == %s ?\n", *v12, a3);
    }
    if ( !stricmp(*v12, a3) )
      break;
    v11 = (unsigned int)(v11 + 1);
    v12 = &v10[3 * v11];
    if ( !*v12 )
      goto LABEL_15;
  }
  if ( (AVrfpDebug & 0x20) != 0 )
    DbgPrint("AVRF: Found duplicate for (%ws: %s) in %ws\n", a2, a3, v7[4 * v8]);
  return v10[3 * v11 + 2];
}
