/*
 * XREFs of VfMajorVerifyIrpStackUpward @ 0x14070E844
 * Callers:
 *     IovpCompleteRequest2 @ 0x14070B208 (IovpCompleteRequest2.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall VfMajorVerifyIrpStackUpward(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        int a4,
        int a5))(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD)
{
  unsigned __int8 v5; // r10
  int v10; // eax
  void (__fastcall *v11)(__int64, unsigned __int8 *, _QWORD, __int64, int, int); // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD); // rax

  v5 = *a2;
  if ( *a2 > 0x1Bu )
    v10 = (v5 != 0xFF) + 28;
  else
    v10 = v5;
  v11 = (void (__fastcall *)(__int64, unsigned __int8 *, _QWORD, __int64, int, int))ViMajorVerifierRoutines[12 * v10 + 3];
  if ( v11 )
    v11(a1, a2, *(_QWORD *)(a3 + 8), a3, a4, a5);
  result = qword_14072D8D8;
  if ( qword_14072D8D8 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))qword_14072D8D8(
                                                                                     a1,
                                                                                     a2,
                                                                                     *(_QWORD *)(a3 + 8),
                                                                                     a3,
                                                                                     a4,
                                                                                     a5);
  return result;
}
