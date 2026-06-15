/*
 * XREFs of ?Add@?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAUCConnectorFormatCharacteristics@@@Z @ 0x18003FB78
 * Callers:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIII@Z @ 0x18003FA94 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIII@Z.c)
 * Callees:
 *     _recalloc @ 0x1800478E0 (_recalloc.c)
 */

__int64 __fastcall ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::Add(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // edi
  bool v5; // sf
  int v6; // edi
  void *v7; // rax
  _QWORD *v8; // r8

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == *(_DWORD *)(a1 + 12) )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      v5 = (v2 & 0x40000000) != 0;
      v6 = 2 * v2;
      if ( v5 )
        return 0LL;
    }
    else
    {
      v6 = 1;
    }
    if ( (unsigned __int64)v6 <= 0xFFFFFFF )
    {
      v7 = _recalloc(*(void **)a1, v6, 8uLL);
      if ( v7 )
      {
        *(_DWORD *)(a1 + 12) = v6;
        *(_QWORD *)a1 = v7;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
LABEL_7:
  v8 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *(int *)(a1 + 8));
  if ( v8 )
    *v8 = *a2;
  ++*(_DWORD *)(a1 + 8);
  return 1LL;
}
