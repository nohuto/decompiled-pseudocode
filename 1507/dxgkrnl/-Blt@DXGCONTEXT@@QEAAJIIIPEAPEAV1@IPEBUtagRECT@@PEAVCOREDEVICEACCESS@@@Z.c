/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0147318
 * Callers:
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0159298 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0001600 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000E5C0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006B8B0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B3A64 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00B87DC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C0147B7C (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int v18; // edx
  __int64 v19; // r9
  int v20; // r8d
  struct _EX_RUNDOWN_REF *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // edi
  _QWORD *v25; // rax
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rbx
  _QWORD *v34; // rax
  __int64 v35; // rbx
  unsigned int v36; // edx
  __int64 v37; // r9
  int v38; // r8d
  struct _EX_RUNDOWN_REF *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rax
  __int64 v43; // r14
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rbx
  _QWORD *v52; // rax
  struct DXGDEVICE *v53; // r14
  unsigned int v54; // edi
  struct ADAPTER_RENDER *v55; // rbx
  int v56; // eax
  const struct tagRECT *v57; // rbx
  signed int Width; // edi
  signed int Height; // r14d
  UINT v60; // eax
  __int64 v61; // rdx
  unsigned int v62; // r8d
  __int64 v63; // rcx
  _QWORD *v64; // rax
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v69; // rdx
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // rbx
  __int64 v74; // rax
  struct DXGALLOCATION *v76; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGALLOCATION *v77; // [rsp+68h] [rbp-98h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v78[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _VIDMM_DMA_BUFFER *v79; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v80; // [rsp+88h] [rbp-78h]
  const RECT *v81; // [rsp+90h] [rbp-70h]
  struct DXGCONTEXT **v82; // [rsp+98h] [rbp-68h]
  struct _DXGKARG_DESCRIBEALLOCATION v83; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v84; // [rsp+D0h] [rbp-30h] BYREF
  struct _DXGKARG_PRESENT v85; // [rsp+100h] [rbp+0h] BYREF

  v82 = a5;
  v8 = *((_QWORD *)this + 2);
  v80 = a4;
  v9 = a3;
  v10 = a2;
  v11 = *(_QWORD *)(v8 + 16);
  v81 = a7;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v11 + 16)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = 4980LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v17 + 192));
  v18 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( v18 < *(_DWORD *)(v17 + 232)
    && (v19 = *(_QWORD *)(v17 + 216),
        v20 = *(_DWORD *)(v19 + 16LL * v18 + 8),
        (((unsigned int)v10 >> 26) & 0x30) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x30))
    && (v20 & 0x1000) == 0
    && (v20 & 0xF) != 0
    && (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0xF) == 5 )
  {
    v21 = *(struct _EX_RUNDOWN_REF **)(v19 + 16LL * v18);
  }
  else
  {
    v21 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v76, v21);
  ExReleasePushLockSharedEx(v17 + 192, 0LL);
  KeLeaveCriticalRegion();
  v24 = -1073741811;
  if ( v76 )
  {
    v26 = *((_QWORD *)this + 2);
    v27 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 1) + 16LL) + 16LL) != v27 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v25[3] = *((_QWORD *)this + 2);
      v25[4] = v76;
      v25[5] = -1073741811LL;
      goto LABEL_14;
    }
    memset(&v84, 0, sizeof(v84));
    v84.hAllocation = *(HANDLE *)(*((_QWORD *)v76 + 6) + 16LL);
    v31 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 1984LL),
            &v84,
            v23);
    v33 = v31;
    if ( v31 < 0 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v32);
      v34[3] = v33;
      v34[4] = this;
      v34[5] = *((unsigned int *)v76 + 4);
      v34[6] = v76;
      v34[7] = (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v34);
      v24 = v33;
      goto LABEL_67;
    }
    v35 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v35 + 192));
    v36 = ((unsigned int)v9 >> 6) & 0xFFFFFF;
    if ( v36 < *(_DWORD *)(v35 + 232)
      && (v37 = *(_QWORD *)(v35 + 216),
          v38 = *(_DWORD *)(v37 + 16LL * v36 + 8),
          (((unsigned int)v9 >> 26) & 0x30) == (*(_BYTE *)(v37 + 16LL * v36 + 8) & 0x30))
      && (v38 & 0x1000) == 0
      && (v38 & 0xF) != 0
      && (*(_BYTE *)(v37 + 16LL * v36 + 8) & 0xF) == 5 )
    {
      v39 = *(struct _EX_RUNDOWN_REF **)(v37 + 16LL * v36);
    }
    else
    {
      v39 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v77, v39);
    ExReleasePushLockSharedEx(v35 + 192, 0LL);
    KeLeaveCriticalRegion();
    v24 = -1073741811;
    if ( !v77 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v40);
      v42[3] = v9;
LABEL_28:
      WdLogEvent5_WdError(v42);
