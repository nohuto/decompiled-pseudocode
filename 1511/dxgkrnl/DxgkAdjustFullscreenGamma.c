/*
 * XREFs of DxgkAdjustFullscreenGamma @ 0x1C0130060
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0007AD8 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0007E78 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001ABD8 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C001AD34 (-IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C009A06C (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C013B620 (-SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z.c)
 */

__int64 __fastcall DxgkAdjustFullscreenGamma(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // rsi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  bool v27; // zf
  __int64 v28; // rcx
  __int64 v29; // r15
  __int64 v30; // rax
  DXGDEVICE *v31; // r12
  struct DXGDEVICE *VidPnSourceOwner; // rax
  float v33; // xmm7_4
  float v34; // xmm0_4
  float v35; // xmm0_4
  __int64 v36; // rax
  float v37; // xmm6_4
  __int64 v38; // rax
  float *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  char v45; // [rsp+68h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2127);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 32118LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v8, &EventProfilerExit, v9, 2127);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *v4;
  *(_OWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v4[1];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    Current,
    (struct DXGADAPTER **)(v3 + 8));
  v15 = *(_QWORD *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v16 + 24) = Current;
    *(_QWORD *)(v16 + 32) = *(unsigned int *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    WdLogEvent5_WdError(v16);
LABEL_14:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(v15 + 1984) )
  {
    v17 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v17 + 24) = v15;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 48),
    *(struct DXGADAPTER *const *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    0LL);
  v18 = COREADAPTERACCESS::AcquireExclusive((_QWORD *)(v3 + 48));
  v23 = v18;
  if ( v18 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v24 + 24) = v23;
    WdLogEvent5_WdError(v24);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 48));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL));
    v27 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_19;
  }
  v28 = *(_QWORD *)(v15 + 1984);
  v29 = *(unsigned int *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
  if ( (unsigned int)v29 >= *(_DWORD *)(v28 + 104) )
  {
LABEL_24:
    v30 = WdLogNewEntry5_WdWarning(v28, v19, v21, v22);
    *(_QWORD *)(v30 + 24) = v29;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v30);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 48));
    goto LABEL_14;
  }
  v31 = 0LL;
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v28, v29) == 2
    || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v15 + 1984), v29) == 3 )
  {
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*(DXGADAPTER ***)(v15 + 1984), v29);
  }
  else
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(*(DXGADAPTER ***)(v15 + 1984), v29) )
      goto LABEL_31;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*(DXGADAPTER ***)(v15 + 1984), v29);
  }
  v31 = VidPnSourceOwner;
LABEL_31:
  if ( !v31 )
    goto LABEL_24;
  LODWORD(v23) = 0;
  v33 = *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  if ( v33 > 4.0
    || v33 < 0.2
    || (v34 = *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C), v34 > 4.0)
    || v34 < 0.2
    || (v35 = *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20), v35 > 4.0)
    || v35 < 0.2 )
  {
    v36 = WdLogNewEntry5_WdWarning(v28, v19, v21, v22);
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v36);
    LODWORD(v23) = -1073741811;
  }
  v37 = *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24);
  if ( v37 > 0.6
    || v37 < -0.6
    || *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) > 0.6
    || *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) < -0.6
    || *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) > 0.6
    || *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) < -0.6 )
  {
    v38 = WdLogNewEntry5_WdWarning(v28, v19, v21, v22);
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v38);
    LODWORD(v23) = -1073741811;
  }
  v39 = 0LL;
  if ( (int)v23 >= 0 )
  {
    if ( v33 != 1.0
      || *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) != 1.0
      || *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) != 1.0
      || v37 != 0.0
      || *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) != 0.0
      || *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) != 0.0 )
    {
      v39 = (float *)operator new[](0x18uLL, 0x4B677844u, PagedPool);
      if ( !v39 )
      {
        v44 = WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
        *(_QWORD *)(v44 + 24) = v31;
        LODWORD(v23) = -1073741801;
        *(_QWORD *)(v44 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v44);
        goto LABEL_57;
      }
      *v39 = v33;
      v39[1] = *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
      v39[2] = *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      v39[3] = v37;
      v39[4] = *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      v39[5] = *(float *)(((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C);
    }
    DXGDEVICE::SetFullscreenGammaRampAdjustment(v31, v29, (struct DXGK_GAMMA_ADJUSTMENT *)v39);
    LODWORD(v23) = ADAPTER_DISPLAY::SetGammaRamp(*(PERESOURCE ***)(v15 + 1984), v29, v31);
  }
LABEL_57:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 48));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v45 & 0xFFFFFFFFFFFFFFC0uLL));
  v25 = qword_1C00467F0;
  v27 = (qword_1C00467F0 & 2) == 0;
LABEL_19:
  if ( !v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 2127);
  return (unsigned int)v23;
}
