/*
 * XREFs of VfMajorVerifyFinalIrpStack @ 0x14070E70C
 * Callers:
 *     IovpCompleteRequest2 @ 0x14070B208 (IovpCompleteRequest2.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall VfMajorVerifyFinalIrpStack(__int64 a1, unsigned __int8 *a2))(_QWORD, _QWORD)
{
  unsigned __int8 v2; // r8
  int v5; // eax
  void (__fastcall *v6)(__int64); // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  v2 = *a2;
  if ( *a2 > 0x1Bu )
    v5 = (v2 != 0xFF) + 28;
  else
    v5 = v2;
  v6 = (void (__fastcall *)(__int64))ViMajorVerifierRoutines[12 * v5 + 9];
  if ( v6 )
    v6(a1);
  result = qword_14072D908;
  if ( qword_14072D908 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_14072D908(a1, a2);
  return result;
}
