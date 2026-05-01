/*
 * XREFs of ?GetGameConfigForCurrentProcess@GameConfigStoreClient@ExecutionModel@@UEBAJPEAUGameConfig@2@PEAI@Z @ 0x1800109B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXPEAI@ZPEAXPEAI@Shared@DevPlat@@YAJP6AJPEAXPEAI@Z01@Z @ 0x180010400 (--$RpcCall@P6AJPEAXPEAI@ZPEAXPEAI@Shared@DevPlat@@YAJP6AJPEAXPEAI@Z01@Z.c)
 *     ??$RpcCall@P6AJPEAXPEAIPEAE@ZPEAXPEAIPEAE@Shared@DevPlat@@YAJP6AJPEAXPEAIPEAE@Z012@Z @ 0x180010470 (--$RpcCall@P6AJPEAXPEAIPEAE@ZPEAXPEAIPEAE@Shared@DevPlat@@YAJP6AJPEAXPEAIPEAE@Z012@Z.c)
 *     ?UnpackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z @ 0x180010D50 (-UnpackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreClient::GetGameConfigForCurrentProcess(
        ExecutionModel::GameConfigStoreClient *this,
        struct ExecutionModel::GameConfig *a2,
        unsigned int *a3)
{
  int Pointer; // eax
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  struct ExecutionModel::GameConfig *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
    return 2147942487LL;
  LODWORD(v9) = *a3;
  if ( a2 )
    Pointer = (unsigned int)DevPlat::Shared::RpcCall<long (*)(void *,unsigned int *,unsigned char *),void *,unsigned int *,unsigned char *>(
                              (__int64)this,
                              *((_QWORD *)this + 1),
                              (__int64)&v9,
                              (__int64)a2).Pointer;
  else
    Pointer = DevPlat::Shared::RpcCall<long (*)(void *,unsigned int *),void *,unsigned int *>(
                (__int64 (__fastcall *)(__int64, __int64))GcsClt_GetGameConfigSizeForClientProcess,
                *((_QWORD *)this + 1),
                (__int64)&v9);
  v8 = Pointer;
  if ( Pointer >= 0 )
  {
    if ( a2 )
      v8 = ExecutionModel::Internal::UnpackGameConfig(a2, (struct ExecutionModel::GameConfig *)(unsigned int)v9, v7);
  }
  else if ( Pointer != -2147024662 )
  {
    return v8;
  }
  *a3 = (unsigned int)v9;
  return v8;
}
