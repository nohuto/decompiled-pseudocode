/*
 * XREFs of ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x18008A1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x180089DE0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x180089E28 (-StopDelayTimer@CTetherVisual@@IEAAXXZ.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x180089EF4 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTetherVisual::UpdateTransition(CTetherVisual *this)
{
  __int64 v1; // rax
  int updated; // eax
  int v4; // edi
  __int64 v5; // rax

  v1 = *((_QWORD *)this + 48);
  if ( v1 && *(_BYTE *)(v1 + 72) )
    CTetherVisual::StopDelayTimer(this);
  updated = CTetherVisual::UpdateInstructions(this);
  v4 = updated;
  if ( updated >= 0 )
  {
    v5 = *((_QWORD *)this + 47);
    if ( v5 && *(_BYTE *)(v5 + 72) )
      CTetherVisual::Stop(this);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x15Bu);
  }
  if ( v4 < 0 )
    CTetherVisual::Stop(this);
  return (unsigned int)v4;
}
