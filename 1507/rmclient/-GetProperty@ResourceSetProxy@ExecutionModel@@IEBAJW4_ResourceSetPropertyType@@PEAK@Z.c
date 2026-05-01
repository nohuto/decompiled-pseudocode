/*
 * XREFs of ?GetProperty@ResourceSetProxy@ExecutionModel@@IEBAJW4_ResourceSetPropertyType@@PEAK@Z @ 0x1800100A8
 * Callers:
 *     ?GetPid@ResourceSetProxy@ExecutionModel@@UEBAKXZ @ 0x180010080 (-GetPid@ResourceSetProxy@ExecutionModel@@UEBAKXZ.c)
 *     ?IsApplied@ResourceSetProxy@ExecutionModel@@UEBA_NXZ @ 0x1800100E0 (-IsApplied@ResourceSetProxy@ExecutionModel@@UEBA_NXZ.c)
 *     ?IsReleased@ResourceSetProxy@ExecutionModel@@UEBA_NXZ @ 0x180010120 (-IsReleased@ResourceSetProxy@ExecutionModel@@UEBA_NXZ.c)
 *     ?IsValid@ResourceSetProxy@ExecutionModel@@UEBA_NXZ @ 0x180010160 (-IsValid@ResourceSetProxy@ExecutionModel@@UEBA_NXZ.c)
 * Callees:
 *     ??$RpcCall@P6AJPEAX_KW4_ResourceSetPropertyType@@PEAK@ZPEAX_KW41@PEAK@Shared@DevPlat@@YAJP6AJPEAX_KW4_ResourceSetPropertyType@@PEAK@Z0123@Z @ 0x18000FD94 (--$RpcCall@P6AJPEAX_KW4_ResourceSetPropertyType@@PEAK@ZPEAX_KW41@PEAK@Shared@DevPlat@@YAJP6AJPEA.c)
 */

CLIENT_CALL_RETURN __fastcall ExecutionModel::ResourceSetProxy::GetProperty(__int64 a1, int a2, __int64 a3)
{
  if ( a3 )
    return DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _ResourceSetPropertyType,unsigned long *),void *,unsigned __int64,enum _ResourceSetPropertyType,unsigned long *>(
             a1,
             *(_QWORD *)(a1 + 16),
             *(_QWORD *)(a1 + 24),
             a2,
             a3);
  return (CLIENT_CALL_RETURN)2147942487LL;
}
