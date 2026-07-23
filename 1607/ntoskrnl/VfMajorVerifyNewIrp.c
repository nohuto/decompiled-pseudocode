/*
 * XREFs of VfMajorVerifyNewIrp @ 0x14070E8F8
 * Callers:
 *     IovpCallDriver1 @ 0x14070A8C0 (IovpCallDriver1.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall VfMajorVerifyNewIrp(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4,
        __int64 a5))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
{
  unsigned __int8 v5; // r10
  int v10; // eax
  void (__fastcall *v11)(__int64); // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  v5 = *a3;
  if ( *a3 > 0x1Bu )
    v10 = (v5 != 0xFF) + 28;
  else
    v10 = v5;
  v11 = (void (__fastcall *)(__int64))ViMajorVerifierRoutines[12 * v10 + 8];
  if ( v11 )
    v11(a1);
  result = qword_14072D900;
  if ( qword_14072D900 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_14072D900(a1, a2, a3, a4, a5);
  return result;
}
