/*
 * XREFs of ExpWnfEnumeratePermanentDataStores @ 0x1406FC51C
 * Callers:
 *     ExpWnfDeletePermanentStateData @ 0x1406FC328 (ExpWnfDeletePermanentStateData.c)
 * Callees:
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1405BF084 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 */

NTSTATUS __fastcall ExpWnfEnumeratePermanentDataStores(int a1, void *a2, __int64 a3, HANDLE *KeyHandle)
{
  if ( a1 || (_DWORD)a3 )
    return -1073741772;
  else
    return ExpWnfGetPermanentDataStoreHandleByScopeId(0, a2, a3, (unsigned int)((_DWORD)a2 - 2) <= 1, 0, KeyHandle);
}
