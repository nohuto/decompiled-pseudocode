/*
 * XREFs of ?push_back@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x18008EC6C
 * Callers:
 *     _lambda_80c14477c5528a734bb27b3f731672ff_::operator() @ 0x18008DFDC (_lambda_80c14477c5528a734bb27b3f731672ff_--operator().c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?_Reserve@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18008EB74 (-_Reserve@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceP.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::push_back(__int64 **a1, __int64 *a2)
{
  __int64 *result; // rax
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rsi

  result = a1[1];
  if ( a2 >= result || *a1 > a2 )
  {
    if ( result == a1[2] )
      std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Reserve(a1);
    result = a1[1];
    if ( result )
    {
      v7 = *a2;
      *result = *a2;
LABEL_11:
      if ( v7 )
        result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  else
  {
    v5 = a2 - *a1;
    if ( result == a1[2] )
      result = (__int64 *)std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Reserve(a1);
    v6 = a1[1];
    if ( v6 )
    {
      result = *a1;
      v7 = (*a1)[v5];
      *v6 = v7;
      goto LABEL_11;
    }
  }
  ++a1[1];
  return result;
}
