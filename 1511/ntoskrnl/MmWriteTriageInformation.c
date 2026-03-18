/*
 * XREFs of MmWriteTriageInformation @ 0x1401D68AC
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1401B7B00 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     ExVerifySuite @ 0x14013E80C (ExVerifySuite.c)
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

  v2 = VerifierTriageActionTaken;
  DWORD2(v4) = MmSpecialPoolTag;
  *(_QWORD *)&v4 = 0x5000000001LL;
  if ( MEMORY[0xFFFFF78000000264] != 1
    || ExVerifySuite(EmbeddedNT)
    || ExVerifySuite(EmbeddedRestricted)
    || ExVerifySuite(SecurityAppliance) )
  {
    v2 |= 0x80000000;
  }
  LODWORD(v5) = MmVerifierData;
  HIDWORD(v4) = v2;
  DWORD1(v5) = ((unsigned int)MiFlags >> 1) & 1;
  *((_QWORD *)&v5 + 1) = qword_1402FF7A0;
  *(_QWORD *)&v6 = qword_1402FE198;
  *((_QWORD *)&v6 + 1) = qword_1402FF7A8;
  *(_QWORD *)&v7 = qword_1402FF798;
  *((_QWORD *)&v7 + 1) = qword_140301488;
  *(_QWORD *)&v8 = qword_1403010C0;
  result = qword_1403010C8;
  *a1 = v4;
  *((_QWORD *)&v8 + 1) = result;
  a1[1] = v5;
  a1[2] = v6;
  a1[3] = v7;
  a1[4] = v8;
  return result;
}
