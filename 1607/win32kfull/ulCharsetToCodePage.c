/*
 * XREFs of ulCharsetToCodePage @ 0x1C00281D8
 * Callers:
 *     pcpComputeGlyphset @ 0x1C001925C (pcpComputeGlyphset.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C0024ECC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0024F60 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C0285DE0 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C0285F80 (-vEmergency@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ulCharsetToCodePage(int a1)
{
  int v1; // edx
  _DWORD *v2; // rax

  if ( a1 == 255 )
    return 1LL;
  v1 = 0;
  v2 = &charsets;
  while ( *v2 != a1 )
  {
    ++v1;
    if ( (__int64)++v2 >= (__int64)&FLOAT_0_0 )
      return gbDBCSCodePage != 0 ? 0x4E4 : 0;
  }
  return codepages[v1];
}
