/*
 * XREFs of ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F85B0
 * Callers:
 *     SmProcessCreateRequest @ 0x1404D185C (SmProcessCreateRequest.c)
 * Callees:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F86AC (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

char *__fastcall SMKM_STORE<SM_TRAITS>::SmStInitialize(char *a1)
{
  char *v1; // rbx
  _QWORD *v2; // rax
  char *result; // rax

  v1 = a1;
  memset(a1, 0, 0x1440uLL);
  v1[4484] = 2;
  ST_STORE<SM_TRAITS>::StInitialize(v1);
  *((_QWORD *)v1 + 565) = v1 + 4512;
  *((_QWORD *)v1 + 564) = 0LL;
  *((_QWORD *)v1 + 567) = v1 + 4528;
  *((_QWORD *)v1 + 566) = 0LL;
  *((_QWORD *)v1 + 569) = v1 + 4544;
  *((_QWORD *)v1 + 568) = 0LL;
  *((_QWORD *)v1 + 563) = 0LL;
  *((_WORD *)v1 + 2308) = 0;
  v1[4618] = 6;
  *((_DWORD *)v1 + 1155) = 0;
  *((_QWORD *)v1 + 579) = v1 + 4624;
  *((_QWORD *)v1 + 578) = v1 + 4624;
  *((_WORD *)v1 + 2296) = 0;
  v1[4594] = 6;
  *((_DWORD *)v1 + 1149) = 0;
  *((_QWORD *)v1 + 576) = v1 + 4600;
  *((_QWORD *)v1 + 575) = v1 + 4600;
  v2 = v1 + 4648;
  *((_WORD *)v1 + 2320) = 1;
  v1[4642] = 6;
  *((_DWORD *)v1 + 1161) = 0;
  v1 += 5048;
  v2[1] = v2;
  *v2 = v2;
  memset(v1, 0, 0x70uLL);
  result = v1 + 16;
  *((_WORD *)v1 + 4) = 1;
  v1[10] = 6;
  *((_DWORD *)v1 + 3) = 0;
  *((_QWORD *)v1 + 3) = v1 + 16;
  *((_QWORD *)v1 + 2) = v1 + 16;
  return result;
}
