/*
 * XREFs of StorpTelemetrySendUnitQos @ 0x1C003B2E0
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C00393B0 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0011B18 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0014C54 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     Template_qcccjxxcxxqqq @ 0x1C003BF20 (Template_qcccjxxcxxqqq.c)
 */

__int64 __fastcall StorpTelemetrySendUnitQos(__int64 a1, __int64 a2, const GUID *a3)
{
  int v3; // esi
  __int64 v5; // rax
  int v6; // r14d
  __int64 v7; // rdx
  unsigned __int64 v8; // kr00_8
  const struct _TlgProvider_t *v9; // rcx
  unsigned __int64 v10; // rdi
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r9
  __int64 result; // rax
  char v14; // [rsp+88h] [rbp-80h] BYREF
  char v15; // [rsp+89h] [rbp-7Fh] BYREF
  char v16; // [rsp+8Ah] [rbp-7Eh] BYREF
  char v17; // [rsp+8Bh] [rbp-7Dh] BYREF
  int v18; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v19; // [rsp+90h] [rbp-78h] BYREF
  int v20; // [rsp+94h] [rbp-74h] BYREF
  int v21; // [rsp+98h] [rbp-70h] BYREF
  int v22; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v23; // [rsp+A0h] [rbp-68h] BYREF
  int v24; // [rsp+A4h] [rbp-64h] BYREF
  int v25; // [rsp+A8h] [rbp-60h] BYREF
  int v26; // [rsp+ACh] [rbp-5Ch] BYREF
  int v27; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-40h] BYREF
  const struct _TlgProvider_t *v31; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v32; // [rsp+D8h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  __int128 *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  __int64 v36; // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  int *v38; // [rsp+128h] [rbp+20h]
  __int64 v39; // [rsp+130h] [rbp+28h]
  char *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  char *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  char *v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  int *v46; // [rsp+168h] [rbp+60h]
  __int64 v47; // [rsp+170h] [rbp+68h]
  int *v48; // [rsp+178h] [rbp+70h]
  __int64 v49; // [rsp+180h] [rbp+78h]
  int *v50; // [rsp+188h] [rbp+80h]
  __int64 v51; // [rsp+190h] [rbp+88h]
  int *v52; // [rsp+198h] [rbp+90h]
  __int64 v53; // [rsp+1A0h] [rbp+98h]
  int *v54; // [rsp+1A8h] [rbp+A0h]
  __int64 v55; // [rsp+1B0h] [rbp+A8h]
  int *v56; // [rsp+1B8h] [rbp+B0h]
  __int64 v57; // [rsp+1C0h] [rbp+B8h]
  __int64 *v58; // [rsp+1C8h] [rbp+C0h]
  __int64 v59; // [rsp+1D0h] [rbp+C8h]
  __int64 *v60; // [rsp+1D8h] [rbp+D0h]
  __int64 v61; // [rsp+1E0h] [rbp+D8h]
  char *v62; // [rsp+1E8h] [rbp+E0h]
  __int64 v63; // [rsp+1F0h] [rbp+E8h]
  const struct _TlgProvider_t **v64; // [rsp+1F8h] [rbp+F0h]
  __int64 v65; // [rsp+200h] [rbp+F8h]
  __int64 *v66; // [rsp+208h] [rbp+100h]
  __int64 v67; // [rsp+210h] [rbp+108h]
  int *v68; // [rsp+218h] [rbp+110h]
  __int64 v69; // [rsp+220h] [rbp+118h]
  int *v70; // [rsp+228h] [rbp+120h]
  __int64 v71; // [rsp+230h] [rbp+128h]
  int *v72; // [rsp+238h] [rbp+130h]
  __int64 v73; // [rsp+240h] [rbp+138h]

  *(_QWORD *)((char *)&v32 + 4) = 0LL;
  v3 = -1;
  HIDWORD(v32) = 0;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0;
  LODWORD(v32) = 0;
  if ( v5 )
  {
    v32 = *(_OWORD *)(v5 + 5192);
    v3 = *(_DWORD *)(v5 + 56);
    v6 = *(_DWORD *)(v5 + 5440);
  }
  v8 = *(_QWORD *)(a1 + 2568);
  v7 = (v8 * (unsigned __int128)0xD6BF94D5E57A42BDuLL) >> 64;
  v9 = *(const struct _TlgProvider_t **)(a1 + 1800);
  v10 = v8 / 0x989680;
  if ( v8 / 0x989680 > 0xFF )
    LOBYTE(v10) = -1;
  if ( v9 || *(_QWORD *)(a1 + 1808) || *(_DWORD *)(a1 + 1816) )
  {
    if ( (unsigned int)dword_1C0048030 > 5 && TlgKeywordOn(v9, 0x400000000000uLL) )
    {
      v16 = *(_BYTE *)(a1 + 88);
      v14 = *(_BYTE *)(a1 + 89);
      v15 = *(_BYTE *)(a1 + 90);
      v20 = *(_DWORD *)(a1 + 2532);
      v25 = *(_DWORD *)(a1 + 2536);
      v22 = *(_DWORD *)(a1 + 2540);
      v27 = *(_DWORD *)(a1 + 2544);
      v18 = *(_DWORD *)(a1 + 2548);
      v26 = *(_DWORD *)(a1 + 2552);
      v28 = *(_QWORD *)(a1 + 1784);
      v30 = *(_QWORD *)(a1 + 1792);
      v29 = *(_QWORD *)(a1 + 1808);
      v23 = *(_DWORD *)(a1 + 1816);
      v19 = *(_DWORD *)(a1 + 1820);
      v34 = &v32;
      v36 = a1 + 1688;
      v38 = &v24;
      v40 = &v16;
      v42 = &v14;
      v44 = &v15;
      v46 = &v20;
      v48 = &v25;
      v50 = &v22;
      v52 = &v27;
      v54 = &v18;
      v56 = &v26;
      v58 = &v28;
      v60 = &v30;
      v62 = &v17;
      v64 = &v31;
      v24 = v3;
      v17 = v10;
      v31 = v11;
      v21 = v6;
      v35 = 16LL;
      v37 = 16LL;
      v39 = 4LL;
      v41 = 1LL;
      v43 = 1LL;
      v45 = 1LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 8LL;
      v61 = 8LL;
      v63 = 1LL;
      v65 = 8LL;
      v66 = &v29;
      v68 = &v23;
      v70 = &v19;
      v72 = &v21;
      v67 = 8LL;
      v69 = 4LL;
      v71 = 4LL;
      v73 = 4LL;
      TlgWrite(v11, &unk_1C0040903, a3, v12, 0x16u, &pData);
    }
    if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 1) != 0 )
      Template_qcccjxxcxxqqq(
        a1 + 1688,
        v7,
        (_DWORD)a3,
        v3,
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a1 + 1688,
        *(_QWORD *)(a1 + 1784),
        *(_QWORD *)(a1 + 1792),
        v10,
        *(_QWORD *)(a1 + 1808),
        *(_QWORD *)(a1 + 1800),
        *(_DWORD *)(a1 + 1816),
        *(_DWORD *)(a1 + 1820),
        v6);
  }
  *(_QWORD *)(a1 + 1784) = 0LL;
  result = 0LL;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_QWORD *)(a1 + 1808) = 0LL;
  *(_DWORD *)(a1 + 1820) = 0;
  return result;
}
