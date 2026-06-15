/*
 * XREFs of ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800871E4
 * Callers:
 *     ??_ECEndpointCharacteristics@@MEAAPEAXI@Z @ 0x180087720 (--_ECEndpointCharacteristics@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x18003462C (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180035F78 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800876EC (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18008A028 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CEndpointCharacteristics::~CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  int i; // edi
  __int64 v3; // rcx
  unsigned int v4; // edx
  CConnectorProcessingModeCharacteristics *v5; // rcx
  int j; // edi
  __int64 v7; // rcx
  unsigned int v8; // edx
  CConnectorProcessingModeCharacteristics *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  *(_QWORD *)this = &CEndpointCharacteristics::`vftable';
  if ( *((_QWORD *)this + 51) )
  {
    for ( i = 0; ; ++i )
    {
      v3 = *((_QWORD *)this + 51);
      if ( i >= *(_DWORD *)(v3 + 8) )
        break;
      v5 = *(CConnectorProcessingModeCharacteristics **)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                                                          v3,
                                                          i);
      if ( v5 )
        CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v5, v4);
    }
  }
  if ( *((_QWORD *)this + 52) )
  {
    for ( j = 0; ; ++j )
    {
      v7 = *((_QWORD *)this + 52);
      if ( j >= *(_DWORD *)(v7 + 8) )
        break;
      v9 = *(CConnectorProcessingModeCharacteristics **)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                                                          v7,
                                                          j);
      if ( v9 )
        CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v9, v8);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 448));
  v10 = *((_QWORD *)this + 52);
  if ( v10 )
  {
    if ( *(_QWORD *)v10 )
    {
      free(*(void **)v10);
      *(_QWORD *)v10 = 0LL;
    }
    *(_DWORD *)(v10 + 8) = 0;
    *(_DWORD *)(v10 + 12) = 0;
    operator delete((void *)v10);
  }
  *((_QWORD *)this + 52) = 0LL;
  v11 = *((_QWORD *)this + 51);
  if ( v11 )
  {
    if ( *(_QWORD *)v11 )
    {
      free(*(void **)v11);
      *(_QWORD *)v11 = 0LL;
    }
    *(_DWORD *)(v11 + 8) = 0;
    *(_DWORD *)(v11 + 12) = 0;
    operator delete((void *)v11);
  }
  *((_QWORD *)this + 51) = 0LL;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((char *)this + 352);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((char *)this + 336);
  `eh vector destructor iterator'(
    (char *)this + 272,
    16LL,
    4LL,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::~CAudioSignalProcessingModeArray);
  `eh vector destructor iterator'(
    (char *)this + 208,
    16LL,
    4LL,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::~CAudioSignalProcessingModeArray);
  `eh vector destructor iterator'(
    (char *)this + 144,
    16LL,
    4LL,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::~CAudioSignalProcessingModeArray);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((char *)this + 128);
  `eh vector destructor iterator'(
    (char *)this + 64,
    16LL,
    4LL,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::~CAudioSignalProcessingModeArray);
  v12 = *((_QWORD *)this + 7);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 4);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_QWORD *)this + 2);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  *((_DWORD *)this + 3) = -1073741823;
}
