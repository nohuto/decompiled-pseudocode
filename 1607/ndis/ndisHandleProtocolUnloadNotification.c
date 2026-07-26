/*
 * XREFs of ndisHandleProtocolUnloadNotification @ 0x1C00CC6C0
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00AD7C4 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C00160E0 (ndisDereferenceProtocol.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C0042BCC (WPP_SF_Z.c)
 *     ndisInvokeUninstall @ 0x1C00CF4E4 (ndisInvokeUninstall.c)
 *     ndisReferenceProtocolByName @ 0x1C00F43A4 (ndisReferenceProtocolByName.c)
 */

__int64 __fastcall ndisHandleProtocolUnloadNotification(PCUNICODE_STRING SourceString)
{
  __int64 v2; // rdx
  int v3; // edi

  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_Z(0x22u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, &SourceString->Length);
  v3 = ndisReferenceProtocolByName(SourceString);
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
  if ( (unsigned __int8)byte_1C00895CC >= 4u )
    WPP_SF_q(0x23u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, 0LL);
  return (unsigned int)v3;
}
