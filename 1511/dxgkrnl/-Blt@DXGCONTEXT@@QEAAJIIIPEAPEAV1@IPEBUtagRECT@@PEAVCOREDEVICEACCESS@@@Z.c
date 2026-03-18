/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C014B0AC
 * Callers:
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C015D5B0 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0003424 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0003470 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0069EE4 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007E190 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00C8FA4 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C014B898 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Blt(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        UINT a6,
        const struct tagRECT *a7)
{
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // edx
  __int64 v15; // r9
  int v16; // r8d
  struct _EX_RUNDOWN_REF *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rbx
  unsigned int v27; // edx
  __int64 v28; // r9
  int v29; // r8d
  struct _EX_RUNDOWN_REF *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // rax
  struct DXGDEVICE *v39; // r15
  unsigned int v40; // r14d
  struct ADAPTER_RENDER *v41; // rsi
  __int64 v42; // r8
  signed int Width; // esi
  signed int Height; // r14d
  UINT v45; // eax
  int *p_left; // rbx
  __int64 v47; // rdx
  unsigned int v48; // r8d
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  struct VIDSCH_SUBMIT_DATA_BASE *v56; // rdx
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rax
  struct DXGALLOCATION *v62; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGALLOCATION *v63; // [rsp+68h] [rbp-98h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v64[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _VIDMM_DMA_BUFFER *v65; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v66; // [rsp+88h] [rbp-78h]
  const RECT *v67; // [rsp+90h] [rbp-70h]
  struct DXGCONTEXT **v68; // [rsp+98h] [rbp-68h]
  struct _DXGKARG_DESCRIBEALLOCATION v69; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v70; // [rsp+D0h] [rbp-30h] BYREF
  struct _DXGKARG_PRESENT v71; // [rsp+100h] [rbp+0h] BYREF

  v68 = a5;
  v67 = a7;
  v8 = *((_QWORD *)this + 2);
  v66 = a4;
  v9 = a3;
  v10 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v8 + 16) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 4962LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 192));
  v14 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( v14 < *(_DWORD *)(v13 + 232)
    && (v15 = *(_QWORD *)(v13 + 216),
        v16 = *(_DWORD *)(v15 + 16LL * v14 + 8),
        (((unsigned int)v10 >> 26) & 0x30) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x30))
    && (v16 & 0x1000) == 0
    && (v16 & 0xF) != 0
    && (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0xF) == 5 )
  {
    v17 = *(struct _EX_RUNDOWN_REF **)(v15 + 16LL * v14);
  }
  else
  {
    v17 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v62, v17);
  ExReleasePushLockSharedEx(v13 + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( v62 )
  {
    memset(&v70, 0, sizeof(v70));
    v22 = *((_QWORD *)this + 2);
    v70.hAllocation = *(HANDLE *)(*((_QWORD *)v62 + 6) + 16LL);
    v23 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 1992LL),
            &v70,
            v19);
    v21 = v23;
    if ( v23 < 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v25[3] = v21;
      v25[4] = this;
      v25[5] = *((unsigned int *)v62 + 4);
      v25[6] = v62;
      v25[7] = (*(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v25);
      goto LABEL_60;
    }
    v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v26 + 192));
    v27 = ((unsigned int)v9 >> 6) & 0xFFFFFF;
    if ( v27 < *(_DWORD *)(v26 + 232)
      && (v28 = *(_QWORD *)(v26 + 216),
          v29 = *(_DWORD *)(v28 + 16LL * v27 + 8),
          (((unsigned int)v9 >> 26) & 0x30) == (*(_BYTE *)(v28 + 16LL * v27 + 8) & 0x30))
      && (v29 & 0x1000) == 0
      && (v29 & 0xF) != 0
      && (*(_BYTE *)(v28 + 16LL * v27 + 8) & 0xF) == 5 )
    {
      v30 = *(struct _EX_RUNDOWN_REF **)(v28 + 16LL * v27);
    }
    else
    {
      v30 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63, v30);
    ExReleasePushLockSharedEx(v26 + 192, 0LL);
    KeLeaveCriticalRegion();
    if ( !v63 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      v33[3] = v9;
LABEL_46:
      WdLogEvent5_WdError(v33);
      LODWORD(v21) = -1073741811;
LABEL_59:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v63);
      goto LABEL_60;
    }
    memset(&v69, 0, sizeof(v69));
    v34 = *((_QWORD *)this + 2);
    v69.hAllocation = *(HANDLE *)(*((_QWORD *)v63 + 6) + 16LL);
    v35 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 1992LL),
            &v69,
            v32);
    v21 = v35;
    if ( v35 < 0 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v36);
      v38[3] = v21;
      v38[4] = this;
      v38[5] = *((unsigned int *)v63 + 4);
      v38[6] = v63;
      v38[7] = (*(_DWORD *)(*((_QWORD *)v63 + 6) + 4LL) >> 6) & 0xF;
