/*
 * XREFs of ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x180024164
 * Callers:
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEBGAEBV?$ComPtr@UIStream@@@WRL@Microsoft@@PEAV234@@Z @ 0x180023FFC (-_AddUpdateItem@-$CSimpleHashTable@PEBGV-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@V.c)
 * Callees:
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180024240 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VC.c)
 */

__int64 __fastcall CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v4; // edi
  HLOCAL v5; // rbp
  __int64 v6; // r9
  __int64 i; // rsi
  __int64 v8; // r12
  __int64 v9; // rax

  if ( is_mul_ok(a2, 0x18uLL) )
  {
    v5 = LocalAlloc(0x40u, 24LL * a2);
    v4 = v5 == 0LL ? 0x8007000E : 0;
    if ( v5 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
      {
        v8 = *(_QWORD *)(a1 + 16);
        if ( *(_DWORD *)(v8 + 24 * i) == 1 )
        {
          v9 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                 v5,
                 a2,
                 v8 + 8 + 24 * i,
                 v6);
          *(_OWORD *)v9 = *(_OWORD *)(v8 + 24 * i);
          *(_QWORD *)(v9 + 16) = *(_QWORD *)(v8 + 24 * i + 16);
        }
      }
      LocalFree(*(HLOCAL *)(a1 + 16));
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = v5;
      *(_DWORD *)(a1 + 4) = a2;
    }
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v4;
}
