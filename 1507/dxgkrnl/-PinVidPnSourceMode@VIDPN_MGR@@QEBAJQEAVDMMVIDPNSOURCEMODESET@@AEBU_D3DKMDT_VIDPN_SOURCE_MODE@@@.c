/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01736C4
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C0174F90 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C002B4EC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C002C7B8 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00961C8 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnSourceMode(
        VIDPN_MGR *this,
        struct DMMVIDPNSOURCEMODESET *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a3)
{
  _QWORD *v3; // rbx
  unsigned int *NextMode; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax

  v3 = (_QWORD *)((char *)a2 + 48);
  if ( (_QWORD *)*v3 == v3 || (NextMode = (unsigned int *)(*v3 - 8LL)) == 0LL )
  {
LABEL_5:
    NextMode = 0LL;
  }
  else
  {
    while ( !DMMVIDPNSOURCEMODE::operator==((__int64)NextMode, (__int64)a3) )
    {
      NextMode = (unsigned int *)DMMVIDPNSOURCEMODESET::GetNextMode(
                                   a2,
                                   (const struct DMMVIDPNSOURCEMODE *const)NextMode,
                                   v8,
                                   v9);
      if ( !NextMode )
        goto LABEL_5;
    }
  }
  if ( NextMode )
  {
    DMMVIDPNSOURCEMODESET::PinMode(a2, NextMode[6]);
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = a3;
    WdLogEvent5_WdDmmEvent(v10);
    return 3223192394LL;
  }
}
