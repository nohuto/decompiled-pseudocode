/*
 * XREFs of ?Add@?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@QEAAHAEBV?$CComHeapPtr@UtWAVEFORMATEX@@@2@@Z @ 0x1800A5118
 * Callers:
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800A51A4 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?AddUniqueFormatToList@@YAJAEAV?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@2@@Z @ 0x1800A5214 (-AddUniqueFormatToList@@YAJAEAV-$CSimpleArray@V-$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V-$CSimpleArr.c)
 * Callees:
 *     _recalloc @ 0x1800478E0 (_recalloc.c)
 */

__int64 __fastcall ATL::CSimpleArray<ATL::CComHeapPtr<tWAVEFORMATEX>,ATL::CSimpleArrayEqualHelper<ATL::CComHeapPtr<tWAVEFORMATEX>>>::Add(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // edi
  int v5; // edi
  bool v6; // sf
  void *v7; // rax
  _QWORD *v8; // r8

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == *(_DWORD *)(a1 + 12) )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      v6 = (v2 & 0x40000000) != 0;
      v5 = 2 * v2;
      if ( v6 )
        return 0LL;
    }
    else
    {
      v5 = 1;
    }
    if ( (unsigned __int64)v5 <= 0xFFFFFFF )
    {
      v7 = _recalloc(*(void **)a1, v5, 8uLL);
      if ( v7 )
      {
        *(_DWORD *)(a1 + 12) = v5;
        *(_QWORD *)a1 = v7;
        goto LABEL_8;
      }
    }
    return 0LL;
  }
LABEL_8:
  v8 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *(int *)(a1 + 8));
  if ( v8 )
    *v8 = *a2;
  ++*(_DWORD *)(a1 + 8);
  return 1LL;
}
