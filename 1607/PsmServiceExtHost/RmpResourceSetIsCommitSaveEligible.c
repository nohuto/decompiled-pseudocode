/*
 * XREFs of RmpResourceSetIsCommitSaveEligible @ 0x18001A608
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV-$list@V-$CC.c)
 * Callees:
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x180010720 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 */

bool __fastcall RmpResourceSetIsCommitSaveEligible(ExecutionModel::_ResourceSetInfo *a1)
{
  bool IsFrozen; // al
  __int64 v2; // r8
  char v3; // dl

  IsFrozen = ExecutionModel::_ResourceSetInfo::IsFrozen(a1);
  v3 = 0;
  if ( IsFrozen )
    return *(_BYTE *)(v2 + 42) >= 0;
  return v3;
}
