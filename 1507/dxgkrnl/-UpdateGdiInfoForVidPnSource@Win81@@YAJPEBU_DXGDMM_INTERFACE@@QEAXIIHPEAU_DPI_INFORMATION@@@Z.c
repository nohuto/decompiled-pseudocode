/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0164AF4
 * Callers:
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0164464 (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C00085E0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z @ 0x1C0008A70 (-HasValidPreferredDetailedTimingDescriptor@DpiInternal@@YA_NPEBX@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0009E4C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?GetNativeResolution@DpiInternal@@YA?AUtagSIZE@@PEBX@Z @ 0x1C000A094 (-GetNativeResolution@DpiInternal@@YA-AUtagSIZE@@PEBX@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?IsPreferredModeInterlaced@DpiInternal@@YA_NPEBX@Z @ 0x1C0010E04 (-IsPreferredModeInterlaced@DpiInternal@@YA_NPEBX@Z.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00627F0 (DmmGetVideoOutputTechnology.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C00AC14C (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00AC250 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00AC358 (MonitorGetEdidBaseBlockPtr.c)
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C0160C74 (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C0164288 (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C01643F8 (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C016454C (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0164664 (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetPhysicalSizeFromEDID@Win81@@YAXPEBXPEAUtagSIZE@@@Z @ 0x1C0164708 (-GetPhysicalSizeFromEDID@Win81@@YAXPEBXPEAUtagSIZE@@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@@Z @ 0x1C01648F0 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@.c)
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
  __int64 v20; // rdx
  struct tagSIZE v21; // r8
  const struct Win81::DPI_SCALE_FACTOR_COLLECTION *v22; // r9
  __int64 v23; // rcx
  unsigned __int64 v24; // r14
  unsigned int v25; // edi
  int v26; // eax
  __int64 v27; // rcx
  const struct _DXGDMM_VIDPN_INTERFACE *v28; // r13
  __int64 (__fastcall *v29)(_QWORD, _QWORD, _QWORD, __int64 *); // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v36; // eax
  bool v37; // si
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v38; // r15d
  int VideoOutputTechnology; // eax
  __int64 v40; // rcx
  __int64 v41; // rbx
  _QWORD *v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // r14d
  BOOL v46; // eax
  unsigned int v47; // esi
  int v48; // edi
  DpiInternal *v49; // rbx
  const void *v50; // rdx
  __int64 NativeResolution; // rax
  struct tagSIZE *v52; // r8
  struct tagSIZE v53; // r9
  int v54; // r12d
  LONG v55; // eax
  unsigned int v56; // r13d
  unsigned int v57; // r15d
  unsigned int v58; // ebx
  bool v59; // al
  __int64 v60; // r8
  struct _DPI_INFORMATION *v61; // r9
  __int64 v62; // r12
  __int64 v63; // rdx
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  __int64 v69; // rcx
  __int64 v70; // rax
  unsigned int cy; // ecx
  unsigned int v72; // eax
  unsigned int v73; // eax
  struct tagSIZE v74; // rdx
  int v75; // eax
  DpiInternal *v76; // rsi
  unsigned int IsAudioAvailableInEdid; // eax
  int v78; // edx
  char v79; // al
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned int v84; // ebx
  __int64 v85; // rax
  char cx; // si
  __int64 v87; // rax
  __int64 v88; // rdx
  struct _DPI_INFORMATION *v89; // r9
  _QWORD *v90; // rax
  unsigned int v91; // eax
  __int64 v92; // rax
  __int128 v93; // xmm1
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  __int128 v96; // xmm0
  struct _D3DKMDT_2DREGION *v98; // [rsp+28h] [rbp-E0h]
  tagSIZE v99; // [rsp+48h] [rbp-C0h] BYREF
  void *v100; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v101; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v102; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v103[368]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v104; // [rsp+1D8h] [rbp+D0h]
  DpiInternal *EdidBaseBlockPtr; // [rsp+1E8h] [rbp+E0h]
  __int128 v106; // [rsp+1F0h] [rbp+E8h]

  v6 = (__int64 (__fastcall *)(const struct _DXGDMM_INTERFACE *, _BYTE *, _BYTE *))*((_QWORD *)this + 6);
  v7 = a2;
  v8 = (unsigned int)a3;
  *(_QWORD *)&v103[56] = a2;
  *(_DWORD *)&v103[24] = a4;
  *(_DWORD *)&v103[72] = (_DWORD)a3;
  *(_QWORD *)&v103[48] = 0LL;
  memset(&v103[136], 0, 28);
  v103[128] = 0;
  *(_QWORD *)&v103[8] = 0LL;
  v10 = v6(a2, &v103[8], &v103[48]);
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
    (__int64)&v103[128],
    *(__int64 *)&v103[8],
    *((_QWORD *)this + 8),
    (__int64)v7);
  v14 = *(_QWORD *)&v103[136];
  *(_QWORD *)&v103[16] = 0LL;
  *(_QWORD *)&v103[32] = 0LL;
  v15 = (**(__int64 (__fastcall ***)(_QWORD, _BYTE *, _BYTE *))&v103[48])(*(_QWORD *)&v103[136], &v103[16], &v103[32]);
  v12 = (_OWORD *)v15;
  if ( v15 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v13[3] = v14;
    goto LABEL_5;
  }
  *(_QWORD *)&v103[64] = 0LL;
  v17 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, _BYTE *))&v103[32])(
          *(_QWORD *)&v103[16],
          (unsigned int)v8,
          &v103[64]);
  v12 = (_OWORD *)v17;
  if ( v17 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v13[3] = v8;
    v19 = *(_QWORD *)&v103[16];
LABEL_93:
    v13[4] = v19;
    v13[5] = v12;
    goto LABEL_94;
  }
  memset(&v103[176], 0, 0x60uLL);
  v23 = *(_QWORD *)&v103[64];
  v12 = (_OWORD *)a6;
  v24 = 0LL;
  *(_QWORD *)&v103[80] = 0LL;
  v25 = *(_DWORD *)&v103[268] & 0xFFFFFFDE | (*(_QWORD *)&v103[64] > 1uLL) | *(_DWORD *)(a6 + 92) & 0x20;
  *(_DWORD *)&v103[268] = v25;
  v106 = *(_OWORD *)&v103[240];
  if ( !*(_QWORD *)&v103[64] )
  {
    v104 = *(_OWORD *)&v103[192];
LABEL_96:
    if ( (v25 & 2) == 0
      || (v21 = (struct tagSIZE)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)&v103[256]), 4)),
          v21.cx == 1234568) )
    {
      v91 = *(_DWORD *)&v103[184];
    }
    else
    {
      v91 = Win81::AdjustDesktopScaleFactorForOverride((Win81 *)0x64, *(__int64 *)&v103[208], v21, v22);
      *(_DWORD *)&v103[184] = v91;
    }
    if ( !v91 )
    {
      v92 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(v23, v20, v21, v22);
      *(_QWORD *)(v92 + 24) = 1076LL;
      WdLogEvent5_WdAssertion(v92);
    }
    v93 = v104;
    *v12 = *(_OWORD *)&v103[176];
    v94 = *(_OWORD *)&v103[208];
    v12[1] = v93;
    v95 = *(_OWORD *)&v103[224];
    v12[2] = v94;
    v96 = v106;
    v12[3] = v95;
    v12[4] = v96;
    v12[5] = *(_OWORD *)&v103[256];
    LODWORD(v12) = 0;
    goto LABEL_103;
  }
  v104 = *(_OWORD *)&v103[192];
  while ( 1 )
  {
    LODWORD(v100) = -1;
    BYTE2(v99.cx) = 0;
    v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, void **))(*(_QWORD *)&v103[32] + 8LL))(
            *(_QWORD *)&v103[16],
            (unsigned int)v8,
            v24,
            &v100);
    v12 = (_OWORD *)v26;
    if ( v26 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v19 = (unsigned int)v8;
      v13[3] = v24;
      goto LABEL_93;
    }
    v28 = 0LL;
    v102 = 0LL;
    v29 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)&v103[32] + 24LL);
    memset(&v103[96], 0, 28);
    v103[88] = 0;
    v30 = v29(*(_QWORD *)&v103[16], (unsigned int)v8, (unsigned int)v100, &v102);
    v12 = (_OWORD *)v30;
    if ( v30 < 0 )
      break;
    v34 = v102;
    if ( !v102 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v31, 0LL, v32, v33);
      *(_QWORD *)(v35 + 24) = 831LL;
      WdLogEvent5_WdAssertion(v35);
      v34 = v102;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v103[88],
      v34,
      *(_QWORD *)(*(_QWORD *)&v103[32] + 32LL),
      *(__int64 *)&v103[16]);
    v28 = *(const struct _DXGDMM_VIDPN_INTERFACE **)&v103[96];
    v36 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(*(_QWORD *)&v103[96] + 20LL));
    v37 = 0;
    v99.cy = -2;
    LOBYTE(v99.cx) = 0;
    v38 = v36;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(v7, (unsigned int)v100, &v99.cy, 0LL);
    v41 = VideoOutputTechnology;
    if ( VideoOutputTechnology >= 0 )
    {
      v37 = IsInternalVideoOutput(v99.cy);
      LOBYTE(v99.cx) = v37;
    }
    else
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v40);
      v42[3] = v7;
      v42[4] = (unsigned int)v100;
      v42[5] = v41;
      WdLogEvent5_WdError(v42);
    }
    v45 = 0;
    v46 = v37;
    v47 = 0;
    *(_DWORD *)&v103[40] = 0;
    *(_DWORD *)&v103[76] = v46;
    v101 = 0LL;
    v48 = ((unsigned __int8)v25 ^ (unsigned __int8)(v25 | (4 * v46))) & 4 ^ v25;
    EdidBaseBlockPtr = (DpiInternal *)MonitorGetEdidBaseBlockPtr(v7, (unsigned int)v100, v43, v44);
    v49 = EdidBaseBlockPtr;
    NativeResolution = (__int64)DpiInternal::GetNativeResolution(EdidBaseBlockPtr, v50);
    v102 = NativeResolution;
    if ( ((v38 - 2) & 0xFFFFFFFD) != 0 )
    {
      LODWORD(NativeResolution) = HIDWORD(v102);
      v54 = v102;
    }
    else
    {
      v54 = HIDWORD(v102);
      v102 = __PAIR64__(NativeResolution, HIDWORD(v102));
    }
    *(_DWORD *)&v103[28] = NativeResolution;
    if ( !v49 )
    {
      v48 |= 8u;
LABEL_32:
      BYTE2(v99.cx) = (*(_BYTE *)(*(_QWORD *)&v103[56] + 284LL) & 0x10) != 0;
      goto LABEL_33;
    }
    Win81::GetPhysicalSizeFromEDID(v49, (int *)&v101, v52, *(_QWORD *)&v53);
    if ( ((v38 - 2) & 0xFFFFFFFD) != 0 )
    {
      v45 = HIDWORD(v101);
      v47 = v101;
    }
    else
    {
      v45 = v101;
      v47 = HIDWORD(v101);
      v101 = __PAIR64__(v101, HIDWORD(v101));
    }
    if ( v47 && v45 )
    {
      if ( (int)(v47 * v45) <= 16000 && !LOBYTE(v99.cx) )
      {
        v45 = 0;
        *(_DWORD *)&v103[40] = 1;
        v48 |= 0x40u;
        v101 = 0LL;
        v47 = 0;
        goto LABEL_32;
      }
    }
    else
    {
      v45 = 0;
      v101 = 0LL;
      v47 = 0;
    }
    if ( !v47 )
      goto LABEL_32;
