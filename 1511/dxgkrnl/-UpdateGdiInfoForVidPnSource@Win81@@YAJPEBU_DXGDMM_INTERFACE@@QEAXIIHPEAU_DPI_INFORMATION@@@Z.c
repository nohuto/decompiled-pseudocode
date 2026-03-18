/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0169024
 * Callers:
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0168994 (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?GetNativeResolution@DpiInternal@@YA?AUtagSIZE@@PEBX@Z @ 0x1C0001170 (-GetNativeResolution@DpiInternal@@YA-AUtagSIZE@@PEBX@Z.c)
 *     ?HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z @ 0x1C0001300 (-HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0009F58 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000A5E8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?IsPreferredModeInterlaced@DpiInternal@@YA_NPEBX@Z @ 0x1C0012574 (-IsPreferredModeInterlaced@DpiInternal@@YA_NPEBX@Z.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AA170 (DmmGetVideoOutputTechnology.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00AD200 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00AD304 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00AD40C (MonitorGetEdidBaseBlockPtr.c)
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C0164FC8 (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C01687B8 (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C0168928 (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0168A7C (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0168B94 (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetPhysicalSizeFromEDID@Win81@@YAXPEBXPEAUtagSIZE@@@Z @ 0x1C0168C38 (-GetPhysicalSizeFromEDID@Win81@@YAXPEBXPEAUtagSIZE@@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@@Z @ 0x1C0168E20 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@.c)
 */

__int64 __fastcall Win81::UpdateGdiInfoForVidPnSource(
        Win81 *this,
        const struct _DXGDMM_INTERFACE *a2,
        void *const a3,
        int a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(const struct _DXGDMM_INTERFACE *, _BYTE *, _BYTE *); // rax
  DXGADAPTER *v7; // r12
  __int64 v8; // rsi
  int v10; // eax
  __int64 v11; // rcx
  _OWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  const struct Win81::DPI_SCALE_FACTOR_COLLECTION *v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v22; // r14
  unsigned int v23; // edi
  int v24; // eax
  __int64 v25; // rcx
  const struct _DXGDMM_VIDPN_INTERFACE *v26; // r13
  __int64 (__fastcall *v27)(_QWORD, _QWORD, _QWORD, __int64 *); // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v32; // eax
  bool v33; // si
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v34; // r15d
  int VideoOutputTechnology; // eax
  __int64 v36; // rcx
  __int64 v37; // rbx
  _QWORD *v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // r14d
  BOOL v42; // eax
  unsigned int v43; // esi
  int v44; // edi
  DpiInternal *v45; // rbx
  const void *v46; // rdx
  __int64 NativeResolution; // rax
  struct tagSIZE *v48; // r8
  struct tagSIZE v49; // r9
  int v50; // r12d
  LONG v51; // eax
  unsigned int v52; // r13d
  unsigned int v53; // r15d
  unsigned int v54; // ebx
  bool v55; // al
  struct _DPI_INFORMATION *v56; // r9
  __int64 v57; // r12
  int v58; // edx
  __int64 v59; // rax
  unsigned int cy; // ecx
  unsigned int v61; // eax
  unsigned int v62; // eax
  struct tagSIZE v63; // rdx
  int v64; // eax
  DpiInternal *v65; // rsi
  unsigned int IsAudioAvailableInEdid; // eax
  int v67; // edx
  char v68; // al
  __int64 v69; // rcx
  unsigned int v70; // ebx
  __int64 v71; // rax
  char cx; // si
  __int64 v73; // rax
  __int64 v74; // rdx
  struct _DPI_INFORMATION *v75; // r9
  _QWORD *v76; // rax
  struct tagSIZE v77; // r8
  unsigned int v78; // eax
  __int64 v79; // rax
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  struct _D3DKMDT_2DREGION *v85; // [rsp+28h] [rbp-E0h]
  tagSIZE v86; // [rsp+48h] [rbp-C0h] BYREF
  void *v87; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v88; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v89; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v90[368]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v91; // [rsp+1D8h] [rbp+D0h]
  DpiInternal *EdidBaseBlockPtr; // [rsp+1E8h] [rbp+E0h]
  __int128 v93; // [rsp+1F0h] [rbp+E8h]

  v6 = (__int64 (__fastcall *)(const struct _DXGDMM_INTERFACE *, _BYTE *, _BYTE *))*((_QWORD *)this + 6);
  v7 = a2;
  v8 = (unsigned int)a3;
  *(_QWORD *)&v90[56] = a2;
  *(_DWORD *)&v90[24] = a4;
  *(_DWORD *)&v90[72] = (_DWORD)a3;
  *(_QWORD *)&v90[48] = 0LL;
  memset(&v90[136], 0, 28);
  v90[128] = 0;
  *(_QWORD *)&v90[8] = 0LL;
  v10 = v6(a2, &v90[8], &v90[48]);
  v12 = (_OWORD *)v10;
  if ( v10 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = v7;
LABEL_5:
    v13[4] = v12;
LABEL_94:
    WdLogEvent5_WdError(v13);
    goto LABEL_103;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v90[128],
    *(__int64 *)&v90[8],
    *((_QWORD *)this + 8),
    (__int64)v7);
  v14 = *(_QWORD *)&v90[136];
  *(_QWORD *)&v90[16] = 0LL;
  *(_QWORD *)&v90[32] = 0LL;
  v15 = (**(__int64 (__fastcall ***)(_QWORD, _BYTE *, _BYTE *))&v90[48])(*(_QWORD *)&v90[136], &v90[16], &v90[32]);
  v12 = (_OWORD *)v15;
  if ( v15 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v13[3] = v14;
    goto LABEL_5;
  }
  *(_QWORD *)&v90[64] = 0LL;
  v17 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, _BYTE *))&v90[32])(*(_QWORD *)&v90[16], (unsigned int)v8, &v90[64]);
  v12 = (_OWORD *)v17;
  if ( v17 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v13[3] = v8;
    v19 = *(_QWORD *)&v90[16];
LABEL_93:
    v13[4] = v19;
    v13[5] = v12;
    goto LABEL_94;
  }
  memset(&v90[176], 0, 0x60uLL);
  v21 = *(_QWORD *)&v90[64];
  v12 = (_OWORD *)a6;
  v22 = 0LL;
  *(_QWORD *)&v90[80] = 0LL;
  v23 = *(_DWORD *)&v90[268] & 0xFFFFFFDE | (*(_QWORD *)&v90[64] > 1uLL) | *(_DWORD *)(a6 + 92) & 0x20;
  *(_DWORD *)&v90[268] = v23;
  v93 = *(_OWORD *)&v90[240];
  if ( !*(_QWORD *)&v90[64] )
  {
    v91 = *(_OWORD *)&v90[192];
LABEL_96:
    if ( (v23 & 2) == 0
      || (v77 = (struct tagSIZE)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)&v90[256]), 4)),
          v77.cx == 1234568) )
    {
      v78 = *(_DWORD *)&v90[184];
    }
    else
    {
      v78 = Win81::AdjustDesktopScaleFactorForOverride((Win81 *)0x64, *(int *)&v90[208], v77, v20);
      *(_DWORD *)&v90[184] = v78;
    }
    if ( !v78 )
    {
      v79 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v79 + 24) = 1076LL;
      WdLogEvent5_WdAssertion(v79);
    }
    v80 = v91;
    *v12 = *(_OWORD *)&v90[176];
    v81 = *(_OWORD *)&v90[208];
    v12[1] = v80;
    v82 = *(_OWORD *)&v90[224];
    v12[2] = v81;
    v83 = v93;
    v12[3] = v82;
    v12[4] = v83;
    v12[5] = *(_OWORD *)&v90[256];
    LODWORD(v12) = 0;
    goto LABEL_103;
  }
  v91 = *(_OWORD *)&v90[192];
  while ( 1 )
  {
    LODWORD(v87) = -1;
    BYTE2(v86.cx) = 0;
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, void **))(*(_QWORD *)&v90[32] + 8LL))(
            *(_QWORD *)&v90[16],
            (unsigned int)v8,
            v22,
            &v87);
    v12 = (_OWORD *)v24;
    if ( v24 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v19 = (unsigned int)v8;
      v13[3] = v22;
      goto LABEL_93;
    }
    v26 = 0LL;
    v89 = 0LL;
    v27 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)&v90[32] + 24LL);
    memset(&v90[96], 0, 28);
    v90[88] = 0;
    v28 = v27(*(_QWORD *)&v90[16], (unsigned int)v8, (unsigned int)v87, &v89);
    v12 = (_OWORD *)v28;
    if ( v28 < 0 )
      break;
    v30 = v89;
    if ( !v89 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v31 + 24) = 831LL;
      WdLogEvent5_WdAssertion(v31);
      v30 = v89;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v90[88],
      v30,
      *(_QWORD *)(*(_QWORD *)&v90[32] + 32LL),
      *(__int64 *)&v90[16]);
    v26 = *(const struct _DXGDMM_VIDPN_INTERFACE **)&v90[96];
    v32 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)&v90[96] + 20LL));
    v33 = 0;
    v86.cy = -2;
    LOBYTE(v86.cx) = 0;
    v34 = v32;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(v7, (unsigned int)v87, &v86.cy, 0LL);
    v37 = VideoOutputTechnology;
    if ( VideoOutputTechnology >= 0 )
    {
      v33 = IsInternalVideoOutput(v86.cy);
      LOBYTE(v86.cx) = v33;
    }
    else
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v36);
      v38[3] = v7;
      v38[4] = (unsigned int)v87;
      v38[5] = v37;
      WdLogEvent5_WdError(v38);
    }
    v41 = 0;
    v42 = v33;
    v43 = 0;
    *(_DWORD *)&v90[40] = 0;
    *(_DWORD *)&v90[76] = v42;
    v88 = 0LL;
    v44 = ((unsigned __int8)v23 ^ (unsigned __int8)(v23 | (4 * v42))) & 4 ^ v23;
    EdidBaseBlockPtr = (DpiInternal *)MonitorGetEdidBaseBlockPtr(v7, (unsigned int)v87, v39, v40);
    v45 = EdidBaseBlockPtr;
    NativeResolution = (__int64)DpiInternal::GetNativeResolution(EdidBaseBlockPtr, v46);
    v89 = NativeResolution;
    if ( ((v34 - 2) & 0xFFFFFFFD) != 0 )
    {
      LODWORD(NativeResolution) = HIDWORD(v89);
      v50 = v89;
    }
    else
    {
      v50 = HIDWORD(v89);
      v89 = __PAIR64__(NativeResolution, HIDWORD(v89));
    }
    *(_DWORD *)&v90[28] = NativeResolution;
    if ( !v45 )
    {
      v44 |= 8u;
LABEL_32:
      BYTE2(v86.cx) = (*(_BYTE *)(*(_QWORD *)&v90[56] + 284LL) & 0x20) != 0;
      goto LABEL_33;
    }
    Win81::GetPhysicalSizeFromEDID(v45, (int *)&v88, v48, *(_QWORD *)&v49);
    if ( ((v34 - 2) & 0xFFFFFFFD) != 0 )
    {
      v41 = HIDWORD(v88);
      v43 = v88;
    }
    else
    {
      v41 = v88;
      v43 = HIDWORD(v88);
      v88 = __PAIR64__(v88, HIDWORD(v88));
    }
    if ( v43 && v41 )
    {
      if ( (int)(v43 * v41) <= 16000 && !LOBYTE(v86.cx) )
      {
        v41 = 0;
        *(_DWORD *)&v90[40] = 1;
        v44 |= 0x40u;
        v88 = 0LL;
        v43 = 0;
        goto LABEL_32;
      }
    }
    else
    {
      v41 = 0;
      v88 = 0LL;
      v43 = 0;
    }
    if ( !v43 )
      goto LABEL_32;
