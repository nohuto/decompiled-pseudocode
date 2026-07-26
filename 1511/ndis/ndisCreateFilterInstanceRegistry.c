/*
 * XREFs of ndisCreateFilterInstanceRegistry @ 0x1C00C85AC
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0040C54 (WPP_SF_qqqL.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00C87F0 (ndisGetOrCreateFilterInstanceKey.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C00C8F84 (ndisSetAllFilterDefaultParameters.c)
 */

__int64 __fastcall ndisCreateFilterInstanceRegistry(PCUNICODE_STRING Source, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  PUNICODE_STRING Destination; // [rsp+28h] [rbp-30h]
  _UNICODE_STRING v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  *(_DWORD *)&v9.Length = 0;
  v9.Buffer = 0LL;
  LOBYTE(v10) = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x5Au, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, Source, a3, a2);
  v6 = ndisGetOrCreateFilterInstanceKey(Source, (__int64)&v10, &v9);
  if ( !v6 && !(_BYTE)v10 )
    v6 = ndisSetAllFilterDefaultParameters(Source);
  if ( v9.Buffer )
    ExFreePoolWithTag(v9.Buffer, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(Destination) = v6;
    WPP_SF_qqqL(
      0x5Bu,
      &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids,
      Source,
      a3,
      a2,
      Destination,
      *(_QWORD *)&v9.Length);
  }
  return v6;
}
