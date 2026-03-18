/*
 * XREFs of EngCTGetGammaTable @ 0x1C00FB420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngCTGetGammaTable(ULONG ulGamma, const BYTE **pGammaTable, const BYTE **pInverseGammaTable)
{
  const BYTE *v3; // rax

  if ( ulGamma < 0x44C )
  {
    v3 = (const BYTE *)&ajGammaCT_10;
    *pGammaTable = (const BYTE *)&ajGammaCT_10;
  }
  else if ( ulGamma < 0x4B0 )
  {
    *pGammaTable = (const BYTE *)&ajGammaCT_11;
    v3 = (const BYTE *)&ajGammaInvCT_11;
  }
  else if ( ulGamma < 0x514 )
  {
    *pGammaTable = (const BYTE *)&ajGammaCT_12;
    v3 = (const BYTE *)&ajGammaInvCT_12;
  }
  else if ( ulGamma < 0x578 )
  {
    *pGammaTable = (const BYTE *)&ajGammaCT_13;
    v3 = (const BYTE *)&ajGammaInvCT_13;
  }
  else if ( ulGamma < 0x5DC )
  {
    *pGammaTable = (const BYTE *)&ajGammaCT_14;
    v3 = (const BYTE *)&ajGammaInvCT_14;
  }
  else if ( ulGamma < 0x640 )
  {
    *pGammaTable = (const BYTE *)&ajGammaCT_15;
    v3 = (const BYTE *)&ajGammaInvCT_15;
  }
  else if ( ulGamma < 0x6A4 )
  {
    *pGammaTable = (const BYTE *)&ajGammaCT_16;
    v3 = (const BYTE *)&ajGammaInvCT_16;
  }
  else if ( ulGamma < 0x708 )
  {
    *pGammaTable = (const BYTE *)&ajGammaCT_17;
    v3 = (const BYTE *)&ajGammaInvCT_17;
  }
  else if ( ulGamma < 0x76C )
  {
    *pGammaTable = (const BYTE *)&ajGammaCT_18;
    v3 = (const BYTE *)&ajGammaInvCT_18;
  }
  else if ( ulGamma < 0x7D0 )
  {
    *pGammaTable = (const BYTE *)&ajGammaCT_19;
    v3 = (const BYTE *)&ajGammaInvCT_19;
  }
  else if ( ulGamma < 0x834 )
  {
    *pGammaTable = (const BYTE *)&ajGammaCT_20;
    v3 = (const BYTE *)&ajGammaInvCT_20;
  }
  else if ( ulGamma < 0x898 )
  {
    *pGammaTable = (const BYTE *)&ajGammaCT_21;
    v3 = (const BYTE *)&ajGammaInvCT_21;
  }
  else
  {
    *pGammaTable = (const BYTE *)&ajGammaCT_22;
    v3 = (const BYTE *)&ajGammaInvCT_22;
  }
  *pInverseGammaTable = v3;
}
