/*
 * XREFs of PopVerifySystemPowerPolicy @ 0x14056E7A8
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopApplyPolicy @ 0x14056E518 (PopApplyPolicy.c)
 * Callees:
 *     PopVerifyPowerActionPolicy @ 0x140540EF4 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140543198 (PopVerifySystemPowerState.c)
 */

__int64 __fastcall PopVerifySystemPowerPolicy(_OWORD *a1, __int64 a2)
{
  __int128 v3; // xmm0
  _OWORD *v4; // rcx
  int *v5; // r15
  int *v6; // r14
  int v7; // eax
  int v8; // edx
  int v9; // edx
  int *v10; // r13
  int v11; // edx
  unsigned int v12; // r12d
  int *v13; // rbp
  int *v14; // rsi
  bool v15; // bl
  int v16; // edx
  int *v17; // rcx
  int v18; // eax

  *(_OWORD *)a2 = *a1;
  *(_OWORD *)(a2 + 16) = a1[1];
  *(_OWORD *)(a2 + 32) = a1[2];
  *(_OWORD *)(a2 + 48) = a1[3];
  *(_OWORD *)(a2 + 64) = a1[4];
  *(_OWORD *)(a2 + 80) = a1[5];
  *(_OWORD *)(a2 + 96) = a1[6];
  v3 = a1[7];
  v4 = a1 + 8;
  *(_OWORD *)(a2 + 112) = v3;
  *(_OWORD *)(a2 + 128) = *v4;
  *(_OWORD *)(a2 + 144) = v4[1];
  *(_OWORD *)(a2 + 160) = v4[2];
  *(_OWORD *)(a2 + 176) = v4[3];
  *(_OWORD *)(a2 + 192) = v4[4];
  *(_OWORD *)(a2 + 208) = v4[5];
  *(_QWORD *)(a2 + 224) = *((_QWORD *)v4 + 12);
  if ( *(_DWORD *)a2 != 1 )
    return 3221225485LL;
  if ( HIBYTE(word_140303EA4) )
  {
    *(_DWORD *)(a2 + 72) = 4;
  }
  else if ( (_BYTE)word_140303EA4 )
  {
    *(_DWORD *)(a2 + 72) = 3;
  }
  else if ( byte_140303EA3 )
  {
    *(_DWORD *)(a2 + 72) = 2;
  }
  v5 = (int *)(a2 + 68);
  if ( *(int *)(a2 + 68) < 2 )
    *v5 = 2;
  if ( *v5 > 4 )
    *v5 = 4;
  v6 = (int *)(a2 + 72);
  if ( *(int *)(a2 + 72) < 2 )
    *v6 = 2;
  if ( *v6 > 4 )
    *v6 = 4;
  v7 = *v5;
  if ( *v6 < *v5 )
    *v6 = v7;
  if ( v7 < (int)PopAdminPolicy )
    *v5 = PopAdminPolicy;
  if ( *v6 > SDWORD1(PopAdminPolicy) )
    *v6 = DWORD1(PopAdminPolicy);
  if ( *(_DWORD *)(a2 + 192) < DWORD2(PopAdminPolicy) )
    *(_DWORD *)(a2 + 192) = DWORD2(PopAdminPolicy);
  if ( *(_DWORD *)(a2 + 192) > HIDWORD(PopAdminPolicy) )
    *(_DWORD *)(a2 + 192) = HIDWORD(PopAdminPolicy);
  if ( *(_DWORD *)(a2 + 212) < (unsigned int)qword_140303DD0 )
    *(_DWORD *)(a2 + 212) = qword_140303DD0;
  if ( *(_DWORD *)(a2 + 212) > HIDWORD(qword_140303DD0) )
    *(_DWORD *)(a2 + 212) = HIDWORD(qword_140303DD0);
  PopVerifyPowerActionPolicy((int *)(a2 + 4));
  PopVerifyPowerActionPolicy((int *)(a2 + 16));
  PopVerifyPowerActionPolicy((int *)(a2 + 28));
  PopVerifyPowerActionPolicy((int *)(a2 + 48));
  PopVerifySystemPowerState((int *)(a2 + 40), 1);
  PopVerifySystemPowerState(v5, v8);
  PopVerifySystemPowerState(v6, v9);
  v10 = (int *)(a2 + 76);
  PopVerifySystemPowerState((int *)(a2 + 76), v11);
  v12 = 0;
  v13 = (int *)(a2 + 116);
  v14 = (int *)(a2 + 104);
  do
  {
    v15 = *v14 == 3;
    PopVerifyPowerActionPolicy(v13 - 3);
    if ( v15 && *v14 < 3 )
    {
      *v14 = 6;
      PopVerifyPowerActionPolicy(v14);
    }
    PopVerifySystemPowerState(v13, 1);
    if ( *v14 == 2 && v14[3] > 4 )
    {
      v14[3] = 4;
      PopVerifySystemPowerState(v17, v16);
    }
    if ( v12 )
    {
      if ( *v14 == 6 )
        v14[1] |= 0x10u;
      else
        v14[1] &= ~0x10u;
    }
    if ( (unsigned int)*(v14 - 1) > 0x64 )
      *(v14 - 1) = 100;
    ++v12;
    v13 += 6;
    v14 += 6;
  }
  while ( v12 < 4 );
  PopVerifyPowerActionPolicy((int *)(a2 + 220));
  if ( !*(_DWORD *)(a2 + 92) )
    *(_DWORD *)(a2 + 92) = 1;
  if ( *(_DWORD *)(a2 + 88) && !byte_140303EA7 )
    *(_DWORD *)(a2 + 88) = 0;
  if ( (unsigned int)(*(_DWORD *)(a2 + 60) - 1) <= 0x3A )
    *(_DWORD *)(a2 + 60) = 60;
  if ( (unsigned int)(*(_DWORD *)(a2 + 88) - 1) <= 0x3A )
    *(_DWORD *)(a2 + 88) = 60;
  if ( *(_BYTE *)(a2 + 64) > 0x5Au )
    *(_BYTE *)(a2 + 64) = 90;
  if ( *(_DWORD *)(a2 + 60) && !*(_BYTE *)(a2 + 64) )
    *(_BYTE *)(a2 + 64) = 90;
  v18 = *v5;
  if ( *v6 < *v5 )
    *v6 = v18;
  if ( *v10 > v18 )
    *v10 = v18;
  return 0LL;
}
