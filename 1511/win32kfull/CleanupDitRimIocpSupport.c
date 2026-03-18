/*
 * XREFs of CleanupDitRimIocpSupport @ 0x1C009EC38
 * Callers:
 *     DitPrepRitTakeOver @ 0x1C009EBF4 (DitPrepRitTakeOver.c)
 *     InitDitRimIocpSupport @ 0x1C00A074C (InitDitRimIocpSupport.c)
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
    v1 = (void *)aDeviceTemplate[160];
    if ( v1 )
    {
      ZwClose(v1);
      aDeviceTemplate[160] = -1LL;
      LOBYTE(aDeviceTemplate[161]) = 0;
      v0 = (_QWORD *)aDeviceTemplate[0];
    }
    v2 = (void *)v0[165];
    if ( v2 )
    {
      ZwClose(v2);
      aDeviceTemplate[165] = -1LL;
      LOBYTE(aDeviceTemplate[166]) = 0;
      v0 = (_QWORD *)aDeviceTemplate[0];
    }
    v3 = (void *)v0[170];
    if ( v3 )
    {
      ZwClose(v3);
      aDeviceTemplate[170] = -1LL;
      LOBYTE(aDeviceTemplate[171]) = 0;
      v0 = (_QWORD *)aDeviceTemplate[0];
    }
    v4 = (void *)v0[175];
    if ( v4 )
    {
      ZwClose(v4);
      aDeviceTemplate[175] = -1LL;
      LOBYTE(aDeviceTemplate[176]) = 0;
      v0 = (_QWORD *)aDeviceTemplate[0];
    }
    v5 = (void *)v0[183];
    if ( v5 )
    {
      ZwClose(v5);
      aDeviceTemplate[183] = -1LL;
      LOBYTE(aDeviceTemplate[184]) = 0;
      v0 = (_QWORD *)aDeviceTemplate[0];
    }
    v6 = (void *)v0[189];
    if ( v6 )
    {
      ZwClose(v6);
      aDeviceTemplate[189] = -1LL;
      LOBYTE(aDeviceTemplate[190]) = 0;
      v0 = (_QWORD *)aDeviceTemplate[0];
    }
    v7 = (void *)v0[195];
    if ( v7 )
    {
      ZwClose(v7);
      aDeviceTemplate[195] = -1LL;
      LOBYTE(aDeviceTemplate[196]) = 0;
    }
  }
}
