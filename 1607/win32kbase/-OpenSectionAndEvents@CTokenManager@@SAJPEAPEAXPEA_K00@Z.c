/*
 * XREFs of ?OpenSectionAndEvents@CTokenManager@@SAJPEAPEAXPEA_K00@Z @ 0x1C0080774
 * Callers:
 *     NtTokenManagerOpenSectionAndEvents @ 0x1C00805F0 (NtTokenManagerOpenSectionAndEvents.c)
 * Callees:
 *     ?OpenEventForSynchonize@CTokenManager@@CAJPEAXPEAPEAX@Z @ 0x1C0080824 (-OpenEventForSynchonize@CTokenManager@@CAJPEAXPEAPEAX@Z.c)
 */

NTSTATUS __fastcall CTokenManager::OpenSectionAndEvents(void **a1, unsigned __int64 *a2, void **a3, void **a4)
{
  CTokenManager *v4; // r10
  NTSTATUS result; // eax
  CTokenManager *v9; // rcx

  v4 = g_pTokenManager;
  *a1 = (void *)-1LL;
  *a2 = 0LL;
  *a3 = (void *)-1LL;
  *a4 = (void *)-1LL;
  if ( !v4 )
    return -1073741823;
  result = ObOpenObjectByPointer(*((PVOID *)v4 + 1), 0x40u, 0LL, 4u, MmSectionObjectType, 0, a1);
  if ( result >= 0 )
  {
    v9 = g_pTokenManager;
    *a2 = *((_QWORD *)g_pTokenManager + 3);
    result = CTokenManager::OpenEventForSynchonize(*((void **)v9 + 4), a3);
    if ( result >= 0 )
      return CTokenManager::OpenEventForSynchonize(*((void **)g_pTokenManager + 5), a4);
  }
  return result;
}
