/*
 * XREFs of ?AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z @ 0x18000B81C
 * Callers:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000B3EC (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PE.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAPEAUIResourceSet@3@@Z @ 0x18000BA10 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@.c)
 *     ?CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x18000BD00 (-CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     ??$emplace@AEA_KAEAPEAVResourceSetClientProxy@@@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@_N@1@AEA_KAEAPEAVResourceSetClientProxy@@@Z @ 0x18000ADB0 (--$emplace@AEA_KAEAPEAVResourceSetClientProxy@@@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClie.c)
 */

__int64 __fastcall ResourceManagerClientProxy::AddProxyResourceSet(
        ResourceManagerClientProxy *this,
        __int64 a2,
        struct ResourceSetClientProxy *a3)
{
  unsigned int v3; // ebx
  int v5[6]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  struct ResourceSetClientProxy *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = 0;
  if ( a3 )
  {
    if ( !*(_BYTE *)(utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::emplace<unsigned __int64 &,ResourceSetClientProxy * &>(
                       (int)this + 22048,
                       (__int64)v5,
                       &v6,
                       &v7)
                   + 8) )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
