/*
 * XREFs of rotate::bScalePlgDDALToPlgDDA @ 0x1400ED1EC
 * Callers:
 *     ?bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1400EBACC (-bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall rotate::bScalePlgDDALToPlgDDA(_QWORD *a1, _DWORD *a2)
{
  signed __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  signed __int64 v9; // rcx
  __int64 v10; // rax
  signed __int64 v11; // rcx
  __int64 v12; // rax
  signed __int64 v13; // rcx
  __int64 v14; // rax
  signed __int64 v15; // rcx
  __int64 v16; // rax
  signed __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  CCHAR MostSignificantBit; // al
  signed __int64 v22; // rcx
  __int64 v23; // rax
  signed __int64 v24; // rcx
  __int64 v25; // rax
  signed __int64 v26; // rcx
  __int64 v27; // rax
  signed __int64 v28; // rcx
  __int64 v29; // rax
  signed __int64 v30; // rcx
  __int64 v31; // rax
  signed __int64 v32; // rcx
  __int64 v33; // rax
  signed __int64 v34; // rcx
  __int64 v35; // rax
  signed __int64 v36; // rcx
  __int64 v37; // rax
  signed __int64 v38; // rcx
  __int64 v39; // rax
  signed __int64 v40; // rcx
  __int64 v41; // rax
  signed __int64 v42; // rcx
  __int64 v43; // rax
  signed __int64 v44; // rcx
  __int64 v45; // rax
  signed __int64 v46; // rcx
  __int64 v47; // rax
  signed __int64 v48; // rcx
  __int64 v49; // rax
  signed __int64 v50; // rcx
  __int64 v51; // rax
  signed __int64 v52; // rcx
  __int64 v53; // rax
  signed __int64 v54; // rcx
  __int64 v55; // rax
  signed __int64 v56; // rcx
  __int64 v57; // rax
  signed __int64 v58; // rcx
  __int64 v59; // rax
  signed __int64 v60; // rcx
  __int64 v61; // rax
  signed __int64 v62; // rcx
  __int64 v63; // rax
  CCHAR v64; // al
  CCHAR v65; // al
  CCHAR v66; // al
  CCHAR v67; // al
  CCHAR v68; // al
  CCHAR v69; // al
  CCHAR v70; // al
  CCHAR v71; // al
  CCHAR v72; // al
  CCHAR v73; // al
  CCHAR v74; // al
  CCHAR v75; // al
  CCHAR v76; // al
  CCHAR v77; // al
  CCHAR v78; // al
  CCHAR v79; // al
  CCHAR v80; // al
  CCHAR v81; // al
  CCHAR v82; // al
  CCHAR v83; // al
  CCHAR v84; // al

  memset_0(a2, 0, 0x18CuLL);
  v4 = a1[35];
  if ( (unsigned __int64)(a1[1] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[1] = *((_DWORD *)a1 + 2);
  if ( v4 > 0x7FFFFFFF )
    v5 = (__int64)a1[2] >> (RtlFindMostSignificantBit(v4) - 30);
  else
    LODWORD(v5) = *((_DWORD *)a1 + 4);
  a2[2] = v5;
  if ( (unsigned __int64)(a1[3] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[3] = *((_DWORD *)a1 + 6);
  if ( v4 > 0x7FFFFFFF )
    v6 = (__int64)a1[4] >> (RtlFindMostSignificantBit(v4) - 30);
  else
    LODWORD(v6) = *((_DWORD *)a1 + 8);
  a2[4] = v6;
  if ( (unsigned __int64)(a1[5] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[5] = *((_DWORD *)a1 + 10);
  if ( v4 > 0x7FFFFFFF )
    v7 = (__int64)a1[6] >> (RtlFindMostSignificantBit(v4) - 30);
  else
    LODWORD(v7) = *((_DWORD *)a1 + 12);
  a2[6] = v7;
  if ( (unsigned __int64)(a1[7] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[7] = *((_DWORD *)a1 + 14);
  if ( v4 > 0x7FFFFFFF )
    v8 = (__int64)a1[8] >> (RtlFindMostSignificantBit(v4) - 30);
  else
    LODWORD(v8) = *((_DWORD *)a1 + 16);
  a2[8] = v8;
  if ( (unsigned __int64)(a1[9] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[9] = *((_DWORD *)a1 + 18);
  v9 = a1[83];
  if ( v9 > 0x7FFFFFFF )
    v10 = (__int64)a1[10] >> (RtlFindMostSignificantBit(v9) - 30);
  else
    LODWORD(v10) = *((_DWORD *)a1 + 20);
  a2[10] = v10;
  if ( (unsigned __int64)(a1[11] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[11] = *((_DWORD *)a1 + 22);
  v11 = a1[86];
  if ( v11 > 0x7FFFFFFF )
    v12 = (__int64)a1[12] >> (RtlFindMostSignificantBit(v11) - 30);
  else
    LODWORD(v12) = *((_DWORD *)a1 + 24);
  a2[12] = v12;
  if ( (unsigned __int64)(a1[13] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[13] = *((_DWORD *)a1 + 26);
  v13 = a1[86];
  if ( v13 > 0x7FFFFFFF )
    v14 = (__int64)a1[14] >> (RtlFindMostSignificantBit(v13) - 30);
  else
    LODWORD(v14) = *((_DWORD *)a1 + 28);
  a2[14] = v14;
  if ( (unsigned __int64)(a1[15] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[15] = *((_DWORD *)a1 + 30);
  v15 = a1[83];
  if ( v15 > 0x7FFFFFFF )
    v16 = (__int64)a1[16] >> (RtlFindMostSignificantBit(v15) - 30);
  else
    LODWORD(v16) = *((_DWORD *)a1 + 32);
  a2[16] = v16;
  if ( (unsigned __int64)(a1[33] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[33] = *((_DWORD *)a1 + 66);
  v17 = a1[35];
  if ( v17 > 0x7FFFFFFF )
  {
    MostSignificantBit = RtlFindMostSignificantBit(v17);
    a2[34] = (__int64)a1[34] >> (MostSignificantBit - 30);
    v18 = (__int64)a1[35] >> (MostSignificantBit - 30);
  }
  else
  {
    a2[34] = *((_DWORD *)a1 + 68);
    LODWORD(v18) = *((_DWORD *)a1 + 70);
  }
  a2[35] = v18;
  v19 = a1[36];
  if ( v19 > 0x7FFFFFFF || v19 < (__int64)0xFFFFFFFF80000000uLL )
    return 0LL;
  a2[36] = *((_DWORD *)a1 + 72);
  v22 = a1[38];
  if ( v22 > 0x7FFFFFFF )
  {
    v64 = RtlFindMostSignificantBit(v22);
    a2[37] = (__int64)a1[37] >> (v64 - 30);
    v23 = (__int64)a1[38] >> (v64 - 30);
  }
  else
  {
    a2[37] = *((_DWORD *)a1 + 74);
    LODWORD(v23) = *((_DWORD *)a1 + 76);
  }
  a2[38] = v23;
  if ( (unsigned __int64)(a1[39] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[39] = *((_DWORD *)a1 + 78);
  v24 = a1[41];
  if ( v24 > 0x7FFFFFFF )
  {
    v65 = RtlFindMostSignificantBit(v24);
    a2[40] = (__int64)a1[40] >> (v65 - 30);
    v25 = (__int64)a1[41] >> (v65 - 30);
  }
  else
  {
    a2[40] = *((_DWORD *)a1 + 80);
    LODWORD(v25) = *((_DWORD *)a1 + 82);
  }
  a2[41] = v25;
  if ( (unsigned __int64)(a1[42] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[42] = *((_DWORD *)a1 + 84);
  v26 = a1[44];
  if ( v26 > 0x7FFFFFFF )
  {
    v66 = RtlFindMostSignificantBit(v26);
    a2[43] = (__int64)a1[43] >> (v66 - 30);
    v27 = (__int64)a1[44] >> (v66 - 30);
  }
  else
  {
    a2[43] = *((_DWORD *)a1 + 86);
    LODWORD(v27) = *((_DWORD *)a1 + 88);
  }
  a2[44] = v27;
  if ( (unsigned __int64)(a1[45] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[45] = *((_DWORD *)a1 + 90);
  v28 = a1[47];
  if ( v28 > 0x7FFFFFFF )
  {
    v67 = RtlFindMostSignificantBit(v28);
    a2[46] = (__int64)a1[46] >> (v67 - 30);
    v29 = (__int64)a1[47] >> (v67 - 30);
  }
  else
  {
    a2[46] = *((_DWORD *)a1 + 92);
    LODWORD(v29) = *((_DWORD *)a1 + 94);
  }
  a2[47] = v29;
  if ( (unsigned __int64)(a1[48] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[48] = *((_DWORD *)a1 + 96);
  v30 = a1[50];
  if ( v30 > 0x7FFFFFFF )
  {
    v68 = RtlFindMostSignificantBit(v30);
    a2[49] = (__int64)a1[49] >> (v68 - 30);
    v31 = (__int64)a1[50] >> (v68 - 30);
  }
  else
  {
    a2[49] = *((_DWORD *)a1 + 98);
    LODWORD(v31) = *((_DWORD *)a1 + 100);
  }
  a2[50] = v31;
  if ( (unsigned __int64)(a1[51] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[51] = *((_DWORD *)a1 + 102);
  v32 = a1[53];
  if ( v32 > 0x7FFFFFFF )
  {
    v69 = RtlFindMostSignificantBit(v32);
    a2[52] = (__int64)a1[52] >> (v69 - 30);
    v33 = (__int64)a1[53] >> (v69 - 30);
  }
  else
  {
    a2[52] = *((_DWORD *)a1 + 104);
    LODWORD(v33) = *((_DWORD *)a1 + 106);
  }
  a2[53] = v33;
  if ( (unsigned __int64)(a1[54] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[54] = *((_DWORD *)a1 + 108);
  v34 = a1[56];
  if ( v34 > 0x7FFFFFFF )
  {
    v70 = RtlFindMostSignificantBit(v34);
    a2[55] = (__int64)a1[55] >> (v70 - 30);
    v35 = (__int64)a1[56] >> (v70 - 30);
  }
  else
  {
    a2[55] = *((_DWORD *)a1 + 110);
    LODWORD(v35) = *((_DWORD *)a1 + 112);
  }
  a2[56] = v35;
  if ( (unsigned __int64)(a1[57] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[57] = *((_DWORD *)a1 + 114);
  v36 = a1[59];
  if ( v36 > 0x7FFFFFFF )
  {
    v71 = RtlFindMostSignificantBit(v36);
    a2[58] = (__int64)a1[58] >> (v71 - 30);
    v37 = (__int64)a1[59] >> (v71 - 30);
  }
  else
  {
    a2[58] = *((_DWORD *)a1 + 116);
    LODWORD(v37) = *((_DWORD *)a1 + 118);
  }
  a2[59] = v37;
  if ( (unsigned __int64)(a1[60] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[60] = *((_DWORD *)a1 + 120);
  v38 = a1[62];
  if ( v38 > 0x7FFFFFFF )
  {
    v72 = RtlFindMostSignificantBit(v38);
    a2[61] = (__int64)a1[61] >> (v72 - 30);
    v39 = (__int64)a1[62] >> (v72 - 30);
  }
  else
  {
    a2[61] = *((_DWORD *)a1 + 122);
    LODWORD(v39) = *((_DWORD *)a1 + 124);
  }
  a2[62] = v39;
  if ( (unsigned __int64)(a1[63] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[63] = *((_DWORD *)a1 + 126);
  v40 = a1[65];
  if ( v40 > 0x7FFFFFFF )
  {
    v73 = RtlFindMostSignificantBit(v40);
    a2[64] = (__int64)a1[64] >> (v73 - 30);
    v41 = (__int64)a1[65] >> (v73 - 30);
  }
  else
  {
    a2[64] = *((_DWORD *)a1 + 128);
    LODWORD(v41) = *((_DWORD *)a1 + 130);
  }
  a2[65] = v41;
  if ( (unsigned __int64)(a1[66] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[66] = *((_DWORD *)a1 + 132);
  v42 = a1[68];
  if ( v42 > 0x7FFFFFFF )
  {
    v74 = RtlFindMostSignificantBit(v42);
    a2[67] = (__int64)a1[67] >> (v74 - 30);
    v43 = (__int64)a1[68] >> (v74 - 30);
  }
  else
  {
    a2[67] = *((_DWORD *)a1 + 134);
    LODWORD(v43) = *((_DWORD *)a1 + 136);
  }
  a2[68] = v43;
  if ( (unsigned __int64)(a1[69] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[69] = *((_DWORD *)a1 + 138);
  v44 = a1[71];
  if ( v44 > 0x7FFFFFFF )
  {
    v75 = RtlFindMostSignificantBit(v44);
    a2[70] = (__int64)a1[70] >> (v75 - 30);
    v45 = (__int64)a1[71] >> (v75 - 30);
  }
  else
  {
    a2[70] = *((_DWORD *)a1 + 140);
    LODWORD(v45) = *((_DWORD *)a1 + 142);
  }
  a2[71] = v45;
  if ( (unsigned __int64)(a1[72] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[72] = *((_DWORD *)a1 + 144);
  v46 = a1[74];
  if ( v46 > 0x7FFFFFFF )
  {
    v76 = RtlFindMostSignificantBit(v46);
    a2[73] = (__int64)a1[73] >> (v76 - 30);
    v47 = (__int64)a1[74] >> (v76 - 30);
  }
  else
  {
    a2[73] = *((_DWORD *)a1 + 146);
    LODWORD(v47) = *((_DWORD *)a1 + 148);
  }
  a2[74] = v47;
  if ( (unsigned __int64)(a1[75] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[75] = *((_DWORD *)a1 + 150);
  v48 = a1[77];
  if ( v48 > 0x7FFFFFFF )
  {
    v77 = RtlFindMostSignificantBit(v48);
    a2[76] = (__int64)a1[76] >> (v77 - 30);
    v49 = (__int64)a1[77] >> (v77 - 30);
  }
  else
  {
    a2[76] = *((_DWORD *)a1 + 152);
    LODWORD(v49) = *((_DWORD *)a1 + 154);
  }
  a2[77] = v49;
  if ( (unsigned __int64)(a1[78] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[78] = *((_DWORD *)a1 + 156);
  v50 = a1[80];
  if ( v50 > 0x7FFFFFFF )
  {
    v78 = RtlFindMostSignificantBit(v50);
    a2[79] = (__int64)a1[79] >> (v78 - 30);
    v51 = (__int64)a1[80] >> (v78 - 30);
  }
  else
  {
    a2[79] = *((_DWORD *)a1 + 158);
    LODWORD(v51) = *((_DWORD *)a1 + 160);
  }
  a2[80] = v51;
  if ( (unsigned __int64)(a1[81] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[81] = *((_DWORD *)a1 + 162);
  v52 = a1[83];
  if ( v52 > 0x7FFFFFFF )
  {
    v79 = RtlFindMostSignificantBit(v52);
    a2[82] = (__int64)a1[82] >> (v79 - 30);
    v53 = (__int64)a1[83] >> (v79 - 30);
  }
  else
  {
    a2[82] = *((_DWORD *)a1 + 164);
    LODWORD(v53) = *((_DWORD *)a1 + 166);
  }
  a2[83] = v53;
  if ( (unsigned __int64)(a1[84] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[84] = *((_DWORD *)a1 + 168);
  v54 = a1[86];
  if ( v54 > 0x7FFFFFFF )
  {
    v80 = RtlFindMostSignificantBit(v54);
    a2[85] = (__int64)a1[85] >> (v80 - 30);
    v55 = (__int64)a1[86] >> (v80 - 30);
  }
  else
  {
    a2[85] = *((_DWORD *)a1 + 170);
    LODWORD(v55) = *((_DWORD *)a1 + 172);
  }
  a2[86] = v55;
  if ( (unsigned __int64)(a1[87] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[87] = *((_DWORD *)a1 + 174);
  v56 = a1[89];
  if ( v56 > 0x7FFFFFFF )
  {
    v81 = RtlFindMostSignificantBit(v56);
    a2[88] = (__int64)a1[88] >> (v81 - 30);
    v57 = (__int64)a1[89] >> (v81 - 30);
  }
  else
  {
    a2[88] = *((_DWORD *)a1 + 176);
    LODWORD(v57) = *((_DWORD *)a1 + 178);
  }
  a2[89] = v57;
  if ( (unsigned __int64)(a1[90] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[90] = *((_DWORD *)a1 + 180);
  v58 = a1[92];
  if ( v58 > 0x7FFFFFFF )
  {
    v82 = RtlFindMostSignificantBit(v58);
    a2[91] = (__int64)a1[91] >> (v82 - 30);
    v59 = (__int64)a1[92] >> (v82 - 30);
  }
  else
  {
    a2[91] = *((_DWORD *)a1 + 182);
    LODWORD(v59) = *((_DWORD *)a1 + 184);
  }
  a2[92] = v59;
  if ( (unsigned __int64)(a1[93] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[93] = *((_DWORD *)a1 + 186);
  v60 = a1[95];
  if ( v60 > 0x7FFFFFFF )
  {
    v83 = RtlFindMostSignificantBit(v60);
    a2[94] = (__int64)a1[94] >> (v83 - 30);
    v61 = (__int64)a1[95] >> (v83 - 30);
  }
  else
  {
    a2[94] = *((_DWORD *)a1 + 188);
    LODWORD(v61) = *((_DWORD *)a1 + 190);
  }
  a2[95] = v61;
  if ( (unsigned __int64)(a1[96] + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  a2[96] = *((_DWORD *)a1 + 192);
  v62 = a1[98];
  if ( v62 > 0x7FFFFFFF )
  {
    v84 = RtlFindMostSignificantBit(v62);
    a2[97] = (__int64)a1[97] >> (v84 - 30);
    v63 = (__int64)a1[98] >> (v84 - 30);
  }
  else
  {
    a2[97] = *((_DWORD *)a1 + 194);
    LODWORD(v63) = *((_DWORD *)a1 + 196);
  }
  a2[98] = v63;
  return 1LL;
}
