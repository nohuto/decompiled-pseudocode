/*
 * XREFs of VfMajorIsValidIrpStatus @ 0x14070E58C
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140703980 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140703B7C (ViGenericVerifyIrpStackUpward.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfMajorIsValidIrpStatus(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int8 v2; // r8
  int v5; // eax
  unsigned int (__fastcall *v6)(unsigned __int8 *); // rax

  v2 = *a1;
  if ( *a1 > 0x1Bu )
    v5 = (v2 != 0xFF) + 28;
  else
    v5 = v2;
  v6 = (unsigned int (__fastcall *)(unsigned __int8 *))ViMajorVerifierRoutines[12 * v5 + 6];
  if ( (!v6 || v6(a1)) && qword_14072D8F0 )
    return qword_14072D8F0(a1, a2);
  else
    return 0LL;
}
