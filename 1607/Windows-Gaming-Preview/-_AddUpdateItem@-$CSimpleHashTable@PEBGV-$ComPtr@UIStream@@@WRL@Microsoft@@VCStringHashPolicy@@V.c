/*
 * XREFs of ?_AddUpdateItem@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEBGAEBV?$ComPtr@UIStream@@@WRL@Microsoft@@PEAV234@@Z @ 0x18002468C
 * Callers:
 *     ?SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV?$ComPtr@UIStream@@@WRL@Microsoft@@@Z @ 0x180023620 (-SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV-$ComPtr@UI.c)
 * Callees:
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1800247DC (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCS.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x1800248B8 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VC.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
        __int64 a1,
        int a2,
        _QWORD *a3,
        _QWORD *a4)
{
  signed int v4; // ebx
  unsigned __int64 v9; // r10
  HLOCAL v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx

  v4 = 0;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v9 = *(unsigned int *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( is_mul_ok(v9, 0x18uLL) )
    {
      v10 = LocalAlloc(0x40u, 24 * v9);
      *(_QWORD *)(a1 + 16) = v10;
      v4 = v10 == 0LL ? 0x8007000E : 0;
    }
    else
    {
      v4 = -2147024362;
    }
  }
  if ( v4 >= 0 )
  {
    v11 = *(unsigned int *)(a1 + 4);
    if ( *(_DWORD *)a1 <= *(_DWORD *)(a1 + 4) >> 1 )
    {
      if ( *(_DWORD *)(a1 + 8) <= (unsigned int)v11 >> 2 )
        goto LABEL_10;
    }
    else
    {
      v11 = (unsigned int)(2 * v11 - 1);
    }
    v4 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
           a1,
           v11);
LABEL_10:
    if ( v4 >= 0 )
    {
      v12 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
              *(_QWORD *)(a1 + 16),
              *(unsigned int *)(a1 + 4),
              a3,
              a4);
      v13 = v12;
      if ( *(_DWORD *)v12 == 1 )
      {
        if ( a2 )
        {
          return (unsigned int)-2147024809;
        }
        else
        {
          v14 = *a4;
          v4 = 0;
          if ( *(_QWORD *)(v12 + 16) != *a4 )
          {
            if ( v14 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*a4);
            v15 = *(_QWORD *)(v13 + 16);
            *(_QWORD *)(v13 + 16) = v14;
            if ( v15 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
        }
      }
      else
      {
        if ( *(_DWORD *)v12 == 2 )
          --*(_DWORD *)(a1 + 8);
        *(_QWORD *)(v12 + 8) = *a3;
        v16 = *a4;
        *(_QWORD *)(v12 + 16) = *a4;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        *(_DWORD *)v13 = 1;
        ++*(_DWORD *)a1;
        return 0;
      }
    }
  }
  return (unsigned int)v4;
}
