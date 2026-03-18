/*
 * XREFs of VfMajorIsNewRequest @ 0x140743CF4
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140737E18 (ViGenericVerifyIrpStackDownward.c)
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfMajorIsNewRequest(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // r8
  int v5; // eax
  unsigned int (__fastcall *v6)(__int64); // rax
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 > 0x1Bu )
    v5 = (v2 != 0xFF) + 28;
  else
    v5 = v2;
  v6 = (unsigned int (__fastcall *)(__int64))ViMajorVerifierRoutines[12 * v5 + 7];
  if ( v6 && v6(a1) )
    return 1LL;
  result = (__int64)qword_1407648B8;
  if ( qword_1407648B8 )
    return qword_1407648B8(a1, a2);
  return result;
}
