/*
 * XREFs of ?DeleteGameConfigServers@Internal@ExecutionModel@@YAJXZ @ 0x180047EB0
 * Callers:
 *     ShutdownGameConfigRpcServer @ 0x18004885C (ShutdownGameConfigRpcServer.c)
 * Callees:
 *     ?_FreeBuckets@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAXXZ @ 0x180005434 (-_FreeBuckets@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ??_GGameConfigStoreServer@ExecutionModel@@QEAAPEAXI@Z @ 0x180025C78 (--_GGameConfigStoreServer@ExecutionModel@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::DeleteGameConfigServers(ExecutionModel::Internal *this)
{
  __int64 **v1; // rdi
  __int64 **v2; // rbx
  void **v3; // rdi
  __int64 *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rax

  v1 = (__int64 **)ExecutionModel::Internal::_sidToGameConfigServer;
  if ( ExecutionModel::Internal::_sidToGameConfigServer )
  {
    v2 = *(__int64 ***)ExecutionModel::Internal::_sidToGameConfigServer;
    while ( v2 != v1 )
    {
      v3 = (void **)v2[4];
      operator delete(v2[3]);
      if ( v3 )
        ExecutionModel::GameConfigStoreServer::`scalar deleting destructor'(v3);
      v2 = (__int64 **)*v2;
      v1 = (__int64 **)ExecutionModel::Internal::_sidToGameConfigServer;
    }
    if ( v1 )
    {
      while ( *v1 != (__int64 *)v1 )
      {
        v4 = *v1;
        v5 = (_QWORD *)(*v1)[1];
        v6 = **v1;
        *v5 = v6;
        *(_QWORD *)(v6 + 8) = v5;
        operator delete(v4);
      }
      v1[3] = 0LL;
      utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)v1);
      operator delete(v1);
    }
    ExecutionModel::Internal::_sidToGameConfigServer = 0LL;
  }
  return 0LL;
}
