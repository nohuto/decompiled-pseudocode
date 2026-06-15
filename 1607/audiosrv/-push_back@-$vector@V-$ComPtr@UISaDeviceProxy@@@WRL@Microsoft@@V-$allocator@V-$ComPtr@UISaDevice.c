/*
 * XREFs of ?push_back@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x18007723C
 * Callers:
 *     _lambda_63adadfa8c2e225bcf88290a3b13fd06_::operator() @ 0x18007664C (_lambda_63adadfa8c2e225bcf88290a3b13fd06_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800342A0 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Reserve@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18007713C (-_Reserve@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceP.c)
 */

unsigned __int64 __fastcall std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::push_back(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // rdi
  __int64 *v6; // rcx

  result = a1[1];
  if ( (unsigned __int64)a2 >= result || *a1 > (unsigned __int64)a2 )
  {
    if ( result == a1[2] )
      result = std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Reserve((__int64)a1);
    v6 = (__int64 *)a1[1];
    if ( v6 )
    {
      *v6 = *a2;
      goto LABEL_11;
    }
  }
  else
  {
    v5 = ((__int64)a2 - *a1) >> 3;
    if ( result == a1[2] )
      result = std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Reserve((__int64)a1);
    v6 = (__int64 *)a1[1];
    if ( v6 )
    {
      *v6 = *(_QWORD *)(*a1 + 8 * v5);
LABEL_11:
      result = Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v6);
    }
  }
  a1[1] += 8LL;
  return result;
}
