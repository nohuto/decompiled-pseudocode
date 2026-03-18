/*
 * XREFs of ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C02D7BF0
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C02D67D0 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     _lambda_03e1c0b981dd63cddc6aa6a0f9a5270e_::operator() @ 0x1C02D5F34 (_lambda_03e1c0b981dd63cddc6aa6a0f9a5270e_--operator().c)
 *     _lambda_8016ea96d34cec30f2825a10b1baeb47_::operator() @ 0x1C02D5F7C (_lambda_8016ea96d34cec30f2825a10b1baeb47_--operator().c)
 *     _lambda_a3a8ad6a6b2ee198f4dd59aab8d030e1_::operator() @ 0x1C02D5FA4 (_lambda_a3a8ad6a6b2ee198f4dd59aab8d030e1_--operator().c)
 */

char __fastcall ValidateIFIMETRICS(struct _IFIMETRICS *a1)
{
  PTRDIFF dpwszFamilyName; // edx
  __int64 v2; // r11
  __int64 v3; // r11
  __int64 v4; // r11
  _DWORD *v5; // r11
  unsigned int v6; // r9d
  unsigned int v7; // r10d
  unsigned int v8; // edx
  unsigned int v9; // edx
  __int64 v10; // rdx
  unsigned int v11; // edx
  __int64 v12; // rdx
  unsigned int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // edx
  int v17; // edx
  int v18; // edx
  unsigned int v19; // edx
  struct _IFIMETRICS *v21; // [rsp+30h] [rbp+10h] BYREF
  struct _IFIMETRICS **v22; // [rsp+38h] [rbp+18h] BYREF
  struct _IFIMETRICS **v23; // [rsp+40h] [rbp+20h] BYREF

  v21 = a1;
  dpwszFamilyName = a1->dpwszFamilyName;
  v22 = &v21;
  if ( !lambda_03e1c0b981dd63cddc6aa6a0f9a5270e_::operator()((unsigned int ***)&v22, dpwszFamilyName)
    || !lambda_03e1c0b981dd63cddc6aa6a0f9a5270e_::operator()((unsigned int ***)&v22, *(_DWORD *)(v2 + 12))
    || !lambda_03e1c0b981dd63cddc6aa6a0f9a5270e_::operator()((unsigned int ***)&v22, *(_DWORD *)(v3 + 16))
    || !lambda_03e1c0b981dd63cddc6aa6a0f9a5270e_::operator()((unsigned int ***)&v22, *(_DWORD *)(v4 + 20)) )
  {
    return 0;
  }
  v6 = v5[1];
  v22 = &v21;
  v7 = 16;
  if ( v6 )
  {
    if ( v6 < 8 )
      return 0;
    v8 = v5[49];
    if ( v8 )
    {
      if ( !lambda_8016ea96d34cec30f2825a10b1baeb47_::operator()((unsigned int ***)&v22, v8, 24) )
        return 0;
    }
    if ( v6 >= v7 )
    {
      v9 = v5[51];
      if ( v9 )
      {
        if ( !lambda_8016ea96d34cec30f2825a10b1baeb47_::operator()((unsigned int ***)&v22, v9, 72)
          || *(_DWORD *)((char *)v5 + v10 + 4) > v7 )
        {
          return 0;
        }
      }
    }
    if ( v6 >= 0x14 )
    {
      v11 = v5[52];
      if ( v11 )
      {
        if ( !lambda_8016ea96d34cec30f2825a10b1baeb47_::operator()((unsigned int ***)&v22, v11, 648)
          || *(_DWORD *)((char *)v5 + v12 + 4) > v7 )
        {
          return 0;
        }
      }
    }
  }
  if ( ((v13 = v5[6]) == 0
     || lambda_8016ea96d34cec30f2825a10b1baeb47_::operator()((unsigned int ***)&v22, v13, 12)
     && ((v15 = v14, v16 = *(_DWORD *)((char *)v5 + v14), v23 = &v21, !v16)
      || lambda_a3a8ad6a6b2ee198f4dd59aab8d030e1_::operator()(&v23, v16))
     && ((v17 = *(_DWORD *)((char *)v5 + v15 + 4)) == 0
      || lambda_a3a8ad6a6b2ee198f4dd59aab8d030e1_::operator()(&v23, v17))
     && ((v18 = *(_DWORD *)((char *)v5 + v15 + 8)) == 0
      || lambda_a3a8ad6a6b2ee198f4dd59aab8d030e1_::operator()(&v23, v18)))
    && ((v19 = v5[10]) == 0 || lambda_8016ea96d34cec30f2825a10b1baeb47_::operator()((unsigned int ***)&v22, v19, v7)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
