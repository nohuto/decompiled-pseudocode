/*
 * XREFs of RmpGetResourceManagerRuntimeConfiguration @ 0x180021AD8
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180020C08 (RmpInitializeGlobalModules.c)
 * Callees:
 *     RmpSystemMemoryMetricsQuery @ 0x180006E30 (RmpSystemMemoryMetricsQuery.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x180021CDC (-RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z.c)
 *     RtlQueryResourcePolicy @ 0x18002A5F0 (RtlQueryResourcePolicy.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     RmpSystemIsSdBusBased @ 0x180047734 (RmpSystemIsSdBusBased.c)
 */

__int64 __fastcall RmpGetResourceManagerRuntimeConfiguration(_OWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rdx
  const struct _TlgProvider_t *v5; // rcx
  int *v6; // rbx
  bool v7; // zf
  __m128i si128; // xmm0
  __int64 result; // rax
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // ebx
  const struct _TlgProvider_t *v20; // rcx
  const GUID *v21; // r8
  const GUID *v22; // r9
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  int ResourceManagerRegistryOverrides; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+58h] [rbp-A8h]
  int v29; // [rsp+5Ch] [rbp-A4h]
  int v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+64h] [rbp-9Ch]
  int v32; // [rsp+68h] [rbp-98h]
  int v33; // [rsp+6Ch] [rbp-94h]
  int v34; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+74h] [rbp-8Ch]
  int v36; // [rsp+7Ch] [rbp-84h]
  int v37; // [rsp+A8h] [rbp-58h]
  int v38; // [rsp+ACh] [rbp-54h]
  int v39; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+B4h] [rbp-4Ch]
  int v41; // [rsp+B8h] [rbp-48h]
  int v42; // [rsp+BCh] [rbp-44h]
  int v43; // [rsp+C0h] [rbp-40h]
  int v44; // [rsp+C4h] [rbp-3Ch]
  int v45; // [rsp+C8h] [rbp-38h]
  _BYTE v46[144]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v48[24]; // [rsp+170h] [rbp+70h]
  int v49; // [rsp+188h] [rbp+88h]
  int v50; // [rsp+18Ch] [rbp+8Ch]

  memset_0(&v25, 0, 0x90uLL);
  memset_0(v46, 0, sizeof(v46));
  v2 = v25 | 1;
  v25 |= 1u;
  if ( (int)RtlQueryResourcePolicy(0LL, v3, &v23) >= 0
    && v23 <= 10
    && (int)RtlQueryResourcePolicy(2LL, v4, &v23) >= 0
    && v23 > 10 )
  {
    v19 = v2 | 0x1C;
    v25 = v19;
    if ( (unsigned int)RmpSystemIsSdBusBased() )
      v25 = v19 | 0x20;
  }
  v40 = 0;
  v37 = 35;
  v30 = 95;
  v33 = 95;
  v38 = 5000;
  v43 = 5000;
  v44 = 5000;
  v41 = 1000;
  v42 = 1000;
  v26 = 52428800LL;
  v27 = 104857600LL;
  v28 = 80;
  v29 = 170;
  v31 = 75;
  v32 = 90;
  v34 = 10;
  v35 = 65;
  v36 = 85;
  v39 = 7;
  v45 = 60000;
  ResourceManagerRegistryOverrides = RmpGetResourceManagerRegistryOverrides(
                                       (struct _RM_RUNTIME_CONFIGURATION *)&v25,
                                       (struct _RM_RUNTIME_CONFIGURATION *)v46);
  if ( ResourceManagerRegistryOverrides < 0 )
  {
    if ( (unsigned int)dword_180071060 > 2 && TlgKeywordOn(v5, 1uLL) )
    {
      v50 = 0;
      *(_QWORD *)&v48[16] = &ResourceManagerRegistryOverrides;
      v49 = 4;
      TlgWrite(v20, &unk_18006257C, v21, v22, 3u, &pData);
    }
    v6 = &v25;
  }
  else
  {
    v6 = (int *)v46;
  }
  RmpSystemMemoryMetricsQuery((__int64 *)&pData);
  *((_QWORD *)v6 + 2) = *(_QWORD *)v48;
  memset_0(&pData, 0, 0x28uLL);
  v7 = (*(_BYTE *)v6 & 0x10) == 0;
  pData.Size = 6;
  pData.Reserved = 6;
  if ( v7 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    HIDWORD(pData.Ptr) = 4;
    *(_DWORD *)&v48[20] = 1;
  }
  else
  {
    HIDWORD(pData.Ptr) = 0;
    si128 = 0LL;
    *(_DWORD *)&v48[20] = 0;
  }
  *(__m128i *)&v48[4] = si128;
  result = 128LL;
  v10 = *(_OWORD *)v48;
  *((EVENT_DATA_DESCRIPTOR *)v6 + 4) = pData;
  v11 = *(_QWORD *)&v48[16];
  *((_OWORD *)v6 + 5) = v10;
  *((_QWORD *)v6 + 12) = v11;
  v12 = *((_OWORD *)v6 + 1);
  *a1 = *(_OWORD *)v6;
  v13 = *((_OWORD *)v6 + 2);
  a1[1] = v12;
  v14 = *((_OWORD *)v6 + 3);
  a1[2] = v13;
  v15 = *((_OWORD *)v6 + 4);
  a1[3] = v14;
  v16 = *((_OWORD *)v6 + 5);
  a1[4] = v15;
  v17 = *((_OWORD *)v6 + 6);
  a1[5] = v16;
  v18 = *((_OWORD *)v6 + 8);
  a1[6] = v17;
  a1[7] = *((_OWORD *)v6 + 7);
  a1[8] = v18;
  return result;
}