LABEL_33:
    LODWORD(v12) = DpiInternal::GetCurrentSourceResolution(
                     *(DpiInternal **)&v103[136],
                     *(struct D3DKMDT_HVIDPN__ *const *)&v103[48],
                     v28,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)v103);
    if ( (int)v12 < 0 )
      goto LABEL_90;
    BYTE1(v99.cx) = 0;
    LODWORD(v12) = DpiInternal::GetCurrentTargetResolution(
                     *(DpiInternal **)&v103[136],
                     *(struct D3DKMDT_HVIDPN__ *const *)&v103[48],
                     v28,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v103[8],
                     (struct _D3DKMDT_2DREGION *)((char *)&v99 + 1));
    if ( (int)v12 < 0 )
      goto LABEL_90;
    if ( ((v38 - 2) & 0xFFFFFFFD) != 0 )
    {
      v55 = *(_DWORD *)&v103[12];
      v56 = *(_DWORD *)&v103[8];
    }
    else
    {
      v55 = *(_DWORD *)&v103[8];
      v56 = *(_DWORD *)&v103[12];
      *(_DWORD *)&v103[8] = *(_DWORD *)&v103[12];
      *(_DWORD *)&v103[12] = v55;
    }
    v57 = *(_DWORD *)v103;
    v99.cy = v55;
    if ( (v48 & 1) != 0 && v54 && *(_DWORD *)&v103[28] )
    {
      v58 = *(_DWORD *)&v103[4];
      if ( BYTE1(v99.cx) )
      {
        v58 = *(_DWORD *)&v103[4] >> 1;
        *(_DWORD *)&v103[4] >>= 1;
      }
      v59 = *(_DWORD *)v103 >= (unsigned int)(2 * v54) || v58 >= 2 * *(_DWORD *)&v103[28];
      v48 ^= ((unsigned __int8)v48 ^ (unsigned __int8)(v48 | (2 * v59))) & 2;
      if ( BYTE1(v99.cx) )
      {
        v58 *= 2;
        *(_DWORD *)&v103[4] = v58;
      }
    }
    else
    {
      v58 = *(_DWORD *)&v103[4];
    }
    memset(&v103[272], 0, 0x60uLL);
    v62 = *(_QWORD *)&v103[96];
    *(_DWORD *)&v103[356] = a5;
    *(_DWORD *)&v103[304] = *(_DWORD *)v103;
    v63 = *(unsigned int *)(*(_QWORD *)&v103[96] + 12LL);
    v64 = *(_DWORD *)(*(_QWORD *)&v103[96] + 12LL);
    *(_DWORD *)&v103[308] = v58;
    v65 = v64 - 1;
    if ( v65 )
    {
      v66 = v65 - 1;
      if ( !v66 )
        goto LABEL_58;
      v67 = v66 - 1;
      if ( !v67 )
        goto LABEL_64;
      v68 = v67 - 1;
      if ( v68 )
      {
        v69 = (unsigned int)(v68 - 1);
        if ( (_DWORD)v69 )
        {
          if ( (_DWORD)v69 == 250 )
            goto LABEL_64;
          v70 = WdLogNewEntry5_WdAssertion(v69, v63, v60, v61);
          *(_QWORD *)(v70 + 24) = *(int *)(v62 + 12);
          WdLogEvent5_WdAssertion(v70);
        }
        v48 |= 0x100u;
      }
      else
      {
LABEL_58:
        if ( (_DWORD)v63 == 4 )
        {
          cy = v99.cy;
          if ( v47 * v58 <= v45 * *(_DWORD *)v103 )
          {
            *(_DWORD *)v103 = v56;
            v73 = v58 * v56 / v57;
            v57 = v56;
            v58 = v73;
            *(_DWORD *)&v103[4] = v73;
          }
          else
          {
            *(_DWORD *)&v103[4] = v99.cy;
            v72 = *(_DWORD *)v103 * v99.cy / v58;
            v58 = v99.cy;
            v57 = v72;
            *(_DWORD *)v103 = v72;
          }
        }
        else
        {
          cy = v99.cy;
        }
        v47 = v47 * v57 / v56;
        v45 = v45 * v58 / cy;
      }
    }
