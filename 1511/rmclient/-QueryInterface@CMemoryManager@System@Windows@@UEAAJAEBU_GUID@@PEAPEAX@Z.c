/*
 * XREFs of ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180004350
 * Callers:
 *     ?QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800097B0 (-QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800097C0 (-QueryInterface@CMemoryManager@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800097D0 (-QueryInterface@CMemoryManager@System@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800044B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::QueryInterface(
        Windows::System::CMemoryManager *this,
        const struct _GUID *a2,
        char **a3)
{
  unsigned int v3; // edi
  struct Microsoft::WRL::Details::ModuleBase *v4; // rsi
  unsigned int Data1; // r9d
  char *v6; // rsi
  const struct _GUID *v7; // rcx
  int v8; // r9d
  _DWORD *v9; // r10
  char *v10; // rbx
  __int64 (__fastcall *v11)(Windows::System::CMemoryManager *); // rsi
  signed __int32 v13; // eax
  void (__fastcall *v14)(struct Microsoft::WRL::Details::ModuleBase *); // rbx
  char *v15; // rsi
  int v16; // eax

  v3 = 0;
  *a3 = 0LL;
  v4 = this;
  Data1 = a2->Data1;
  if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || Data1 == -1350114592
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    *a3 = (char *)this;
    v14 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)this + 8LL);
    goto LABEL_31;
  }
  if ( Data1 == 53
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = (char *)this;
  }
  else
  {
    v6 = (char *)this + 8;
    if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_5c6c279c_d7ca_4779_9188_4057219ce64c) )
    {
      *a3 = v6;
    }
    else
    {
      v15 = v6 + 8;
      if ( v8 == 1861104927
        && v9[1] == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data2
        && v9[2] == *(_DWORD *)GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4
        && v9[3] == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4[4] )
      {
        *a3 = v15;
        v16 = 0;
      }
      else if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c) )
      {
        *a3 = v15 + 8;
        v16 = 0;
      }
      else
      {
        v16 = -2147467262;
      }
      v3 = v16;
      if ( v16 < 0 )
        return v3;
    }
  }
  v10 = *a3;
  v11 = *(__int64 (__fastcall **)(Windows::System::CMemoryManager *))(*(_QWORD *)*a3 + 8LL);
  if ( v11 != Windows::System::CMemoryManager::AddRef )
  {
    v11((Windows::System::CMemoryManager *)*a3);
    return v3;
  }
  v13 = _InterlockedIncrement((volatile signed __int32 *)v10 + 9);
  if ( (v10[56] & 4) != 0 || v13 != 2 )
    return v3;
  v4 = Microsoft::WRL::Details::ModuleBase::module_;
  v14 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                            + 8LL);
  if ( (char *)v14 != (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
  {
LABEL_31:
    v14(v4);
    return v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  return v3;
}
