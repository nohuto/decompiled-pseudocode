/*
 * XREFs of ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C007D048
 * Callers:
 *     DCompositionSessionInitialize @ 0x1C007D030 (DCompositionSessionInitialize.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 DirectComposition::CSynchronizationManager::OnSessionCreation(void)
{
  struct _RTL_GENERIC_TABLE *v0; // rax
  struct _RTL_GENERIC_TABLE *v1; // rsi
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS v4; // ebx

  v0 = (struct _RTL_GENERIC_TABLE *)Win32AllocPoolZInit(0x48uLL);
  v1 = v0;
  if ( v0 )
    RtlInitializeGenericTable(
      v0,
      (PRTL_GENERIC_COMPARE_ROUTINE)DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
      (PRTL_GENERIC_ALLOCATE_ROUTINE)DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::AllocateTableEntry,
      (PRTL_GENERIC_FREE_ROUTINE)rimUserMemAllocNodeFree,
      0LL);
  else
    v1 = 0LL;
  if ( !v1 )
    return (unsigned int)-1073741801;
  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged();
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  if ( !v3 )
  {
    v4 = -1073741801;
LABEL_15:
    Win32FreePool();
    return (unsigned int)v4;
  }
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
  {
    Win32FreePool();
    goto LABEL_15;
  }
  DirectComposition::CSynchronizationManager::s_syncIdCounter = 0LL;
  DirectComposition::CSynchronizationManager::s_pSyncTable = v1;
  DirectComposition::CSynchronizationManager::s_pSyncTableLock = v3;
  return (unsigned int)v4;
}
