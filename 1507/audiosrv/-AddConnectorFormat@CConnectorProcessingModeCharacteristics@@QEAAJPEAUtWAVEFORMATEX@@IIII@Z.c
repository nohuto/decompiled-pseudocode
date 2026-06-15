/*
 * XREFs of ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEAUtWAVEFORMATEX@@IIII@Z @ 0x1800671EC
 * Callers:
 *     _lambda_ee82c780731b3ceedd1db5bd5f3d58d6_::operator() @ 0x1800A7780 (_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_--operator().c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180034BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800439F4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x1800672A8 (-Add@-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAV.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x1800686B8 (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CConnectorProcessingModeCharacteristics::AddConnectorFormat(
        CConnectorProcessingModeCharacteristics *this,
        struct tWAVEFORMATEX *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  struct tWAVEFORMATEX **v10; // rax
  unsigned int v11; // edx
  struct tWAVEFORMATEX **v12; // rbx
  int v13; // edi
  struct tWAVEFORMATEX **v15; // [rsp+20h] [rbp-18h] BYREF

  v10 = (struct tWAVEFORMATEX **)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v10;
  if ( v10 )
    *v10 = 0LL;
  else
    v12 = 0LL;
  v15 = v12;
  if ( v12 )
  {
    v13 = CloneWaveFormat(a2, v12);
    if ( v13 < 0 )
      goto LABEL_8;
    *((_DWORD *)v12 + 3) = a3;
    *((_DWORD *)v12 + 2) = a4;
    *((_DWORD *)v12 + 4) = a5;
    *((_DWORD *)v12 + 5) = a6;
    if ( (unsigned int)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
                         (char *)this + 16,
                         &v15) )
      return (unsigned int)v13;
  }
  v13 = -2147024882;
LABEL_8:
  if ( v12 )
    CConnectorFormatCharacteristics::`scalar deleting destructor'((CConnectorFormatCharacteristics *)v12, v11);
  return (unsigned int)v13;
}
