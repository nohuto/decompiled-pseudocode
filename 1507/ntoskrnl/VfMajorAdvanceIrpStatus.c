/*
 * XREFs of VfMajorAdvanceIrpStatus @ 0x140743BC4
 * Callers:
 *     IovpCompleteRequest2 @ 0x1407404B4 (IovpCompleteRequest2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfMajorAdvanceIrpStatus(unsigned __int8 *a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 v6; // r9
  int v7; // eax
  unsigned int (__fastcall *v8)(unsigned __int8 *); // rax

  if ( VfVerifyMode <= 2 || (MmVerifierData & 0x1000) == 0 )
    return 0LL;
  v6 = *a1;
  if ( *a1 > 0x1Bu )
    v7 = (v6 != 0xFF) + 28;
  else
    v7 = v6;
  v8 = (unsigned int (__fastcall *)(unsigned __int8 *))ViMajorVerifierRoutines[12 * v7 + 5];
  if ( v8 && v8(a1) )
    return 1LL;
  if ( qword_1407648A8 )
    return qword_1407648A8(a1, a2, a3);
  else
    return 0LL;
}
