/*
 * XREFs of PsmRetrieveHostMemoryLimit @ 0x1800090F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009600 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     RmpActivityHostFinalCleanup @ 0x180009EAC (RmpActivityHostFinalCleanup.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180024EC6 (memcmp_0.c)
 *     memcpy_0 @ 0x180024ED2 (memcpy_0.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 */

__int64 __fastcall PsmRetrieveHostMemoryLimit(
        SID *Src,
        unsigned int a2,
        const WCHAR *a3,
        int a4,
        __int64 a5,
        unsigned __int64 *a6)
{
  unsigned __int64 *v6; // r15
  ULONG v11; // eax
  __int64 v12; // rbx
  __int64 v13; // r13
  ULONG v14; // eax
  wchar_t *v15; // rcx
  wchar_t *v16; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // r12
  WCHAR *v28; // rbx
  __int128 v29; // xmm1
  __int64 v30; // rax
  __int64 v31; // rdi
  WCHAR *v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  int v35; // esi
  unsigned int v36; // r9d
  __int64 v37; // r11
  __int64 v38; // r10
  unsigned int v39; // r9d
  __int64 v40; // rbx
  const struct _TlgProvider_t *v41; // rcx
  const GUID *v42; // r8
  const GUID *v43; // r9
  unsigned __int64 v44; // rax
  __m128i v45; // xmm2
  __int128 v46; // xmm0
  unsigned __int64 v47; // xmm2_8
  unsigned __int64 v48; // rdx
  LPCGUID v50; // r8
  LPCGUID v51; // r9
  __int64 v52; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR v53; // [rsp+38h] [rbp-C8h]
  unsigned int v54; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v55; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int hProvider; // [rsp+44h] [rbp-BCh]
  int hProvider_4; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+60h] [rbp-A0h] BYREF
  LPCWSTR pwsz; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v62; // [rsp+78h] [rbp-88h] BYREF
  SID *pSid; // [rsp+80h] [rbp-80h]
  __int128 v64; // [rsp+90h] [rbp-70h]
  __m128i v65; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v66[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-30h]
  _BYTE Sid[80]; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t Destination[232]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v70[68]; // [rsp+300h] [rbp+200h] BYREF
  unsigned int v71; // [rsp+344h] [rbp+244h]
  int v72; // [rsp+348h] [rbp+248h]
  __int64 v73; // [rsp+350h] [rbp+250h]
  wchar_t String1[232]; // [rsp+360h] [rbp+260h] BYREF
  WCHAR Buf1[48]; // [rsp+530h] [rbp+430h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+590h] [rbp+490h] BYREF
  __int64 *v77; // [rsp+5B0h] [rbp+4B0h]
  __int64 v78; // [rsp+5B8h] [rbp+4B8h]
  __int64 *v79; // [rsp+5C0h] [rbp+4C0h]
  __int64 v80; // [rsp+5C8h] [rbp+4C8h]
  __int8 *v81; // [rsp+5D0h] [rbp+4D0h]
  __int64 v82; // [rsp+5D8h] [rbp+4D8h]
  char *v83; // [rsp+5E0h] [rbp+4E0h]
  __int64 v84; // [rsp+5E8h] [rbp+4E8h]
  _OWORD *v85; // [rsp+5F0h] [rbp+4F0h]
  __int64 v86; // [rsp+5F8h] [rbp+4F8h]
  __m128i *v87; // [rsp+600h] [rbp+500h]
  __int64 v88; // [rsp+608h] [rbp+508h]
  EVENT_DATA_DESCRIPTOR v89; // [rsp+610h] [rbp+510h] BYREF
  unsigned int *v90; // [rsp+630h] [rbp+530h]
  __int64 v91; // [rsp+638h] [rbp+538h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+640h] [rbp+540h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+650h] [rbp+550h] BYREF
  int *v94; // [rsp+660h] [rbp+560h]
  __int64 v95; // [rsp+668h] [rbp+568h]
  __int64 *v96; // [rsp+670h] [rbp+570h]
  __int64 v97; // [rsp+678h] [rbp+578h]
  __int64 *v98; // [rsp+680h] [rbp+580h]
  __int64 v99; // [rsp+688h] [rbp+588h]
  unsigned __int64 *v100; // [rsp+690h] [rbp+590h]
  __int64 v101; // [rsp+698h] [rbp+598h]

  v6 = a6;
  hProvider = a2;
  pwsz = a3;
  pSid = Src;
  hProvider_4 = a4;
  memset_0(Sid, 0, 0x44uLL);
  v11 = RtlLengthSid(Src);
  memcpy_0(Sid, Src, v11);
  v12 = a5;
  v13 = 0LL;
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, a3);
  memset_0(v70, 0, sizeof(v70));
  v14 = RtlLengthSid(Sid);
  memcpy_0(v70, Sid, v14);
  v71 = a2;
  v72 = a4;
  v73 = v12;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v15 = String1;
  v16 = Destination;
  v17 = 4LL;
  do
  {
    v15 += 64;
    v18 = *(_OWORD *)v16;
    v19 = *((_OWORD *)v16 + 1);
    v16 += 64;
    *((_OWORD *)v15 - 8) = v18;
    v20 = *((_OWORD *)v16 - 6);
    *((_OWORD *)v15 - 7) = v19;
    v21 = *((_OWORD *)v16 - 5);
    *((_OWORD *)v15 - 6) = v20;
    v22 = *((_OWORD *)v16 - 4);
    *((_OWORD *)v15 - 5) = v21;
    v23 = *((_OWORD *)v16 - 3);
    *((_OWORD *)v15 - 4) = v22;
    v24 = *((_OWORD *)v16 - 2);
    *((_OWORD *)v15 - 3) = v23;
    v25 = *((_OWORD *)v16 - 1);
    *((_OWORD *)v15 - 2) = v24;
    *((_OWORD *)v15 - 1) = v25;
    --v17;
  }
  while ( v17 );
  v26 = *(_OWORD *)v16;
  v27 = 0LL;
  v28 = String1;
  v29 = *((_OWORD *)v16 + 1);
  v30 = *((_QWORD *)v16 + 4);
  v31 = 314159LL;
  *(_OWORD *)v15 = v26;
  *((_OWORD *)v15 + 1) = v29;
  *((_QWORD *)v15 + 4) = v30;
  do
  {
    v53 = RtlUpcaseUnicodeChar(*v28++);
    v31 = HIBYTE(v53) + 37 * ((unsigned __int8)v53 + 37 * v31);
  }
  while ( v28 < Buf1 );
  v32 = Buf1;
  v33 = 11LL;
  do
  {
    v34 = *(unsigned __int8 *)v32;
    v32 += 4;
    v31 = *((unsigned __int8 *)v32 - 1)
        + 37
        * (*((unsigned __int8 *)v32 - 2)
         + 37
         * (*((unsigned __int8 *)v32 - 3)
          + 37
          * (*((unsigned __int8 *)v32 - 4)
           + 37
           * (*((unsigned __int8 *)v32 - 5)
            + 37 * (*((unsigned __int8 *)v32 - 6) + 37 * (*((unsigned __int8 *)v32 - 7) + 37 * (v34 + 37 * v31)))))));
    --v33;
  }
  while ( v33 );
  v35 = -1073741275;
  RtlAcquireSRWLockShared((char *)RmSvcGlobals + 40);
