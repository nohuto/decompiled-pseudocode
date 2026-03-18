/*
 * XREFs of ?IsDisplayingOnVidPnSource@DXGDEVICE@@QEAA_NI@Z @ 0x1C013636C
 * Callers:
 *     DXGDEVICE_IsDisplayingOnVidPnSource @ 0x1C001D070 (DXGDEVICE_IsDisplayingOnVidPnSource.c)
 * Callees:
 *     ?IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AFDC (-IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C00B7C74 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 */

bool __fastcall DXGDEVICE::IsDisplayingOnVidPnSource(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d
  bool result; // al
  __int64 v5; // rcx
  ADAPTER_DISPLAY *v6; // rcx

  result = 1;
  if ( !DXGDEVICE::IsVidPnSourcePrimaryValid(this, a2) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL);
    if ( !v5 )
      return 0;
    v6 = *(ADAPTER_DISPLAY **)(v5 + 1976);
    if ( !v6 || !ADAPTER_DISPLAY::IsMonitorVisible(v6, v3) )
      return 0;
  }
  return result;
}
