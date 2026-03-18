/*
 * XREFs of itrp_MPPEM @ 0x1C00CC310
 * Callers:
 *     <none>
 * Callees:
 *     FixMul @ 0x1C00C947C (FixMul.c)
 *     itrp_GetCVTScale @ 0x1C0144104 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_MPPEM(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int16 fixed; // bx
  __int64 v4; // rdx
  __int64 result; // rax
  int CVTScale; // eax

  v1 = qword_1C03294E0;
  fixed = *(_WORD *)(qword_1C03294E0 + 24);
  if ( !*(_BYTE *)(qword_1C03294E0 + 340) )
  {
    CVTScale = itrp_GetCVTScale();
    fixed = FixMul(fixed, CVTScale);
    v1 = qword_1C03294E0;
  }
  v4 = *(_QWORD *)(v1 + 424);
  if ( (v1 ^ v4 ^ *(_QWORD *)v1 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(v1 + 432) && (v4 - qword_1C03294C8) >> 2 )
  {
    *(_DWORD *)qword_1C03294C8 = fixed;
    result = a1;
    qword_1C03294C8 += 4LL;
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4369;
  }
  return result;
}
