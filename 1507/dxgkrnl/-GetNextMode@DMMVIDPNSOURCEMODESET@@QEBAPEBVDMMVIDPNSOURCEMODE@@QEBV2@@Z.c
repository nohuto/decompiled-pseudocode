/*
 * XREFs of ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C002C7B8
 * Callers:
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01736C4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C017CBC4 (-Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C017E494 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     <none>
 */

const struct DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODESET::GetNextMode(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODE *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rax
  DMMVIDPNSOURCEMODESET *v8; // rdx

  v4 = 0LL;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 1);
  if ( v8 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    return (DMMVIDPNSOURCEMODESET *)((char *)v8 - 8);
  return (const struct DMMVIDPNSOURCEMODE *)v4;
}
