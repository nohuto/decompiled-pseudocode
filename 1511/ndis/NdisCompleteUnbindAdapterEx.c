/*
 * XREFs of NdisCompleteUnbindAdapterEx @ 0x1C00ED4F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __stdcall NdisCompleteUnbindAdapterEx(NDIS_HANDLE UnbindContext)
{
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x44u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, (__int64)UnbindContext);
  *((_DWORD *)UnbindContext + 22) = 0;
  KeSetEvent((PRKEVENT)UnbindContext + 4, 0, 0);
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x45u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, (__int64)UnbindContext);
}
