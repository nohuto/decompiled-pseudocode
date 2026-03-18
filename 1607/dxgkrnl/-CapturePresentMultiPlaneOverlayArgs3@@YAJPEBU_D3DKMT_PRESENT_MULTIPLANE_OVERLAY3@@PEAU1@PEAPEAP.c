/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C0185810
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C018C640 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO @ 0x1C0185460 (_CapturePresentMultiPlaneOverlayArgs3_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs3(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 ***a3,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 **a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **a5,
        struct tagRECT **a6,
        unsigned int **a7,
        unsigned int **a8,
        unsigned __int8 **a9,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION **a10)
{
  __m128i v10; // xmm6
  __m128i v11; // xmm1
  unsigned int v12; // r15d
  unsigned __int64 v13; // rbx
  SIZE_T v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  unsigned int v20; // edi
  __int64 v21; // rcx
  SIZE_T v22; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v23; // r13
  SIZE_T v24; // rax
  unsigned __int64 v25; // r12
  SIZE_T v26; // rax
  SIZE_T v27; // rax
  void *v28; // rsi
  unsigned int v29; // edi
  char *v30; // rbx
  const void *v31; // rdx
  char *v32; // rcx
  _QWORD *v33; // r14
  const void *v34; // rdx
  char *v35; // rcx
  ULONG64 v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // ebx
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v39; // rsi
  unsigned int *v40; // r12
  unsigned __int64 v41; // rdx
  __int64 v42; // r9
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // r8
  UINT *v44; // rdx
  ULONG64 p_SDRWhiteLevel; // rcx
  __int64 AllocationCount; // rax
  __int64 v47; // rbx
  __int64 v48; // rcx
  D3DKMT_HANDLE *pAllocationList; // rdx
  unsigned int *v51; // r10
  unsigned int v52; // r8d
  int v53; // r9d
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v54; // rdx
  _QWORD *v55; // rbx
  __int64 v56; // rcx
  unsigned int v57; // [rsp+20h] [rbp-118h]
  _OWORD v58[4]; // [rsp+30h] [rbp-108h] BYREF
  void *v59; // [rsp+70h] [rbp-C8h]
  void *v60; // [rsp+78h] [rbp-C0h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v61; // [rsp+80h] [rbp-B8h]
  unsigned int *v62; // [rsp+88h] [rbp-B0h]
  void *v63[2]; // [rsp+90h] [rbp-A8h]
  __m128i v64; // [rsp+A0h] [rbp-98h]
  void *Src[2]; // [rsp+B0h] [rbp-88h]
  __m128i v66; // [rsp+C0h] [rbp-78h]
  void *pHDRMetaData; // [rsp+D0h] [rbp-68h]

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)MmUserProbeAddress;
  *(_OWORD *)v63 = *(_OWORD *)&a1->hAdapter;
  v64 = *(__m128i *)&a1->VidPnSourceId;
  v10 = v64;
  *(_OWORD *)Src = *(_OWORD *)&a1->ppPresentPlanes;
  v11 = *(__m128i *)&a1->Duration;
  v66 = v11;
  pHDRMetaData = (void *)a1->pHDRMetaData;
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v64, 12));
  if ( v12 - 1 > 7 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v55[3] = v12;
    v20 = -1073741811;
    v55[4] = -1073741811LL;
    v55[5] = PsGetCurrentProcess(v12);
    goto LABEL_67;
  }
  v13 = HIDWORD(v63[0]);
  v57 = HIDWORD(v63[0]);
  if ( (unsigned int)(HIDWORD(v63[0]) - 1) > 0x3F )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v20 = -1073741811;
    v55[3] = -1073741811LL;
    v55[4] = PsGetCurrentProcess(v56);
