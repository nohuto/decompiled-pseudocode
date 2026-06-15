/*
 * XREFs of ??1CConnectorProcessingModeCharacteristics@@QEAA@XZ @ 0x1800A4B9C
 * Callers:
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800A5048 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x180066DB4 (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 *     ??A?$CSimpleArray@PEAUtWAVEFORMATEX@@V?$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@@@ATL@@QEAAAEAPEAUtWAVEFORMATEX@@H@Z @ 0x1800A4F0C (--A-$CSimpleArray@PEAUtWAVEFORMATEX@@V-$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@@@ATL@@Q.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x1800A4F3C (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800A706C (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CConnectorProcessingModeCharacteristics::~CConnectorProcessingModeCharacteristics(
        CConnectorProcessingModeCharacteristics *this)
{
  unsigned int i; // edi
  LPVOID *v3; // rcx
  unsigned int j; // edi
  void **v5; // rax
  void *v6; // rcx

  for ( i = 0; (signed int)i < *((_DWORD *)this + 6); ++i )
  {
    v3 = *(LPVOID **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                       (char *)this + 16,
                       i);
    if ( v3 )
      CConnectorFormatCharacteristics::`scalar deleting destructor'(v3);
  }
  for ( j = 0; (signed int)j < *((_DWORD *)this + 10); ++j )
  {
    v5 = (void **)ATL::CSimpleArray<tWAVEFORMATEX *,ATL::CSimpleArrayEqualHelper<tWAVEFORMATEX *>>::operator[](
                    (char *)this + 32,
                    j);
    operator delete(*v5);
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((char *)this + 32);
  v6 = (void *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    free(v6);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
}
