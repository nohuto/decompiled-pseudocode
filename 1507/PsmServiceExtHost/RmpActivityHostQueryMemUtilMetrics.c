/*
 * XREFs of RmpActivityHostQueryMemUtilMetrics @ 0x18000A188
 * Callers:
 *     RmpPolicyActivityHostMetricsInitialize @ 0x18000717C (RmpPolicyActivityHostMetricsInitialize.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     MemUtilQueryProcessMetrics @ 0x180006F30 (MemUtilQueryProcessMetrics.c)
 *     RmpActivityHostGetPsmProcessList @ 0x1800072C0 (RmpActivityHostGetPsmProcessList.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmpActivityHostQueryMemUtilMetrics(struct _RM_ACTIVITY_HOST *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r12d
  __int64 v5; // rsi
  struct _RM_ACTIVITY_HOST *v6; // rdi
  __int64 *v7; // r15
  _BYTE *v8; // r13
  int v9; // ecx
  __int16 v10; // r14
  int PsmProcessList; // eax
  const GUID *v12; // r9
  _BYTE *Heap; // rax
  int v14; // edi
  _DWORD *v15; // rcx
  __int64 v16; // r8
  int *v17; // rdx
  int v18; // eax
  unsigned int ProcessMetrics; // eax
  _BYTE *v20; // rbx
  __int64 v21; // rsi
  ULONGLONG v22; // rcx
  const GUID *v23; // r8
  unsigned int v24; // esi
  unsigned __int64 v25; // rbx
  unsigned int v26; // edi
  BOOL inited; // eax
  unsigned __int64 v28; // rcx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  const struct _TlgProvider_t *v31; // rcx
  const GUID *v32; // r8
  const GUID *v33; // r9
  __int64 v34; // r10
  __int64 v36; // rax
  const struct _TlgProvider_t *v37; // rcx
  const GUID *v38; // r8
  __int16 v39; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v40; // [rsp+34h] [rbp-CCh] BYREF
  char v41; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v42; // [rsp+3Ch] [rbp-C4h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_ACTIVITY_HOST *v44; // [rsp+48h] [rbp-B8h]
  _BYTE *v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD *v48; // [rsp+68h] [rbp-98h]
  __int64 v49; // [rsp+70h] [rbp-90h]
  __int128 v50; // [rsp+78h] [rbp-88h] BYREF
  __int128 v51; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v52[64]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  PVOID *v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  PVOID *p_P; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  char *v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  char *v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]
  char *v64; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]
  __int128 *v66; // [rsp+160h] [rbp+60h]
  __int64 v67; // [rsp+168h] [rbp+68h]
  __int128 *v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  char *v70; // [rsp+180h] [rbp+80h]
  const struct _TlgProvider_t *v71; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v72; // [rsp+190h] [rbp+90h] BYREF
  unsigned int *v73; // [rsp+1B0h] [rbp+B0h]
  __int64 v74; // [rsp+1B8h] [rbp+B8h]

  LOWORD(v3) = *(_WORD *)(a3 + 24);
  v4 = 0;
  v48 = (_OWORD *)a3;
  v5 = a2;
  v49 = a2;
  v6 = a1;
  v44 = a1;
  v7 = 0LL;
  v8 = 0LL;
  v40 = 0;
  P = 0LL;
  v45 = 0LL;
  v39 = v3;
  memset_0(&v50, 0, 0x20uLL);
  memset_0(v52, 0, sizeof(v52));
  v9 = *((_DWORD *)v6 + 10);
  v10 = v3 & 0x1E;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v36 = *((unsigned int *)v6 + 12);
      v8 = v52;
      v45 = v52;
      v7 = &v47;
      v47 = v36;
      v4 = 1;
    }
    else
    {
      v42 = -1073741811;
    }
    goto LABEL_6;
  }
  PsmProcessList = RmpActivityHostGetPsmProcessList(v6, (unsigned __int64 **)&P, &v40);
  v4 = v40;
  LODWORD(v12) = 0;
  v42 = PsmProcessList;
  if ( PsmProcessList < 0 )
  {
LABEL_53:
    v7 = (__int64 *)P;
    goto LABEL_37;
  }
  if ( !v40 )
  {
    v7 = (__int64 *)P;
    goto LABEL_36;
  }
  v3 = v40 << 6;
  Heap = RmpAllocateHeap(v40 << 6);
  v45 = Heap;
  v8 = Heap;
  if ( !Heap )
  {
    v42 = -1073741801;
    goto LABEL_53;
  }
  memset_0(Heap, 0, v3);
  v7 = (__int64 *)P;
  LOBYTE(v3) = v39;
LABEL_6:
  v14 = 0;
  if ( (v3 & 2) != 0 )
    v14 = 8;
  if ( (v3 & 4) != 0 )
    v14 |= 1u;
  if ( (v3 & 0x10) != 0 )
    v14 |= 0x40u;
  if ( v4 )
  {
    v15 = v8;
    v16 = v4;
    v17 = (int *)v7;
    do
    {
      v18 = *v17;
      v17 += 2;
      *v15 = v18;
      v15 += 16;
      --v16;
    }
    while ( v16 );
  }
  ProcessMetrics = MemUtilQueryProcessMetrics((unsigned __int64)v8, v4, v14);
  LODWORD(v12) = 0;
  if ( ProcessMetrics )
  {
    if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)ProcessMetrics, 1uLL) )
    {
      v40 = (unsigned int)v37;
      v73 = &v40;
      v74 = 4LL;
      TlgWrite(v37, &unk_18005CD54, v38, v12, 3u, &v72);
      LODWORD(v12) = 0;
    }
    v10 &= 9u;
  }
  else if ( v4 )
  {
    v20 = v8 + 4;
    v21 = v4;
    v22 = 1LL;
    do
    {
      if ( (unsigned int)dword_1800690A0 > 5 && TlgKeywordOn((TraceLoggingHProvider)v22, v22) )
      {
        v40 = *((_DWORD *)v20 - 1);
        v54 = &v40;
        v56 = (PVOID *)&v46;
        LODWORD(P) = *(_DWORD *)v20;
        p_P = &P;
        v60 = v20 + 4;
        v62 = v20 + 12;
        v64 = v20 + 44;
        v55 = 4LL;
        v46 = v14;
        v57 = 4LL;
        v59 = 4LL;
        v61 = 8LL;
        v63 = 8LL;
        v65 = 8LL;
        TlgWrite((TraceLoggingHProvider)v22, &unk_18005CE53, v23, v12, 8u, &pData);
        LODWORD(v12) = 0;
        v22 = 1LL;
      }
      if ( (v39 & 2) != 0 && (*v20 & 8) != 0 )
        *(_QWORD *)&v50 = *(_QWORD *)(v20 + 12) + v50;
      else
        v10 &= ~2u;
      if ( (v39 & 4) != 0 && ((unsigned __int8)v22 & *v20) != 0 )
        *((_QWORD *)&v50 + 1) += *(_QWORD *)(v20 + 4);
      else
        v10 &= ~4u;
      if ( (v39 & 0x10) != 0 && (*v20 & 0x40) != 0 )
        *(_QWORD *)&v51 = *(_QWORD *)(v20 + 44) + v51;
      else
        v10 &= ~0x10u;
      v20 += 64;
      v21 -= v22;
    }
    while ( v21 );
    v8 = v45;
    v5 = v49;
  }
  if ( (v39 & 8) != 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      v24 = *(_DWORD *)(v5 + 1456);
      v25 = *((_QWORD *)&v50 + 1);
      v26 = 61440;
      inited = InitOnceExecuteOnce(&DiskRateInitOnce, (PINIT_ONCE_FN)MemUtilQueryDiskRate, &DiskRateContext, 0LL);
      LODWORD(v12) = 0;
      if ( inited )
        v26 = dword_1800697A4;
      v28 = v26;
      v6 = v44;
      if ( (unsigned int)(1000 * (v25 >> 10) / v28) > v24 )
        WORD6(v51) |= 1u;
      goto LABEL_36;
    }
    v10 &= ~8u;
  }
  v6 = v44;
LABEL_36:
  WORD4(v51) = v39;
  v29 = v48;
  WORD5(v51) = v10;
  v30 = v51;
  v42 = (unsigned int)v12;
  *v48 = v50;
  v29[1] = v30;
LABEL_37:
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)1, 1uLL) )
  {
    v55 = v34;
    v54 = &v42;
    v56 = &P;
    p_P = (PVOID *)&v39;
    v60 = (char *)&v51 + 10;
    v62 = (char *)v6 + 24;
    v64 = (char *)&v50 + 8;
    v66 = &v50;
    v68 = &v51;
    LODWORD(P) = v4;
    v41 = (unsigned __int8)v31 & BYTE12(v51);
    v70 = &v41;
    v57 = v34;
    v59 = 2LL;
    v61 = 2LL;
    v63 = 8LL;
    v65 = 8LL;
    v67 = 8LL;
    v69 = 8LL;
    v71 = v31;
    TlgWrite(v31, &unk_18005CFAC, v32, v33, 0xBu, &pData);
  }
  if ( v8 && v8 != v52 )
    RmpFreeHeap(v8);
  if ( v7 && v7 != &v47 )
    RmpFreeHeap(v7);
  return v42;
}
