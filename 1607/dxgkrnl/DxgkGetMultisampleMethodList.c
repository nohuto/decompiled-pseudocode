/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1C0163DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C01A3FE4 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 */

__int64 __fastcall DxgkGetMultisampleMethodList(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  ULONG64 v13; // rcx
  int v14; // r9d
  PVOID v15; // r14
  ULONG64 v16; // rax
  __m128i v17; // xmm1
  unsigned int v18; // eax
  __int64 v19; // rsi
  SIZE_T v20; // rax
  unsigned __int64 v21; // kr00_8
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct DXGADAPTER *v27; // rsi
  int PairingAdapters; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct DXGADAPTER *v33; // rsi
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbx
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // r13
  __int64 v45; // rbx
  int MultisamplingMethodSetFromClientVidPnSource; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rdx
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rcx
  unsigned int v63; // r11d
  _BYTE v65[208]; // [rsp+150h] [rbp+150h] BYREF

  v3 = (unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = 2019;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2019);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  *(_QWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v11);
    WdLogEvent5_WdError(v9);
    v13 = qword_1C0056840;
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
      v14 = 2019;
LABEL_48:
      Template_q(v13, &EventProfilerExit, v12, v14);
      return (unsigned int)v10;
    }
    return (unsigned int)v10;
  }
  memset((void *)(v3 + 16), 0, 0x28uLL);
  LODWORD(v10) = 0;
  v15 = 0LL;
  *(_QWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  v13 = MmUserProbeAddress;
  v16 = a1;
  if ( a1 >= MmUserProbeAddress )
    v16 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)v16;
  v17 = *(__m128i *)(v16 + 16);
  *(__m128i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v17;
  *(_QWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v16 + 32);
  if ( _mm_srli_si128(v17, 8).m128i_u64[0] )
  {
    v18 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    if ( v18 )
    {
      v19 = v18;
      v21 = v18;
      v20 = 8LL * v18;
      if ( !is_mul_ok(v21, 8uLL) )
        v20 = -1LL;
      v15 = operator new(v20, 0x4B677844u, PagedPool);
      *(_QWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v15;
      if ( !v15 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13);
        LODWORD(v10) = -1073741801;
        v22[3] = -1073741801LL;
        v22[4] = *(unsigned int *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        v22[5] = *(unsigned int *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
        v22[6] = v19;
        WdLogEvent5_WdLowResource(v22);
        *(_DWORD *)v3 = -1073741801;
      }
    }
  }
  if ( (int)v10 >= 0 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
      (DXGADAPTERBYHANDLE *)(v3 + 104),
      *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
      ProcessDxgProcess,
      (struct DXGADAPTER **)(v3 + 80));
    *(_QWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
    v27 = *(struct DXGADAPTER **)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    if ( v27 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(
                          v27,
                          *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
                          0LL,
                          0LL,
                          (struct DXGADAPTER **)(v3 + 88),
                          (unsigned __int64 *)(v3 + 96));
      v10 = PairingAdapters;
      *(_DWORD *)v3 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v33 = *(struct DXGADAPTER **)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
        if ( !v33 )
        {
          v34 = WdLogNewEntry5_WdAssertion(v30);
          *(_QWORD *)(v34 + 24) = 5383LL;
          WdLogEvent5_WdAssertion(v34);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 128), v33, 0LL);
        DXGADAPTER::ReleaseReference(v33);
        v35 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 128));
        v10 = v35;
        *(_DWORD *)v3 = v35;
        if ( v35 < 0 )
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v37);
          v57[3] = v10;
          v57[4] = ProcessDxgProcess;
          v57[5] = *(unsigned int *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          v57[6] = v33;
          WdLogEvent5_WdDmmEvent(v57);
        }
        else
        {
          v40 = *(unsigned int *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
          if ( *(_DWORD *)(*((_QWORD *)v33 + 266) + 80LL) > (unsigned int)v40 )
          {
            if ( *((_QWORD *)v33 + 267) )
            {
              v43 = *(unsigned int *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
              v44 = *(int *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
              v45 = *(unsigned int *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v33,
                                                              (_D3DDDIFORMAT)*(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 0x20),
                                                              v43,
                                                              v15,
                                                              v3 + 64);
              v10 = MultisamplingMethodSetFromClientVidPnSource;
              *(_DWORD *)v3 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49, v50);
                v51[3] = v43;
                v51[4] = v45;
                v51[5] = v33;
                v51[6] = v10;
                WdLogEvent5_WdWarning(v51);
                v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52, v54, v55);
                v56[3] = v45;
                v56[4] = v33;
                v56[5] = *(unsigned int *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                v56[6] = *(unsigned int *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
                v56[7] = v44;
                WdLogEvent5_WdWarning(v56);
              }
              goto LABEL_30;
            }
            v42 = WdLogNewEntry5_WdDmmEvent(v37);
            *(_QWORD *)(v42 + 24) = v33;
            LODWORD(v10) = -1073741637;
            *(_QWORD *)(v42 + 32) = -1073741637LL;
            WdLogEvent5_WdDmmEvent(v42);
          }
          else
          {
            v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
            LODWORD(v10) = -1073741811;
            v41[3] = -1073741811LL;
            v41[4] = v33;
            v41[5] = v40;
            WdLogEvent5_WdWarning(v41);
          }
          *(_DWORD *)v3 = v10;
        }
LABEL_30:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 128));
        goto LABEL_33;
      }
      v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
      v59[3] = v27;
      v59[4] = *(unsigned int *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
      v59[5] = v10;
      WdLogEvent5_WdWarning(v59);
    }
    else
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      LODWORD(v10) = -1073741811;
      v60[3] = -1073741811LL;
      v60[4] = ProcessDxgProcess;
      v60[5] = *(unsigned int *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      WdLogEvent5_WdWarning(v60);
      *(_DWORD *)v3 = -1073741811;
    }
LABEL_33:
    if ( (int)v10 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = *(_QWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) >> 3;
      if ( v15 )
      {
        v61 = *(_QWORD *)(a1 + 24);
        v62 = 0LL;
        v63 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        v15 = *(PVOID *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        while ( 1 )
        {
          *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v62;
          if ( (unsigned int)v62 >= v63 )
            break;
          v58 = (_QWORD *)(v61 + 12 * v62);
          if ( (unsigned __int64)(v58 + 1) > MmUserProbeAddress || v58 + 1 <= v58 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v58 = *((_QWORD *)v15 + v62);
          v62 = (unsigned int)(v62 + 1);
        }
        LODWORD(v10) = *(_DWORD *)v3;
      }
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 104), (unsigned __int64)v58);
  }
  if ( v15 )
    operator delete(v15);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    v14 = *(_DWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C);
    goto LABEL_48;
  }
  return (unsigned int)v10;
}
