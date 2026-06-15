/*
 * XREFs of ?AuthenticatedUser@Sids@ATL@@YA?AVCSid@2@XZ @ 0x180006F00
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18000794C (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 * Callees:
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18000A7C8 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 */

ATL::CSid *__fastcall ATL::Sids::AuthenticatedUser(ATL::CSid *a1)
{
  ATL::CSid::CSid(a1, (PSID_IDENTIFIER_AUTHORITY)&ATL::Sids::SecurityNTAuthority, 1u);
  return a1;
}