LABEL_33:
    LODWORD(v12) = DpiInternal::GetCurrentSourceResolution(
                     *(DpiInternal **)&v90[136],
                     *(struct D3DKMDT_HVIDPN__ *const *)&v90[48],
                     v26,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)v90);
    if ( (int)v12 < 0 )
      goto LABEL_90;
    BYTE1(v86.cx) = 0;
    LODWORD(v12) = DpiInternal::GetCurrentTargetResolution(
                     *(DpiInternal **)&v90[136],
                     *(struct D3DKMDT_HVIDPN__ *const *)&v90[48],
                     v26,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v90[8],
                     (struct _D3DKMDT_2DREGION *)((char *)&v86 + 1));
    if ( (int)v12 < 0 )
      goto LABEL_90;
    if ( ((v34 - 2) & 0xFFFFFFFD) != 0 )
    {
      v51 = *(_DWORD *)&v90[12];
      v52 = *(_DWORD *)&v90[8];
    }
    else
    {
      v51 = *(_DWORD *)&v90[8];
      v52 = *(_DWORD *)&v90[12];
      *(_DWORD *)&v90[8] = *(_DWORD *)&v90[12];
      *(_DWORD *)&v90[12] = v51;
    }
    v53 = *(_DWORD *)v90;
    v86.cy = v51;
    if ( (v44 & 1) != 0 && v50 && *(_DWORD *)&v90[28] )
    {
      v54 = *(_DWORD *)&v90[4];
      if ( BYTE1(v86.cx) )
      {
        v54 = *(_DWORD *)&v90[4] >> 1;
        *(_DWORD *)&v90[4] >>= 1;
      }
      v55 = *(_DWORD *)v90 >= (unsigned int)(2 * v50) || v54 >= 2 * *(_DWORD *)&v90[28];
      v44 ^= ((unsigned __int8)v44 ^ (unsigned __int8)(v44 | (2 * v55))) & 2;
      if ( BYTE1(v86.cx) )
      {
        v54 *= 2;
        *(_DWORD *)&v90[4] = v54;
      }
    }
    else
    {
      v54 = *(_DWORD *)&v90[4];
    }
    memset(&v90[272], 0, 0x60uLL);
    v57 = *(_QWORD *)&v90[96];
    *(_DWORD *)&v90[356] = a5;
    *(_DWORD *)&v90[304] = *(_DWORD *)v90;
    v58 = *(_DWORD *)(*(_QWORD *)&v90[96] + 12LL);
    *(_DWORD *)&v90[308] = v54;
    if ( v58 != 1 )
    {
      switch ( v58 )
      {
        case 2:
          goto LABEL_58;
        case 3:
          break;
        case 4:
LABEL_58:
          if ( v58 == 4 )
          {
            cy = v86.cy;
            if ( v43 * v54 <= v41 * *(_DWORD *)v90 )
            {
              *(_DWORD *)v90 = v52;
              v62 = v54 * v52 / v53;
              v53 = v52;
              v54 = v62;
              *(_DWORD *)&v90[4] = v62;
            }
            else
            {
              *(_DWORD *)&v90[4] = v86.cy;
              v61 = *(_DWORD *)v90 * v86.cy / v54;
              v54 = v86.cy;
              v53 = v61;
              *(_DWORD *)v90 = v61;
            }
          }
          else
          {
            cy = v86.cy;
          }
          v43 = v43 * v53 / v52;
          v41 = v41 * v54 / cy;
          break;
        default:
          if ( v58 != 5 )
          {
            if ( v58 == 255 )
              break;
            v59 = WdLogNewEntry5_WdAssertion((unsigned int)(v58 - 5));
            *(_QWORD *)(v59 + 24) = *(int *)(v57 + 12);
            WdLogEvent5_WdAssertion(v59);
          }
          v44 |= 0x100u;
          break;
      }
    }
    v63 = (struct tagSIZE)*(unsigned int *)(v57 + 20);
    *(_DWORD *)&v90[296] = v43;
    *(_DWORD *)&v90[300] = v41;
    if ( (unsigned int)(v63.cx - 5) <= 0xB )
      v63 = (struct tagSIZE)(unsigned int)((v63.cx - 1) % 4 + 1);
    v64 = v63.cx - 2;
    LOBYTE(v63.cx) = BYTE2(v86.cx);
    v23 = ((unsigned __int8)v44 ^ (unsigned __int8)(((v64 & 0xFFFFFFFD) == 0) << 7)) & 0x80 ^ v44;
    *(_DWORD *)&v90[268] = v23;
    if ( !BYTE2(v86.cx) && !*(_DWORD *)&v90[40] )
    {
      v65 = EdidBaseBlockPtr;
      if ( EdidBaseBlockPtr )
      {
        if ( (unsigned __int8)DpiInternal::HasValidPreferredDetailedTimingDescriptor(
                                EdidBaseBlockPtr,
                                *(const void **)&v63) )
        {
          IsAudioAvailableInEdid = DpiInternal::IsAudioAvailableInEdid(
                                     *(DpiInternal **)&v90[56],
                                     (void *)(unsigned int)v87);
          LODWORD(v85) = DpiInternal::IsPreferredModeInterlaced(v65, (const void *)IsAudioAvailableInEdid);
          v68 = Win81::DetermineViewDistance(
                  *(Win81 **)&v90[56],
                  &v88,
                  (const struct tagSIZE *)*(unsigned int *)&v90[76],
                  (int)&v89,
                  (const struct tagSIZE *)v85,
                  v67,
                  (unsigned int *)&v90[336]);
          v70 = *(_DWORD *)&v90[336];
          v23 ^= ((unsigned __int8)v23 ^ (unsigned __int8)(16 * v68)) & 0x10;
          *(_DWORD *)&v90[268] = v23;
          if ( !*(_DWORD *)&v90[336] )
          {
            v71 = WdLogNewEntry5_WdAssertion(v69);
            *(_QWORD *)(v71 + 24) = 1032LL;
            WdLogEvent5_WdAssertion(v71);
          }
LABEL_72:
          cx = v86.cx;
          goto LABEL_73;
        }
      }
    }
    v70 = 0;
    *(_DWORD *)&v90[336] = 0;
    if ( !LOBYTE(v63.cx) )
      goto LABEL_72;
    cx = v86.cx;
    if ( LOBYTE(v86.cx) )
    {
      Win81::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(*(Win81 **)&v90[304], v63, (__int64)&v90[272], v56);
      Win81::FillOverridesAndAdjustedScaleFactor((Win81 *)*(unsigned int *)&v90[24], v74, (__int64)&v90[272], v75);
      v23 |= 0x400u;
      *(_DWORD *)&v90[268] = v23;
      goto LABEL_74;
    }
