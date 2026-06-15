/*
 * XREFs of ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIII@Z @ 0x18003FA94
 * Callers:
 *     ?DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18003F870 (-DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV-$CSimpleArray@PEAVCConnectorProcessin.c)
 *     _lambda_418c5ae5971ebab8b75617066dde6fa1_::operator() @ 0x1800A4F74 (_lambda_418c5ae5971ebab8b75617066dde6fa1_--operator().c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800A7350 (-TryAddFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 * Callees:
 *     ?Add@?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAUCConnectorFormatCharacteristics@@@Z @ 0x18003FB78 (-Add@-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnect.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180047938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x180066DB4 (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CConnectorProcessingModeCharacteristics::AddConnectorFormat(
        CConnectorProcessingModeCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  CConnectorFormatCharacteristics *v10; // rax
  unsigned int v11; // edx
  CConnectorFormatCharacteristics *v12; // rbx
  __int64 cbSize; // rdi
  void *v14; // rax
  void *v15; // rsi
  int v16; // edi
  CConnectorFormatCharacteristics *v18; // [rsp+20h] [rbp-28h] BYREF

  v10 = (CConnectorFormatCharacteristics *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v10;
  if ( v10 )
    *(_QWORD *)v10 = 0LL;
  else
    v12 = 0LL;
  v18 = v12;
  if ( v12 )
  {
    cbSize = a2->cbSize;
    v14 = CoTaskMemAlloc(cbSize + 18);
    v15 = v14;
    if ( v14 )
    {
      memcpy_0(v14, a2, cbSize + 18);
      v16 = 0;
    }
    else
    {
      v16 = -2147024882;
    }
    *(_QWORD *)v12 = v15;
    if ( v16 < 0 )
      goto LABEL_12;
    *((_DWORD *)v12 + 3) = a3;
    *((_DWORD *)v12 + 2) = a4;
    *((_DWORD *)v12 + 4) = a5;
    *((_DWORD *)v12 + 5) = a6;
    if ( (unsigned int)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::Add(
                         (char *)this + 16,
                         &v18) )
      return (unsigned int)v16;
  }
  v16 = -2147024882;
LABEL_12:
  if ( v12 )
    CConnectorFormatCharacteristics::`scalar deleting destructor'(v12, v11);
  return (unsigned int)v16;
}
