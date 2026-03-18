/*
 * XREFs of ACPIEcInternalControl @ 0x1C009AB64
 * Callers:
 *     ACPIEcOtherIrpDispatch @ 0x1C009ABE0 (ACPIEcOtherIrpDispatch.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIEcConnectHandler @ 0x1C009B0F0 (ACPIEcConnectHandler.c)
 *     ACPIEcDisconnectHandler @ 0x1C009B310 (ACPIEcDisconnectHandler.c)
 */

__int64 __fastcall ACPIEcInternalControl(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned int v4; // edi
  __int64 v5; // rcx
  unsigned int v6; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  v4 = -1073741811;
  v5 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 184);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2228247 )
  {
    v6 = ACPIEcConnectHandler(v5, a2);
  }
  else
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2228251 )
    {
LABEL_6:
      a2->IoStatus.Status = v4;
      IofCompleteRequest(a2, 0);
      return v4;
    }
    v6 = ACPIEcDisconnectHandler(v5, a2);
  }
  v4 = v6;
  if ( v6 != 259 )
    goto LABEL_6;
  return v4;
}
