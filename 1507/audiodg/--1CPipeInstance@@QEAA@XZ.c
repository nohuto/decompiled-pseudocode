/*
 * XREFs of ??1CPipeInstance@@QEAA@XZ @ 0x1400086A0
 * Callers:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14000866C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000EDF8 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140011E00 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140005860 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000A640 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CPipeInstance::~CPipeInstance(LPVOID *this)
{
  LPVOID v2; // rdi
  LPVOID v3; // rdi
  LPVOID v4; // rdi
  LPVOID v5; // rbx

  CPipeInstance::Cleanup((CPipeInstance *)this);
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(this + 30);
  v2 = this[29];
  if ( v2 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v2 + 16LL))(this[29]);
  CoTaskMemFree(this[23]);
  this[23] = 0LL;
  v3 = this[22];
  if ( v3 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v3 + 16LL))(this[22]);
  v4 = this[21];
  if ( v4 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v4 + 16LL))(this[21]);
  v5 = this[18];
  if ( v5 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(this[18]);
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(this + 8);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(this + 2);
}
