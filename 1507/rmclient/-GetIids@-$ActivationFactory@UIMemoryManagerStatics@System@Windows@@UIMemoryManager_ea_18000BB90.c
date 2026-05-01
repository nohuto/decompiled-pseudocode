/*
 * XREFs of ?GetIids@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000BB90
 * Callers:
 *     ?GetIids@CMemoryManager@System@Windows@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180008E40 (-GetIids@CMemoryManager@System@Windows@@W7EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180008E50 (-GetIids@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@V.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_00000035_0000_0000_c000_000000000046;
    v6[1] = GUID_5c6c279c_d7ca_4779_9188_4057219ce64c;
    v6[2] = GUID_6eee351f_6d62_423f_9479_b01f9c9f7669;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
