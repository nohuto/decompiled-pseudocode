/*
 * XREFs of ?IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z @ 0x1C0027860
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C002753C (FxLibraryCommonRegisterClient.c)
 *     GetEnhancedVerifierOptions @ 0x1C00276AC (GetEnhancedVerifierOptions.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClientInfoValid(_CLIENT_INFO *ClientInfo)
{
  _UNICODE_STRING *RegistryPath; // rax
  bool result; // al

  result = 0;
  if ( ClientInfo )
  {
    if ( ClientInfo->Size == 16 )
    {
      RegistryPath = ClientInfo->RegistryPath;
      if ( RegistryPath )
      {
        if ( RegistryPath->Length && RegistryPath->Buffer )
          return 1;
      }
    }
  }
  return result;
}
