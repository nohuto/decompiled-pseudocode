/*
 * XREFs of MagSetLensContextInformation @ 0x1401EB08C
 * Callers:
 *     NtUserMagSetContextInformation @ 0x1402B7E60 (NtUserMagSetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1401EBE3C (MagpFindThreadContext.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z @ 0x1401EBE5C (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1401EBE80 (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1401EBF98 (DwmAsyncMagnSetDesktopTransform.c)
 *     MagpRevokeInputTransfrom @ 0x14023BF80 (MagpRevokeInputTransfrom.c)
 *     ChangeComposableCursor @ 0x14024CDC4 (ChangeComposableCursor.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x14028D1F8 (DwmAsyncMagnSetWindowSharedTextures.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x140298428 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     DwmAsyncMagnCreate @ 0x140346B50 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnDestroy @ 0x140346C28 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x140346CD8 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopSamplingMode @ 0x140346DC8 (DwmAsyncMagnSetDesktopSamplingMode.c)
 *     DwmAsyncMagnSetSamplingMode @ 0x140346E88 (DwmAsyncMagnSetSamplingMode.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x140346F4C (DwmAsyncMagnSetWindowColorTransform.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall MagSetLensContextInformation(__int64 a1, __int64 a2, struct tagWND *a3, __int64 a4, char *Buf1)
{
  unsigned int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rsi
  struct _MAG_THREAD_CONTEXT *ThreadContext; // rax
  struct tagWND *v10; // r8
  int v11; // r9d
  struct _MAG_THREAD_CONTEXT *v12; // r13
  int v13; // r9d
  int v14; // r9d
  struct _MAG_LENS_CONTEXT *LensContext; // rax
  struct _MAG_LENS_CONTEXT *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ecx
  _DWORD *v20; // rdi
  INT v21; // eax
  __int128 v22; // xmm0
  int v23; // r9d
  unsigned int v24; // esi
  char *v25; // rdx
  struct _MAG_LENS_CONTEXT *v26; // rbx
  __int64 v27; // r8
  _QWORD *v28; // rcx
  void *v29; // rax
  void *v30; // rcx
  int v31; // ecx
  unsigned int v32; // eax
  int v33; // ecx
  int v35; // r9d
  struct _MAG_LENS_CONTEXT *v36; // rax
  __int64 v37; // rdx
  int v38; // r9d
  struct _MAG_LENS_CONTEXT *v39; // r12
  double v40; // xmm0_8
  bool v41; // zf
  __int64 v42; // rdx
  __int64 v43; // rax
  struct _MAG_LENS_CONTEXT *v44; // rcx
  __int128 v45; // xmm1
  __m128i v46; // xmm0
  __int64 v47; // rdx
  __int64 v48; // r14
  void *v49; // rax
  int v50; // eax
  void *v51; // rcx
  int v52; // r9d
  struct _MAG_LENS_CONTEXT *v53; // rbx
  __int64 v54; // r8
  __int64 v55; // rdx
  INT v56; // ecx
  void *v57; // rax
  int v58; // edi
  void *v59; // rax
  int v61; // edi
  void *v62; // rax
  int v63; // edi
  void *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 UserSessionState; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  struct _MAG_LENS_CONTEXT *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  _QWORD *v83; // rax
  int v84; // eax
  void *v85; // rax
  void *v86; // rcx
  void *v87; // rcx
  __int64 v88; // rax
  void *v89; // rax
  __int64 v90; // rax
  void *v91; // rax
  int v92; // eax
  char *v93; // r13
  __int64 *v94; // rax
  struct _MAG_LENS_CONTEXT *v95; // rax
  __int64 v96; // rdx
  struct _MAG_LENS_CONTEXT *v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rax
  struct _MAG_LENS_CONTEXT *v100; // rcx
  void *v101; // rax
  void *v102; // rax
  void *v103; // rax
  _DWORD *v104; // r12
  void *v105; // rax
  int v106; // eax
  int v107; // r9d
  struct _MAG_LENS_CONTEXT *v108; // rax
  __int64 v109; // rdx
  struct _MAG_LENS_CONTEXT *v110; // rsi
  _QWORD *v111; // rcx
  void *v112; // rax
  int v113; // eax
  void *v114; // rax
  INT v115; // ebx
  struct _MAG_LENS_CONTEXT *v116; // rax
  struct _MAG_LENS_CONTEXT *v117; // rsi
  __int64 v118; // rcx
  __int64 v119; // rcx
  void *v120; // rcx
  int v121; // edx
  unsigned int v122; // ecx
  int v123; // edx
  __int64 v124; // [rsp+30h] [rbp-20h] BYREF
  __int64 v125; // [rsp+38h] [rbp-18h]
  __int64 v126; // [rsp+40h] [rbp-10h]

  v6 = -1073741811;
  v7 = 0LL;
  v8 = 0LL;
  ThreadContext = (struct _MAG_THREAD_CONTEXT *)MagpFindThreadContext();
  v12 = ThreadContext;
  if ( ThreadContext )
  {
    if ( v11 <= 5 )
    {
      if ( v11 != 5 )
      {
        if ( v11 )
        {
          v13 = v11 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( !v14 )
            {
              if ( (unsigned __int64)v10 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
                return v6;
              LensContext = MagpFindLensContext(ThreadContext, v10);
              v16 = LensContext;
              if ( !LensContext )
                return v6;
              v17 = *(_QWORD *)(*((_QWORD *)LensContext + 3) + 40LL);
              v18 = *(unsigned int *)(v17 + 288);
              if ( (v18 & 0xF) != 0
                || (v75 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 19904), *(_WORD *)(v75 + 6998) <= 0x60u) )
              {
                v19 = *(_DWORD *)Buf1;
                v20 = (_DWORD *)((char *)v16 + 16);
                if ( (*((_DWORD *)v16 + 4) & 2) == 0 )
                {
                  *((_DWORD *)v16 + 8) = -v19;
                  v21 = *((_DWORD *)Buf1 + 1);
LABEL_12:
                  *((_DWORD *)v16 + 9) = -v21;
                  v22 = *(_OWORD *)Buf1;
                  *v20 |= 1u;
                  *(_OWORD *)((char *)v16 + 72) = v22;
                  return 0;
                }
                v46 = _mm_cvtsi32_si128(v19);
              }
              else
              {
                v20 = (_DWORD *)((char *)v16 + 16);
                if ( (*((_DWORD *)v16 + 4) & 2) == 0 )
                {
                  UserSessionState = W32GetUserSessionState(v75, v74);
                  *((_DWORD *)v16 + 8) = -EngMulDiv(
                                            *(_DWORD *)Buf1,
                                            *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19904) + 6998LL),
                                            96);
                  v79 = W32GetUserSessionState(v78, v77);
                  v21 = EngMulDiv(*((_DWORD *)Buf1 + 1), *(unsigned __int16 *)(*(_QWORD *)(v79 + 19904) + 6998LL), 96);
                  goto LABEL_12;
                }
                v46 = _mm_cvtsi32_si128(*(_DWORD *)Buf1);
              }
              *((_DWORD *)v16 + 8) = -(int)(_mm_cvtepi32_pd(v46).m128d_f64[0] * *((double *)v16 + 11));
              v21 = (int)((double)*((int *)Buf1 + 1) * *((double *)v16 + 12));
              goto LABEL_12;
            }
            v35 = v14 - 1;
            if ( v35 )
            {
              if ( v35 == 1 )
              {
                if ( *((_DWORD *)Buf1 + 8) == 3 )
                  return (unsigned int)MagpRevokeInputTransfrom();
                else
                  return (unsigned int)MagpUpdateInputTransfrom((struct _MAGN_INPUT_TRANSFORM *)Buf1);
              }
              return v6;
            }
            if ( a3 )
            {
              v36 = MagpFindLensContext(ThreadContext, a3);
              v39 = v36;
              if ( v36 )
              {
                v40 = *(double *)Buf1;
                if ( a3 != (struct tagWND *)-1LL )
                {
                  *((double *)v36 + 5) = v40;
                  *((_QWORD *)v36 + 6) = *((_QWORD *)Buf1 + 1);
                  *((_QWORD *)v36 + 7) = *((_QWORD *)Buf1 + 2);
                  *((_QWORD *)v36 + 8) = *((_QWORD *)Buf1 + 3);
                  v65 = *(_QWORD *)(*((_QWORD *)v36 + 3) + 40LL);
                  if ( (*(_DWORD *)(v65 + 288) & 0xF) == 0 )
                  {
                    v67 = *(_QWORD *)(W32GetUserSessionState(v65, v37) + 19904);
                    if ( *(_WORD *)(v67 + 6998) > 0x60u )
                    {
                      v68 = *(_QWORD *)(W32GetUserSessionState(v67, v66) + 19904);
                      *((double *)v39 + 7) = (double)*(unsigned __int16 *)(v68 + 6998) * *((double *)v39 + 7) / 96.0;
                      v70 = *(_QWORD *)(W32GetUserSessionState(v68, v69) + 19904);
                      *((double *)v39 + 8) = (double)*(unsigned __int16 *)(v70 + 6998) * *((double *)v39 + 8) / 96.0;
                      v72 = *(_QWORD *)(W32GetUserSessionState(v70, v71) + 19904);
                      *((double *)v39 + 5) = *(double *)Buf1 * 96.0 / (double)*(unsigned __int16 *)(v72 + 6998);
                      *((double *)v39 + 6) = *((double *)Buf1 + 1)
                                           * 96.0
                                           / (double)*(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(v72, v73)
                                                                                     + 19904)
                                                                         + 6998LL);
                    }
                  }
LABEL_40:
                  *(_OWORD *)((char *)v39 + 88) = *(_OWORD *)Buf1;
                  v45 = *((_OWORD *)Buf1 + 1);
                  *((_DWORD *)v39 + 4) |= 2u;
                  *(_OWORD *)((char *)v39 + 104) = v45;
                  return 0;
                }
                if ( v40 == *((double *)Buf1 + 1) )
                {
                  v41 = memcmp(Buf1, &xmmword_14035E750, (unsigned int)(v38 + 32)) != 0;
                  v43 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL);
                  v44 = *(struct _MAG_LENS_CONTEXT **)(v43 + 232);
                  if ( v41 )
                  {
                    if ( v44 )
                    {
                      if ( v39 != v44 )
                        return v6;
                      v58 = (int)*((double *)Buf1 + 3);
                      v59 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v43 + 8), v42);
                      v6 = DwmAsyncMagnSetDesktopTransform(v59, v58);
                    }
                    else
                    {
                      v63 = (int)*((double *)Buf1 + 3);
                      v64 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v43 + 8), v42);
                      v6 = DwmAsyncMagnSetDesktopTransform(v64, v63);
                      if ( (v6 & 0x80000000) != 0 )
                        return v6;
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL) + 232LL) = v39;
                    }
                  }
                  else if ( v44 )
                  {
                    if ( v39 != v44 )
                      return v6;
                    v61 = (int)*((double *)Buf1 + 3);
                    v62 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v43 + 8), v42);
                    v6 = DwmAsyncMagnSetDesktopTransform(v62, v61);
                    if ( (v6 & 0x80000000) != 0 )
                      return v6;
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL) + 232LL) = 0LL;
                  }
                  else
                  {
                    v6 = 0;
                  }
                  if ( (v6 & 0x80000000) == 0 )
                    goto LABEL_40;
                }
              }
            }
            return v6;
          }
          MagpRevokeInputTransfrom();
          if ( !a3 )
            return v6;
          v80 = MagpFindLensContext(v12, a3);
          v48 = (__int64)v80;
          if ( !v80 )
            return v6;
          v82 = *(_QWORD *)v80;
          if ( *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)v80 + 8LL) == v80 )
          {
            v83 = (_QWORD *)*((_QWORD *)v80 + 1);
            if ( *v83 == v48 )
            {
              *v83 = v82;
              *(_QWORD *)(v82 + 8) = v83;
              if ( a3 == (struct tagWND *)-1LL )
              {
                v88 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL);
                if ( *(_QWORD *)(v88 + 240) == v48 )
                {
                  v89 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v88 + 8), v81);
                  v6 = DwmAsyncMagnSetDesktopColorTransform(v89);
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL) + 240LL) = 0LL;
                }
                else
                {
                  v6 = 0;
                }
                v90 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL);
                if ( *(_QWORD *)(v90 + 232) == v48 )
                {
                  v91 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v90 + 8), v81);
                  v92 = DwmAsyncMagnSetDesktopTransform(v91, 0);
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL) + 232LL) = 0LL;
                }
                else
                {
                  v92 = 0;
                }
                if ( (v6 & 0x80000000) != 0 )
                  goto LABEL_49;
                if ( v92 < 0 )
                {
                  v6 = v92;
                  goto LABEL_49;
                }
              }
              else
              {
                v84 = *(_DWORD *)(v48 + 16);
                if ( (v84 & 0x40) != 0 )
                {
                  ChangeComposableCursor(0LL);
                  *(_DWORD *)(v48 + 16) &= ~0x40u;
                  v84 = *(_DWORD *)(v48 + 16);
                }
                if ( (v84 & 0x20) != 0 )
                {
                  v6 = 0;
                }
                else
                {
                  v85 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL) + 8LL), v81);
                  v6 = DwmAsyncMagnDestroy(v85);
                }
                HMAssignmentUnlock(v48 + 24);
                v86 = *(void **)(v48 + 232);
                if ( v86 )
                  Win32FreePool(v86);
                v87 = *(void **)(v48 + 256);
                if ( v87 )
                  Win32FreePool(v87);
                if ( (v6 & 0x80000000) != 0 )
                  goto LABEL_49;
              }
              v6 = 0;
LABEL_49:
              v51 = (void *)v48;
              goto LABEL_157;
            }
          }
LABEL_111:
          __fastfail(3u);
        }
        if ( !a3 || MagpFindLensContext(ThreadContext, a3) )
          return v6;
        v48 = Win32AllocPoolZInit(272LL, 1735226197LL);
        if ( v48 )
        {
          if ( a3 != (struct tagWND *)-1LL )
          {
            v49 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL) + 8LL), v47);
            v50 = DwmAsyncMagnCreate(v49);
            v6 = v50;
            if ( v50 != -1073741823 && v50 < 0 )
              goto LABEL_49;
          }
          memset_0((void *)(v48 + 16), 0, 0x100uLL);
          *(_QWORD *)(v48 + 40) = 0x3FF0000000000000LL;
          *(_QWORD *)(v48 + 48) = 0x3FF0000000000000LL;
          if ( a3 == (struct tagWND *)-1LL )
          {
            *(_QWORD *)(v48 + 24) = -1LL;
          }
          else
          {
            v124 = v48 + 24;
            v125 = (__int64)a3;
            HMAssignmentLock(&v124, 0LL);
          }
          v93 = (char *)v12 + 40;
          *(_DWORD *)(v48 + 264) = 0;
          v94 = (__int64 *)*((_QWORD *)v93 + 1);
          if ( (char *)*v94 == v93 )
          {
            *(_QWORD *)v48 = v93;
            *(_QWORD *)(v48 + 8) = v94;
            *v94 = v48;
            *((_QWORD *)v93 + 1) = v48;
            return 0;
          }
          goto LABEL_111;
        }
        return (unsigned int)-1073741801;
      }
      if ( !a3 )
        return v6;
      v95 = MagpFindLensContext(ThreadContext, a3);
      v97 = v95;
      if ( !v95 )
        return v6;
      if ( a3 == (struct tagWND *)-1LL )
      {
        v41 = memcmp(Buf1, &xmmword_140367860, 0x64uLL) != 0;
        v99 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL);
        v100 = *(struct _MAG_LENS_CONTEXT **)(v99 + 240);
        if ( v41 )
        {
          if ( v100 )
          {
            if ( v100 != v97 )
              return v6;
            v103 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v99 + 8), v98);
            v6 = DwmAsyncMagnSetDesktopColorTransform(v103);
          }
          else
          {
            v102 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v99 + 8), v98);
            v6 = DwmAsyncMagnSetDesktopColorTransform(v102);
            if ( (v6 & 0x80000000) != 0 )
              return v6;
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL) + 240LL) = v97;
          }
        }
        else if ( v100 )
        {
          if ( v100 != v97 )
            return v6;
          v101 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v99 + 8), v98);
          v6 = DwmAsyncMagnSetDesktopColorTransform(v101);
          if ( (v6 & 0x80000000) != 0 )
            return v6;
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL) + 240LL) = 0LL;
        }
        else
        {
          v6 = 0;
        }
        v104 = (_DWORD *)((char *)v97 + 16);
      }
      else
      {
        v104 = (_DWORD *)((char *)v95 + 16);
        if ( (*((_DWORD *)v95 + 4) & 0x20) != 0 )
        {
LABEL_130:
          *(_OWORD *)((char *)v97 + 120) = *(_OWORD *)Buf1;
          *(_OWORD *)((char *)v97 + 136) = *((_OWORD *)Buf1 + 1);
          *(_OWORD *)((char *)v97 + 152) = *((_OWORD *)Buf1 + 2);
          *(_OWORD *)((char *)v97 + 168) = *((_OWORD *)Buf1 + 3);
          *(_OWORD *)((char *)v97 + 184) = *((_OWORD *)Buf1 + 4);
          *(_OWORD *)((char *)v97 + 200) = *((_OWORD *)Buf1 + 5);
          v106 = *((_DWORD *)Buf1 + 24);
          *v104 |= 4u;
          *((_DWORD *)v97 + 54) = v106;
          return 0;
        }
        v105 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL) + 8LL), v96);
        v6 = DwmAsyncMagnSetWindowColorTransform(v105);
      }
      if ( (v6 & 0x80000000) != 0 )
        return v6;
      goto LABEL_130;
    }
    v23 = v11 - 6;
    if ( !v23 )
    {
      v24 = *(_DWORD *)Buf1 + *((_DWORD *)Buf1 + 1);
      if ( v24 > 0x19 )
        return v6;
      if ( (unsigned __int64)v10 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        return v6;
      v26 = MagpFindLensContext(ThreadContext, a3);
      if ( !v26 )
        return v6;
      if ( v24 )
      {
        v7 = Win32AllocPoolZInit(8LL * v24, 1735226197LL);
        if ( !v7 )
          return (unsigned int)-1073741801;
      }
      v124 = *(_QWORD *)Buf1;
      v125 = v7;
      if ( v24 )
      {
        v27 = v24;
        v25 = &Buf1[-v7];
        v28 = (_QWORD *)v7;
        do
        {
          *v28 = *(_QWORD *)((char *)v28 + (_QWORD)v25 + 8);
          ++v28;
          --v27;
        }
        while ( v27 );
      }
      if ( (*((_DWORD *)v26 + 4) & 0x20) != 0
        || (v29 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL) + 8LL), v25),
            v6 = DwmAsyncMagnSetWindowFilterList(v29),
            (v6 & 0x80000000) == 0) )
      {
        v30 = (void *)*((_QWORD *)v26 + 29);
        if ( v30 )
        {
          Win32FreePool(v30);
          *((_QWORD *)v26 + 29) = 0LL;
        }
        v31 = *((_DWORD *)v26 + 4);
        *((_DWORD *)v26 + 56) = *(_DWORD *)Buf1;
        *((_DWORD *)v26 + 57) = *((_DWORD *)Buf1 + 1);
        v32 = v31 & 0xFFFFFFF7;
        *((_QWORD *)v26 + 29) = v7;
        v33 = v31 | 8;
        if ( !v24 )
          v33 = v32;
        *((_DWORD *)v26 + 4) = v33;
        return 0;
      }
      if ( !v7 )
        return v6;
      v51 = (void *)v7;
      goto LABEL_157;
    }
    v52 = v23 - 1;
    if ( !v52 )
    {
      if ( *(_DWORD *)Buf1 > 6u )
        return v6;
      if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        return v6;
      v53 = MagpFindLensContext(ThreadContext, a3);
      if ( !v53 )
        return v6;
      if ( (_DWORD)v54 )
      {
        v8 = Win32AllocPoolZInit(24 * v54, 1735226197LL);
        if ( !v8 )
          return (unsigned int)-1073741801;
      }
      v55 = 0LL;
      v56 = *(_DWORD *)Buf1;
      HIDWORD(v124) = *((_DWORD *)Buf1 + 1);
      v125 = *((_QWORD *)Buf1 + 1);
      LODWORD(v124) = v56;
      v126 = v8;
      if ( v56 )
      {
        do
        {
          v119 = 3 * v55;
          v55 = (unsigned int)(v55 + 1);
          *(_OWORD *)(v8 + 8 * v119) = *(_OWORD *)&Buf1[8 * v119 + 16];
          *(_QWORD *)(v8 + 8 * v119 + 16) = *(_QWORD *)&Buf1[8 * v119 + 32];
        }
        while ( (unsigned int)v55 < *(_DWORD *)Buf1 );
      }
      if ( (*((_DWORD *)v53 + 4) & 0x20) != 0
        || (v57 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL) + 8LL), v55),
            v6 = DwmAsyncMagnSetWindowSharedTextures(v57),
            (v6 & 0x80000000) == 0) )
      {
        v120 = (void *)*((_QWORD *)v53 + 32);
        if ( v120 )
        {
          Win32FreePool(v120);
          *((_QWORD *)v53 + 32) = 0LL;
        }
        v121 = *((_DWORD *)v53 + 4);
        *((_DWORD *)v53 + 60) = *(_DWORD *)Buf1;
        v122 = v121 & 0xFFFFFFEF;
        v123 = v121 | 0x10;
        *((_DWORD *)v53 + 61) = *((_DWORD *)Buf1 + 1);
        *((_DWORD *)v53 + 62) = *((_DWORD *)Buf1 + 2);
        *((_DWORD *)v53 + 63) = *((_DWORD *)Buf1 + 3);
        *((_QWORD *)v53 + 32) = v8;
        if ( !*(_DWORD *)Buf1 )
          v123 = v122;
        *((_DWORD *)v53 + 4) = v123;
        return 0;
      }
      if ( !v8 )
        return v6;
      v51 = (void *)v8;
LABEL_157:
      Win32FreePool(v51);
      return v6;
    }
    v107 = v52 - 2;
    if ( !v107 )
    {
      v115 = *(_DWORD *)Buf1;
      if ( (*(_DWORD *)Buf1 & 0xFFFFFFFE) != 0 )
        return v6;
      if ( (unsigned __int64)v10 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        return v6;
      v116 = MagpFindLensContext(ThreadContext, a3);
      v117 = v116;
      if ( !v116 )
        return v6;
      v118 = v115 & 1;
      if ( ((*((_DWORD *)v116 + 4) >> 6) & 1) != (_DWORD)v118 )
      {
        ChangeComposableCursor(v118);
        *((_DWORD *)v117 + 4) ^= ((unsigned __int8)*((_DWORD *)v117 + 4) ^ (unsigned __int8)((_BYTE)v115 << 6)) & 0x40;
      }
      return 0;
    }
    if ( v107 != 1 )
      return v6;
    if ( !a3 )
      return v6;
    v108 = MagpFindLensContext(ThreadContext, a3);
    v110 = v108;
    if ( !v108 )
      return v6;
    if ( a3 == (struct tagWND *)-1LL )
    {
      v111 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL) + 8LL);
      v112 = (void *)ReferenceDwmApiPort(v111, *v111);
      v113 = DwmAsyncMagnSetDesktopSamplingMode(v112);
    }
    else
    {
      if ( (*((_DWORD *)v108 + 4) & 0x20) != 0 )
      {
LABEL_140:
        *((_DWORD *)v110 + 66) = *(_DWORD *)Buf1;
        return 0;
      }
      v114 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 488LL) + 8LL), v109);
      v113 = DwmAsyncMagnSetSamplingMode(v114);
    }
    v6 = v113;
    if ( v113 < 0 )
      return v6;
    goto LABEL_140;
  }
  return 3221225635LL;
}