LABEL_67:
    WdLogEvent5_WdError(v55);
    return v20;
  }
  memset((char *)v58 + 8, 0, 0x38uLL);
  v14 = 8LL * v12;
  if ( !is_mul_ok(v12, 8uLL) )
    v14 = -1LL;
  v60 = operator new(v14, 0x4B677844u, PagedPool);
  *(_QWORD *)&v58[0] = v60;
  if ( !v60 )
    goto LABEL_8;
  v22 = 56LL * v12;
  if ( !is_mul_ok(v12, 0x38uLL) )
    v22 = -1LL;
  v23 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 *)operator new(v22, 0x4B677844u, PagedPool);
  *((_QWORD *)&v58[0] + 1) = v23;
  if ( !v23 )
    goto LABEL_8;
  v24 = 80LL * v12;
  if ( !is_mul_ok(v12, 0x50uLL) )
    v24 = -1LL;
  v61 = (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)operator new(v24, 0x4B677844u, PagedPool);
  *(_QWORD *)&v58[1] = v61;
  if ( !v61 )
    goto LABEL_8;
  v25 = v13;
  v26 = 4 * v13;
  if ( !is_mul_ok(v13, 4uLL) )
    v26 = -1LL;
  v59 = operator new(v26, 0x4B677844u, PagedPool);
  *((_QWORD *)&v58[1] + 1) = v59;
  if ( !v59 )
    goto LABEL_8;
  v27 = 4LL * v12 * (unsigned int)v13;
  if ( !is_mul_ok(v12 * (unsigned int)v13, 4uLL) )
    v27 = -1LL;
  v62 = (unsigned int *)operator new(v27, 0x4B677844u, PagedPool);
  *(_QWORD *)&v58[2] = v62;
  if ( !v62 )
    goto LABEL_8;
  v28 = pHDRMetaData;
  if ( pHDRMetaData )
  {
    v29 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
    if ( v29 )
    {
      *((_QWORD *)&v58[2] + 1) = operator new(v29, 0x4B677844u, PagedPool);
      if ( !*((_QWORD *)&v58[2] + 1) )
        goto LABEL_8;
    }
  }
  else
  {
    v29 = v66.m128i_u32[2];
  }
  v30 = (char *)Src[1];
  if ( Src[1] )
  {
    *((_QWORD *)&v58[3] + 1) = operator new(0x28uLL, 0x4B677844u, PagedPool);
    if ( !*((_QWORD *)&v58[3] + 1) )
    {
LABEL_8:
      v19 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      v20 = -1073741801;
      *(_QWORD *)(v19 + 24) = -1073741801LL;
      *(_QWORD *)(v19 + 32) = PsGetCurrentProcess(v21);
      WdLogEvent5_WdWarning(v19);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO((void **)v58);
      return v20;
    }
  }
  v31 = Src[0];
  v32 = (char *)Src[0] + 8 * v12;
  if ( v32 < Src[0] || (unsigned __int64)v32 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  v33 = v60;
  memmove(v60, v31, 8LL * v12);
  v34 = v63[1];
  v35 = (char *)v63[1] + 4 * v25;
  if ( v35 < v63[1] || (unsigned __int64)v35 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v59, v34, 4 * v25);
  if ( v28 && v29 )
  {
    v36 = (ULONG64)v28 + v29;
    if ( v36 < (unsigned __int64)v28 || v36 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(*((void **)&v58[2] + 1), v28, v29);
  }
  if ( v30 )
  {
    if ( v30 + 40 < v30 || (unsigned __int64)(v30 + 40) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v37 = *((_QWORD *)&v58[3] + 1);
    **((_OWORD **)&v58[3] + 1) = *(_OWORD *)v30;
    *(_OWORD *)(v37 + 16) = *((_OWORD *)v30 + 1);
    *(_QWORD *)(v37 + 32) = *((_QWORD *)v30 + 4);
  }
  v38 = 0;
  v39 = v61;
  v40 = v62;
  while ( v38 < v12 )
  {
    v41 = v33[v38];
    v42 = v38;
    if ( v41 + 56 < v41 || v41 + 56 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v23[v42].LayerIndex = *(_OWORD *)v41;
    *(_OWORD *)&v23[v42].AllocationCount = *(_OWORD *)(v41 + 16);
    *(_OWORD *)&v23[v42].DriverPrivateDataSize = *(_OWORD *)(v41 + 32);
    v23[v42].pPlaneAttributes = *(const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)(v41 + 48);
    pPlaneAttributes = v23[v42].pPlaneAttributes;
    v44 = &v39->Flags + 20 * v38;
    p_SDRWhiteLevel = (ULONG64)&pPlaneAttributes->SDRWhiteLevel;
    if ( &pPlaneAttributes->SDRWhiteLevel < (UINT *)pPlaneAttributes || p_SDRWhiteLevel > MmUserProbeAddress )
    {
      p_SDRWhiteLevel = MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    *(_OWORD *)v44 = *(_OWORD *)&pPlaneAttributes->Flags;
    *((_OWORD *)v44 + 1) = *(_OWORD *)&pPlaneAttributes->SrcRect.bottom;
    *((_OWORD *)v44 + 2) = *(_OWORD *)&pPlaneAttributes->DstRect.bottom;
    *((_OWORD *)v44 + 3) = *(_OWORD *)&pPlaneAttributes->ClipRect.bottom;
    *((_OWORD *)v44 + 4) = *(_OWORD *)&pPlaneAttributes->pDirtyRects;
    AllocationCount = v23[v42].AllocationCount;
    if ( (unsigned int)AllocationCount > v57 )
    {
      v47 = WdLogNewEntry5_WdError(p_SDRWhiteLevel);
      *(_QWORD *)(v47 + 24) = -1073741811LL;
      *(_QWORD *)(v47 + 32) = PsGetCurrentProcess(v48);
      WdLogEvent5_WdError(v47);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO((void **)v58);
      return 3221225485LL;
    }
    if ( (_DWORD)AllocationCount )
    {
      pAllocationList = v23[v42].pAllocationList;
      if ( &pAllocationList[AllocationCount] < pAllocationList
        || (unsigned __int64)&pAllocationList[AllocationCount] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(&v40[v57 * v38], pAllocationList, 4 * AllocationCount);
    }
    ++v38;
  }
  Src[0] = v33;
  v51 = (unsigned int *)v59;
  v63[1] = v59;
  pHDRMetaData = (void *)*((_QWORD *)&v58[2] + 1);
  Src[1] = *((void **)&v58[3] + 1);
  v52 = 0;
  v53 = 0;
  while ( v52 < v12 )
  {
    v54 = &v23[v52];
    v33[v52] = v54;
    v54->pPlaneAttributes = (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)((char *)v39 + 80 * v52);
    v54->pAllocationList = &v40[v53];
    ++v52;
    v53 += v57;
  }
  *(_OWORD *)&a2->hAdapter = *(_OWORD *)v63;
  *(__m128i *)&a2->VidPnSourceId = v10;
  *(_OWORD *)&a2->ppPresentPlanes = *(_OWORD *)Src;
  *(__m128i *)&a2->Duration = v11;
  a2->pHDRMetaData = pHDRMetaData;
  *a3 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)v33;
  *a4 = v23;
  *a5 = v39;
  *a6 = *(struct tagRECT **)&v58[3];
  *a7 = v51;
  *a8 = v40;
  *a9 = (unsigned __int8 *)*((_QWORD *)&v58[2] + 1);
  *a10 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *)*((_QWORD *)&v58[3] + 1);
  memset(v58, 0, sizeof(v58));
  CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO((void **)v58);
  return 0LL;
}
