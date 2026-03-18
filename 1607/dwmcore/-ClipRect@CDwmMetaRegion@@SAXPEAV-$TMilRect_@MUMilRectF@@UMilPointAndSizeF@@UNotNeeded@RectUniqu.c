/*
 * XREFs of ?ClipRect@CDwmMetaRegion@@SAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180130E24
 * Callers:
 *     ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BA504 (-UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180169220 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

void __fastcall CDwmMetaRegion::ClipRect(float *a1, float *a2)
{
  float v4; // xmm0_4
  float v5; // r9d
  float v6; // xmm0_4
  int v7; // r8d
  float v8; // xmm0_4
  HRGN RectRgn; // rsi
  signed int LastError; // eax
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // r8d
  bool v14; // sf
  float v15; // xmm0_4
  float v16; // r9d
  float v17; // xmm0_4
  int v18; // r8d
  float v19; // xmm0_4
  HRGN v20; // rbp
  signed int v21; // eax
  int v22; // edx
  unsigned int v23; // ecx
  int v24; // r8d
  bool v25; // sf
  int v26; // eax
  unsigned int *v27; // r8
  signed int v28; // eax
  int v29; // edx
  unsigned int v30; // ecx
  int v31; // r8d
  bool v32; // sf
  int v33; // eax
  struct _RGNDATA *v34; // rdi
  DWORD nCount; // eax
  int v36; // r9d
  struct _RGNDATA *v37; // rcx
  __int64 v38; // r8
  int v39; // rcx^4
  unsigned __int64 v40; // rax
  __m128i v41; // xmm1
  float v42; // [rsp+30h] [rbp-48h]
  float v43; // [rsp+30h] [rbp-48h]
  struct _RGNDATA *v44[2]; // [rsp+38h] [rbp-40h] BYREF

  v44[0] = 0LL;
  SetLastError(0);
  v4 = a1[3] + 6291456.25;
  v5 = v4;
  v6 = a1[2] + 6291456.25;
  v7 = (int)(LODWORD(v6) << 10) >> 11;
  v8 = a1[1] + 6291456.25;
  v42 = *a1 + 6291456.25;
  RectRgn = CreateRectRgn(
              (int)(LODWORD(v42) << 10) >> 11,
              (int)(LODWORD(v8) << 10) >> 11,
              v7,
              (int)(LODWORD(v5) << 10) >> 11);
  if ( !RectRgn )
  {
    LastError = GetLastError();
    v14 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v14 = LastError < 0;
    }
    if ( !v14 )
      LastError = CheckGUIHandleQuota(v12, v11, v13);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x23Eu);
    return;
  }
  SetLastError(0);
  v15 = a2[3] + 6291456.25;
  v16 = v15;
  v17 = a2[2] + 6291456.25;
  v18 = (int)(LODWORD(v17) << 10) >> 11;
  v19 = a2[1] + 6291456.25;
  v43 = *a2 + 6291456.25;
  v20 = CreateRectRgn(
          (int)(LODWORD(v43) << 10) >> 11,
          (int)(LODWORD(v19) << 10) >> 11,
          v18,
          (int)(LODWORD(v16) << 10) >> 11);
  if ( !v20 )
  {
    v21 = GetLastError();
    v25 = v21 < 0;
    if ( v21 > 0 )
    {
      v21 = (unsigned __int16)v21 | 0x80070000;
      v25 = v21 < 0;
    }
    if ( !v25 )
      v21 = CheckGUIHandleQuota(v23, v22, v24);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x243u);
    goto LABEL_33;
  }
  SetLastError(0);
  v26 = CombineRgn(RectRgn, RectRgn, v20, 4);
  if ( !v26 )
  {
    v28 = GetLastError();
    v32 = v28 < 0;
    if ( v28 > 0 )
    {
      v28 = (unsigned __int16)v28 | 0x80070000;
      v32 = v28 < 0;
    }
    if ( !v32 )
      v28 = CheckGUIHandleQuota(v30, v29, v31);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x248u);
    goto LABEL_33;
  }
  if ( v26 == 1 )
  {
    *a1 = 0.0;
    a1[2] = 0.0;
    a1[1] = 0.0;
    a1[3] = 0.0;
    goto LABEL_33;
  }
  v33 = HrgnToRgnData(RectRgn, v44, v27);
  v34 = v44[0];
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x254u);
LABEL_31:
    if ( v34 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v34);
    goto LABEL_33;
  }
  if ( v44[0] )
  {
    nCount = v44[0]->rdh.nCount;
    if ( nCount )
    {
      v36 = 0;
      *(_OWORD *)v44 = *(_OWORD *)v44[0]->Buffer;
      v37 = v34 + 1;
      v38 = nCount;
      do
      {
        if ( (signed int)((v37->rdh.iType - *(_DWORD *)v37[-1].Buffer) * (v37->rdh.nCount - v37->rdh.dwSize)) > v36 )
        {
          v36 = (v37->rdh.iType - *(_DWORD *)v37[-1].Buffer) * (v37->rdh.nCount - v37->rdh.dwSize);
          *(_OWORD *)v44 = *(_OWORD *)v37[-1].Buffer;
        }
        v37 = (struct _RGNDATA *)((char *)v37 + 16);
        --v38;
      }
      while ( v38 );
      v39 = HIDWORD(v44[1]);
      v40 = (unsigned __int64)v44[0] >> 32;
      v41 = _mm_cvtsi32_si128((unsigned int)v44[1]);
      *a1 = (float)SLODWORD(v44[0]);
      a1[1] = (float)(int)v40;
      *((_DWORD *)a1 + 2) = _mm_cvtepi32_ps(v41).m128_u32[0];
      a1[3] = (float)v39;
    }
    goto LABEL_31;
  }
LABEL_33:
  DeleteObject(RectRgn);
  if ( v20 )
    DeleteObject(v20);
}
