/*
 * XREFs of ExpWnfEnumeratePermanentDataStores @ 0x1406BA364
 * Callers:
 *     ExpWnfDeletePermanentStateData @ 0x1406BA198 (ExpWnfDeletePermanentStateData.c)
 * Callees:
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x14057FC78 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 */

NTSTATUS __fastcall ExpWnfEnumeratePermanentDataStores(int a1, void *a2, __int64 a3, HANDLE *KeyHandle)
{
  if ( a1 == 2 || (_DWORD)a3 )
    return -1073741772;
  else
    return ExpWnfGetPermanentDataStoreHandleByScopeId(a1, a2, a3, (unsigned int)((_DWORD)a2 - 2) <= 1, 0, KeyHandle);
}
