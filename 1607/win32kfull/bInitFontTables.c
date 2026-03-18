/*
 * XREFs of bInitFontTables @ 0x1C037E1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x1C012DA9C (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x1C012DB54 (-pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z.c)
 *     vQueryRegistryForNumberOfBuckets @ 0x1C037E2B4 (vQueryRegistryForNumberOfBuckets.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 bInitFontTables()
{
  unsigned int v0; // ebx
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  vQueryRegistryForNumberOfBuckets(&v3, &v4);
  v0 = 0;
  gpPFTPublic = (struct _FONTHASH **)pAllocateAndInitializePFT(v3);
  if ( gpPFTPublic )
  {
    gpPFTDevice = pAllocateAndInitializePFT(v4);
    if ( gpPFTDevice )
    {
      ghsemPublicPFT = GreCreateSemaphore();
      if ( ghsemPublicPFT )
      {
        ghsemGlyphSet = GreCreateSemaphore();
        if ( ghsemGlyphSet )
        {
          ghsemPrintKView = GreCreateSemaphore();
          if ( ghsemPrintKView )
          {
            v0 = 1;
            FHMEMOBJ::FHMEMOBJ((__int64)v2, gpPFTPublic + 1, 0, v3);
            FHMEMOBJ::FHMEMOBJ((__int64)v2, gpPFTPublic, 1, v3);
            FHMEMOBJ::FHMEMOBJ((__int64)v2, gpPFTPublic + 2, 2, v3);
          }
        }
      }
    }
  }
  return v0;
}
