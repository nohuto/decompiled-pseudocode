/*
 * XREFs of VfMajorVerifyIrpStackDownward @ 0x140743F58
 * Callers:
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfMajorVerifyIrpStackDownward(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 v6; // r10
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *result; // rax
  __int64 (__fastcall *v14)(__int64); // r10

  v6 = *a4;
  if ( *a4 > 0x1Bu )
    v11 = (v6 != 0xFF) + 28;
  else
    v11 = v6;
  v12 = 12LL * v11;
  result = ViMajorVerifierRoutines;
  v14 = (__int64 (__fastcall *)(__int64))ViMajorVerifierRoutines[v12 + 2];
  if ( v14 )
    result = (_QWORD *)v14(a1);
  if ( qword_140764890 )
    return (_QWORD *)qword_140764890(a1, a2, a3, a4, *(_QWORD *)(a5 + 8), a5, a6);
  return result;
}
