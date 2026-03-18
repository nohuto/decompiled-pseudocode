/*
 * XREFs of InitDitRimIocpSupport @ 0x1C00A074C
 * Callers:
 *     DitTakeOver @ 0x1C00A0698 (DitTakeOver.c)
 * Callees:
 *     CleanupDitRimIocpSupport @ 0x1C009EC38 (CleanupDitRimIocpSupport.c)
 */

__int64 InitDitRimIocpSupport()
{
  int v0; // ebx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v0 = 0;
  if ( !gbDITUseIocp )
    return 0LL;
  if ( ghDITIocp )
  {
    aDeviceTemplate[160] = CreateKernelIocpWcp();
    v1 = aDeviceTemplate[160];
    if ( v1 )
    {
      v0 = AssociateKernelIocpWcp(
             v1,
             ghDITIocp,
             aDeviceTemplate[158],
             aDeviceTemplate[160],
             1LL,
             0,
             &aDeviceTemplate[161]);
      if ( v0 < 0 )
        goto LABEL_19;
    }
    aDeviceTemplate[165] = CreateKernelIocpWcp();
    v2 = aDeviceTemplate[165];
    if ( v2 )
    {
      v0 = AssociateKernelIocpWcp(
             v2,
             ghDITIocp,
             aDeviceTemplate[163],
             aDeviceTemplate[165],
             1LL,
             0,
             &aDeviceTemplate[166]);
      if ( v0 < 0 )
        goto LABEL_19;
    }
    aDeviceTemplate[170] = CreateKernelIocpWcp();
    v3 = aDeviceTemplate[170];
    if ( v3 )
    {
      v0 = AssociateKernelIocpWcp(
             v3,
             ghDITIocp,
             aDeviceTemplate[168],
             aDeviceTemplate[170],
             1LL,
             0,
             &aDeviceTemplate[171]);
      if ( v0 < 0 )
        goto LABEL_19;
    }
    aDeviceTemplate[175] = CreateKernelIocpWcp();
    v4 = aDeviceTemplate[175];
    if ( v4 )
    {
      v0 = AssociateKernelIocpWcp(
             v4,
             ghDITIocp,
             aDeviceTemplate[173],
             aDeviceTemplate[175],
             1LL,
             0,
             &aDeviceTemplate[176]);
      if ( v0 < 0 )
        goto LABEL_19;
    }
    aDeviceTemplate[183] = CreateKernelIocpWcp();
    v5 = aDeviceTemplate[183];
    if ( v5 )
    {
      v0 = AssociateKernelIocpWcp(
             v5,
             ghDITIocp,
             aDeviceTemplate[181],
             aDeviceTemplate[183],
             1LL,
             0,
             &aDeviceTemplate[184]);
      if ( v0 < 0 )
        goto LABEL_19;
    }
    if ( (aDeviceTemplate[189] = CreateKernelIocpWcp(), (v6 = aDeviceTemplate[189]) != 0)
      && (v0 = AssociateKernelIocpWcp(
                 v6,
                 ghDITIocp,
                 aDeviceTemplate[187],
                 aDeviceTemplate[189],
                 1LL,
                 0,
                 &aDeviceTemplate[190]),
          v0 < 0)
      || (aDeviceTemplate[195] = CreateKernelIocpWcp(), (v7 = aDeviceTemplate[195]) != 0)
      && (v0 = AssociateKernelIocpWcp(
                 v7,
                 ghDITIocp,
                 aDeviceTemplate[193],
                 aDeviceTemplate[195],
                 1LL,
                 0,
                 &aDeviceTemplate[196]),
          v0 < 0) )
    {
LABEL_19:
      CleanupDitRimIocpSupport();
    }
  }
  return (unsigned int)v0;
}
