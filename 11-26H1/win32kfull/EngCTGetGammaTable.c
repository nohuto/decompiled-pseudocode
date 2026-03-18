/*
 * XREFs of EngCTGetGammaTable @ 0x1402371C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngCTGetGammaTable(ULONG ulGamma, const BYTE **pGammaTable, const BYTE **pInverseGammaTable)
{
  const BYTE *v3; // rax
  const BYTE *v4; // rcx

  if ( ulGamma < 0x44C )
  {
    v3 = (const BYTE *)&unk_14035EEB0;
    v4 = (const BYTE *)&unk_14035EEB0;
  }
  else if ( ulGamma < 0x4B0 )
  {
    v3 = (const BYTE *)&unk_140365D20;
    v4 = (const BYTE *)&unk_140365E20;
  }
  else if ( ulGamma >= 0x514 )
  {
    if ( ulGamma < 0x578 )
    {
      v3 = (const BYTE *)&unk_14035FBB0;
      v4 = (const BYTE *)&unk_14035FCB0;
    }
    else if ( ulGamma < 0x5DC )
    {
      v3 = (const BYTE *)&unk_14035F1B0;
      v4 = (const BYTE *)&unk_14035F2B0;
    }
    else if ( ulGamma < 0x640 )
    {
      v3 = (const BYTE *)&unk_1403601B0;
      v4 = (const BYTE *)&unk_1403602B0;
    }
    else if ( ulGamma < 0x6A4 )
    {
      v3 = (const BYTE *)&unk_14035F3B0;
      v4 = (const BYTE *)&unk_14035F4B0;
    }
    else if ( ulGamma >= 0x708 )
    {
      if ( ulGamma >= 0x76C )
      {
        if ( ulGamma >= 0x7D0 )
        {
          if ( ulGamma >= 0x834 )
          {
            if ( ulGamma >= 0x898 )
            {
              v3 = (const BYTE *)&unk_14035F9B0;
              v4 = (const BYTE *)&unk_14035FAB0;
            }
            else
            {
              v3 = (const BYTE *)&unk_14035FDB0;
              v4 = (const BYTE *)&unk_14035FEB0;
            }
          }
          else
          {
            v3 = (const BYTE *)&unk_14035EFB0;
            v4 = (const BYTE *)&unk_14035F0B0;
          }
        }
        else
        {
          v3 = (const BYTE *)&unk_14035FFB0;
          v4 = (const BYTE *)&unk_1403600B0;
        }
      }
      else
      {
        v3 = (const BYTE *)&unk_14035F5B0;
        v4 = (const BYTE *)&unk_14035F6B0;
      }
    }
    else
    {
      v3 = (const BYTE *)&unk_140365B20;
      v4 = (const BYTE *)&unk_140365C20;
    }
  }
  else
  {
    v3 = (const BYTE *)&unk_14035ECB0;
    v4 = (const BYTE *)&unk_14035EDB0;
  }
  *pGammaTable = v4;
  *pInverseGammaTable = v3;
}
