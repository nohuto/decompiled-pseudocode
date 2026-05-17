/*
 * XREFs of LdrVerifyMappedImageMatchesChecksum @ 0x1800E20C8
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180087A00 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x180032600 (RtlImageNtHeader.c)
 *     ChkSum @ 0x1800E2098 (ChkSum.c)
 */

bool __fastcall LdrVerifyMappedImageMatchesChecksum(unsigned __int16 *a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  int v7; // edi
  unsigned __int16 v9; // ax
  unsigned __int16 *v10; // r10
  int v11; // r11d
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // r10

  v6 = RtlImageNtHeader((__int64)a1);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 88);
    if ( !v7 )
      return 1;
    v9 = ChkSum(0, a1, (unsigned __int64)(v6 - (_QWORD)a1 + 88) >> 1);
    v12 = ChkSum(v9, v10, v11);
    v13 = v12;
    if ( (a2 & 1) != 0 )
      v13 = v12 + *((unsigned __int8 *)a1 + a2 - 1) + ((v12 + (unsigned int)*((unsigned __int8 *)a1 + a2 - 1)) >> 16);
  }
  else
  {
    v13 = 0;
    v7 = a3;
  }
  return a3 + v13 == v7;
}
