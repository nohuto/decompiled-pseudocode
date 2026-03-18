/*
 * XREFs of ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0034958
 * Callers:
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01A16B0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01A9CC8 (-Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01ABAA4 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     <none>
 */

const struct DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODESET::GetNextMode(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODE *const a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  DMMVIDPNSOURCEMODESET *v6; // rdx

  v2 = 0LL;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 1);
  if ( v6 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    return (DMMVIDPNSOURCEMODESET *)((char *)v6 - 8);
  return (const struct DMMVIDPNSOURCEMODE *)v2;
}
