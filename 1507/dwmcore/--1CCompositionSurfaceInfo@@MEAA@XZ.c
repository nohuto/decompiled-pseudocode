/*
 * XREFs of ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180086AAC
 * Callers:
 *     ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x180086280 (--_ECCompositionSurfaceInfo@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z @ 0x180089664 (-RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180089E90 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 */

void __fastcall CCompositionSurfaceInfo::~CCompositionSurfaceInfo(CCompositionSurfaceInfo *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 4) == 0LL;
  *(_QWORD *)this = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  if ( !v1 )
  {
    CCompositionSurfaceManager::RemoveFromSurfaceMap(
      *((CCompositionSurfaceManager **)this + 3),
      *(struct _LUID *)((char *)this + 40));
    CloseHandle(*((HANDLE *)this + 4));
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 25);
  CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo *)((char *)this + 48));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
