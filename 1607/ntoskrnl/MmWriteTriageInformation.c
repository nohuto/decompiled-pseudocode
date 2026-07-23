/*
 * XREFs of MmWriteTriageInformation @ 0x1401E7F6C
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1401C5708 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1400AB154 (RtlGetNtProductType.c)
 *     ExVerifySuite @ 0x14013D6F8 (ExVerifySuite.c)
 */

__int64 __fastcall MmWriteTriageInformation(_OWORD *a1)
{
  int v2; // ebx
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-50h]
  __int128 v5; // [rsp+30h] [rbp-40h]
  __int128 v6; // [rsp+40h] [rbp-30h]
  __int128 v7; // [rsp+50h] [rbp-20h]
  __int128 v8; // [rsp+60h] [rbp-10h]
  _NT_PRODUCT_TYPE ProductType; // [rsp+80h] [rbp+10h] BYREF

  v2 = VerifierTriageActionTaken;
  *(_QWORD *)&v4 = 0x5000000001LL;
  DWORD2(v4) = MmSpecialPoolTag;
  RtlGetNtProductType(&ProductType);
  if ( ProductType != NtProductWinNt
    || ExVerifySuite(EmbeddedNT)
    || ExVerifySuite(EmbeddedRestricted)
    || ExVerifySuite(SecurityAppliance) )
  {
    v2 |= 0x80000000;
  }
  LODWORD(v5) = MmVerifierData;
  HIDWORD(v4) = v2;
  DWORD1(v5) = ((unsigned int)MiFlags >> 1) & 1;
  *((_QWORD *)&v5 + 1) = qword_1403278A0;
  *(_QWORD *)&v6 = qword_140326498;
  *((_QWORD *)&v6 + 1) = qword_1403278A8;
  *(_QWORD *)&v7 = qword_140327898;
  *((_QWORD *)&v7 + 1) = qword_1403251A8;
  *(_QWORD *)&v8 = qword_140324B80;
  result = qword_140324B88;
  *a1 = v4;
  *((_QWORD *)&v8 + 1) = result;
  a1[1] = v5;
  a1[2] = v6;
  a1[3] = v7;
  a1[4] = v8;
  return result;
}
