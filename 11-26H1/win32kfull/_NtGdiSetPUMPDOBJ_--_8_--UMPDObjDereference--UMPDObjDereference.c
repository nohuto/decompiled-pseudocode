/*
 * XREFs of _NtGdiSetPUMPDOBJ_::_8_::UMPDObjDereference::UMPDObjDereference @ 0x1400D7F50
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1400D63C0 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiSetPUMPDOBJ_::_8_::UMPDObjDereference::UMPDObjDereference(__int64 a1, __int64 a2)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  PushThreadGuardedObject(
    a1,
    a1,
    UnexpectedThreadTerminationHandler__NtGdiSetPUMPDOBJ_::_8_::UMPDObjDereference_::OnUnexpectedThreadTerminationStatic);
  *(_QWORD *)(a1 + 32) = a2;
  return a1;
}
