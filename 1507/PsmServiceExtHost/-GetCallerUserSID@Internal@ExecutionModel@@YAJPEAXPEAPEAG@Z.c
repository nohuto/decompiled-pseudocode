/*
 * XREFs of ?GetCallerUserSID@Internal@ExecutionModel@@YAJPEAXPEAPEAG@Z @ 0x1800077E8
 * Callers:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::GetCallerUserSID(
        HANDLE TokenHandle,
        LPWSTR *StringSid,
        unsigned __int16 **a3)
{
  PSID *v5; // rbx
  unsigned int v6; // edi
  signed int LastError; // eax
  size_t Size; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(Size) = 0;
  if ( GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, (PDWORD)&Size) )
    return 2147500037LL;
  v5 = (PSID *)malloc((unsigned int)Size);
  if ( v5 )
  {
    if ( GetTokenInformation(TokenHandle, TokenUser, v5, Size, (PDWORD)&Size) && ConvertSidToStringSidW(*v5, StringSid) )
    {
      v6 = 0;
    }
    else
    {
      LastError = GetLastError();
      v6 = LastError;
      if ( LastError > 0 )
        v6 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  operator delete(v5);
  return v6;
}
