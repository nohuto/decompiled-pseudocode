/*
 * XREFs of ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x140016830
 * Callers:
 *     AudioDGGetVpoFromVpoContext @ 0x140001640 (AudioDGGetVpoFromVpoContext.c)
 *     ??1CStreamInstance@@QEAA@XZ @ 0x1400032B0 (--1CStreamInstance@@QEAA@XZ.c)
 *     VPOHANDLE_rundown @ 0x1400170C0 (VPOHANDLE_rundown.c)
 *     ??1?$CComPtr@UIAudioVirtualProtectedOutput@@@ATL@@QEAA@XZ @ 0x140026650 (--1-$CComPtr@UIAudioVirtualProtectedOutput@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??_GCVirtualProtectedOutput@@QEAAPEAXI@Z @ 0x140016B64 (--_GCVirtualProtectedOutput@@QEAAPEAXI@Z.c)
 *     ?Release@CProtectedOutputController@@UEAAKXZ @ 0x140016B90 (-Release@CProtectedOutputController@@UEAAKXZ.c)
 *     ?AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z @ 0x140016C90 (-AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualProtectedOutput::Release(CVirtualProtectedOutput *this)
{
  CProtectedOutputController *v1; // rsi
  unsigned __int32 v3; // edi
  unsigned int v4; // edx
  unsigned int (__fastcall *v5)(CProtectedOutputController *__hidden); // rbx

  v1 = (CProtectedOutputController *)*((_QWORD *)this + 1);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v3 )
  {
    CProtectedOutputController::AdviseVpoDeletion(*((CProtectedOutputController **)this + 1), this);
    CVirtualProtectedOutput::`scalar deleting destructor'(this, v4);
  }
  v5 = *(unsigned int (__fastcall **)(CProtectedOutputController *__hidden))(*(_QWORD *)v1 + 16LL);
  if ( v5 == CProtectedOutputController::Release )
    CProtectedOutputController::Release(v1);
  else
    v5(v1);
  return v3;
}
