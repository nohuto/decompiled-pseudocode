/*
 * XREFs of ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18002DA58
 * Callers:
 *     ?DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18002DBE4 (-DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV-$CSimpleArray@PEAVCConnectorProcessin.c)
 *     _lambda_54c77e54e42ef152cdcef462696c326e_::operator() @ 0x180087520 (_lambda_54c77e54e42ef152cdcef462696c326e_--operator().c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18008A3CC (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?Add@?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAUCConnectorFormatCharacteristics@@@Z @ 0x18002DB58 (-Add@-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnect.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x1800876BC (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CConnectorProcessingModeCharacteristics::AddConnectorFormat(
        CConnectorProcessingModeCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  CConnectorFormatCharacteristics *v11; // rax
  unsigned int v12; // edx
  CConnectorFormatCharacteristics *v13; // rbx
  __int64 cbSize; // rdi
  void *v15; // rax
  void *v16; // rsi
  int v17; // edi
  CConnectorFormatCharacteristics *v19; // [rsp+20h] [rbp-28h] BYREF

  v11 = (CConnectorFormatCharacteristics *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v11;
  if ( v11 )
  {
    memset(v11, 0, 0x20uLL);
    *(_QWORD *)v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v19 = v13;
  if ( v13 )
  {
    cbSize = a2->cbSize;
    v15 = CoTaskMemAlloc(cbSize + 18);
    v16 = v15;
    if ( v15 )
    {
      memcpy_0(v15, a2, cbSize + 18);
      v17 = 0;
    }
    else
    {
      v17 = -2147024882;
    }
    *(_QWORD *)v13 = v16;
    if ( v17 < 0 )
      goto LABEL_12;
    *((_DWORD *)v13 + 3) = a3;
    *((_DWORD *)v13 + 2) = a4;
    *((_DWORD *)v13 + 4) = a5;
    *((_DWORD *)v13 + 5) = a6;
    *((_DWORD *)v13 + 6) = a7;
    if ( (unsigned int)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::Add(
                         (char *)this + 16,
                         &v19) )
      return (unsigned int)v17;
  }
  v17 = -2147024882;
LABEL_12:
  if ( v13 )
    CConnectorFormatCharacteristics::`scalar deleting destructor'(v13, v12);
  return (unsigned int)v17;
}
