/*
 * XREFs of DrawFrame @ 0x1C0123204
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F77B4 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     xxxMNDrawFullNC @ 0x1C0237D5C (xxxMNDrawFullNC.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall DrawFrame(HDC a1, int *a2, int a3, int a4)
{
  int v4; // esi
  int v6; // r14d
  __int64 v7; // r12
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _DWORD *v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  _DWORD *v37; // rax
  int v38; // edi
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // ecx
  _DWORD v71[4]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v72; // [rsp+48h] [rbp-29h]
  int v73; // [rsp+50h] [rbp-21h]
  int v74; // [rsp+54h] [rbp-1Dh]
  int v75; // [rsp+58h] [rbp-19h]
  int v76; // [rsp+5Ch] [rbp-15h]
  __int64 v77; // [rsp+60h] [rbp-11h]
  int v78; // [rsp+68h] [rbp-9h]
  int v79; // [rsp+6Ch] [rbp-5h]
  int v80; // [rsp+70h] [rbp-1h]
  int v81; // [rsp+74h] [rbp+3h]
  __int64 v82; // [rsp+78h] [rbp+7h]
  int v83; // [rsp+80h] [rbp+Fh]
  int v84; // [rsp+84h] [rbp+13h]
  int v85; // [rsp+88h] [rbp+17h]
  int v86; // [rsp+8Ch] [rbp+1Bh]
  __int64 v87; // [rsp+90h] [rbp+1Fh]

  v4 = *a2;
  v6 = a2[1];
  v7 = a4;
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) == 0 )
    {
LABEL_19:
      v22 = (_DWORD *)(gpsi + 2288LL);
      goto LABEL_5;
    }
  }
  else if ( IsDPIDWMSysMet(v11)
         && (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_19;
  }
  if ( IsDPIDWMSysMet(5uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v21) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52) + 408)
      ? (v56 = 0)
      : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v56) )
  {
    v22 = (_DWORD *)(gpsi + 2676LL);
  }
  else
  {
    v22 = (_DWORD *)(gpsi + 1900LL);
  }
LABEL_5:
  v23 = a3 * *v22;
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) == 0 )
    {
LABEL_33:
      v36 = gpsi;
      v37 = (_DWORD *)(gpsi + 2292LL);
      goto LABEL_9;
    }
  }
  else if ( IsDPIDWMSysMet(v25)
         && (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61, v62)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_33;
  }
  if ( IsDPIDWMSysMet(6uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v33, v32, v34, v35) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66) + 408)
      ? (v70 = 0)
      : (v70 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v70) )
  {
    v36 = gpsi;
    v37 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v36 = gpsi;
    v37 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_9:
  v38 = *v37 * a3;
  v39 = a2[2] - v23 - v4;
  v40 = a2[3] - v38 - v6;
  if ( (v7 & 0xFFFFFFF8) == 0xF8 )
    v41 = *(_QWORD *)(v36 + 5336);
  else
    v41 = *(_QWORD *)(v36 + 8 * (v7 >> 3) + 5088);
  v75 = a2[2] - v23 - v4;
  v80 = v39;
  v73 = v23 + v4;
  v83 = v4 + v39;
  v71[3] = v40;
  v84 = v38 + v6;
  v72 = v41;
  v77 = v41;
  v82 = v41;
  v86 = v40;
  v87 = v41;
  v71[0] = v4;
  v71[1] = v6;
  v71[2] = v23;
  v74 = v6;
  v76 = v38;
  v78 = v4;
  v79 = v40 + v6;
  v81 = v38;
  v85 = v23;
  GrePolyPatBlt(a1, (v7 & 4) != 0 ? 5898313 : 15728673, (struct _POLYPATBLT *)v71, 4);
  return 1LL;
}