LABEL_64:
    v74 = (struct tagSIZE)*(unsigned int *)(v62 + 20);
    *(_DWORD *)&v103[296] = v47;
    *(_DWORD *)&v103[300] = v45;
    if ( (unsigned int)(v74.cx - 5) <= 0xB )
      v74 = (struct tagSIZE)(unsigned int)((v74.cx - 1) % 4 + 1);
    v75 = v74.cx - 2;
    LOBYTE(v74.cx) = BYTE2(v99.cx);
    v25 = ((unsigned __int8)v48 ^ (unsigned __int8)(((v75 & 0xFFFFFFFD) == 0) << 7)) & 0x80 ^ v48;
    *(_DWORD *)&v103[268] = v25;
    if ( !BYTE2(v99.cx) && !*(_DWORD *)&v103[40] )
    {
      v76 = EdidBaseBlockPtr;
      if ( EdidBaseBlockPtr )
      {
        if ( (unsigned __int8)DpiInternal::HasValidPreferredDetailedTimingDescriptor(
                                EdidBaseBlockPtr,
                                *(const void **)&v74) )
        {
          IsAudioAvailableInEdid = DpiInternal::IsAudioAvailableInEdid(
                                     *(DpiInternal **)&v103[56],
                                     (void *)(unsigned int)v100);
          LODWORD(v98) = DpiInternal::IsPreferredModeInterlaced(v76, (const void *)IsAudioAvailableInEdid);
          v79 = Win81::DetermineViewDistance(
                  *(Win81 **)&v103[56],
                  &v101,
                  (const struct tagSIZE *)*(unsigned int *)&v103[76],
                  (int)&v102,
                  (const struct tagSIZE *)v98,
                  v78,
                  (unsigned int *)&v103[336]);
          v84 = *(_DWORD *)&v103[336];
          v25 ^= ((unsigned __int8)v25 ^ (unsigned __int8)(16 * v79)) & 0x10;
          *(_DWORD *)&v103[268] = v25;
          if ( !*(_DWORD *)&v103[336] )
          {
            v85 = WdLogNewEntry5_WdAssertion(v81, v80, v82, v83);
            *(_QWORD *)(v85 + 24) = 1032LL;
            WdLogEvent5_WdAssertion(v85);
          }
LABEL_72:
          cx = v99.cx;
          goto LABEL_73;
        }
      }
    }
    v84 = 0;
    *(_DWORD *)&v103[336] = 0;
    if ( !LOBYTE(v74.cx) )
      goto LABEL_72;
    cx = v99.cx;
    if ( LOBYTE(v99.cx) )
    {
      Win81::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(*(Win81 **)&v103[304], v74, (__int64)&v103[272], v61);
      Win81::FillOverridesAndAdjustedScaleFactor((Win81 *)*(unsigned int *)&v103[24], v88, (__int64)&v103[272], v89);
      v25 |= 0x400u;
      *(_DWORD *)&v103[268] = v25;
      goto LABEL_74;
    }
