/*
 * XREFs of _lambda_49876cf6e883bc8eb3014f4491059b52_::operator() @ 0x18012F7E4
 * Callers:
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x180130470 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 * Callees:
 *     <none>
 */

void __fastcall lambda_49876cf6e883bc8eb3014f4491059b52_::operator()(_DWORD ***a1, __int64 a2)
{
  char v2; // al

  if ( a2 )
  {
    v2 = *(_BYTE *)(a2 + 28);
    if ( (v2 & 4) == 0 )
    {
      *(_BYTE *)(a2 + 28) = v2 | 4;
      ++***a1;
    }
  }
}
