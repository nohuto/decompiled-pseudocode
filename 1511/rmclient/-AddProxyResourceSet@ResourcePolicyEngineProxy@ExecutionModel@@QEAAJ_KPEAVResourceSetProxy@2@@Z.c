/*
 * XREFs of ?AddProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_KPEAVResourceSetProxy@2@@Z @ 0x18000BFA0
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180002960 (-CreateTerminalResourceSet@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 * Callees:
 *     ??$emplace@AEA_KAEAPEAVResourceSetProxy@ExecutionModel@@@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@AEA_KAEAPEAVResourceSetProxy@ExecutionModel@@@Z @ 0x18000C2A0 (--$emplace@AEA_KAEAPEAVResourceSetProxy@ExecutionModel@@@-$_HashTable@_KU-$pair@$$CB_KPEAVResour.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineProxy::AddProxyResourceSet(
        ExecutionModel::ResourcePolicyEngineProxy *this,
        __int64 a2,
        struct ExecutionModel::ResourceSetProxy *a3)
{
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    if ( !*(_BYTE *)(utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>>,0>::emplace<unsigned __int64 &,ExecutionModel::ResourceSetProxy * &>(
                       (int)this + 184,
                       (int)&v5)
                   + 8) )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
