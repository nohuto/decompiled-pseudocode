/*
 * XREFs of ?FinalUnregisterForDevice@GraphStreamingResourceManager@@EEAAXPEAURegistrationData@DeviceRegistrations@1@@Z @ 0x14000C550
 * Callers:
 *     ?UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x14000C620 (-UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall GraphStreamingResourceManager::FinalUnregisterForDevice(
        GraphStreamingResourceManager *this,
        struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *a2)
{
  if ( *((_QWORD *)a2 + 1) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 35) + 72LL))(
      *((_QWORD *)this + 35),
      *((_QWORD *)a2 + 1));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 16LL))(*(_QWORD *)a2);
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
}
