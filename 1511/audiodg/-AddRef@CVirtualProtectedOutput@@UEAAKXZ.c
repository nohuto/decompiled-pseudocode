/*
 * XREFs of ?AddRef@CVirtualProtectedOutput@@UEAAKXZ @ 0x1400168A0
 * Callers:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?QueryInterface@CVirtualProtectedOutput@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140016900 (-QueryInterface@CVirtualProtectedOutput@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@CProtectedOutputController@@UEAAKXZ @ 0x140016BD0 (-AddRef@CProtectedOutputController@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualProtectedOutput::AddRef(CVirtualProtectedOutput *this)
{
  CProtectedOutputController *v1; // rdi
  unsigned int (__fastcall *v3)(CProtectedOutputController *__hidden); // rsi

  v1 = (CProtectedOutputController *)*((_QWORD *)this + 1);
  v3 = *(unsigned int (__fastcall **)(CProtectedOutputController *__hidden))(*(_QWORD *)v1 + 8LL);
  if ( v3 == CProtectedOutputController::AddRef )
    CProtectedOutputController::AddRef(v1);
  else
    v3(*((CProtectedOutputController **)this + 1));
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
