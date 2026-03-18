/*
 * XREFs of ?bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z @ 0x1C000DB38
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C000DAA8 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     ?bValid@FHOBJ@@QEAAHXZ @ 0x1C001D8E8 (-bValid@FHOBJ@@QEAAHXZ.c)
 *     ?vFree@FHOBJ@@QEAAXXZ @ 0x1C001E3A8 (-vFree@FHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall bCleanupFontHash(struct _FONTHASH **a1)
{
  __int64 v1; // rax
  unsigned int v2; // r8d
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (__int64)*a1;
  v4[0] = a1;
  v4[1] = v1;
  if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v4) )
  {
    FHOBJ::vFree((FHOBJ *)v4);
    return 1;
  }
  return v2;
}
