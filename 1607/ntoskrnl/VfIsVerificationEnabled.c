/*
 * XREFs of VfIsVerificationEnabled @ 0x140131F40
 * Callers:
 *     VfFailDeviceNode @ 0x140131F10 (VfFailDeviceNode.c)
 * Callees:
 *     PpvUtilIsHardwareBeingVerified @ 0x140701868 (PpvUtilIsHardwareBeingVerified.c)
 */

LOGICAL __fastcall VfIsVerificationEnabled(int a1, struct _DRIVER_OBJECT *a2)
{
  int v3; // ecx

  if ( !ViDdiInitialized )
    return 0;
  if ( !a1 )
    return MmIsDriverVerifying(a2);
  v3 = a1 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      return ((unsigned int)MmVerifierData >> 30) & 1;
    return 0;
  }
  if ( MmVerifierData >= 0 )
    return 0;
  return (unsigned __int8)PpvUtilIsHardwareBeingVerified(a2);
}
