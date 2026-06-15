/*
 * XREFs of ??1CConnectorProcessingModeCharacteristics@@QEAA@XZ @ 0x18008711C
 * Callers:
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800876EC (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x1800874E8 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x1800876BC (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 */

void __fastcall CConnectorProcessingModeCharacteristics::~CConnectorProcessingModeCharacteristics(
        CConnectorProcessingModeCharacteristics *this)
{
  unsigned int i; // edi
  unsigned int v3; // edx
  CConnectorFormatCharacteristics *v4; // rcx
  int v5; // edi
  __int64 v6; // rsi
  void *v7; // rcx
  void *v8; // rcx

  for ( i = 0; (signed int)i < *((_DWORD *)this + 6); ++i )
  {
    v4 = *(CConnectorFormatCharacteristics **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                                (char *)this + 16,
                                                i);
    if ( v4 )
      CConnectorFormatCharacteristics::`scalar deleting destructor'(v4, v3);
  }
  v5 = 0;
  if ( *((int *)this + 10) > 0 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 < 0 || v5 >= *((_DWORD *)this + 10) )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x1800871DCLL);
      }
      operator delete(*(void **)(v6 + *((_QWORD *)this + 4)));
      ++v5;
      v6 += 8LL;
    }
    while ( v5 < *((_DWORD *)this + 10) );
  }
  v7 = (void *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    free(v7);
    *((_QWORD *)this + 4) = 0LL;
  }
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  v8 = (void *)*((_QWORD *)this + 2);
  if ( v8 )
  {
    free(v8);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
}
