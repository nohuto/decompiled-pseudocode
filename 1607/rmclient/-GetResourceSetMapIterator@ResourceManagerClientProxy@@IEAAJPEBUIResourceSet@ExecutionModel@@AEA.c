/*
 * XREFs of ?GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@@Z @ 0x18000C0E4
 * Callers:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000B3EC (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PE.c)
 *     ?ReleaseResourceSet@ResourceManagerClientProxy@@UEAAJPEAUIResourceSet@ExecutionModel@@@Z @ 0x18000C550 (-ReleaseResourceSet@ResourceManagerClientProxy@@UEAAJPEAUIResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceManagerClientProxy::GetResourceSetMapIterator(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  _QWORD *v4; // rcx
  _QWORD *i; // rax

  v3 = 0;
  v4 = (_QWORD *)(a1 + 22048);
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
