/*
 * XREFs of ?GetIids@CMemoryManager@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800081F0
 * Callers:
 *     ?GetIids@CMemoryManager@System@Windows@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180006780 (-GetIids@CMemoryManager@System@Windows@@W7EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180006790 (-GetIids@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@U.c)
 *     ?GetIids@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800067A0 (-GetIids@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManager_ea_1800067A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::GetIids(
        Windows::System::CMemoryManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = GUID_00000035_0000_0000_c000_000000000046;
    v6[1] = GUID_5c6c279c_d7ca_4779_9188_4057219ce64c;
    v6[2] = GUID_6eee351f_6d62_423f_9479_b01f9c9f7669;
    v6[3] = GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
