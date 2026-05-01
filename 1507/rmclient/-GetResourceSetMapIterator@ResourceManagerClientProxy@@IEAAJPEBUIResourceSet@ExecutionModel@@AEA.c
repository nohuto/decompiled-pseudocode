/*
 * XREFs of ?GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@@Z @ 0x1800132F8
 * Callers:
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x1800118B0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIR.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x180011C70 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_180011C70.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x180012230 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Exec.c)
 *     ?ReleaseResourceSet@ResourceManagerClientProxy@@UEAAJPEAUIResourceSet@ExecutionModel@@@Z @ 0x180013B40 (-ReleaseResourceSet@ResourceManagerClientProxy@@UEAAJPEAUIResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceManagerClientProxy::GetResourceSetMapIterator(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  _QWORD *v4; // rcx
  _QWORD *i; // rax

  v3 = 0;
  v4 = (_QWORD *)(a1 + 20768);
  for ( i = (_QWORD *)*v4; ; i = (_QWORD *)*i )
  {
    *a3 = i;
    if ( i == v4 || i[4] == a2 )
      break;
  }
  if ( (_QWORD *)*a3 == v4 )
    return (unsigned int)-2147024809;
  return v3;
}
