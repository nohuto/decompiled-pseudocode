/*
 * XREFs of ??$RpcCall@P6AJPEAXPEAI@ZPEAXPEAI@Shared@DevPlat@@YAJP6AJPEAXPEAI@Z01@Z @ 0x180010400
 * Callers:
 *     ?GetAllGameIds@GameConfigStoreClient@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z @ 0x1800108D0 (-GetAllGameIds@GameConfigStoreClient@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z.c)
 *     ?GetGameConfigForCurrentProcess@GameConfigStoreClient@ExecutionModel@@UEBAJPEAUGameConfig@2@PEAI@Z @ 0x1800109B0 (-GetGameConfigForCurrentProcess@GameConfigStoreClient@ExecutionModel@@UEBAJPEAUGameConfig@2@PEAI.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned int *),void *,unsigned int *>(
        __int64 (__fastcall *a1)(__int64, __int64),
        __int64 a2,
        __int64 a3)
{
  return a1(a2, a3);
}
