/*
 * XREFs of AllocAndInitializeTelemetryContext @ 0x1C00143E0
 * Callers:
 *     FxAllocateDriverGlobals @ 0x1C001AE50 (FxAllocateDriverGlobals.c)
 * Callees:
 *     <none>
 */

void __fastcall AllocAndInitializeTelemetryContext(_FX_TELEMETRY_CONTEXT **TelemetryContext)
{
  UUID *PoolWithTag; // rax
  _FX_TELEMETRY_CONTEXT *v3; // rbx

  PoolWithTag = (UUID *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x14uLL, 0x72447846u);
  v3 = (_FX_TELEMETRY_CONTEXT *)PoolWithTag;
  if ( PoolWithTag )
  {
    if ( ExUuidCreate(PoolWithTag) < 0 )
    {
      ExFreePoolWithTag(v3, 0);
      v3 = 0LL;
    }
    else
    {
      v3->DoOnceFlagsBitmap = 0;
    }
  }
  *TelemetryContext = v3;
}
