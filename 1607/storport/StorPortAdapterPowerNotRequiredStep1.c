/*
 * XREFs of StorPortAdapterPowerNotRequiredStep1 @ 0x1C0019C00
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C000FF08 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0030890 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     Template_pqtq @ 0x1C0032B18 (Template_pqtq.c)
 */

__int64 __fastcall StorPortAdapterPowerNotRequiredStep1(_QWORD **Context, int a2, int a3)
{
  if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
    Template_pqtq((_DWORD)Context, a2, a3, *Context[636], *((_DWORD *)Context + 14));
  *((_DWORD *)Context[636] + 5) &= ~2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport(Context, 0LL);
  return StorPortAdapterPowerNotRequiredStep2(Context);
}
