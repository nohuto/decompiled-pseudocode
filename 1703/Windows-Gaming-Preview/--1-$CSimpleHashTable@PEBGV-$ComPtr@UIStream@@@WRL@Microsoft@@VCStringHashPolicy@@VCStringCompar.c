/*
 * XREFs of ??1?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAA@XZ @ 0x180004CA8
 * Callers:
 *     _CStringHashTable_Microsoft::WRL::ComPtr_IStream__CStringHashPolicy_CStringCompare_::_CStringHashTable_Microsoft::WRL::ComPtr_IStream__CStringHashPolicy_CStringCompare__::_1_::dtor$0 @ 0x18002A651 (_CStringHashTable_Microsoft--WRL--ComPtr_IStream__CStringHashPolicy_CStringCompare_--_CStringHas.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::~CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>(
        __int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v3 + 24 * i) == 1 )
      {
        *(_DWORD *)(v3 + 24 * i) = 2;
        v4 = *(_QWORD *)(v3 + 24 * i + 16);
        if ( v4 )
        {
          *(_QWORD *)(v3 + 24 * i + 16) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++*(_DWORD *)(a1 + 8);
        --*(_DWORD *)a1;
      }
    }
    LocalFree(*(HLOCAL *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
