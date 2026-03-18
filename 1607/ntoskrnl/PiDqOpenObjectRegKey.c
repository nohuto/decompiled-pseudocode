/*
 * XREFs of PiDqOpenObjectRegKey @ 0x140631CFC
 * Callers:
 *     PiDqActionDataGetRequestedProperties @ 0x14048C370 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x1404ED5CC (PiDqActionDataGetChangedProperties.c)
 *     PiDqPropertyCallback @ 0x1405023CC (PiDqPropertyCallback.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140630F98 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14063121C (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqIrpPropertySet @ 0x1406318E0 (PiDqIrpPropertySet.c)
 * Callees:
 *     _PnpOpenObjectRegKey @ 0x1404FC340 (_PnpOpenObjectRegKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x140631D88 (PiDqOpenUserObjectRegKey.c)
 */

__int64 __fastcall PiDqOpenObjectRegKey(int a1, __int64 a2, unsigned int a3, int a4, char a5, __int64 a6, _QWORD *a7)
{
  int v9; // r8d

  *a7 = 0LL;
  if ( !a1 )
    return PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, a4, a5, (__int64)a7, 0LL, 0);
  if ( a1 != 1 )
    return 3221225485LL;
  v9 = a4;
  LOBYTE(a4) = a5;
  return PiDqOpenUserObjectRegKey(a2, a3, v9, a4, a6, (__int64)a7, 0LL, 0);
}
