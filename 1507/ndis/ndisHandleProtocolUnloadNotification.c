/*
 * XREFs of ndisHandleProtocolUnloadNotification @ 0x1C00CD6EC
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C0099308 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C0019724 (ndisDereferenceProtocol.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 *     ndisInvokeUninstall @ 0x1C00D06B4 (ndisInvokeUninstall.c)
 *     ndisReferenceProtocolByName @ 0x1C00EB9E4 (ndisReferenceProtocolByName.c)
 */

__int64 __fastcall ndisHandleProtocolUnloadNotification(__int64 *SourceString)
{
  __int64 v2; // rdx
  int v3; // edi

  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_Z(0x22u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, SourceString);
  v3 = ndisReferenceProtocolByName((PCUNICODE_STRING)SourceString);
  if ( v3 >= 0 )
  {
    ndisDereferenceProtocol(0LL, v2, 5u);
    if ( MEMORY[0x88] )
    {
      MEMORY[0x88]();
    }
    else if ( MEMORY[0x90] )
    {
      ndisInvokeUninstall(0LL);
    }
    else
    {
      v3 = -1073741823;
    }
  }
  if ( (unsigned __int8)byte_1C008530C >= 4u )
    WPP_SF_q(0x23u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, 0LL);
  return (unsigned int)v3;
}
