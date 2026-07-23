/*
 * XREFs of OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140091610
 * Callers:
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     ObpCreateSymbolicLinkName @ 0x1404A33C8 (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x140091640 (PsGetPermanentSiloContext.c)
 */

PVOID __fastcall OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(__int64 a1)
{
  int PermanentSiloContext; // eax
  __int64 v2; // rdx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  PermanentSiloContext = PsGetPermanentSiloContext(a1, (unsigned int)PsObjectDirectorySiloContextSlot, &v4);
  v2 = v4;
  if ( PermanentSiloContext < 0 )
    return ObpRootDirectoryObject;
  return (PVOID)v2;
}
