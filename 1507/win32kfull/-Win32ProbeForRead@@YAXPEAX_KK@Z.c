/*
 * XREFs of ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C02D7D98
 * Callers:
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1C02D6154 (-CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureUsermodeParameters@GetTrueTypeFileRequest@@UEAAXPEAX@Z @ 0x1C02D6390 (-CaptureUsermodeParameters@GetTrueTypeFileRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C02D67D0 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1C02D6940 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z.c)
 *     ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x1C02D7BA4 (-TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Win32ProbeForRead(char *a1, __int64 a2, int a3)
{
  if ( a2 )
  {
    if ( ((a3 - 1) & (unsigned int)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a1[a2] > MmUserProbeAddress || &a1[a2] < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
}
