/*
 * XREFs of VfMajorIsNewRequest @ 0x1406C2454
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1406B7AFC (ViGenericVerifyIrpStackDownward.c)
 *     IovpCallDriver1 @ 0x1406BE838 (IovpCallDriver1.c)
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
  result = (__int64)qword_1406E18B8;
  if ( qword_1406E18B8 )
    return qword_1406E18B8(a1, a2);
  return result;
}
