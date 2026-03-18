/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1C013BF40
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C0176248 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 */

__int64 __fastcall DxgkGetMultisampleMethodList(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  ULONG64 v11; // rcx
  int v12; // r9d
  PVOID v13; // r14
  ULONG64 v14; // rax
  __m128i v15; // xmm1
  unsigned int v16; // eax
  __int64 v17; // rsi
  SIZE_T v18; // rax
  unsigned __int64 v19; // kr00_8
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  int PairingAdapters; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  struct DXGADAPTER *v31; // rsi
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // r13
  __int64 v43; // rbx
  int MultisamplingMethodSetFromClientVidPnSource; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rcx
  unsigned int v60; // r11d
  _QWORD *v61; // rdx
  _BYTE v63[160]; // [rsp+120h] [rbp+120h] BYREF

  v3 = (unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 2019;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2019);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    *(_QWORD *)(v7 + 32) = PsGetCurrentProcess(v9);
    WdLogEvent5_WdError(v7);
    v11 = qword_1C00467F0;
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    {
      v12 = 2019;
LABEL_48:
      Template_q(v11, &EventProfilerExit, v10, v12);
      return (unsigned int)v8;
    }
    return (unsigned int)v8;
  }
  *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
  memset((void *)(v3 + 20), 0, 0x24uLL);
  LODWORD(v8) = 0;
  v13 = 0LL;
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  v11 = MmUserProbeAddress;
  v14 = a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)v14;
  v15 = *(__m128i *)(v14 + 16);
  *(__m128i *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v15;
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v14 + 32);
  if ( _mm_srli_si128(v15, 8).m128i_u64[0] )
  {
    v16 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    if ( v16 )
    {
      v17 = v16;
      v19 = v16;
      v18 = 8LL * v16;
      if ( !is_mul_ok(v19, 8uLL) )
        v18 = -1LL;
      v13 = operator new[](v18, 0x4B677844u, PagedPool);
      *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v13;
      if ( !v13 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdLowResource(v11);
        LODWORD(v8) = -1073741801;
        v20[3] = -1073741801LL;
        v20[4] = *(unsigned int *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        v20[5] = *(unsigned int *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
        v20[6] = v17;
        WdLogEvent5_WdLowResource(v20);
        *(_DWORD *)v3 = -1073741801;
      }
    }
  }
  if ( (int)v8 >= 0 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
      (DXGADAPTERBYHANDLE *)(v3 + 80),
      *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
      Current,
      (struct DXGADAPTER **)(v3 + 96));
    *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
    v25 = *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
    if ( v25 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(
                          *(struct DXGADAPTER **)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
                          *(unsigned int *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
                          0LL,
                          (struct DXGADAPTER **)(v3 + 88));
      v8 = PairingAdapters;
      *(_DWORD *)v3 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v31 = *(struct DXGADAPTER **)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
        if ( !v31 )
        {
          v32 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
          *(_QWORD *)(v32 + 24) = 5222LL;
          WdLogEvent5_WdAssertion(v32);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 104), v31, 0LL);
        DXGADAPTER::ReleaseReference(v31);
        v33 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 104));
        v8 = v33;
        *(_DWORD *)v3 = v33;
        if ( v33 < 0 )
        {
          v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35);
          v55[3] = v8;
          v55[4] = Current;
          v55[5] = *(unsigned int *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          v55[6] = v31;
          WdLogEvent5_WdDmmEvent(v55);
        }
        else
        {
          v38 = *(unsigned int *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
          if ( *(_DWORD *)(*((_QWORD *)v31 + 247) + 80LL) > (unsigned int)v38 )
          {
            if ( *((_QWORD *)v31 + 248) )
            {
              v41 = *(unsigned int *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
              v42 = *(int *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
              v43 = *(unsigned int *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v31,
                                                              (enum _D3DDDIFORMAT)*(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                            + 0x20),
                                                              v41,
                                                              v13,
                                                              v3 + 72);
              v8 = MultisamplingMethodSetFromClientVidPnSource;
              *(_DWORD *)v3 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
                v49[3] = v41;
                v49[4] = v43;
                v49[5] = v31;
                v49[6] = v8;
                WdLogEvent5_WdWarning(v49);
                v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
                v54[3] = v43;
                v54[4] = v31;
                v54[5] = *(unsigned int *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                v54[6] = *(unsigned int *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
                v54[7] = v42;
                WdLogEvent5_WdWarning(v54);
              }
              goto LABEL_30;
            }
            v40 = WdLogNewEntry5_WdDmmEvent(v35);
            *(_QWORD *)(v40 + 24) = v31;
            LODWORD(v8) = -1073741637;
            *(_QWORD *)(v40 + 32) = -1073741637LL;
            WdLogEvent5_WdDmmEvent(v40);
          }
          else
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
            LODWORD(v8) = -1073741811;
            v39[3] = -1073741811LL;
            v39[4] = v31;
            v39[5] = v38;
            WdLogEvent5_WdWarning(v39);
          }
          *(_DWORD *)v3 = v8;
        }
LABEL_30:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 104));
        goto LABEL_33;
      }
      v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
      v56[3] = v25;
      v56[4] = *(unsigned int *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
      v56[5] = v8;
      WdLogEvent5_WdWarning(v56);
    }
    else
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      LODWORD(v8) = -1073741811;
      v57[3] = -1073741811LL;
      v57[4] = Current;
      v57[5] = *(unsigned int *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      WdLogEvent5_WdWarning(v57);
      *(_DWORD *)v3 = -1073741811;
    }
LABEL_33:
    if ( (int)v8 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) >> 3;
      if ( v13 )
      {
        v58 = *(_QWORD *)(a1 + 24);
        v59 = 0LL;
        v60 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        v13 = *(PVOID *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        while ( 1 )
        {
          *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = v59;
          if ( (unsigned int)v59 >= v60 )
            break;
          v61 = (_QWORD *)(v58 + 12 * v59);
          if ( (unsigned __int64)(v61 + 1) > MmUserProbeAddress || v61 + 1 <= v61 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v61 = *((_QWORD *)v13 + v59);
          v59 = (unsigned int)(v59 + 1);
        }
        LODWORD(v8) = *(_DWORD *)v3;
      }
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 80));
  }
  if ( v13 )
    operator delete(v13);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    v12 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    goto LABEL_48;
  }
  return (unsigned int)v8;
}
