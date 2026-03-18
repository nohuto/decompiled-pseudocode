/*
 * XREFs of PiDqOpenObjectRegKey @ 0x140507EBC
 * Callers:
 *     PiDqPropertyCallback @ 0x1404413FC (PiDqPropertyCallback.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14045EED8 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x140460C90 (PiDqActionDataGetChangedProperties.c)
 *     PiDqIrpPropertySet @ 0x14050DD30 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140606B80 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x140606E04 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     _PnpOpenObjectRegKey @ 0x14043E904 (_PnpOpenObjectRegKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x1404F8E2C (PiDqOpenUserObjectRegKey.c)
 */

__int64 __fastcall PiDqOpenObjectRegKey(
        int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6,
        _QWORD *a7)
{
  *a7 = 0LL;
  if ( !a1 )
    return PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, a4, a5, (__int64)a7, 0LL, 0);
  if ( a1 == 1 )
    return PiDqOpenUserObjectRegKey(a2, a3, a4, a5, a6, a7, 0LL, 0);
  return 3221225485LL;
}
