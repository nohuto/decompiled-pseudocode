/*
 * XREFs of RmpGetResourceManagerRuntimeConfiguration @ 0x18001B398
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x18001B108 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     RmpSystemMemoryMetricsQuery @ 0x180015250 (RmpSystemMemoryMetricsQuery.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x18001C10C (-RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z.c)
 *     RtlQueryResourcePolicy @ 0x18001F768 (RtlQueryResourcePolicy.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     RmpSystemIsSdBusBased @ 0x1800379B4 (RmpSystemIsSdBusBased.c)
 */

__int64 __fastcall RmpGetResourceManagerRuntimeConfiguration(_OWORD *a1)
{
  ULONG v2; // eax
  int v3; // ebx
  ULONG v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rdx
  const struct _TlgProvider_t *v7; // rcx
  int *v8; // rbx
  const struct _TlgProvider_t *v9; // rcx
  bool v10; // cc
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v14; // eax
  bool v15; // zf
  __int64 result; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _OWORD *v26; // rdi
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  int v29; // ebx
  const struct _TlgProvider_t *v30; // rcx
  const GUID *v31; // r8
  const GUID *v32; // r9
  ULONG ProcessInformation; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  int v35; // [rsp+38h] [rbp-C8h] BYREF
  int ResourceManagerRegistryOverrides; // [rsp+3Ch] [rbp-C4h] BYREF
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v39; // [rsp+48h] [rbp-B8h] BYREF
  __m256i v40; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v41; // [rsp+70h] [rbp-90h]
  unsigned __int64 v42[10]; // [rsp+80h] [rbp-80h] BYREF
  int v43; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+ECh] [rbp-14h]
  int v48; // [rsp+F0h] [rbp-10h]
  int v49; // [rsp+F4h] [rbp-Ch]
  int v50; // [rsp+F8h] [rbp-8h]
  int v51; // [rsp+FCh] [rbp-4h]
  int v52; // [rsp+100h] [rbp+0h]
  int v53; // [rsp+104h] [rbp+4h]
  int v54; // [rsp+108h] [rbp+8h]
  int v55; // [rsp+10Ch] [rbp+Ch]
  int v56; // [rsp+110h] [rbp+10h]
  int v57; // [rsp+148h] [rbp+48h]
  int v58; // [rsp+14Ch] [rbp+4Ch]
  int v59; // [rsp+150h] [rbp+50h]
  int v60; // [rsp+154h] [rbp+54h]
  int v61; // [rsp+158h] [rbp+58h]
  int v62; // [rsp+15Ch] [rbp+5Ch]
  int v63; // [rsp+160h] [rbp+60h]
  int v64; // [rsp+164h] [rbp+64h]
  int v65; // [rsp+168h] [rbp+68h]
  int v66; // [rsp+16Ch] [rbp+6Ch]
  int v67; // [rsp+170h] [rbp+70h]
  int v68; // [rsp+174h] [rbp+74h]
  char v69; // [rsp+178h] [rbp+78h]
  _BYTE v70[176]; // [rsp+180h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+230h] [rbp+130h] BYREF
  int *v72; // [rsp+250h] [rbp+150h]
  int v73; // [rsp+258h] [rbp+158h]
  int v74; // [rsp+25Ch] [rbp+15Ch]
  int *v75; // [rsp+260h] [rbp+160h]
  int v76; // [rsp+268h] [rbp+168h]
  int v77; // [rsp+26Ch] [rbp+16Ch]
  ULONG *v78; // [rsp+270h] [rbp+170h]
  int v79; // [rsp+278h] [rbp+178h]
  int v80; // [rsp+27Ch] [rbp+17Ch]
  EVENT_DATA_DESCRIPTOR v81; // [rsp+280h] [rbp+180h] BYREF
  int *p_ResourceManagerRegistryOverrides; // [rsp+2A0h] [rbp+1A0h]
  int v83; // [rsp+2A8h] [rbp+1A8h]
  int v84; // [rsp+2ACh] [rbp+1ACh]

  memset_0(&v43, 0, 0xB0uLL);
  memset_0(v70, 0, sizeof(v70));
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL) < 0 )
    ProcessInformation = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  v2 = RtlRandomEx(&ProcessInformation);
  v3 = v43 | 1;
  v43 |= 1u;
  v4 = v2;
  if ( (int)RtlQueryResourcePolicy(0LL, v5, &v34) >= 0
    && v34 <= 10
    && (int)RtlQueryResourcePolicy(2LL, v6, &v35) >= 0
    && v35 > 10 )
  {
    v29 = v3 | 0x1C;
    v43 = v29;
    if ( (unsigned int)RmpSystemIsSdBusBased() )
      v43 = v29 | 0x20;
  }
  v60 = 0;
  v57 = 35;
  v58 = 5000;
  v49 = 95;
  v52 = 95;
  v61 = 5000;
  v62 = 5000;
  v67 = 5000;
  v63 = 60000;
  v66 = 60000;
  v44 = 52428800LL;
  v45 = 104857600LL;
  v46 = 50;
  v47 = 70;
  v48 = 170;
  v50 = 75;
  v51 = 90;
  v55 = 94;
  v53 = 10;
  v54 = 65;
  v56 = 85;
  v59 = 7;
  v68 = 1000;
  v69 = 30;
  v64 = 0x200000;
  v65 = 2;
  ResourceManagerRegistryOverrides = RmpGetResourceManagerRegistryOverrides(
                                       (struct _RM_RUNTIME_CONFIGURATION *)&v43,
                                       (struct _RM_RUNTIME_CONFIGURATION *)v70);
  if ( ResourceManagerRegistryOverrides < 0 )
  {
    if ( (unsigned int)dword_18004C030 > 2 && TlgKeywordOn(v7, 1uLL) )
    {
      v84 = 0;
      p_ResourceManagerRegistryOverrides = &ResourceManagerRegistryOverrides;
      v83 = 4;
      TlgWrite(v30, &unk_18003F1F3, v31, v32, 3u, &v81);
    }
    v8 = &v43;
  }
  else
  {
    v8 = (int *)v70;
  }
  RmpSystemMemoryMetricsQuery(v42);
  v10 = (unsigned int)dword_18004C030 <= 4;
  *((_QWORD *)v8 + 2) = v42[3];
  if ( !v10 && TlgKeywordOn(v9, 0x400000000001uLL) )
  {
    v14 = *v8;
    v74 = 0;
    v77 = 0;
    v80 = 0;
    v37 = v14;
    v72 = &v37;
    v38 = v8[1];
    v75 = &v38;
    v78 = &v39;
    v73 = 4;
    v76 = 4;
    v39 = v4;
    v79 = 4;
    TlgWrite(v11, &unk_18003F22E, v12, v13, 5u, &pData);
  }
  memset_0(&v40, 0, 0x30uLL);
  v15 = (*(_BYTE *)v8 & 0x10) == 0;
  *(__m128i *)((char *)v40.m256i_i64 + 4) = _mm_load_si128((const __m128i *)&_xmm);
  if ( v15 )
  {
    v40.m256i_i32[7] = 2;
    *(_QWORD *)&v41 = 0x300000003LL;
    HIDWORD(v41) = 1;
  }
  result = 128LL;
  v17 = *(_OWORD *)&v40.m256i_u64[2];
  *(_OWORD *)(v8 + 18) = *(_OWORD *)v40.m256i_i8;
  v18 = v41;
  *(_OWORD *)(v8 + 22) = v17;
  *(_OWORD *)(v8 + 26) = v18;
  v19 = *((_OWORD *)v8 + 1);
  *a1 = *(_OWORD *)v8;
  v20 = *((_OWORD *)v8 + 2);
  a1[1] = v19;
  v21 = *((_OWORD *)v8 + 3);
  a1[2] = v20;
  v22 = *((_OWORD *)v8 + 4);
  a1[3] = v21;
  v23 = *((_OWORD *)v8 + 5);
  a1[4] = v22;
  v24 = *((_OWORD *)v8 + 6);
  a1[5] = v23;
  v25 = *((_OWORD *)v8 + 8);
  a1[6] = v24;
  v26 = a1 + 8;
  *(v26 - 1) = *((_OWORD *)v8 + 7);
  v27 = *((_OWORD *)v8 + 9);
  *v26 = v25;
  v28 = *((_OWORD *)v8 + 10);
  v26[1] = v27;
  v26[2] = v28;
  return result;
}
