/*
 * XREFs of ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x18001D578
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x18001D138 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x18001E134 (-RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z.c)
 *     RtlQueryResourcePolicy @ 0x180020620 (RtlQueryResourcePolicy.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     ?RmpSystemIsSdBusBased@@YAKXZ @ 0x180037BC8 (-RmpSystemIsSdBusBased@@YAKXZ.c)
 */

void __fastcall RmpGetResourceManagerRuntimeConfiguration(struct _RM_RUNTIME_CONFIGURATION *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rdx
  const struct _TlgProvider_t *v5; // rcx
  _BYTE *v6; // rbx
  bool v7; // zf
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _OWORD *v17; // rdi
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // ebx
  const struct _TlgProvider_t *v21; // rcx
  const GUID *v22; // r8
  const GUID *v23; // r9
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int ResourceManagerRegistryOverrides; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD v26[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+58h] [rbp-A8h]
  int v29; // [rsp+5Ch] [rbp-A4h]
  int v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+64h] [rbp-9Ch]
  int v32; // [rsp+68h] [rbp-98h]
  int v33; // [rsp+6Ch] [rbp-94h]
  int v34; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+74h] [rbp-8Ch]
  int v36; // [rsp+78h] [rbp-88h]
  int v37; // [rsp+7Ch] [rbp-84h]
  int v38; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]
  int v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C4h] [rbp-3Ch]
  int v43; // [rsp+C8h] [rbp-38h]
  int v44; // [rsp+CCh] [rbp-34h]
  int v45; // [rsp+D0h] [rbp-30h]
  int v46; // [rsp+D4h] [rbp-2Ch]
  int v47; // [rsp+D8h] [rbp-28h]
  int v48; // [rsp+DCh] [rbp-24h]
  int v49; // [rsp+E0h] [rbp-20h]
  int v50; // [rsp+E4h] [rbp-1Ch]
  char v51; // [rsp+E8h] [rbp-18h]
  _BYTE v52[176]; // [rsp+F0h] [rbp-10h] BYREF
  __m256i pData; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v54; // [rsp+1C0h] [rbp+C0h]

  memset_0(v26, 0, 0xB0uLL);
  memset_0(v52, 0, sizeof(v52));
  v2 = v26[0] | 1;
  v26[0] |= 1u;
  if ( (int)RtlQueryResourcePolicy(0LL, v3, &v24) >= 0
    && v24 <= 10
    && (int)RtlQueryResourcePolicy(2LL, v4, &v24) >= 0
    && v24 > 10 )
  {
    v20 = v2 | 0x1C;
    v26[0] = v20;
    if ( RmpSystemIsSdBusBased() )
      v26[0] = v20 | 0x20;
  }
  v41 = 0;
  v39 = 35;
  v40 = 5000;
  v31 = 90;
  v33 = 90;
  v42 = 5000;
  v43 = 5000;
  v48 = 5000;
  v49 = 5000;
  v44 = 60000;
  v47 = 60000;
  v27 = 52428800LL;
  v28 = 50;
  v29 = 70;
  v30 = 170;
  v32 = 75;
  v34 = 95;
  v37 = 89;
  v35 = 10;
  v36 = 65;
  v38 = 85;
  v45 = 0x200000;
  v46 = 2;
  v50 = 1000;
  v51 = 30;
  ResourceManagerRegistryOverrides = RmpGetResourceManagerRegistryOverrides(
                                       (struct _RM_RUNTIME_CONFIGURATION *)v26,
                                       (struct _RM_RUNTIME_CONFIGURATION *)v52);
  if ( ResourceManagerRegistryOverrides < 0 )
  {
    if ( (unsigned int)dword_18004D030 > 2 && TlgKeywordOn(v5, 1uLL) )
    {
      *(_QWORD *)&v54 = &ResourceManagerRegistryOverrides;
      *((_QWORD *)&v54 + 1) = 4LL;
      TlgWrite(v21, &unk_18003F8A3, v22, v23, 3u, (EVENT_DATA_DESCRIPTOR *)&pData);
    }
    v6 = v26;
  }
  else
  {
    v6 = v52;
  }
  memset_0(&pData, 0, 0x30uLL);
  v7 = (*v6 & 0x10) == 0;
  *(__m128i *)((char *)pData.m256i_i64 + 4) = _mm_load_si128((const __m128i *)&_xmm);
  if ( v7 )
  {
    pData.m256i_i32[7] = 2;
    *(_QWORD *)&v54 = 0x300000003LL;
    HIDWORD(v54) = 1;
  }
  v8 = *(_OWORD *)&pData.m256i_u64[2];
  *(_OWORD *)(v6 + 72) = *(_OWORD *)pData.m256i_i8;
  v9 = v54;
  *(_OWORD *)(v6 + 88) = v8;
  *(_OWORD *)(v6 + 104) = v9;
  v10 = *((_OWORD *)v6 + 1);
  *(_OWORD *)a1 = *(_OWORD *)v6;
  v11 = *((_OWORD *)v6 + 2);
  *((_OWORD *)a1 + 1) = v10;
  v12 = *((_OWORD *)v6 + 3);
  *((_OWORD *)a1 + 2) = v11;
  v13 = *((_OWORD *)v6 + 4);
  *((_OWORD *)a1 + 3) = v12;
  v14 = *((_OWORD *)v6 + 5);
  *((_OWORD *)a1 + 4) = v13;
  v15 = *((_OWORD *)v6 + 6);
  *((_OWORD *)a1 + 5) = v14;
  v16 = *((_OWORD *)v6 + 8);
  *((_OWORD *)a1 + 6) = v15;
  v17 = (_OWORD *)((char *)a1 + 128);
  *(v17 - 1) = *((_OWORD *)v6 + 7);
  v18 = *((_OWORD *)v6 + 9);
  *v17 = v16;
  v19 = *((_OWORD *)v6 + 10);
  v17[1] = v18;
  v17[2] = v19;
}
