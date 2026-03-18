/*
 * XREFs of ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C018CD34
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0190EE8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     MonitorIsAudioSupportedInEdid @ 0x1C01B061C (MonitorIsAudioSupportedInEdid.c)
 */

__int64 __fastcall DpiInternal::IsAudioAvailableInEdid(DpiInternal *this, void *a2)
{
  __int64 v2; // rbx
  int IsAudioSupportedInEdid; // eax
  __int64 v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rax

  v2 = (unsigned int)a2;
  IsAudioSupportedInEdid = MonitorIsAudioSupportedInEdid(this, (unsigned int)a2);
  v6 = IsAudioSupportedInEdid;
  if ( IsAudioSupportedInEdid < 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v7[3] = v6;
    v7[4] = this;
    v7[5] = v2;
    WdLogEvent5_WdError(v7);
  }
  return 0LL;
}
