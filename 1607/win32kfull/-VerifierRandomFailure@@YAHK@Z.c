/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C028F364
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C028F3F0 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C028F430 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C028F460 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C028F5B0 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C028F5F0 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C028F650 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C028F670 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C028F6B0 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C028F6F0 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C028F740 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C028F7A0 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C028F7C0 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C028F800 (VerifierEngCreateWnd.c)
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
    if ( dword_1C03218B4
      || (MEMORY[0xFFFFF78000000014] <= GreBootTime.QuadPart + 0x117D78400LL
        ? (v1 = dword_1C03218B4)
        : (v1 = 1, Seed = MEMORY[0xFFFFF78000000014], dword_1C03218B4 = 1),
          v1) )
    {
      if ( (RtlRandom(&Seed) & dword_1C03218BC) == 0 )
        return 1;
    }
  }
  return v0;
}
