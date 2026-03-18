/*
 * XREFs of ?bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z @ 0x1C0107C9C
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C0107C0C (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     ?bValid@FHOBJ@@QEAAHXZ @ 0x1C0026DF4 (-bValid@FHOBJ@@QEAAHXZ.c)
 *     ?vFree@FHOBJ@@QEAAXXZ @ 0x1C0027964 (-vFree@FHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall bCleanupFontHash(struct _FONTHASH **a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (__int64)*a1;
  v5[0] = a1;
  v5[1] = v1;
  if ( FHOBJ::bValid((FHOBJ *)v5) )
  {
    FHOBJ::vFree((FHOBJ *)v5, v2, v3);
    LODWORD(v3) = 1;
  }
  return (unsigned int)v3;
}
