/*
 * XREFs of PopSaveHiberContextWrapper @ 0x140167180
 * Callers:
 *     <none>
 * Callees:
 *     KeSaveStateForHibernate @ 0x14015E960 (KeSaveStateForHibernate.c)
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x1403D06EC (PopHiberCheckResume.c)
 */

__int64 __fastcall PopSaveHiberContextWrapper(PVOID Address)
{
  PVOID v1; // rbp
  bool v2; // zf
  __int64 result; // rax

  if ( !__readgsdword(0x1A4u) )
  {
    v1 = Address;
    KeSaveStateForHibernate((__int64)&PoWakeState);
    v2 = (unsigned __int8)PopHiberCheckResume() == 0;
    result = 1073742484LL;
    if ( !v2 )
      return result;
    Address = v1;
  }
  return PopSaveHiberContext(Address);
}