LABEL_66:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v77, v45, v46, v47);
      goto LABEL_67;
    }
    v43 = *((_QWORD *)this + 2);
    v44 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v77 + 1) + 16LL) + 16LL) != v44 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v44);
      v42[3] = *((_QWORD *)this + 2);
      v42[4] = v77;
      v42[5] = -1073741811LL;
      goto LABEL_28;
    }
    memset(&v83, 0, sizeof(v83));
    v83.hAllocation = *(HANDLE *)(*((_QWORD *)v77 + 6) + 16LL);
    v48 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v43 + 16) + 16LL) + 1984LL),
            &v83,
            v41);
    v51 = v48;
    if ( v48 < 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v49);
      v52[3] = v51;
      v52[4] = this;
      v52[5] = *((unsigned int *)v77 + 4);
      v52[6] = v77;
      v52[7] = (*(_DWORD *)(*((_QWORD *)v77 + 6) + 4LL) >> 6) & 0xF;
LABEL_56:
      WdLogEvent5_WdError(v52);
      v24 = v51;
      goto LABEL_66;
    }
    if ( *((_BYTE *)this + 350) )
    {
      if ( (v53 = (struct DXGDEVICE *)*((_QWORD *)this + 2),
            v54 = *((_DWORD *)this + 82),
            LOBYTE(v50) = *((_BYTE *)this + 351),
            v55 = (struct ADAPTER_RENDER *)*((_QWORD *)v53 + 2),
            !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v55 + 50) + 8LL)
                                                                        + 240LL))(
               *((_QWORD *)v55 + 51),
               *((_QWORD *)v77 + 3),
               v50,
               v54))
        && (v56 = MapGpuVaForAllocation(v55, v53, v54, v77), v56 < 0)
        || (LOBYTE(v46) = *((_BYTE *)this + 351),
            !(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 400LL)
                                                                                    + 8LL)
                                                                        + 240LL))(
               *((_QWORD *)v55 + 51),
               *((_QWORD *)v76 + 3),
               v46,
               v54))
        && (v56 = MapGpuVaForAllocation(v55, v53, v54, v76), v56 < 0) )
      {
        v24 = v56;
        goto LABEL_66;
      }
    }
    v57 = a7;
    v78[0] = 0LL;
    Width = v84.Width;
    Height = v84.Height;
    if ( v83.Width < v84.Width )
      Width = v83.Width;
    if ( v83.Height < v84.Height )
      Height = v83.Height;
    v60 = 0;
    v78[1] = (struct VIDSCH_SUBMIT_DATA_BASE *)__PAIR64__(Height, Width);
    if ( a6 )
    {
      while ( v57->right <= Width && v57->bottom <= Height && v57->top >= 0 && v57->left >= 0 )
      {
        ++v60;
        ++v57;
        if ( v60 >= a6 )
          goto LABEL_47;
      }
      v64 = (_QWORD *)WdLogNewEntry5_WdError(v49);
      v64[3] = Width;
      v64[4] = Height;
      v64[5] = v57->right;
      v64[6] = v57->bottom;
      WdLogEvent5_WdError(v64);
      v24 = -1073741811;
      goto LABEL_66;
    }
LABEL_47:
    v61 = *((_QWORD *)this + 37);
    v79 = 0LL;
    if ( !v61 )
      goto LABEL_54;
    v62 = *((_DWORD *)this + 76);
    v63 = 0LL;
    if ( !v62 )
      goto LABEL_54;
    while ( !*(_QWORD *)(v61 + 8 * v63) )
    {
      v63 = (unsigned int)(v63 + 1);
      if ( (unsigned int)v63 >= v62 )
        goto LABEL_54;
    }
    v79 = *(struct _VIDMM_DMA_BUFFER **)(v61 + 8 * v63);
    *(_QWORD *)(v61 + 8 * v63) = 0LL;
    if ( !v79 )
    {
LABEL_54:
      v65 = DXGCONTEXT::AcquireDmaBuffer(this, &v79, 0LL, 1);
      v51 = v65;
      if ( v65 < 0 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(v66);
        v52[3] = v51;
        goto LABEL_56;
      }
    }
    memset(&v85, 0, sizeof(v85));
    v85.Flags.Value |= 1u;
    v85.pDstSubRects = v81;
    v67 = *((_QWORD *)this + 2);
    v85.DstRect = *(RECT *)v78;
    v85.SubRectCnt = a6;
    v85.SrcRect = *(RECT *)v78;
    v78[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v67 + 16);
    v78[0] = 0LL;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v78);
    v69 = v78[0];
    if ( v78[0] )
    {
      *(_DWORD *)v78[0] |= 0x20000u;
      if ( (*(_DWORD *)(*((_QWORD *)v77 + 6) + 4LL) & 3) != 0 || (*(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) & 3) != 0 )
        *(_DWORD *)v69 |= 1u;
      *(_DWORD *)v69 |= 0x200u;
      v71 = DXGCONTEXT::SubmitPresent(this, 0LL, v80, v82, 0LL, v10, v9, &v85, 0LL, v79, v69, 0LL);
      v73 = v71;
      if ( v71 < 0 )
      {
        v74 = WdLogNewEntry5_WdError(v72);
        *(_QWORD *)(v74 + 24) = v73;
        WdLogEvent5_WdError(v74);
      }
      v24 = v73;
    }
    else
    {
      v70 = WdLogNewEntry5_WdLowResource(v68);
      *(_QWORD *)(v70 + 24) = 5135LL;
      WdLogEvent5_WdLowResource(v70);
      v24 = -1073741801;
    }
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v78);
    goto LABEL_66;
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdError(v22);
  v25[3] = v10;
LABEL_14:
  WdLogEvent5_WdError(v25);
LABEL_67:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v76, v28, v29, v30);
  return v24;
}
