/*
 * XREFs of ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003D60
 * Callers:
 *     ?QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800068D0 (-QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800068E0 (-QueryInterface@CMemoryManager@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800068F0 (-QueryInterface@CMemoryManager@System@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180003630 (-AddRef@CMemoryManager@System@Windows@@UEAAKXZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003F00 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000830C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::QueryInterface(
        Windows::System::CMemoryManager *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  unsigned int Data1; // r10d
  volatile int *v5; // rdx
  const struct _GUID *v7; // rcx
  _DWORD *v8; // r9
  int v9; // r10d
  char *v10; // r11
  void *v11; // r11
  int v12; // eax
  __int64 v13; // r11
  unsigned int v14; // eax
  __int64 v15; // r10
  __int64 (*v16)(void); // rax

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
    v5 = *(volatile int **)(*(_QWORD *)this + 8LL);
    if ( v5 == (volatile int *)Windows::System::CMemoryManager::AddRef )
    {
      Windows::System::CMemoryManager::AddRef(this, v5);
      return 0LL;
    }
LABEL_31:
    v16 = (__int64 (*)(void))v5;
    goto LABEL_32;
  }
  if ( Data1 == 53
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = this;
  }
  else if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_5c6c279c_d7ca_4779_9188_4057219ce64c) )
  {
    *a3 = v10;
  }
  else
  {
    v11 = v10 + 8;
    if ( v9 == 1861104927
      && v8[1] == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data2
      && v8[2] == *(_DWORD *)GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4
      && v8[3] == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4[4] )
    {
      *a3 = v11;
      v12 = 0;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c) )
    {
      *a3 = (void *)(v13 + 8);
      v12 = 0;
    }
    else
    {
      v12 = -2147467262;
    }
    v3 = v12;
    if ( v12 < 0 )
      return v3;
  }
  v5 = *(volatile int **)(*(_QWORD *)*a3 + 8LL);
  if ( v5 != (volatile int *)Windows::System::CMemoryManager::AddRef )
    goto LABEL_31;
  v14 = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)*a3 + 36), v5);
  if ( (*(_BYTE *)(v15 + 56) & 4) != 0 || v14 != 2 )
    return v3;
  v16 = *(__int64 (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
  if ( v16 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    return v3;
  }
LABEL_32:
  v16();
  return v3;
}
