/*
 * XREFs of VfMajorVerifyNewRequest @ 0x14070E99C
 * Callers:
 *     IovpCallDriver1 @ 0x14070A8C0 (IovpCallDriver1.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall VfMajorVerifyNewRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        __int64 a6))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
{
  unsigned __int8 v6; // r10
  int v11; // eax
  void (__fastcall *v12)(__int64); // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  v6 = *a4;
  if ( *a4 > 0x1Bu )
    v11 = (v6 != 0xFF) + 28;
  else
    v11 = v6;
  v12 = (void (__fastcall *)(__int64))ViMajorVerifierRoutines[12 * v11 + 1];
  if ( v12 )
    v12(a1);
  result = qword_14072D8C8;
  if ( qword_14072D8C8 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_14072D8C8(
                                                                                     a1,
                                                                                     a2,
                                                                                     a3,
                                                                                     a4,
                                                                                     a5,
                                                                                     a6);
  return result;
}
