/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0170448
 * Callers:
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0182F10 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0009F8C (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0009FD8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0093988 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A8790 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00AEF28 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C0171294 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
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
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // edx
  __int64 v16; // r9
  int v17; // r8d
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // edi
  _QWORD *v21; // rax
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rbx
  _QWORD *v28; // rax
  __int64 v29; // rbx
  unsigned int v30; // edx
  __int64 v31; // r9
  int v32; // r8d
  struct _EX_RUNDOWN_REF *v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rbx
  _QWORD *v43; // rax
  struct DXGDEVICE *v44; // r14
  unsigned int v45; // edi
  struct ADAPTER_RENDER *v46; // rbx
  __int64 v47; // r8
  int v48; // eax
  const struct tagRECT *v49; // rbx
  signed int Width; // edi
  signed int Height; // r14d
  UINT v52; // eax
  __int64 v53; // rdx
  unsigned int v54; // r8d
  __int64 v55; // rcx
  _QWORD *v56; // rax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v61; // rdx
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rax
  struct DXGALLOCATION *v68; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v69; // [rsp+78h] [rbp-88h] BYREF
  struct _VIDMM_DMA_BUFFER *v70; // [rsp+80h] [rbp-80h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v71[2]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v72; // [rsp+98h] [rbp-68h]
  const RECT *v73; // [rsp+A0h] [rbp-60h]
  struct DXGCONTEXT **v74; // [rsp+A8h] [rbp-58h]
  struct _DXGKARG_DESCRIBEALLOCATION v75; // [rsp+B0h] [rbp-50h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v76; // [rsp+E0h] [rbp-20h] BYREF
  struct _DXGKARG_PRESENT v77; // [rsp+110h] [rbp+10h] BYREF

  v74 = a5;
  v8 = *((_QWORD *)this + 2);
  v72 = a4;
  v9 = a3;
  v10 = a2;
  v11 = *(_QWORD *)(v8 + 16);
  v73 = a7;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v11 + 16)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 5482LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 184));
  v15 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( v15 < *(_DWORD *)(v14 + 224)
    && (v16 = *(_QWORD *)(v14 + 208),
        v17 = *(_DWORD *)(v16 + 16LL * v15 + 8),
        (((unsigned int)v10 >> 26) & 0x30) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x30))
    && (v17 & 0x1000) == 0
    && (v17 & 0xF) != 0
    && (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0xF) == 5 )
  {
    v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * v15);
  }
  else
  {
    v18 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v69, v18);
  ExReleasePushLockSharedEx(v14 + 184, 0LL);
  KeLeaveCriticalRegion();
  v20 = -1073741811;
  if ( v69 )
  {
    v22 = *((_QWORD *)this + 2);
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v69 + 1) + 16LL) + 16LL) != v23 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v21[3] = *((_QWORD *)this + 2);
      v21[4] = v69;
      v21[5] = -1073741811LL;
      goto LABEL_14;
    }
    memset(&v76, 0, sizeof(v76));
    v76.hAllocation = *(HANDLE *)(*((_QWORD *)v69 + 6) + 16LL);
    v25 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 2136LL),
            &v76,
            v24);
    v27 = v25;
    if ( v25 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v28[3] = v27;
      v28[4] = this;
      v28[5] = *((unsigned int *)v69 + 4);
      v28[6] = v69;
      v28[7] = (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v28);
      v20 = v27;
      goto LABEL_67;
    }
    v29 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v29 + 184));
    v30 = ((unsigned int)v9 >> 6) & 0xFFFFFF;
    if ( v30 < *(_DWORD *)(v29 + 224)
      && (v31 = *(_QWORD *)(v29 + 208),
          v32 = *(_DWORD *)(v31 + 16LL * v30 + 8),
          (((unsigned int)v9 >> 26) & 0x30) == (*(_BYTE *)(v31 + 16LL * v30 + 8) & 0x30))
      && (v32 & 0x1000) == 0
      && (v32 & 0xF) != 0
      && (*(_BYTE *)(v31 + 16LL * v30 + 8) & 0xF) == 5 )
    {
      v33 = *(struct _EX_RUNDOWN_REF **)(v31 + 16LL * v30);
    }
    else
    {
      v33 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v68, v33);
    ExReleasePushLockSharedEx(v29 + 184, 0LL);
    KeLeaveCriticalRegion();
    v20 = -1073741811;
    if ( !v68 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v35[3] = v9;
LABEL_28:
      WdLogEvent5_WdError(v35);
LABEL_66:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v68);
      goto LABEL_67;
    }
    v36 = *((_QWORD *)this + 2);
    v37 = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v68 + 1) + 16LL) + 16LL) != v37 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v35[3] = *((_QWORD *)this + 2);
      v35[4] = v68;
      v35[5] = -1073741811LL;
      goto LABEL_28;
    }
    memset(&v75, 0, sizeof(v75));
    v75.hAllocation = *(HANDLE *)(*((_QWORD *)v68 + 6) + 16LL);
    v39 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 2136LL),
            &v75,
            v38);
    v42 = v39;
    if ( v39 < 0 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v40);
      v43[3] = v42;
      v43[4] = this;
      v43[5] = *((unsigned int *)v68 + 4);
      v43[6] = v68;
      v43[7] = (*(_DWORD *)(*((_QWORD *)v68 + 6) + 4LL) >> 6) & 0xF;