LABEL_73:
    Win81::FillDpiInfo(
      (Win81 *)&v90[296],
      (const struct tagSIZE *)&v90[304],
      (const struct tagSIZE *)v70,
      *(unsigned int *)&v90[24],
      (unsigned int)v85,
      (__int64)&v90[272]);
LABEL_74:
    if ( *(_DWORD *)&v90[364] )
    {
      v73 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v73 + 24) = 1049LL;
      WdLogEvent5_WdAssertion(v73);
    }
    *(_DWORD *)&v90[364] = v23;
    if ( cx
      || (v23 & 4) == 0
      && (*(_DWORD *)&v90[232] + *(_DWORD *)&v90[236]) / 2 <= (*(_DWORD *)&v90[328] + *(_DWORD *)&v90[332]) / 2 )
    {
      *(_OWORD *)&v90[176] = *(_OWORD *)&v90[272];
      v91 = *(_OWORD *)&v90[288];
      *(_OWORD *)&v90[208] = *(_OWORD *)&v90[304];
      v93 = *(_OWORD *)&v90[336];
      *(_OWORD *)&v90[256] = *(_OWORD *)&v90[352];
      v23 = *(_DWORD *)&v90[364];
      *(_OWORD *)&v90[224] = *(_OWORD *)&v90[320];
    }
    if ( v90[88] )
      (*(void (__fastcall **)(_QWORD, __int64))&v90[104])(*(_QWORD *)&v90[112], v57);
    LODWORD(v8) = *(_DWORD *)&v90[72];
    v22 = *(_QWORD *)&v90[80] + 1LL;
    v7 = *(DXGADAPTER **)&v90[56];
    *(_QWORD *)&v90[80] = v22;
    if ( v22 >= *(_QWORD *)&v90[64] )
    {
      v12 = (_OWORD *)a6;
      goto LABEL_96;
    }
  }
  v76 = (_QWORD *)WdLogNewEntry5_WdError(v29);
  v76[3] = (unsigned int)v8;
  v76[4] = (unsigned int)v87;
  v76[5] = v12;
  WdLogEvent5_WdError(v76);
LABEL_90:
  if ( v90[88] )
    (*(void (__fastcall **)(_QWORD, const struct _DXGDMM_VIDPN_INTERFACE *))&v90[104])(*(_QWORD *)&v90[112], v26);
LABEL_103:
  if ( v90[128] )
    (*(void (__fastcall **)(_QWORD, _QWORD))&v90[144])(*(_QWORD *)&v90[152], *(_QWORD *)&v90[136]);
  return (unsigned int)v12;
}
