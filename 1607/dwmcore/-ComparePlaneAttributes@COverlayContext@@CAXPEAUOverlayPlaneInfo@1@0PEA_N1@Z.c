/*
 * XREFs of ?ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z @ 0x1800B7CC0
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800780E0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x180078BD8 (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BF656 (memcmp_0.c)
 */

void __fastcall COverlayContext::ComparePlaneAttributes(
        struct COverlayContext::OverlayPlaneInfo *a1,
        struct COverlayContext::OverlayPlaneInfo *a2,
        bool *a3,
        bool *a4)
{
  bool v4; // bl
  __int128 v6; // xmm1
  bool v8; // di
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __m256i Buf2; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h]
  __int128 v21; // [rsp+50h] [rbp-B0h]
  __int128 v22; // [rsp+60h] [rbp-A0h]
  __int128 v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-80h]
  __m256i Buf1; // [rsp+90h] [rbp-70h] BYREF
  __int128 v26; // [rsp+B0h] [rbp-50h]
  __int128 v27; // [rsp+C0h] [rbp-40h]
  __int128 v28; // [rsp+D0h] [rbp-30h]
  __int128 v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+F0h] [rbp-10h]

  v4 = 0;
  v6 = *(_OWORD *)((char *)a1 + 56);
  v8 = 0;
  *(_OWORD *)Buf1.m256i_i8 = *(_OWORD *)((char *)a1 + 40);
  v9 = *(_OWORD *)((char *)a1 + 72);
  *(_OWORD *)&Buf1.m256i_u64[2] = v6;
  v10 = *(_OWORD *)((char *)a1 + 88);
  v26 = v9;
  v11 = *(_OWORD *)((char *)a1 + 104);
  v27 = v10;
  v12 = *(_OWORD *)((char *)a1 + 120);
  v28 = v11;
  v30 = *((_QWORD *)a1 + 17);
  v13 = *(_OWORD *)((char *)a2 + 40);
  v29 = v12;
  v14 = *(_OWORD *)((char *)a2 + 56);
  *(_OWORD *)Buf2.m256i_i8 = v13;
  v15 = *(_OWORD *)((char *)a2 + 72);
  *(_OWORD *)&Buf2.m256i_u64[2] = v14;
  v16 = *(_OWORD *)((char *)a2 + 88);
  v20 = v15;
  v17 = *(_OWORD *)((char *)a2 + 104);
  v21 = v16;
  v18 = *(_OWORD *)((char *)a2 + 120);
  v22 = v17;
  v24 = *((_QWORD *)a2 + 17);
  v23 = v18;
  if ( memcmp_0(&Buf1, &Buf2, 0x68uLL) )
  {
    *(_OWORD *)((char *)Buf1.m256i_i64 + 4) = *(_OWORD *)((char *)Buf2.m256i_i64 + 4);
    v8 = 1;
    v4 = memcmp_0(&Buf1, &Buf2, 0x68uLL) == 0;
  }
  *a3 = v8;
  *a4 = v4;
}
