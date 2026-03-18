/*
 * XREFs of xxxCreateWindowSmIcon @ 0x1C011E944
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00A7ADC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C00AB130 (xxxGetWindowSmIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C0229754 (xxxRecreateSmallIcons.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 *     xxxClientCopyImage @ 0x1C00A9BF0 (xxxClientCopyImage.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  int v6; // r15d
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int *v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int *v26; // rcx
  __int64 v27; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // ecx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // ecx

  v5 = a2;
  LOBYTE(a2) = 3;
  v6 = a3;
  v7 = 0LL;
  v8 = HMValidateHandleNoRip(v5, a2, a3, a4);
  if ( !v8 )
    return v7;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x32uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11, v12) & 0xF) != 0 )
      goto LABEL_4;
LABEL_15:
    v17 = (int *)(gpsi + 2468LL);
    goto LABEL_6;
  }
  if ( IsDPIDWMSysMet(v10)
    && (W32GetCurrentThreadDpiAwarenessContext(v30, v29, v31, v32) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34, v35) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_15;
  }
LABEL_4:
  if ( IsDPIDWMSysMet(0x32uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 408)
      ? (v46 = 0)
      : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v46) )
  {
    v17 = (int *)(gpsi + 2856LL);
  }
  else
  {
    v17 = (int *)(gpsi + 2080LL);
  }
LABEL_6:
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x31uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v21) & 0xF) != 0 )
      goto LABEL_8;
  }
  else if ( !IsDPIDWMSysMet(v19)
         || (W32GetCurrentThreadDpiAwarenessContext(v48, v47, v49, v50) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 408)
           ? (v57 = 0)
           : (v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v54,
                                                          v55,
                                                          v56)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v57) )
  {
LABEL_8:
    if ( IsDPIDWMSysMet(0x31uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v23, v22, v24, v25) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v60) + 408)
        ? (v64 = 0)
        : (v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v61,
                                                       v62,
                                                       v63)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v64) )
    {
      v26 = (int *)(gpsi + 2852LL);
    }
    else
    {
      v26 = (int *)(gpsi + 2076LL);
    }
    goto LABEL_10;
  }
  v26 = (int *)(gpsi + 2464LL);
LABEL_10:
  v27 = xxxClientCopyImage(
          *(_QWORD *)v8,
          (unsigned int)(*(_WORD *)(v8 + 74) != 3) + 1,
          *v26,
          *v17,
          v6 != 0 ? 0x4000 : 0);
  if ( v27 )
  {
    v7 = *(_QWORD *)v27;
    if ( *(_QWORD *)v27 )
    {
      *(_DWORD *)(v27 + 80) |= 0x80u;
      InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1356LL), v7, 5);
      if ( !v6 )
        SetOrClrWF(1, a1, 0x720u, 1);
    }
  }
  return v7;
}
