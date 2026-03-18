/*
 * XREFs of WPP_IFR_SF_sq @ 0x1C0036F48
 * Callers:
 *     imp_WdfObjectGetTypedContextWorker @ 0x1C000F0A0 (imp_WdfObjectGetTypedContextWorker.c)
 *     imp_WdfPdoRetrieveIdentificationDescription @ 0x1C0032190 (imp_WdfPdoRetrieveIdentificationDescription.c)
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C0036018 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C6C90 (VfWdfObjectGetTypedContext.c)
 * Callees:
 *     FxIFR @ 0x1C000A230 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006CD0C (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const char *_a1,
        const void *_a2)
{
  const char *v7; // rbp
  __int64 v10; // rbx
  int v13; // eax
  __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  const char *v18; // rax

  v7 = "NULL";
  v10 = -1LL;
  v13 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v13, (flags - 1) & 0x1F) )
  {
    v15 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v15 + 1) >= level )
    {
      if ( _a1 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( _a1[v16] );
        v17 = v16 + 1;
      }
      else
      {
        v17 = 5LL;
      }
      v18 = "NULL";
      if ( _a1 )
        v18 = _a1;
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v15),
        0x2Bu,
        traceGuid,
        id,
        v18,
        v17,
        &_a2,
        8LL,
        0LL);
    }
  }
  if ( _a1 )
  {
    do
      ++v10;
    while ( _a1[v10] );
    v14 = v10 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( _a1 )
    v7 = _a1;
  FxIFR(globals, level, flags, traceGuid, id, v7, v14, &_a2, 8LL, 0LL);
}