LABEL_73:
    Win81::FillDpiInfo(
      (Win81 *)&v103[296],
      (const struct tagSIZE *)&v103[304],
      (const struct tagSIZE *)v84,
      *(unsigned int *)&v103[24],
      (unsigned int)v98,
      (__int64)&v103[272]);
LABEL_74:
    if ( *(_DWORD *)&v103[364] )
    {
      v87 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(v23, v20, v21, v22);
      *(_QWORD *)(v87 + 24) = 1049LL;
      WdLogEvent5_WdAssertion(v87);
    }
    *(_DWORD *)&v103[364] = v25;
    if ( cx
      || (v25 & 4) == 0
      && (v21 = (struct tagSIZE)(unsigned int)((*(_DWORD *)&v103[328] + *(_DWORD *)&v103[332]) / 2),
          v20 = (unsigned int)((*(_DWORD *)&v103[232] + *(_DWORD *)&v103[236]) >> 31),
          LODWORD(v20) = (*(_DWORD *)&v103[232] + *(_DWORD *)&v103[236]) % 2,
          (*(_DWORD *)&v103[232] + *(_DWORD *)&v103[236]) / 2 <= v21.cx) )
    {
      *(_OWORD *)&v103[176] = *(_OWORD *)&v103[272];
      v104 = *(_OWORD *)&v103[288];
      *(_OWORD *)&v103[208] = *(_OWORD *)&v103[304];
      v106 = *(_OWORD *)&v103[336];
      *(_OWORD *)&v103[256] = *(_OWORD *)&v103[352];
      v25 = *(_DWORD *)&v103[364];
      *(_OWORD *)&v103[224] = *(_OWORD *)&v103[320];
    }
    if ( v103[88] )
      (*(void (__fastcall **)(_QWORD, __int64))&v103[104])(*(_QWORD *)&v103[112], v62);
    LODWORD(v8) = *(_DWORD *)&v103[72];
    v24 = *(_QWORD *)&v103[80] + 1LL;
    v7 = *(DXGADAPTER **)&v103[56];
    *(_QWORD *)&v103[80] = v24;
    if ( v24 >= *(_QWORD *)&v103[64] )
    {
      v12 = (_OWORD *)a6;
      goto LABEL_96;
    }
  }
  v90 = (_QWORD *)WdLogNewEntry5_WdError(v31);
  v90[3] = (unsigned int)v8;
  v90[4] = (unsigned int)v100;
  v90[5] = v12;
  WdLogEvent5_WdError(v90);
LABEL_90:
  if ( v103[88] )
    (*(void (__fastcall **)(_QWORD, const struct _DXGDMM_VIDPN_INTERFACE *))&v103[104])(*(_QWORD *)&v103[112], v28);
LABEL_103:
  if ( v103[128] )
    (*(void (__fastcall **)(_QWORD, _QWORD))&v103[144])(*(_QWORD *)&v103[152], *(_QWORD *)&v103[136]);
  return (unsigned int)v12;
}
