/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C0290640
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C02906C0 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C0290700 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C0290730 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C0290880 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C02908C0 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C0290920 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C0290940 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C0290980 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C02909C0 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C0290A10 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C0290A70 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C0290A90 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C0290AD0 (VerifierEngCreateWnd.c)
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
    if ( dword_1C031B23C
      || (MEMORY[0xFFFFF78000000014] <= GreBootTime.QuadPart + 0x117D78400LL
        ? (v1 = dword_1C031B23C)
        : (v1 = 1, Seed = MEMORY[0xFFFFF78000000014], dword_1C031B23C = 1),
          v1) )
    {
      if ( (dword_1C031B244 & RtlRandom(&Seed)) == 0 )
        return 1;
    }
  }
  return v0;
}
