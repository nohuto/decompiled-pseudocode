/*
 * XREFs of DxgkAdjustFullscreenGamma @ 0x1C014E650
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0006B3C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0006B7C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0020D58 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0020DAC (-IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C0086AD8 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C015EE6C (-SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z.c)
 */

__int64 __fastcall DxgkAdjustFullscreenGamma(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  _OWORD *v4; // rsi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r14
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  bool v31; // zf
  __int64 v32; // rcx
  __int64 v33; // r15
  __int64 v34; // rax
  DXGDEVICE *v35; // r12
  struct DXGDEVICE *VidPnSourceOwner; // rax
  float v37; // xmm7_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  __int64 v40; // rax
  float v41; // xmm6_4
  __int64 v42; // rax
  float *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned int v50[4]; // [rsp+68h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (_OWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2127);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 7468LL;
    WdLogEvent5_WdError(v9);
LABEL_6:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v11, 2127);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v3 = *v4;
  *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v4[1];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)(v3 + 8),
    *v3,
    ProcessDxgProcess,
    (struct DXGADAPTER **)v3 + 6);
  v17 = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v18 + 24) = ProcessDxgProcess;
    *(_QWORD *)(v18 + 32) = *v3;
    WdLogEvent5_WdError(v18);
LABEL_14:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v3 + 4, v19);
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(v17 + 2128) )
  {
    v20 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v20 + 24) = v17;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
    goto LABEL_14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 64),
    *(struct DXGADAPTER *const *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
    0LL);
  v21 = COREADAPTERACCESS::AcquireExclusive((_QWORD *)v3 + 8);
  v26 = v21;
  if ( v21 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v27 + 24) = v26;
    WdLogEvent5_WdError(v27);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 16));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v3 + 4, v28);
    v31 = (qword_1C0056840 & 2) == 0;
    goto LABEL_19;
  }
  v32 = *(_QWORD *)(v17 + 2128);
  v33 = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  if ( (unsigned int)v33 >= *(_DWORD *)(v32 + 80) )
  {
LABEL_24:
    v34 = WdLogNewEntry5_WdWarning(v32, v22, v24, v25);
    *(_QWORD *)(v34 + 24) = v33;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v34);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 16));
    goto LABEL_14;
  }
  v35 = 0LL;
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v32, v33) == 2
    || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v17 + 2128), v33) == 3 )
  {
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*(DXGADAPTER ***)(v17 + 2128), v33);
  }
  else
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(*(DXGADAPTER ***)(v17 + 2128), v33) )
      goto LABEL_31;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*(DXGADAPTER ***)(v17 + 2128), v33);
  }
  v35 = VidPnSourceOwner;
LABEL_31:
  if ( !v35 )
    goto LABEL_24;
  LODWORD(v26) = 0;
  v37 = *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( v37 > 4.0
    || v37 < 0.2
    || (v38 = *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC), v38 > 4.0)
    || v38 < 0.2
    || (v39 = *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), v39 > 4.0)
    || v39 < 0.2 )
  {
    v40 = WdLogNewEntry5_WdWarning(v32, v22, v24, v25);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v40);
    LODWORD(v26) = -1073741811;
  }
  v41 = *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
  if ( v41 > 0.6
    || v41 < -0.6
    || *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) > 0.6
    || *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) < -0.6
    || *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) > 0.6
    || *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) < -0.6 )
  {
    v42 = WdLogNewEntry5_WdWarning(v32, v22, v24, v25);
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v42);
    LODWORD(v26) = -1073741811;
  }
  v43 = 0LL;
  if ( (int)v26 >= 0 )
  {
    if ( v37 != 1.0
      || *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) != 1.0
      || *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) != 1.0
      || v41 != 0.0
      || *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) != 0.0
      || *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) != 0.0 )
    {
      v43 = (float *)operator new(0x18uLL, 0x4B677844u, PagedPool);
      if ( !v43 )
      {
        v48 = WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
        *(_QWORD *)(v48 + 24) = v35;
        LODWORD(v26) = -1073741801;
        *(_QWORD *)(v48 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v48);
        goto LABEL_57;
      }
      *v43 = v37;
      v43[1] = *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
      v43[2] = *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      v43[3] = v41;
      v43[4] = *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      v43[5] = *(float *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
    }
    DXGDEVICE::SetFullscreenGammaRampAdjustment(v35, v33, (struct DXGK_GAMMA_ADJUSTMENT *)v43);
    LODWORD(v26) = ADAPTER_DISPLAY::SetGammaRamp(*(PERESOURCE ***)(v17 + 2128), v33, v35);
  }
LABEL_57:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 16));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v3 + 4, v49);
  v29 = qword_1C0056840;
  v31 = (qword_1C0056840 & 2) == 0;
LABEL_19:
  if ( !v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 2127);
  return (unsigned int)v26;
}
