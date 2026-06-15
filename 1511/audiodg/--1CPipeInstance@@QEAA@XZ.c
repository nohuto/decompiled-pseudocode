/*
 * XREFs of ??1CPipeInstance@@QEAA@XZ @ 0x14000C020
 * Callers:
 *     ??1CStreamInstance@@QEAA@XZ @ 0x1400032B0 (--1CStreamInstance@@QEAA@XZ.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x1400045B0 (--1CStreamGroup@@QEAA@XZ.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140006828 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140026234 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000BE10 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000FFE0 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CPipeInstance::~CPipeInstance(LPVOID *this)
{
  LPVOID v2; // rdi
  LPVOID v3; // rdi
  LPVOID v4; // rdi
  LPVOID v5; // rbx

  CPipeInstance::Cleanup((CPipeInstance *)this);
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll((__int64)(this + 30));
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
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll((__int64)(this + 8));
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)(this + 2));
}
