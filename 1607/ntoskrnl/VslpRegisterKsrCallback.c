/*
 * XREFs of VslpRegisterKsrCallback @ 0x1407BD3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VslpRegisterKsrCallback(__int64 (__fastcall *a1)(_QWORD))
{
  VslpKsrCallback = a1;
}
