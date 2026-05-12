/*
 * XREFs of StorPortAdapterPowerNotRequiredStep1 @ 0x1C002C640
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00099AC (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C002AAF0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     Template_pqtq @ 0x1C002DD74 (Template_pqtq.c)
 */

__int64 __fastcall StorPortAdapterPowerNotRequiredStep1(_QWORD **Context, int a2, int a3)
{
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    Template_pqtq((_DWORD)Context, a2, a3, *Context[636], *((_DWORD *)Context + 14));
  *((_DWORD *)Context[636] + 5) &= ~2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport((__int64)Context);
  return StorPortAdapterPowerNotRequiredStep2(Context);
}
