/*
 * XREFs of ?Init@ResourceSetClientProxy@@QEAAJKW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@@Z @ 0x180013330
 * Callers:
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x1800118B0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIR.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x180011C70 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_180011C70.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x180012230 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Exec.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAPEAUIResourceSet@3@@Z @ 0x180012A50 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@.c)
 *     ?CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x180012CA0 (-CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005DB0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall ResourceSetClientProxy::Init(__int64 a1, int a2, int a3, struct IUnknown *a4)
{
  unsigned int v4; // ebx
  struct IUnknown **v5; // rcx

  v4 = 0;
  if ( a2 )
  {
    *(_DWORD *)(a1 + 24) = a2;
    *(_DWORD *)(a1 + 28) = a3;
    v5 = (struct IUnknown **)(a1 + 40);
    if ( *v5 != a4 )
      ATL::AtlComPtrAssign(v5, a4);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
