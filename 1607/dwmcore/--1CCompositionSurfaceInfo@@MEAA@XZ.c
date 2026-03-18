/*
 * XREFs of ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x1800993EC
 * Callers:
 *     ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x180098970 (--_ECCompositionSurfaceInfo@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z @ 0x180037D0C (-RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z.c)
 *     ??1CBindInfo@CCompositionSurfaceInfo@@QEAA@XZ @ 0x1800994D4 (--1CBindInfo@CCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CCompositionSurfaceInfo::~CCompositionSurfaceInfo(
        CCompositionSurfaceInfo *this,
        __int64 a2,
        __int64 a3)
{
  bool v3; // zf

  v3 = *((_QWORD *)this + 4) == 0LL;
  *(_QWORD *)this = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  if ( !v3 )
  {
    CCompositionSurfaceManager::RemoveFromSurfaceMap(
      *((CCompositionSurfaceManager **)this + 3),
      *(struct _LUID *)((char *)this + 40));
    CloseHandle(*((HANDLE *)this + 4));
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 312, a2, a3);
  CCompositionSurfaceInfo::CBindInfo::~CBindInfo((CCompositionSurfaceInfo *)((char *)this + 48));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