LABEL_50:
      WdLogEvent5_WdError(v38);
      goto LABEL_59;
    }
    if ( *((_BYTE *)this + 350) )
    {
      v39 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
      v40 = *((_DWORD *)this + 82);
      LOBYTE(v37) = *((_BYTE *)this + 351);
      v41 = (struct ADAPTER_RENDER *)*((_QWORD *)v39 + 2);
      if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v41 + 53) + 8LL) + 240LL))(
              *((_QWORD *)v41 + 54),
              *((_QWORD *)v63 + 3),
              v37,
              v40) )
      {
        LODWORD(v21) = MapGpuVaForAllocation(v41, v39, v40, v63);
        if ( (int)v21 < 0 )
          goto LABEL_59;
      }
      LOBYTE(v42) = *((_BYTE *)this + 351);
      if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 424LL)
                                                                                   + 8LL)
                                                                       + 240LL))(
              *((_QWORD *)v41 + 54),
              *((_QWORD *)v62 + 3),
              v42,
              v40) )
      {
        LODWORD(v21) = MapGpuVaForAllocation(v41, v39, v40, v62);
        if ( (int)v21 < 0 )
          goto LABEL_59;
      }
    }
    v64[0] = 0LL;
    Width = v70.Width;
    Height = v70.Height;
    if ( v69.Width < v70.Width )
      Width = v69.Width;
    if ( v69.Height < v70.Height )
      Height = v69.Height;
    v45 = 0;
    p_left = &v67->left;
    v64[1] = (struct VIDSCH_SUBMIT_DATA_BASE *)__PAIR64__(Height, Width);
    if ( a6 )
    {
      while ( p_left[2] <= Width && p_left[3] <= Height && p_left[1] >= 0 && *p_left >= 0 )
      {
        ++v45;
        p_left += 4;
        if ( v45 >= a6 )
          goto LABEL_40;
      }
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v36);
      v33[3] = Width;
      v33[4] = Height;
      v33[5] = p_left[2];
      v33[6] = p_left[3];
      goto LABEL_46;
    }
LABEL_40:
    v47 = *((_QWORD *)this + 37);
    v65 = 0LL;
    if ( !v47 )
      goto LABEL_48;
    v48 = *((_DWORD *)this + 76);
    v49 = 0LL;
    if ( !v48 )
      goto LABEL_48;
    while ( !*(_QWORD *)(v47 + 8 * v49) )
    {
      v49 = (unsigned int)(v49 + 1);
      if ( (unsigned int)v49 >= v48 )
        goto LABEL_48;
    }
    v65 = *(struct _VIDMM_DMA_BUFFER **)(v47 + 8 * v49);
    *(_QWORD *)(v47 + 8 * v49) = 0LL;
    if ( !v65 )
    {
LABEL_48:
      v50 = DXGCONTEXT::AcquireDmaBuffer(this, &v65, 0LL, 1);
      v21 = v50;
      if ( v50 < 0 )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v51);
        v38[3] = v21;
        goto LABEL_50;
      }
    }
    memset(&v71, 0, sizeof(v71));
    v71.Flags.Value |= 1u;
    v71.pDstSubRects = v67;
    v52 = *((_QWORD *)this + 2);
    v71.DstRect = *(RECT *)v64;
    v71.SubRectCnt = a6;
    v71.SrcRect = *(RECT *)v64;
    v64[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v52 + 16);
    v64[0] = 0LL;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v64);
    v56 = v64[0];
    if ( v64[0] )
    {
      *(_DWORD *)v64[0] |= 0x10000u;
      if ( (*(_DWORD *)(*((_QWORD *)v63 + 6) + 4LL) & 3) != 0 || (*(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) & 3) != 0 )
        *(_DWORD *)v56 |= 1u;
      *(_DWORD *)v56 |= 0x100u;
      v58 = DXGCONTEXT::SubmitPresent(this, 0LL, v66, v68, 0LL, v10, v9, &v71, 0LL, v65, v56, 0LL);
      v21 = v58;
      if ( v58 < 0 )
      {
        v60 = WdLogNewEntry5_WdError(v59);
        *(_QWORD *)(v60 + 24) = v21;
        WdLogEvent5_WdError(v60);
      }
    }
    else
    {
      v57 = WdLogNewEntry5_WdLowResource(v53, 0LL, v54, v55);
      *(_QWORD *)(v57 + 24) = 5099LL;
      WdLogEvent5_WdLowResource(v57);
      LODWORD(v21) = -1073741801;
    }
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v64);
    goto LABEL_59;
  }
  v20 = WdLogNewEntry5_WdError(v18);
  *(_QWORD *)(v20 + 24) = v10;
  WdLogEvent5_WdError(v20);
  LODWORD(v21) = -1073741811;
LABEL_60:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v62);
  return (unsigned int)v21;
}
