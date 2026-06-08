/*
 * XREFs of ReleaseAcpiInterfaces @ 0x1C001F110
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001403C (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseAcpiInterfaces(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD, _QWORD); // rax
  void (__fastcall *v3)(_QWORD); // rax

  v1 = (void (__fastcall *)(_QWORD, _QWORD))a1[20];
  if ( v1 )
    v1(a1[1], AcpiNotifyCallback);
  v3 = (void (__fastcall *)(_QWORD))a1[13];
  if ( v3 )
    v3(a1[11]);
  return 0LL;
}
