/*
 * XREFs of ?bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z @ 0x1C012934C
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C01292BC (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     ?bValid@FHOBJ@@QEAAHXZ @ 0x1C0031648 (-bValid@FHOBJ@@QEAAHXZ.c)
 *     ?vFree@FHOBJ@@QEAAXXZ @ 0x1C012A1A0 (-vFree@FHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall bCleanupFontHash(struct _FONTHASH **a1)
{
  __int64 v1; // rax
  unsigned int v2; // r8d
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (__int64)*a1;
  v4[0] = a1;
  v4[1] = v1;
  if ( FHOBJ::bValid((FHOBJ *)v4) )
  {
    FHOBJ::vFree((FHOBJ *)v4);
    return 1;
  }
  return v2;
}
