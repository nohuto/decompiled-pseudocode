/*
 * XREFs of ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C00E14B8
 * Callers:
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C000539C (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C00E07A0 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 * Callees:
 *     memset @ 0x1C008A080 (memset.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C00E1B50 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 */

void __fastcall DeadzonePalmTelemetry::ClearSession(DeadzonePalmTelemetry *this)
{
  DeadzonePalmTelemetry::_UploadTelemetryData(this, 1);
  *((_DWORD *)this + 1) = 0;
  memset((char *)this + 2060, 0, 0x2800uLL);
  memset((char *)this + 12, 0, 0x800uLL);
  *((_BYTE *)this + 12) = 0;
  *(_DWORD *)this = 0;
}
