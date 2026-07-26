/*
 * XREFs of ndisHandleProtocolUnloadNotification @ 0x1C00C6C20
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00936F0 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C001C678 (ndisDereferenceProtocol.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C003EFB4 (WPP_SF_Z.c)
 *     ndisInvokeUninstall @ 0x1C00C9AC4 (ndisInvokeUninstall.c)
 *     ndisReferenceProtocolByName @ 0x1C00ED714 (ndisReferenceProtocolByName.c)
 */

__int64 __fastcall ndisHandleProtocolUnloadNotification(__int64 *SourceString)
{
  __int64 v2; // rdx
  int v3; // edi

  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_Z(0x22u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, SourceString);
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
  if ( (unsigned __int8)byte_1C008370C >= 4u )
    WPP_SF_q(0x23u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, 0LL);
  return (unsigned int)v3;
}
