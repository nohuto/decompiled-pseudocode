/*
 * XREFs of MagSetLensContextInformation @ 0x1C01F5668
 * Callers:
 *     MagSlicerControl @ 0x1C01F6210 (MagSlicerControl.c)
 *     NtUserMagSetContextInformation @ 0x1C0217550 (NtUserMagSetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C0056A4C (MagpFindThreadContext.c)
 *     MagpRevokeInputTransfrom @ 0x1C00EFCB0 (MagpRevokeInputTransfrom.c)
 *     memcmp @ 0x1C0158D00 (memcmp.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?Save@CSmartFloatingSave@@QEAAJXZ @ 0x1C01DAFDC (-Save@CSmartFloatingSave@@QEAAJXZ.c)
 *     ChangeComposableCursor @ 0x1C01DD530 (ChangeComposableCursor.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01F4C64 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01F4CA0 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     DwmAsyncMagnCreate @ 0x1C025BE84 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnDestroy @ 0x1C025BF40 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C025BFE4 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C025C0BC (DwmAsyncMagnSetDesktopTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C025C2A4 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C025C38C (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C025C484 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall MagSetLensContextInformation(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, _DWORD *Buf1)
{
  __int64 v6; // r14
  int v7; // edi
  unsigned int v9; // ebx
  __int64 v10; // r12
  _QWORD *ThreadContext; // rax
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // r13
  __int64 *v15; // rax
  char v16; // r11
  __int64 *v17; // rdi
  int v18; // ebx
  __int64 *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r11
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // esi
  char *v28; // rdx
  _QWORD *v29; // rcx
  __int64 *v30; // rdi
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r15
  __int64 *v34; // rax
  void *v35; // rax
  __int64 v36; // rcx
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // rsi
  bool v43; // zf
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // rax
  void *v49; // rax
  int v50; // eax
  void *v51; // rax
  void *v52; // rax
  unsigned int v53; // eax
  void *v54; // rax
  int v55; // eax
  __int64 *v56; // r14
  char v57; // r11
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // rax
  int v63; // ebx
  void *v64; // rax
  int v65; // ebx
  void *v66; // rax
  int v67; // ebx
  void *v68; // rax
  double v69; // xmm1_8
  __int64 v70; // rax
  double v71; // xmm2_8
  unsigned __int16 v72; // cx
  __int128 v73; // xmm1
  __int64 *v74; // rdi
  unsigned __int16 v75; // dx
  int *v76; // rbx
  INT v77; // eax
  __int128 v78; // xmm0
  __int64 *LensContext; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rcx
  __int64 *v84; // rax
  void *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rcx
  void *v88; // rax
  void *v89; // rax
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  void *v95; // rax
  int v96; // eax
  __int64 v97; // r13
  __int64 *v98; // rax
  __int64 v100; // [rsp+30h] [rbp-20h] BYREF
  int v101; // [rsp+38h] [rbp-18h]
  int v102; // [rsp+3Ch] [rbp-14h]
  __int64 v103; // [rsp+40h] [rbp-10h]
  __int64 v104; // [rsp+48h] [rbp-8h]

  v6 = 0LL;
  v7 = a4;
  v100 = 0LL;
  v9 = -1073741811;
  v10 = 0LL;
  ThreadContext = MagpFindThreadContext(a1, a2);
  v14 = (__int64)ThreadContext;
  if ( !ThreadContext )
    return (unsigned int)-1073741661;
  switch ( a5 )
  {
    case 0:
      if ( !v12 || MagpFindLensContext((__int64)ThreadContext, a3, 2) )
        return v9;
      v6 = Win32AllocPool(264LL, 1735226197LL);
      if ( !v6 )
        return (unsigned int)-1073741801;
      if ( a3 != -1 )
      {
        v95 = (void *)ReferenceDwmApiPort(v92, v91, v93, v94);
        v96 = DwmAsyncMagnCreate(v95);
        v9 = v96;
        if ( v96 == -1073741823 )
        {
          *(_DWORD *)(v6 + 16) |= 0x20u;
        }
        else if ( v96 < 0 )
        {
          goto LABEL_155;
        }
        v7 = a4;
      }
      memset((void *)(v6 + 16), 0, 0xF8uLL);
      *(double *)(v6 + 40) = gOneDouble;
      *(double *)(v6 + 48) = gOneDouble;
      if ( a3 == -1 )
        *(_QWORD *)(v6 + 24) = -1LL;
      else
        HMAssignmentLock(v6 + 24, a3);
      v97 = v14 + 40;
      *(_DWORD *)(v6 + 16) ^= (*(_DWORD *)(v6 + 16) ^ ((v7 == 1) << 7)) & 0x80;
      v98 = *(__int64 **)(v97 + 8);
      if ( *v98 != v97 )
        __fastfail(3u);
      *(_QWORD *)v6 = v97;
      *(_QWORD *)(v6 + 8) = v98;
      *v98 = v6;
      *(_QWORD *)(v97 + 8) = v6;
      v6 = 0LL;
      v9 = 0;
LABEL_151:
      if ( !v10 )
        return v9;
      Win32FreePool(v10, v23, v20);
      v33 = v100;
LABEL_153:
      if ( !v33 )
        return v9;
      Win32FreePool(v33, v28, v31);
      goto LABEL_155;
    case 1:
      MagpRevokeInputTransfrom();
      if ( !a3 )
        return v9;
      LensContext = MagpFindLensContext(v14, a3, v7);
      v6 = (__int64)LensContext;
      if ( !LensContext )
        return v9;
      v83 = *LensContext;
      v84 = (__int64 *)LensContext[1];
      if ( *(_QWORD *)(v83 + 8) != v6 || *v84 != v6 )
        __fastfail(3u);
      *v84 = v83;
      *(_QWORD *)(v83 + 8) = v84;
      if ( a3 != -1 )
      {
        if ( (*(_DWORD *)(v6 + 16) & 0x40) != 0 )
        {
          ChangeComposableCursor(0);
          *(_DWORD *)(v6 + 16) &= ~0x40u;
        }
        if ( (*(_DWORD *)(v6 + 16) & 0x20) != 0 )
        {
          v9 = 0;
        }
        else
        {
          v85 = (void *)ReferenceDwmApiPort(v83, v80, v81, v82);
          v9 = DwmAsyncMagnDestroy(v85);
        }
        HMAssignmentUnlock(v6 + 24);
        v86 = *(_QWORD *)(v6 + 232);
        if ( v86 )
          Win32FreePool(v86, v80, v81);
        v87 = *(_QWORD *)(v6 + 256);
        if ( v87 )
          Win32FreePool(v87, v80, v81);
        if ( (v9 & 0x80000000) != 0 )
          goto LABEL_155;
        goto LABEL_134;
      }
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL) + 224LL) == v6 )
      {
        v88 = (void *)ReferenceDwmApiPort(v83, v80, v81, v82);
        v9 = DwmAsyncMagnSetDesktopColorTransform(v88);
        v83 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL);
        *(_QWORD *)(v83 + 224) = 0LL;
      }
      else
      {
        v9 = 0;
      }
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL) + 216LL) == v6 )
      {
        v89 = (void *)ReferenceDwmApiPort(v83, v80, v81, v82);
        v90 = DwmAsyncMagnSetDesktopTransform(v89, 0);
        v80 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL);
        *(_QWORD *)(v80 + 216) = 0LL;
      }
      else
      {
        v90 = 0;
      }
      if ( (v9 & 0x80000000) == 0 )
      {
        if ( v90 >= 0 )
        {
LABEL_134:
          v9 = 0;
          goto LABEL_155;
        }
        v9 = v90;
      }
LABEL_155:
      if ( v6 )
        Win32FreePool(v6, v80, v81);
      return v9;
    case 2:
      if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return v9;
      v74 = MagpFindLensContext((__int64)ThreadContext, a3, v13);
      if ( !v74 )
        return v9;
      v9 = CSmartFloatingSave::Save((CSmartFloatingSave *)&v100);
      if ( (v9 & 0x80000000) != 0 )
        return v9;
      if ( (*(_DWORD *)(v74[3] + 352) & 0xF) != 0 || (v75 = *(_WORD *)(gpDispInfo + 176LL), v75 <= 0x60u) )
      {
        v76 = Buf1;
        if ( (v74[2] & 2) == 0 )
        {
          *((_DWORD *)v74 + 8) = -*Buf1;
          v77 = Buf1[1];
          goto LABEL_109;
        }
      }
      else
      {
        v76 = Buf1;
        if ( (v74[2] & 2) == 0 )
        {
          *((_DWORD *)v74 + 8) = -EngMulDiv(*Buf1, v75, 96);
          v77 = EngMulDiv(Buf1[1], *(unsigned __int16 *)(gpDispInfo + 176LL), 96);
          goto LABEL_109;
        }
      }
      *((_DWORD *)v74 + 8) = -(int)((double)*v76 * *((double *)v74 + 11));
      v77 = (int)((double)v76[1] * *((double *)v74 + 12));
LABEL_109:
      *((_DWORD *)v74 + 9) = -v77;
      v78 = *(_OWORD *)v76;
      *((_DWORD *)v74 + 4) |= 1u;
      *(_OWORD *)(v74 + 9) = v78;
      return 0;
    case 3:
      if ( !v12 )
        return v9;
      v56 = MagpFindLensContext((__int64)ThreadContext, a3, v13);
      if ( !v56 )
        return v9;
      v55 = CSmartFloatingSave::Save((CSmartFloatingSave *)&v100);
      if ( v55 < 0 )
        return (unsigned int)v55;
      if ( v57 )
      {
        if ( *(double *)Buf1 != *((double *)Buf1 + 1) )
          return v9;
        v43 = memcmp(Buf1, &gMagOutTransformIdentity, 0x20uLL) == 0;
        v62 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL) + 216LL);
        if ( !v43 )
        {
          if ( v62 )
          {
            if ( v56 != v62 )
              return v9;
            v67 = (int)*((double *)Buf1 + 3);
            v68 = (void *)ReferenceDwmApiPort(v59, v58, v60, v61);
            v9 = DwmAsyncMagnSetDesktopTransform(v68, v67);
          }
          else
          {
            v65 = (int)*((double *)Buf1 + 3);
            v66 = (void *)ReferenceDwmApiPort(v59, v58, v60, v61);
            v9 = DwmAsyncMagnSetDesktopTransform(v66, v65);
            if ( (v9 & 0x80000000) != 0 )
              return v9;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL) + 216LL) = v56;
          }
          goto LABEL_97;
        }
        if ( v62 )
        {
          if ( v56 != v62 )
            return v9;
          v63 = (int)*((double *)Buf1 + 3);
          v64 = (void *)ReferenceDwmApiPort(v59, v58, v60, v61);
          v9 = DwmAsyncMagnSetDesktopTransform(v64, v63);
          if ( (v9 & 0x80000000) != 0 )
            return v9;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL) + 216LL) = 0LL;
LABEL_97:
          if ( (v9 & 0x80000000) != 0 )
            return v9;
          *(_OWORD *)(v56 + 11) = *(_OWORD *)Buf1;
          v73 = *((_OWORD *)Buf1 + 1);
          *((_DWORD *)v56 + 4) |= 2u;
          *(_OWORD *)(v56 + 13) = v73;
          return 0;
        }
      }
      else
      {
        v56[5] = *(_QWORD *)Buf1;
        v56[6] = *((_QWORD *)Buf1 + 1);
        v69 = *((double *)Buf1 + 2);
        v70 = v56[3];
        *((double *)v56 + 7) = v69;
        v71 = *((double *)Buf1 + 3);
        *((double *)v56 + 8) = v71;
        if ( (*(_DWORD *)(v70 + 352) & 0xF) == 0 )
        {
          v72 = *(_WORD *)(gpDispInfo + 176LL);
          if ( v72 > 0x60u )
          {
            *((double *)v56 + 7) = (double)v72 * v69 / 96.0;
            *((double *)v56 + 8) = (double)*(unsigned __int16 *)(gpDispInfo + 176LL) * v71 / 96.0;
            *((double *)v56 + 5) = *(double *)Buf1 * 96.0 / (double)*(unsigned __int16 *)(gpDispInfo + 176LL);
            *((double *)v56 + 6) = *((double *)Buf1 + 1) * 96.0 / (double)*(unsigned __int16 *)(gpDispInfo + 176LL);
          }
        }
      }
      v9 = 0;
      goto LABEL_97;
    case 4:
      if ( Buf1[8] == 3 )
        return (unsigned int)MagpRevokeInputTransfrom();
      else
        return (unsigned int)MagpUpdateInputTransfrom((struct _MAGN_INPUT_TRANSFORM *)Buf1);
    case 5:
      if ( !v12 )
        return v9;
      v37 = MagpFindLensContext((__int64)ThreadContext, a3, v13);
      v42 = v37;
      if ( !v37 )
        return v9;
      if ( a3 == -1 )
      {
        v43 = memcmp(Buf1, &gMagEffectIdentity, 0x64uLL) == 0;
        v48 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL) + 224LL);
        if ( v43 )
        {
          if ( v48 )
          {
            if ( v48 != v42 )
              return v9;
            v49 = (void *)ReferenceDwmApiPort(v45, v44, v46, v47);
            v9 = DwmAsyncMagnSetDesktopColorTransform(v49);
            if ( (v9 & 0x80000000) != 0 )
              return v9;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL) + 224LL) = 0LL;
LABEL_63:
            if ( (v9 & 0x80000000) != 0 )
              return v9;
            *(_OWORD *)(v42 + 15) = *(_OWORD *)Buf1;
            *(_OWORD *)(v42 + 17) = *((_OWORD *)Buf1 + 1);
            *(_OWORD *)(v42 + 19) = *((_OWORD *)Buf1 + 2);
            *(_OWORD *)(v42 + 21) = *((_OWORD *)Buf1 + 3);
            *(_OWORD *)(v42 + 23) = *((_OWORD *)Buf1 + 4);
            *(_OWORD *)(v42 + 25) = *((_OWORD *)Buf1 + 5);
            v50 = Buf1[24];
            *((_DWORD *)v42 + 4) |= 4u;
            *((_DWORD *)v42 + 54) = v50;
            return 0;
          }
LABEL_62:
          v9 = 0;
          goto LABEL_63;
        }
        if ( !v48 )
        {
          v51 = (void *)ReferenceDwmApiPort(v45, v44, v46, v47);
          v9 = DwmAsyncMagnSetDesktopColorTransform(v51);
          if ( (v9 & 0x80000000) != 0 )
            return v9;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL) + 224LL) = v42;
          goto LABEL_63;
        }
        if ( v48 != v42 )
          return v9;
        v52 = (void *)ReferenceDwmApiPort(v45, v44, v46, v47);
        v53 = DwmAsyncMagnSetDesktopColorTransform(v52);
      }
      else
      {
        if ( (v37[2] & 0x20) != 0 )
          goto LABEL_62;
        v54 = (void *)ReferenceDwmApiPort(v39, v38, v40, v41);
        v53 = DwmAsyncMagnSetWindowColorTransform(v54);
      }
      v9 = v53;
      goto LABEL_63;
    case 6:
      v27 = Buf1[1] + *Buf1;
      if ( v27 > 0x19 )
        return v9;
      if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return v9;
      v30 = MagpFindLensContext((__int64)ThreadContext, a3, v13);
      if ( !v30 )
        return v9;
      if ( v27 )
      {
        v33 = Win32AllocPool(8LL * v27, 1735226197LL);
        if ( !v33 )
          return (unsigned int)-1073741801;
      }
      else
      {
        v33 = v100;
      }
      v101 = *Buf1;
      v102 = Buf1[1];
      v103 = v33;
      if ( v27 )
      {
        v31 = v27;
        v28 = (char *)Buf1 - v33;
        v29 = (_QWORD *)v33;
        do
        {
          *v29 = *(_QWORD *)((char *)v29 + (_QWORD)v28 + 8);
          ++v29;
          --v31;
        }
        while ( v31 );
      }
      if ( (v30[2] & 0x20) != 0
        || ((v34 = (__int64 *)v30[3]) != 0LL ? (v100 = *v34) : (v100 = 0LL),
            v35 = (void *)ReferenceDwmApiPort(v29, v28, v31, v32),
            v9 = DwmAsyncMagnSetWindowFilterList(v35),
            (v9 & 0x80000000) == 0) )
      {
        v36 = v30[29];
        if ( v36 )
        {
          Win32FreePool(v36, v28, v31);
          v30[29] = 0LL;
        }
        *((_DWORD *)v30 + 56) = *Buf1;
        *((_DWORD *)v30 + 57) = Buf1[1];
        v30[29] = v33;
        if ( v27 )
          *((_DWORD *)v30 + 4) |= 8u;
        else
          *((_DWORD *)v30 + 4) &= ~8u;
        return 0;
      }
      goto LABEL_153;
    case 7:
      if ( *Buf1 > 6u )
        return v9;
      if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return v9;
      v19 = MagpFindLensContext((__int64)ThreadContext, a3, v13);
      if ( !v19 )
        return v9;
      if ( (_DWORD)v22 )
      {
        v10 = Win32AllocPool(24 * v22, 1735226197LL);
        if ( !v10 )
          return (unsigned int)-1073741801;
      }
      v23 = 0LL;
      v24 = (unsigned int)*Buf1;
      v102 = Buf1[1];
      v103 = *((_QWORD *)Buf1 + 1);
      v101 = v24;
      v104 = v10;
      if ( (_DWORD)v24 )
      {
        do
        {
          v24 = 3 * v23;
          v23 = (unsigned int)(v23 + 1);
          *(_OWORD *)(v10 + 8 * v24) = *(_OWORD *)&Buf1[2 * v24 + 4];
          *(_QWORD *)(v10 + 8 * v24 + 16) = *(_QWORD *)&Buf1[2 * v24 + 8];
        }
        while ( (unsigned int)v23 < *Buf1 );
      }
      if ( (v19[2] & 0x20) != 0
        || (v25 = (void *)ReferenceDwmApiPort(v24, v23, v20, v21),
            v9 = DwmAsyncMagnSetWindowSharedTextures(v25),
            (v9 & 0x80000000) == 0) )
      {
        v26 = v19[32];
        if ( v26 )
        {
          Win32FreePool(v26, v23, v20);
          v19[32] = 0LL;
        }
        *((_DWORD *)v19 + 60) = *Buf1;
        *((_DWORD *)v19 + 61) = Buf1[1];
        *((_DWORD *)v19 + 62) = Buf1[2];
        *((_DWORD *)v19 + 63) = Buf1[3];
        v19[32] = v10;
        if ( *Buf1 )
          *((_DWORD *)v19 + 4) |= 0x10u;
        else
          *((_DWORD *)v19 + 4) &= ~0x10u;
        return 0;
      }
      goto LABEL_151;
  }
  if ( a5 == 9 && (*Buf1 & 0xFFFFFFFE) == 0 && (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v15 = MagpFindLensContext((__int64)ThreadContext, a3, v13);
    v17 = v15;
    if ( v15 )
    {
      v18 = v16 & 1;
      if ( ((*((_DWORD *)v15 + 4) >> 6) & 1) != v18 )
      {
        ChangeComposableCursor(v18);
        *((_DWORD *)v17 + 4) ^= (*((_DWORD *)v17 + 4) ^ (v18 << 6)) & 0x40;
      }
      return 0;
    }
  }
  return v9;
}
