/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400173A0
 * Callers:
 *     ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x140017348 (-InternalRelease@-$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ??_GCpuManager@@UEAAPEAXI@Z @ 0x140017040 (--_GCpuManager@@UEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x140027364 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        CpuManager *this)
{
  unsigned int v2; // esi
  CpuManager *(__fastcall *v3)(CpuManager *, char); // rdi

  v2 = ATL::SafeDecrementReferenceMultiThread((int *)this + 3);
  if ( !v2 )
  {
    if ( this )
    {
      v3 = *(CpuManager *(__fastcall **)(CpuManager *, char))(*(_QWORD *)this + 24LL);
      if ( v3 == CpuManager::`scalar deleting destructor' )
        CpuManager::`scalar deleting destructor'(this, v2 + 1);
      else
        v3(this, 1);
    }
    if ( *(_QWORD *)g_hSqmSession.Data4 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)g_hSqmSession.Data4 + 16LL))(*(_QWORD *)g_hSqmSession.Data4);
  }
  return v2;
}
