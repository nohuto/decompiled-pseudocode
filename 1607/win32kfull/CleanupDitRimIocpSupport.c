/*
 * XREFs of CleanupDitRimIocpSupport @ 0x1C011AA84
 * Callers:
 *     UserDeactivateDwmInputProcessing @ 0x1C01190F0 (UserDeactivateDwmInputProcessing.c)
 *     InitDitRimIocpSupport @ 0x1C011A12C (InitDitRimIocpSupport.c)
 * Callees:
 *     <none>
 */

void CleanupDitRimIocpSupport()
{
  _QWORD *v0; // rax
  void *v1; // rcx
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  if ( gbDITUseIocp )
  {
    v0 = (_QWORD *)aDeviceTemplate[0];
    v1 = (void *)aDeviceTemplate[157];
    if ( v1 )
    {
      ZwClose(v1);
      aDeviceTemplate[157] = -1LL;
      LOBYTE(aDeviceTemplate[158]) = 0;
      v0 = (_QWORD *)aDeviceTemplate[0];
    }
    v2 = (void *)v0[162];
    if ( v2 )
    {
      ZwClose(v2);
      aDeviceTemplate[162] = -1LL;
      LOBYTE(aDeviceTemplate[163]) = 0;
      v0 = (_QWORD *)aDeviceTemplate[0];
    }
    v3 = (void *)v0[167];
    if ( v3 )
    {
      ZwClose(v3);
      aDeviceTemplate[167] = -1LL;
      LOBYTE(aDeviceTemplate[168]) = 0;
      v0 = (_QWORD *)aDeviceTemplate[0];
    }
    v4 = (void *)v0[172];
    if ( v4 )
    {
      ZwClose(v4);
      aDeviceTemplate[172] = -1LL;
      LOBYTE(aDeviceTemplate[173]) = 0;
      v0 = (_QWORD *)aDeviceTemplate[0];
    }
    v5 = (void *)v0[180];
    if ( v5 )
    {
      ZwClose(v5);
      aDeviceTemplate[180] = -1LL;
      LOBYTE(aDeviceTemplate[181]) = 0;
      v0 = (_QWORD *)aDeviceTemplate[0];
    }
    v6 = (void *)v0[186];
    if ( v6 )
    {
      ZwClose(v6);
      aDeviceTemplate[186] = -1LL;
      LOBYTE(aDeviceTemplate[187]) = 0;
      v0 = (_QWORD *)aDeviceTemplate[0];
    }
    v7 = (void *)v0[192];
    if ( v7 )
    {
      ZwClose(v7);
      aDeviceTemplate[192] = -1LL;
      LOBYTE(aDeviceTemplate[193]) = 0;
    }
  }
}
