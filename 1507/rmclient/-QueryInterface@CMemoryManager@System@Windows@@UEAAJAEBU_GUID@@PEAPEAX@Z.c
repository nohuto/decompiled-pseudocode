/*
 * XREFs of ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003A50
 * Callers:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180003340 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008F20 (-QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008F30 (-QueryInterface@CMemoryManager@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180003650 (-AddRef@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VN.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003B60 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::QueryInterface(
        Windows::System::CMemoryManager *this,
        struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // edi
  unsigned int Data1; // r9d
  char *v5; // rsi
  const struct _GUID *v6; // rcx
  int v7; // eax
  __int64 (__fastcall *v8)(__int64, volatile int *); // rsi

  v3 = 0;
  *a3 = 0LL;
  Data1 = a2->Data1;
  if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || Data1 == -1350114592
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    *a3 = this;
    (*(void (__fastcall **)(Windows::System::CMemoryManager *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
  if ( Data1 == 53
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = this;
  }
  else
  {
    v5 = (char *)this + 8;
    if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_5c6c279c_d7ca_4779_9188_4057219ce64c) )
    {
      *a3 = v5;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_6eee351f_6d62_423f_9479_b01f9c9f7669) )
      {
        *a3 = v5 + 8;
        v7 = 0;
      }
      else
      {
        v7 = -2147467262;
      }
      v3 = v7;
      if ( v7 < 0 )
        return v3;
    }
  }
  v8 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)*a3 + 8LL);
  if ( v8 != Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::AddRef )
  {
    ((void (__fastcall *)(_QWORD))v8)(*a3);
    return v3;
  }
  Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::AddRef(
    (__int64)*a3,
    (volatile int *)a2);
  return v3;
}
