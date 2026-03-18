/*
 * XREFs of ?CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C01862BC
 * Callers:
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00AF070 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C015AD70 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C015ADE4 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C015AE58 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXHPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015B788 (-CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE.c)
 *     ?ConvertPackedAttributesToKMT3@@YAXAEBU_VIDSCH_LAYER_ATTRIBUTE@@PEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C018682C (-ConvertPackedAttributesToKMT3@@YAXAEBU_VIDSCH_LAYER_ATTRIBUTE@@PEAU_D3DKMT_MULTIPLANE_OVERLAY_A.c)
 *     ?OverlayAttributesEqual@@YA_NAEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@0_N@Z @ 0x1C01872B0 (-OverlayAttributesEqual@@YA_NAEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@0_N@Z.c)
 */

bool __fastcall DXGCONTEXT::CheckMultiPlaneOverlaySupportFromCachedData(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a4)
{
  __int64 v4; // rax
  DXGCONTEXT *v5; // r15
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  SIZE_T v32; // rax
  char *v33; // r12
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // r10d
  __int64 v37; // rax
  unsigned int v38; // esi
  void **v39; // r15
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // r11
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v43; // rdx
  __int64 v44; // r10
  __int64 v45; // r11
  char v46; // r11
  __int64 v47; // rcx
  __int64 v48; // rsi
  int v49; // ebx
  unsigned int v50; // ebx
  int v51; // r15d
  const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v52; // r12
  const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v53; // rdx
  bool v54; // al
  char v55; // r11
  __int64 v56; // rdx
  unsigned int v57; // edx
  __int64 v58; // rcx
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v59; // rdx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v60; // r9
  bool v61; // bl
  unsigned int v62; // r12d
  unsigned int v64; // [rsp+44h] [rbp-BCh] BYREF
  int v65; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v66; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v67; // [rsp+58h] [rbp-A8h]
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v68[2]; // [rsp+60h] [rbp-A0h] BYREF
  void **v69; // [rsp+68h] [rbp-98h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **Elements; // [rsp+70h] [rbp-90h]
  char *v71; // [rsp+78h] [rbp-88h]
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v72; // [rsp+80h] [rbp-80h]
  PVOID v73[4]; // [rsp+88h] [rbp-78h] BYREF
  int v74; // [rsp+A8h] [rbp-58h]
  PVOID v75[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v76; // [rsp+D0h] [rbp-30h]
  PVOID v77[13]; // [rsp+E0h] [rbp-20h] BYREF
  int v78; // [rsp+148h] [rbp+48h]
  PVOID v79[31]; // [rsp+150h] [rbp+50h] BYREF
  int v80; // [rsp+248h] [rbp+148h]
  _QWORD v81[32]; // [rsp+250h] [rbp+150h] BYREF

  v4 = *((_QWORD *)this + 2);
  v5 = this;
  v66 = a3;
  v6 = 0;
  v67 = a2;
  *(_QWORD *)&v68[0].0 = this;
  v7 = *(_QWORD *)(v4 + 16);
  v72 = a4;
  v8 = *(_QWORD *)(v7 + 16);
  v9 = *(unsigned int *)(v8 + 2000);
  v10 = *(_DWORD *)(v8 + 2000);
  v75[0] = 0LL;
  v76 = 0;
  Elements = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                  v75,
                                                                  v10);
  if ( Elements )
  {
    v77[0] = 0LL;
    v78 = 0;
    v20 = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(v77, v9);
    if ( !v20 )
    {
      v21 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v21 + 24) = v9;
      WdLogEvent5_WdWarning(v21);
LABEL_37:
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v77);
      goto LABEL_38;
    }
    v79[0] = 0LL;
    v80 = 0;
    v26 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements(v79, v9);
    if ( !v26 )
    {
      v27 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      *(_QWORD *)(v27 + 24) = v9;
      WdLogEvent5_WdWarning(v27);
LABEL_36:
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v79);
      goto LABEL_37;
    }
    v73[0] = 0LL;
    v74 = 0;
    v69 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(v73, v9);
    if ( !v69 )
      goto LABEL_11;
    v32 = 32 * v9;
    if ( !is_mul_ok(v9, 0x20uLL) )
      v32 = -1LL;
    v71 = (char *)operator new(v32, 0x4B677844u, PagedPool);
    v33 = v71;
    if ( !v71 )
    {
LABEL_11:
      v34 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
      *(_QWORD *)(v34 + 24) = v9;
      WdLogEvent5_WdWarning(v34);
LABEL_35:
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v73);
      goto LABEL_36;
    }
    v64 = 0;
    memset(v81, 0, sizeof(v81));
    (*(void (__fastcall **)(_QWORD, _QWORD, char *, _QWORD *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) + 376LL)
                                                                                         + 8LL)
                                                                             + 328LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) + 384LL),
      v67,
      v71,
      v81,
      &v64);
    v36 = v64;
    if ( v64 > (unsigned int)v9 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v37 + 24) = 2016LL;
      WdLogEvent5_WdAssertion(v37);
      v36 = v64;
    }
    v38 = 0;
    if ( v36 )
    {
      v39 = v69;
      v40 = Elements;
      do
      {
        v41 = v38;
        v42 = 32LL * v38;
        v43 = (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)(v26 + 80LL * v38);
        v40[v38] = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)(v42 + v20);
        *(_QWORD *)(v42 + v20 + 24) = v43;
        ConvertPackedAttributesToKMT3((const struct _VIDSCH_LAYER_ATTRIBUTE *)&v33[v42], v43);
        ++v38;
        *(_DWORD *)(v44 + 16) = v67;
        v39[v41] = *(void **)((char *)v81 + v45);
        v36 = v64;
      }
      while ( v38 < v64 );
      v5 = *(DXGCONTEXT **)&v68[0].0;
      v6 = 0;
    }
    v46 = 0;
    v47 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL);
    v48 = *(_QWORD *)(v47 + 800);
    v49 = *(_DWORD *)(v47 + 796);
    v65 = v49;
    if ( v48 && *(_DWORD *)(v47 + 792) == v36 )
    {
      v50 = 0;
      if ( !v36 )
        goto LABEL_29;
      v51 = v65;
      v52 = (const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)(v48 + 8);
      v53 = (const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)v26;
      do
      {
        v54 = OverlayAttributesEqual(v52, v53, v51 == v50++);
        v46 = v54 ? v55 : 0;
        v53 = (const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)(v56 + 80);
        ++v52;
      }
      while ( v50 < v36 );
      v5 = *(DXGCONTEXT **)&v68[0].0;
      v33 = v71;
      v49 = v65;
    }
    if ( v36 && v46 )
    {
      v57 = 0;
      do
      {
        v58 = v57++;
        *(_DWORD *)(32 * v58 + v20) = *(_DWORD *)(88 * v58 + v48);
      }
      while ( v57 < v64 );
      v59 = v72;
      v60 = Elements;
      v65 = 0;
      v68[0].Value = 0;
      *(RECT *)(v26 + 80LL * v66 + 4) = v72->SourceRect;
      *(_DWORD *)(v26 + 80LL * v66 + 72) = v59->ColorSpace;
      DXGDEVICE::CheckMultiPlaneOverlayInternal3(
        *((DXGDEVICE **)v5 + 2),
        v49,
        v64,
        v60,
        (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)v69,
        (unsigned int)&v66,
        &v65,
        v68);
      v36 = v64;
      v61 = v65 != 0;
      goto LABEL_30;
    }
LABEL_29:
    v61 = 0;
LABEL_30:
    if ( v36 )
    {
      v62 = v67;
      do
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL)
                                                                                         + 376LL)
                                                                             + 8LL)
                                                                 + 808LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) + 384LL),
          *((unsigned int *)v5 + 81),
          &v81[4 * v6++],
          v62);
      while ( v6 < v64 );
      v33 = v71;
    }
    operator delete(v33);
    LOBYTE(v6) = v61;
    goto LABEL_35;
  }
  v15 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
  *(_QWORD *)(v15 + 24) = v9;
  WdLogEvent5_WdWarning(v15);
LABEL_38:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v75);
  return v6;
}
