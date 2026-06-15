/*
 * XREFs of ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x140031250
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ??_GCVirtualProtectedOutput@@QEAAPEAXI@Z @ 0x140030BE0 (--_GCVirtualProtectedOutput@@QEAAPEAXI@Z.c)
 *     ?AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z @ 0x140030C60 (-AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z.c)
 */

__int64 __fastcall CVirtualProtectedOutput::Release(CVirtualProtectedOutput *this)
{
  __int64 v1; // rsi
  unsigned __int32 v3; // edi

  v1 = *((_QWORD *)this + 1);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v3 )
  {
    CProtectedOutputController::AdviseVpoDeletion(*((CProtectedOutputController **)this + 1), this);
    CVirtualProtectedOutput::`scalar deleting destructor'(this);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v3;
}