LABEL_56:
      WdLogEvent5_WdError(v43);
      v20 = v42;
      goto LABEL_66;
    }
    if ( *((_BYTE *)this + 350) )
    {
      if ( (v44 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
            v45 = *((_DWORD *)this + 82),
            LOBYTE(v41) = *((_BYTE *)this + 351),
            v46 = (struct ADAPTER_RENDER *)*((_QWORD *)v44 + 2),
            !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v46 + 50) + 8LL)
                                                                        + 248LL))(
               *((_QWORD *)v46 + 51),
               *((_QWORD *)v68 + 3),
               v41,
               v45))
        && (v48 = MapGpuVaForAllocation(v46, v44, v45, v68), v48 < 0)
        || (LOBYTE(v47) = *((_BYTE *)this + 351),
            !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 400LL)
                                                                                    + 8LL)
                                                                        + 248LL))(
               *((_QWORD *)v46 + 51),
               *((_QWORD *)v69 + 3),
               v47,
               v45))
        && (v48 = MapGpuVaForAllocation(v46, v44, v45, v69), v48 < 0) )
      {
        v20 = v48;
        goto LABEL_66;
      }
    }
    v49 = a7;
    v71[0] = 0LL;
    Width = v76.Width;
    Height = v76.Height;
    if ( v75.Width < v76.Width )
      Width = v75.Width;
    if ( v75.Height < v76.Height )
      Height = v75.Height;
    v52 = 0;
    v71[1] = (struct VIDSCH_SUBMIT_DATA_BASE *)__PAIR64__(Height, Width);
    if ( a6 )
    {
      while ( v49->right <= Width && v49->bottom <= Height && v49->top >= 0 && v49->left >= 0 )
      {
        ++v52;
        ++v49;
        if ( v52 >= a6 )
          goto LABEL_47;
      }
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v40);
      v56[3] = Width;
      v56[4] = Height;
      v56[5] = v49->right;
      v56[6] = v49->bottom;
      WdLogEvent5_WdError(v56);
      v20 = -1073741811;
      goto LABEL_66;
    }
LABEL_47:
    v53 = *((_QWORD *)this + 37);
    v70 = 0LL;
    if ( !v53 )
      goto LABEL_54;
    v54 = *((_DWORD *)this + 76);
    v55 = 0LL;
    if ( !v54 )
      goto LABEL_54;
    while ( !*(_QWORD *)(v53 + 8 * v55) )
    {
      v55 = (unsigned int)(v55 + 1);
      if ( (unsigned int)v55 >= v54 )
        goto LABEL_54;
    }
    v70 = *(struct _VIDMM_DMA_BUFFER **)(v53 + 8 * v55);
    *(_QWORD *)(v53 + 8 * v55) = 0LL;
    if ( !v70 )
    {
LABEL_54:
      v57 = DXGCONTEXT::AcquireDmaBuffer(this, &v70, 0LL, 1);
      v42 = v57;
      if ( v57 < 0 )
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdError(v58);
        v43[3] = v42;
        goto LABEL_56;
      }
    }
    memset(&v77, 0, sizeof(v77));
    v77.Flags.Value |= 1u;
    v77.pDstSubRects = v73;
    v59 = *((_QWORD *)this + 2);
    v77.DstRect = *(RECT *)v71;
    v77.SubRectCnt = a6;
    v77.SrcRect = *(RECT *)v71;
    v71[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v59 + 16);
    v71[0] = 0LL;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v71);
    v61 = v71[0];
    if ( v71[0] )
    {
      *(_DWORD *)v71[0] |= 0x10000u;
      if ( (*(_DWORD *)(*((_QWORD *)v68 + 6) + 4LL) & 3) != 0 || (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) & 3) != 0 )
        *(_DWORD *)v61 |= 1u;
      *(_DWORD *)v61 |= 0x100u;
      v63 = DXGCONTEXT::SubmitPresent(this, 0LL, v72, v74, 0LL, v10, v9, &v77, 0LL, v70, v61, v75.Format, 0LL);
      v65 = v63;
      if ( v63 < 0 )
      {
        v66 = WdLogNewEntry5_WdError(v64);
        *(_QWORD *)(v66 + 24) = v65;
        WdLogEvent5_WdError(v66);
      }
      v20 = v65;
    }
    else
    {
      v62 = WdLogNewEntry5_WdLowResource(v60);
      *(_QWORD *)(v62 + 24) = 5637LL;
      WdLogEvent5_WdLowResource(v62);
      v20 = -1073741801;
    }
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v71);
    goto LABEL_66;
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
  v21[3] = v10;
LABEL_14:
  WdLogEvent5_WdError(v21);
LABEL_67:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v69);
  return v20;
}
