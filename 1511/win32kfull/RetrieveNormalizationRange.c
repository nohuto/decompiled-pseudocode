/*
 * XREFs of RetrieveNormalizationRange @ 0x1C01C3E8C
 * Callers:
 *     CreatePointerDeviceInfo @ 0x1C01C9610 (CreatePointerDeviceInfo.c)
 *     ?_PopulatePointerDevice@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAXPEAU_HIDP_CAPS@@@Z @ 0x1C01DE948 (-_PopulatePointerDevice@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAXPEAU_HIDP_CAPS@@@Z.c)
 * Callees:
 *     RetrieveRealAngularPhysicalValues @ 0x1C01CE3C4 (RetrieveRealAngularPhysicalValues.c)
 */

__int64 __fastcall RetrieveNormalizationRange(unsigned __int16 a1, __int16 *a2, _QWORD *a3)
{
  unsigned int v3; // esi
  __int16 v4; // r10
  __int64 v6; // r9
  int v7; // eax
  _WORD *v8; // rdx
  __int64 v9; // rdi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rcx
  __int128 v18; // [rsp+20h] [rbp-50h] BYREF
  __int128 v19; // [rsp+30h] [rbp-40h]
  __int128 v20; // [rsp+40h] [rbp-30h]
  __int128 v21; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+98h] [rbp+28h] BYREF
  int v24; // [rsp+A8h] [rbp+38h] BYREF

  v3 = 0;
  v4 = *a2;
  v23 = *((_DWORD *)a2 + 12);
  v6 = 0LL;
  v7 = *((_DWORD *)a2 + 13);
  v8 = &unk_1C031FFD2;
  v24 = v7;
  while ( *(v8 - 1) != v4 || *v8 != a2[28] )
  {
    v6 = (unsigned int)(v6 + 1);
    v8 += 6;
    if ( (unsigned int)v6 >= 5 )
      return v3;
  }
  v9 = 3 * v6;
  v3 = 1;
  *a3 = *(_QWORD *)((char *)&gNormalizedLimitMap + 12 * v6 + 4);
  if ( a1 >= 0x1D3Du && (a1 <= 0x1D3Eu || a1 == 7489 || a1 == 19775) )
  {
    if ( *((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 12) <= 0 )
    {
      v16 = 2147483907LL;
      goto LABEL_18;
    }
    v10 = *((_OWORD *)a2 + 1);
    v18 = *(_OWORD *)a2;
    v11 = *((_OWORD *)a2 + 2);
    v19 = v10;
    v12 = *((_OWORD *)a2 + 3);
    v20 = v11;
    v22 = *((_QWORD *)a2 + 8);
    v21 = v12;
    RetrieveRealAngularPhysicalValues(&v18, &v23);
    v13 = *((_OWORD *)a2 + 1);
    v18 = *(_OWORD *)a2;
    v14 = *((_OWORD *)a2 + 2);
    v19 = v13;
    v15 = *((_OWORD *)a2 + 3);
    v20 = v14;
    v22 = *((_QWORD *)a2 + 8);
    v21 = v15;
    RetrieveRealAngularPhysicalValues(&v18, &v24);
    if ( v23 != *((_DWORD *)&gNormalizedLimitMap + v9 + 1) || v24 != *((_DWORD *)&gNormalizedLimitMap + v9 + 2) )
      UserLogError(2147483905LL);
    if ( *((_DWORD *)a2 + 11) % *((_DWORD *)&gNormalizedLimitMap + v9 + 2)
      || *((_DWORD *)a2 + 11) / *((_DWORD *)&gNormalizedLimitMap + v9 + 2) < 100 )
    {
      v16 = 2147483906LL;
LABEL_18:
      UserLogError(v16);
    }
  }
  return v3;
}