LABEL_8:
  v36 = *((_DWORD *)RmSvcGlobals + 457);
  v37 = -1LL << (*((_BYTE *)RmSvcGlobals + 1828) & 0x1F);
  v38 = v37 & v31;
  v52 = v37 & v31;
  if ( v27 )
    goto LABEL_11;
  v39 = v36 >> 5;
  if ( v39 )
  {
    v27 = *((_QWORD *)RmSvcGlobals + 229)
        + 8LL
        * ((37
          * (BYTE6(v52)
           + 37
           * (BYTE5(v52)
            + 37
            * (BYTE4(v52)
             + 37 * (BYTE3(v52) + 37 * (BYTE2(v52) + 37 * (BYTE1(v52) + 37 * ((unsigned __int8)v38 + 11623883)))))))
          + HIBYTE(v52)) & (v39 - 1));
LABEL_11:
    while ( 1 )
    {
      v27 = *(_QWORD *)v27;
      if ( (v27 & 1) != 0 )
        break;
      if ( v38 == (v37 & *(_QWORD *)(v27 + 8)) )
      {
        v40 = v27 - 824;
        if ( !*(_DWORD *)(v27 - 824 + 40)
          && !_wcsicmp(String1, (const wchar_t *)(v40 + 48))
          && !memcmp_0(Buf1, (const void *)(v40 + 512), 0x58uLL) )
        {
          v35 = 0;
          _InterlockedIncrement((volatile signed __int32 *)(v40 + 16));
          v13 = v27 - 824;
          break;
        }
        goto LABEL_8;
      }
    }
  }
  RtlReleaseSRWLockShared((char *)RmSvcGlobals + 40);
  if ( v35 >= 0 )
  {
    ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(
      *(ExecutionModel::ModernActivationResourceInfo **)(v13 + 600),
      &v62,
      0LL,
      &v58,
      0LL,
      0LL);
    v44 = v58 - v62;
    v64 = *(_OWORD *)(v13 + 624);
    v45 = *(__m128i *)(v13 + 640);
    v58 = v44;
    v65 = v45;
    v46 = *(_OWORD *)(v13 + 656);
    v61 = v45.m128i_i64[0];
    v66[0] = v46;
    v47 = _mm_srli_si128(v45, 8).m128i_u64[0];
    v66[1] = *(_OWORD *)(v13 + 672);
    v48 = v47;
    v67 = *(_QWORD *)(v13 + 688);
    *(_QWORD *)&v66[0] = v44;
    if ( v47 )
    {
      v65.m128i_i64[0] = v47;
    }
    else
    {
      v48 = *((_QWORD *)&v66[0] + 1);
      if ( *((_QWORD *)&v66[0] + 1) )
      {
        if ( v44 < *((_QWORD *)&v66[0] + 1) )
          v48 = v44;
        v65.m128i_i64[0] = v48;
      }
      else
      {
        v48 = v44;
        v65.m128i_i64[0] = v44;
      }
    }
    if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 1) != 0 && (qword_1800690B8 & 1) == qword_1800690B8 )
    {
      v59 = *(_QWORD *)(v13 + 24);
      v77 = &v59;
      v79 = &v61;
      v81 = &v65.m128i_i8[8];
      v83 = (char *)v66 + 8;
      v85 = v66;
      v87 = &v65;
      v78 = 8LL;
      v80 = 8LL;
      v82 = 8LL;
      v84 = 8LL;
      v86 = 8LL;
      v88 = 8LL;
      TlgWrite(v41, &unk_18005B098, v42, v43, 8u, &pData);
      v48 = v65.m128i_i64[0];
    }
    v35 = 0;
    *v6 = v48;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v13 && _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 16), 0xFFFFFFFF) == 1 )
  {
    if ( *(_DWORD *)(v13 + 32) == 1 )
      RmpActivityHostFinalCleanup(v13);
    RmpFreeHeap((PVOID)v13);
  }
  v54 = v35;
  if ( (unsigned int)dword_1800690A0 <= 4 || (qword_1800690B0 & 1) == 0 || (qword_1800690B8 & 1) != qword_1800690B8 )
    return (unsigned int)v35;
  v90 = &v54;
  v91 = 4LL;
  TlgCreateWsz(&pDesc, pwsz);
  TlgCreateSid(&v93, pSid);
  v94 = (int *)&v55;
  LODWORD(v52) = hProvider_4;
  v96 = &v52;
  v98 = &a5;
  v55 = hProvider;
  v95 = 4LL;
  v97 = 4LL;
  v99 = 8LL;
  v100 = v6;
  v101 = 8LL;
  TlgWrite((TraceLoggingHProvider)hProvider, &unk_1800594D9, v50, v51, 9u, &v89);
  return v54;
}
