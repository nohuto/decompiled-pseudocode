/*
 * XREFs of PsIsHostSilo @ 0x14013A210
 * Callers:
 *     SeCreateClientSecurityEx @ 0x140481510 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140481870 (SepCreateClientSecurityEx.c)
 *     EtwpServerSiloCreateNotify @ 0x140593ABC (EtwpServerSiloCreateNotify.c)
 *     SepRmCommandServerThread @ 0x1405A7600 (SepRmCommandServerThread.c)
 *     SepUpdateSiloInClientSecurity @ 0x1406D5084 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
