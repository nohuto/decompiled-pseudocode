/*
 * XREFs of ?GetGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z @ 0x180011540
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXU_GUID@@PEAI@ZPEAXU1@PEAI@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@PEAI@Z012@Z @ 0x1800112F0 (--$RpcCall@P6AJPEAXU_GUID@@PEAI@ZPEAXU1@PEAI@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@PEAI@Z012@Z.c)
 *     ??$RpcCall@P6AJPEAXU_GUID@@PEAIPEAE@ZPEAXU1@PEAIPEAE@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@PEAIPEAE@Z0123@Z @ 0x180011364 (--$RpcCall@P6AJPEAXU_GUID@@PEAIPEAE@ZPEAXU1@PEAIPEAE@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@PEAIPEAE.c)
 *     ?UnpackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z @ 0x180011B18 (-UnpackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreClient::GetGameConfig(
        ExecutionModel::GameConfigStoreClient *this,
        struct _GUID *a2,
        struct ExecutionModel::GameConfig *a3,
        unsigned int *a4)
{
  __int64 v4; // rax
  __int128 v8; // xmm0
  __int64 v9; // rdx
  int Pointer; // eax
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  unsigned int v13[4]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_QWORD *)&a2->Data1;
  if ( !*(_QWORD *)&a2->Data1 )
    v4 = *(_QWORD *)a2->Data4;
  if ( !v4 || !a4 )
    return 2147942487LL;
  v13[0] = *a4;
  v8 = (__int128)*a2;
  v9 = *((_QWORD *)this + 1);
  v14[0] = v8;
  if ( a3 )
    Pointer = (unsigned int)DevPlat::Shared::RpcCall<long (*)(void *,_GUID,unsigned int *,unsigned char *),void *,_GUID,unsigned int *,unsigned char *>(
                              (__int64)this,
                              v9,
                              v14,
                              (__int64)v13,
                              (__int64)a3).Pointer;
  else
    Pointer = (unsigned int)DevPlat::Shared::RpcCall<long (*)(void *,_GUID,unsigned int *),void *,_GUID,unsigned int *>(
                              (__int64)this,
                              v9,
                              v14,
                              (__int64)v13).Pointer;
  v12 = Pointer;
  if ( Pointer >= 0 )
  {
    if ( a3 )
      v12 = ExecutionModel::Internal::UnpackGameConfig(a3, (struct ExecutionModel::GameConfig *)v13[0], v11);
  }
  else if ( Pointer != -2147024662 )
  {
    return v12;
  }
  *a4 = v13[0];
  return v12;
}
