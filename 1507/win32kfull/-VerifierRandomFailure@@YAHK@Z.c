/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C0290828
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C02908B0 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C02908F0 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C0290920 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C0290A70 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C0290AB0 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C0290B10 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C0290B30 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C0290B70 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C0290BB0 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C0290C00 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C0290C60 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C0290C80 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C0290CC0 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure()
{
  unsigned int v0; // ebx
  int v1; // ecx

  v0 = 0;
  if ( (gvs & 4) != 0 )
  {
    if ( dword_1C031B24C
      || (MEMORY[0xFFFFF78000000014] <= GreBootTime.QuadPart + 0x117D78400LL
        ? (v1 = dword_1C031B24C)
        : (v1 = 1, Seed = MEMORY[0xFFFFF78000000014], dword_1C031B24C = 1),
          v1) )
    {
      if ( (dword_1C031B254 & RtlRandom(&Seed)) == 0 )
        return 1;
    }
  }
  return v0;
}
