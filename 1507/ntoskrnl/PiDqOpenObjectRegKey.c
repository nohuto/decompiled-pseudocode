/*
 * XREFs of PiDqOpenObjectRegKey @ 0x140415CA0
 * Callers:
 *     PiDqPropertyCallback @ 0x14043F850 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1404426B8 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x1405575E8 (PiDqActionDataGetChangedProperties.c)
 *     PiDqIrpPropertySet @ 0x1405B2FC8 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140681894 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x140681B20 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     PiDqOpenUserObjectRegKey @ 0x140415D2C (PiDqOpenUserObjectRegKey.c)
 *     _PnpOpenObjectRegKey @ 0x14043BAF4 (_PnpOpenObjectRegKey.c)
 */

__int64 __fastcall PiDqOpenObjectRegKey(int a1, int a2, int a3, int a4, char a5, __int64 a6, _QWORD *a7)
{
  int v7; // r11d

  v7 = a4;
  *a7 = 0LL;
  if ( !a1 )
    return PnpOpenObjectRegKey(PiPnpRtlCtx, a2, a3, a4, a5, (__int64)a7, 0LL, 0);
  if ( a1 != 1 )
    return 3221225485LL;
  LOBYTE(a4) = a5;
  return PiDqOpenUserObjectRegKey(a2, a3, v7, a4, a6, (__int64)a7, 0LL, 0);
}
