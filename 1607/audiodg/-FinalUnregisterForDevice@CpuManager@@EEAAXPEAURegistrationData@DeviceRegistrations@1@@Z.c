/*
 * XREFs of ?FinalUnregisterForDevice@CpuManager@@EEAAXPEAURegistrationData@DeviceRegistrations@1@@Z @ 0x140026E00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CpuManager::FinalUnregisterForDevice(
        CpuManager *this,
        struct CpuManager::DeviceRegistrations::RegistrationData *a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v4; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
  v5 = 0LL;
  (**v2)(v2, &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63, &v5);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 56LL))(v5, 0LL, 0LL);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 16LL))(*(_QWORD *)a2);
  v4 = v5;
  *(_QWORD *)a2 = 0LL;
  if ( v4 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
