/*
 * XREFs of NdisCompleteUnbindAdapterEx @ 0x1C00F3510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __stdcall NdisCompleteUnbindAdapterEx(NDIS_HANDLE UnbindContext)
{
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x44u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)UnbindContext);
  *((_DWORD *)UnbindContext + 22) = 0;
  KeSetEvent((PRKEVENT)UnbindContext + 4, 0, 0);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x45u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)UnbindContext);
}
