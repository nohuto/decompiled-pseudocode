/*
 * XREFs of InitDitRimIocpSupport @ 0x1C011A12C
 * Callers:
 *     DitTakeOver @ 0x1C011A098 (DitTakeOver.c)
 * Callees:
 *     CleanupDitRimIocpSupport @ 0x1C011AA84 (CleanupDitRimIocpSupport.c)
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
    aDeviceTemplate[157] = CreateKernelIocpWcp();
    v1 = aDeviceTemplate[157];
    if ( v1 )
    {
      v0 = AssociateKernelIocpWcp(
             v1,
             ghDITIocp,
             aDeviceTemplate[155],
             aDeviceTemplate[157],
             1LL,
             0,
             &aDeviceTemplate[158]);
      if ( v0 < 0 )
        goto LABEL_19;
    }
    aDeviceTemplate[162] = CreateKernelIocpWcp();
    v2 = aDeviceTemplate[162];
    if ( v2 )
    {
      v0 = AssociateKernelIocpWcp(
             v2,
             ghDITIocp,
             aDeviceTemplate[160],
             aDeviceTemplate[162],
             1LL,
             0,
             &aDeviceTemplate[163]);
      if ( v0 < 0 )
        goto LABEL_19;
    }
    aDeviceTemplate[167] = CreateKernelIocpWcp();
    v3 = aDeviceTemplate[167];
    if ( v3 )
    {
      v0 = AssociateKernelIocpWcp(
             v3,
             ghDITIocp,
             aDeviceTemplate[165],
             aDeviceTemplate[167],
             1LL,
             0,
             &aDeviceTemplate[168]);
      if ( v0 < 0 )
        goto LABEL_19;
    }
    aDeviceTemplate[172] = CreateKernelIocpWcp();
    v4 = aDeviceTemplate[172];
    if ( v4 )
    {
      v0 = AssociateKernelIocpWcp(
             v4,
             ghDITIocp,
             aDeviceTemplate[170],
             aDeviceTemplate[172],
             1LL,
             0,
             &aDeviceTemplate[173]);
      if ( v0 < 0 )
        goto LABEL_19;
    }
    aDeviceTemplate[180] = CreateKernelIocpWcp();
    v5 = aDeviceTemplate[180];
    if ( v5 )
    {
      v0 = AssociateKernelIocpWcp(
             v5,
             ghDITIocp,
             aDeviceTemplate[178],
             aDeviceTemplate[180],
             1LL,
             0,
             &aDeviceTemplate[181]);
      if ( v0 < 0 )
        goto LABEL_19;
    }
    if ( (aDeviceTemplate[186] = CreateKernelIocpWcp(), (v6 = aDeviceTemplate[186]) != 0)
      && (v0 = AssociateKernelIocpWcp(
                 v6,
                 ghDITIocp,
                 aDeviceTemplate[184],
                 aDeviceTemplate[186],
                 1LL,
                 0,
                 &aDeviceTemplate[187]),
          v0 < 0)
      || (aDeviceTemplate[192] = CreateKernelIocpWcp(), (v7 = aDeviceTemplate[192]) != 0)
      && (v0 = AssociateKernelIocpWcp(
                 v7,
                 ghDITIocp,
                 aDeviceTemplate[190],
                 aDeviceTemplate[192],
                 1LL,
                 0,
                 &aDeviceTemplate[193]),
          v0 < 0) )
    {
LABEL_19:
      CleanupDitRimIocpSupport();
    }
  }
  return (unsigned int)v0;
}
