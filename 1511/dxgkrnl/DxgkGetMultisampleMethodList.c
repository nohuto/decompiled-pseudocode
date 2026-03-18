/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1C0142370
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C017A7E0 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 */

__int64 __fastcall DxgkGetMultisampleMethodList(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r8
  ULONG64 v10; // rcx
  int v11; // r9d
  PVOID v12; // r14
  ULONG64 v13; // rax
  __m128i v14; // xmm1
  unsigned int v15; // eax
  __int64 v16; // rsi
  SIZE_T v17; // rax
  unsigned __int64 v18; // kr00_8
  __int64 v19; // rdx
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  int PairingAdapters; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct DXGADAPTER *v32; // rsi
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // r13
  __int64 v44; // rbx
  int MultisamplingMethodSetFromClientVidPnSource; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rcx
  unsigned int v61; // r11d
  _QWORD *v62; // rdx
  _BYTE v64[160]; // [rsp+120h] [rbp+120h] BYREF

  v3 = (unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 2019;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2019);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    *(_QWORD *)(v7 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v7);
    v10 = qword_1C00467F0;
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    {
      v11 = 2019;
LABEL_48:
      Template_q(v10, &EventProfilerExit, v9, v11);
      return (unsigned int)v8;
    }
    return (unsigned int)v8;
  }
  *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
  memset((void *)(v3 + 20), 0, 0x24uLL);
  LODWORD(v8) = 0;
  v12 = 0LL;
  *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  v10 = MmUserProbeAddress;
  v13 = a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)v13;
  v14 = *(__m128i *)(v13 + 16);
  *(__m128i *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v14;
  *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v13 + 32);
  if ( _mm_srli_si128(v14, 8).m128i_u64[0] )
  {
    v15 = *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    if ( v15 )
    {
      v16 = v15;
      v18 = v15;
      v17 = 8LL * v15;
      if ( !is_mul_ok(v18, 8uLL) )
        v17 = -1LL;
      v12 = operator new[](v17, 0x4B677844u, PagedPool);
      *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v12;
      if ( !v12 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdLowResource(v10, v19, v9, v20);
        LODWORD(v8) = -1073741801;
        v21[3] = -1073741801LL;
        v21[4] = *(unsigned int *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        v21[5] = *(unsigned int *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
        v21[6] = v16;
        WdLogEvent5_WdLowResource(v21);
        *(_DWORD *)v3 = -1073741801;
      }
    }
  }
  if ( (int)v8 >= 0 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
      (DXGADAPTERBYHANDLE *)(v3 + 80),
      *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
      Current,
      (struct DXGADAPTER **)(v3 + 96));
    *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
    v26 = *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
    if ( v26 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(
                          *(struct DXGADAPTER **)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
                          *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
                          0LL,
                          (struct DXGADAPTER **)(v3 + 88));
      v8 = PairingAdapters;
      *(_DWORD *)v3 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v32 = *(struct DXGADAPTER **)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
        if ( !v32 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v29);
          *(_QWORD *)(v33 + 24) = 5373LL;
          WdLogEvent5_WdAssertion(v33);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 104), v32, 0LL);
        DXGADAPTER::ReleaseReference(v32);
        v34 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 104));
        v8 = v34;
        *(_DWORD *)v3 = v34;
        if ( v34 < 0 )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v36);
          v56[3] = v8;
          v56[4] = Current;
          v56[5] = *(unsigned int *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          v56[6] = v32;
          WdLogEvent5_WdDmmEvent(v56);
        }
        else
        {
          v39 = *(unsigned int *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
          if ( *(_DWORD *)(*((_QWORD *)v32 + 248) + 104LL) > (unsigned int)v39 )
          {
            if ( *((_QWORD *)v32 + 249) )
            {
              v42 = *(unsigned int *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
              v43 = *(int *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
              v44 = *(unsigned int *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v32,
                                                              (enum _D3DDDIFORMAT)*(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                            + 0x20),
                                                              v42,
                                                              v12,
                                                              v3 + 72);
              v8 = MultisamplingMethodSetFromClientVidPnSource;
              *(_DWORD *)v3 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
                v50[3] = v42;
                v50[4] = v44;
                v50[5] = v32;
                v50[6] = v8;
                WdLogEvent5_WdWarning(v50);
                v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51, v53, v54);
                v55[3] = v44;
                v55[4] = v32;
                v55[5] = *(unsigned int *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                v55[6] = *(unsigned int *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
                v55[7] = v43;
                WdLogEvent5_WdWarning(v55);
              }
              goto LABEL_30;
            }
            v41 = WdLogNewEntry5_WdDmmEvent(v36);
            *(_QWORD *)(v41 + 24) = v32;
            LODWORD(v8) = -1073741637;
            *(_QWORD *)(v41 + 32) = -1073741637LL;
            WdLogEvent5_WdDmmEvent(v41);
          }
          else
          {
            v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
            LODWORD(v8) = -1073741811;
            v40[3] = -1073741811LL;
            v40[4] = v32;
            v40[5] = v39;
            WdLogEvent5_WdWarning(v40);
          }
          *(_DWORD *)v3 = v8;
        }
LABEL_30:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 104));
        goto LABEL_33;
      }
      v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
      v57[3] = v26;
      v57[4] = *(unsigned int *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
      v57[5] = v8;
      WdLogEvent5_WdWarning(v57);
    }
    else
    {
      v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      LODWORD(v8) = -1073741811;
      v58[3] = -1073741811LL;
      v58[4] = Current;
      v58[5] = *(unsigned int *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      WdLogEvent5_WdWarning(v58);
      *(_DWORD *)v3 = -1073741811;
    }
LABEL_33:
    if ( (int)v8 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) >> 3;
      if ( v12 )
      {
        v59 = *(_QWORD *)(a1 + 24);
        v60 = 0LL;
        v61 = *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        v12 = *(PVOID *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        while ( 1 )
        {
          *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = v60;
          if ( (unsigned int)v60 >= v61 )
            break;
          v62 = (_QWORD *)(v59 + 12 * v60);
          if ( (unsigned __int64)(v62 + 1) > MmUserProbeAddress || v62 + 1 <= v62 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v62 = *((_QWORD *)v12 + v60);
          v60 = (unsigned int)(v60 + 1);
        }
        LODWORD(v8) = *(_DWORD *)v3;
      }
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 80));
  }
  if ( v12 )
    operator delete(v12);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    v11 = *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    goto LABEL_48;
  }
  return (unsigned int)v8;
}
