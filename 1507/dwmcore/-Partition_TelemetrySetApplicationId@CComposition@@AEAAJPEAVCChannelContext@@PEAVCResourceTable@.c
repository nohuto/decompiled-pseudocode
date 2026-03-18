/*
 * XREFs of ?Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID@@PEBXI@Z @ 0x180069028
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?TelemetrySetApplicationId@CChannelContext@@QEAAJPEBG_K@Z @ 0x180062D88 (-TelemetrySetApplicationId@CChannelContext@@QEAAJPEBG_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::Partition_TelemetrySetApplicationId(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYSETAPPLICATIONID *a4,
        const unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // r8
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v6 = 0;
  if ( a6 < 8 )
  {
    v9 = 2270;
    goto LABEL_10;
  }
  v7 = *(_QWORD *)a5 >> 1;
  if ( (*(_QWORD *)a5 & 1) != 0 || !*(_QWORD *)a5 || v7 > 0x64 || a6 != *(_QWORD *)a5 + 8LL + (-(*(_DWORD *)a5 + 8) & 3) )
  {
    v9 = 2289;
LABEL_10:
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v9);
    return v6;
  }
  CChannelContext::TelemetrySetApplicationId(a2, a5 + 4, v7);
  return v6;
}
