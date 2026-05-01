/*
 * XREFs of ?GetGameConfigForCurrentProcess@GameConfigStoreClient@ExecutionModel@@UEBAJPEAUGameConfig@2@PEAI@Z @ 0x180007470
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXPEAI@ZPEAXPEAI@Shared@DevPlat@@YAJP6AJPEAXPEAI@Z01@Z @ 0x1800073A4 (--$RpcCall@P6AJPEAXPEAI@ZPEAXPEAI@Shared@DevPlat@@YAJP6AJPEAXPEAI@Z01@Z.c)
 *     ??$RpcCall@P6AJPEAXPEAIPEAE@ZPEAXPEAIPEAE@Shared@DevPlat@@YAJP6AJPEAXPEAIPEAE@Z012@Z @ 0x180010FA0 (--$RpcCall@P6AJPEAXPEAIPEAE@ZPEAXPEAIPEAE@Shared@DevPlat@@YAJP6AJPEAXPEAIPEAE@Z012@Z.c)
 *     ?UnpackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z @ 0x180011B18 (-UnpackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreClient::GetGameConfigForCurrentProcess(
        ExecutionModel::GameConfigStoreClient *this,
        struct ExecutionModel::GameConfig *a2,
        unsigned int *a3)
{
  int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  struct ExecutionModel::GameConfig *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    LODWORD(v9) = *a3;
    if ( a2 )
      v5 = DevPlat::Shared::RpcCall<long (*)(void *,unsigned int *,unsigned char *),void *,unsigned int *,unsigned char *>(
             this,
             *((_QWORD *)this + 1),
             &v9,
             a2);
    else
      v5 = DevPlat::Shared::RpcCall<long (*)(void *,unsigned int *),void *,unsigned int *>(
             (__int64 (__fastcall *)(__int64, __int64))GcsClt_GetGameConfigSizeForClientProcess,
             *((_QWORD *)this + 1),
             (__int64)&v9);
    v7 = v5;
    if ( v5 >= 0 )
    {
      if ( a2 )
        v7 = ExecutionModel::Internal::UnpackGameConfig(a2, (struct ExecutionModel::GameConfig *)(unsigned int)v9, v6);
    }
    else if ( v5 != -2147024662 )
    {
      return v7;
    }
    *a3 = (unsigned int)v9;
    return v7;
  }
  return 2147942487LL;
}
