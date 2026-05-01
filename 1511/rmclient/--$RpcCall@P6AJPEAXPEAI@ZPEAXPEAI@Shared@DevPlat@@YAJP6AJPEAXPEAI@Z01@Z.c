/*
 * XREFs of ??$RpcCall@P6AJPEAXPEAI@ZPEAXPEAI@Shared@DevPlat@@YAJP6AJPEAXPEAI@Z01@Z @ 0x1800073A4
 * Callers:
 *     ?GetGameConfigForCurrentProcess@GameConfigStoreClient@ExecutionModel@@UEBAJPEAUGameConfig@2@PEAI@Z @ 0x180007470 (-GetGameConfigForCurrentProcess@GameConfigStoreClient@ExecutionModel@@UEBAJPEAUGameConfig@2@PEAI.c)
 *     ?ResourcePolicy_GetGlobalProcessAffinityMask@@YAJPEAIPEAGPEA_K@Z @ 0x180010460 (-ResourcePolicy_GetGlobalProcessAffinityMask@@YAJPEAIPEAGPEA_K@Z.c)
 *     ?GetAllGameIds@GameConfigStoreClient@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z @ 0x180011500 (-GetAllGameIds@GameConfigStoreClient@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z.c)
 * Callees:
 *     GcsClt_GetGameConfigSizeForClientProcess @ 0x180007410 (GcsClt_GetGameConfigSizeForClientProcess.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned int *),void *,unsigned int *>(
        __int64 (__fastcall *a1)(__int64, __int64),
        __int64 a2,
        __int64 a3)
{
  if ( a1 == GcsClt_GetGameConfigSizeForClientProcess )
    return GcsClt_GetGameConfigSizeForClientProcess(a2, a3);
  else
    return a1(a2, a3);
}
