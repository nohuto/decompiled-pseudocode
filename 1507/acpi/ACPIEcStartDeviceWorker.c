/*
 * XREFs of ACPIEcStartDeviceWorker @ 0x1C0039DB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIEcConnectInterrupt @ 0x1C0079EA8 (ACPIEcConnectInterrupt.c)
 *     ACPIEcGetGpeVector @ 0x1C0079F80 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A02C (ACPIEcGetUid.c)
 *     ACPIEcInstallOpRegionHandler @ 0x1C007A0C4 (ACPIEcInstallOpRegionHandler.c)
 *     ACPIEcGetResources @ 0x1C007A12C (ACPIEcGetResources.c)
 */

void __fastcall ACPIEcStartDeviceWorker(__int64 a1)
{
  int Resources; // edi
  __int64 DeviceExtension; // rax
  IRP *v4; // rsi
  _BYTE *v5; // rbx
  int GpeVector; // eax

  Resources = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v4 = *(IRP **)(a1 + 40);
  v5 = *(_BYTE **)(DeviceExtension + 176);
  if ( v5 != (_BYTE *)gECDTContext )
  {
    Resources = ACPIEcGetResources(
                  v4->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId,
                  v4->Tail.Overlay.CurrentStackLocation->Parameters.QueryDirectory.FileName,
                  *(_QWORD *)(DeviceExtension + 176));
    if ( Resources >= 0 )
    {
      GpeVector = ACPIEcGetGpeVector(v5);
      Resources = GpeVector;
      if ( GpeVector < 0 )
      {
        if ( GpeVector != -1073741772 || !*((_BYTE *)AcpiInformation + 133) || !v5[804] )
          goto LABEL_11;
        v5[805] = 1;
      }
      ACPIEcGetUid(v5);
      Resources = ACPIEcConnectInterrupt(v5);
      if ( Resources >= 0 )
      {
        Resources = ACPIEcInstallOpRegionHandler(v5);
        if ( Resources >= 0 )
          v5[120] = 1;
      }
    }
  }
LABEL_11:
  v4->IoStatus.Information = 0LL;
  v4->IoStatus.Status = Resources;
  IofCompleteRequest(v4, 0);
}
