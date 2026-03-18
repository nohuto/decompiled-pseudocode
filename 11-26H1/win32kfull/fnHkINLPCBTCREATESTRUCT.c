/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x140009398
 * Callers:
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 * Callees:
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400057D4 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1400059EC (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140007904 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400087BC (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     GetThreadDesktopWindow @ 0x140009BD0 (GetThreadDesktopWindow.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall fnHkINLPCBTCREATESTRUCT(int a1, __int64 a2, __int64 *a3, ULONG_PTR a4, int a5)
{
  unsigned __int64 v7; // r14
  unsigned int v8; // r15d
  __int64 ThreadDesktopWindow; // rbx
  unsigned __int8 *v10; // rdi
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned int v19; // eax
  __int64 v20; // r15
  _OWORD *v21; // rax
  void **v22; // r9
  unsigned int v23; // r8d
  CHAR *v24; // rdx
  size_t v25; // r8
  int v26; // eax
  __int64 *v27; // rbx
  ULONG_PTR v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ebx
  __int64 v33; // rcx
  __int64 v34; // rcx
  void *v35; // rbx
  CHAR *v36; // rdx
  void **v37; // r9
  struct _CAPTUREBUF *v38; // rcx
  unsigned int v39; // r8d
  int v40; // eax
  int v41; // r8d
  size_t v42; // r8
  struct tagTHREADINFO *v43; // rax
  int v44; // [rsp+30h] [rbp-498h] BYREF
  int *v45; // [rsp+38h] [rbp-490h]
  CHAR v46; // [rsp+40h] [rbp-488h]
  __int64 v47; // [rsp+48h] [rbp-480h] BYREF
  int v48; // [rsp+50h] [rbp-478h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-470h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-468h] BYREF
  __int16 v51; // [rsp+68h] [rbp-460h]
  void *Src; // [rsp+C0h] [rbp-408h] BYREF
  __int64 *v53; // [rsp+C8h] [rbp-400h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+D0h] [rbp-3F8h] BYREF
  __int128 v55; // [rsp+E0h] [rbp-3E8h] BYREF
  void (*v56)(void *); // [rsp+F0h] [rbp-3D8h]
  __int128 v57; // [rsp+F8h] [rbp-3D0h]
  _OWORD v58[2]; // [rsp+108h] [rbp-3C0h] BYREF
  __int128 v59; // [rsp+128h] [rbp-3A0h]
  __int128 v60; // [rsp+138h] [rbp-390h]
  __int128 v61; // [rsp+148h] [rbp-380h]
  __int64 v62; // [rsp+158h] [rbp-370h]
  __int64 v63; // [rsp+160h] [rbp-368h]
  _OWORD v64[5]; // [rsp+180h] [rbp-348h] BYREF
  __int64 v65; // [rsp+1D0h] [rbp-2F8h]
  int v66; // [rsp+1E0h] [rbp-2E8h] BYREF
  _BYTE v67[172]; // [rsp+1E4h] [rbp-2E4h] BYREF
  unsigned __int8 v68[512]; // [rsp+290h] [rbp-238h] BYREF

  BugCheckParameter3[0] = a4;
  *(_QWORD *)&v57 = a3;
  v44 = a1;
  LODWORD(v7) = 0;
  v49 = 0LL;
  v8 = 0;
  ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
  v53 = (__int64 *)ThreadDesktopWindow;
  memset_0(&v66, 0, 0xA8uLL);
  v10 = (unsigned __int8 *)&v66;
  Src = 0LL;
  v48 = 0;
  v11 = PtiCurrent();
  RegionSize = (ULONG_PTR)v11;
  if ( ThreadDesktopWindow )
    v47 = *(_QWORD *)(ThreadDesktopWindow + 40) - *((_QWORD *)v11 + 63);
  else
    v47 = 0LL;
  v12 = *a3;
  v13 = *(_QWORD *)(*a3 + 56);
  if ( v13 && (*(_DWORD *)(v12 + 84) >> 31 != a5 || (unsigned __int8)MmIsKernelAddress(v13)) )
  {
    v19 = *(_DWORD *)(v12 + 80);
    v7 = v19 + 2;
    if ( (unsigned int)v7 < v19 )
      goto LABEL_10;
    if ( *(int *)(v12 + 84) < 0 && !a5 )
    {
      v7 *= 2LL;
      if ( v7 > 0xFFFFFFFF )
        goto LABEL_10;
    }
    v8 = 1;
  }
  v14 = *(_QWORD *)(v12 + 64);
  if ( (v14 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_DWORD *)(v12 + 100) >> 31 != a5 || (unsigned __int8)MmIsKernelAddress(v14)) )
  {
    v15 = *(_DWORD *)(v12 + 96);
    v16 = v15 + 2;
    v49 = v16;
    if ( (unsigned int)v16 < v15 )
      goto LABEL_10;
    if ( *(int *)(v12 + 100) < 0 && !a5 )
    {
      v16 *= 2LL;
      v49 = v16;
      if ( v16 > 0xFFFFFFFF )
        goto LABEL_10;
    }
    ++v8;
  }
  else
  {
    LODWORD(v16) = v49;
  }
  if ( (int)v16 + (int)v7 < (unsigned int)v7 )
  {
LABEL_10:
    v17 = 0LL;
    goto LABEL_11;
  }
  if ( v8 )
  {
    v10 = AllocCallbackMessage(168, v8, (unsigned int)(v16 + v7), v68, 1, 0x200uLL);
    v45 = (int *)v10;
    if ( !v10 )
      return 0LL;
  }
  else
  {
    v10 = (unsigned __int8 *)&v66;
    v45 = &v66;
    memset_0(v67, 0, 0xA4uLL);
    v66 = 168;
  }
  PtiCurrent();
  v55 = 0LL;
  v56 = 0LL;
  if ( v10 != (unsigned __int8 *)&v66 && v10 != v68 )
  {
    v43 = PtiCurrent();
    *(_QWORD *)&v55 = *((_QWORD *)v43 + 47);
    *((_QWORD *)v43 + 47) = &v55;
    *((_QWORD *)&v55 + 1) = v10;
    v56 = Win32FreePool;
  }
  *((_QWORD *)v10 + 5) = v47;
  *((_DWORD *)v10 + 12) = v44;
  *((_QWORD *)v10 + 7) = a2;
  v20 = v57;
  *(_DWORD *)(*(_QWORD *)v57 + 52LL) = 0;
  *(_DWORD *)(*(_QWORD *)v20 + 76LL) = 0;
  v21 = *(_OWORD **)v20;
  *((_OWORD *)v10 + 4) = *(_OWORD *)*(_QWORD *)v20;
  *((_OWORD *)v10 + 5) = v21[1];
  *((_OWORD *)v10 + 6) = v21[2];
  *((_OWORD *)v10 + 7) = v21[3];
  *((_OWORD *)v10 + 8) = v21[4];
  if ( (_DWORD)v7 )
  {
    if ( *(int *)(v12 + 84) < 0 )
    {
      v36 = *(CHAR **)(v12 + 56);
      v46 = *v36;
      if ( v46 == -1 )
      {
        if ( a5 )
        {
          v42 = 3LL;
        }
        else
        {
          v44 = 0;
          v44 = ((unsigned __int16)(*(_DWORD *)v36 >> 8) << 16) | 0xFFFF;
          v42 = 4LL;
          v36 = (CHAR *)&v44;
        }
        v37 = (void **)(v10 + 120);
        v38 = (struct _CAPTUREBUF *)v10;
      }
      else
      {
        v37 = (void **)(v10 + 120);
        v41 = *(_DWORD *)(v12 + 80);
        v36 = *(CHAR **)(v12 + 88);
        v38 = (struct _CAPTUREBUF *)v10;
        if ( !a5 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v36, 2 * v41 + 2, v37) < 0 )
            goto LABEL_10;
          goto LABEL_26;
        }
        v42 = (unsigned int)(v41 + 1);
      }
    }
    else
    {
      v36 = *(CHAR **)(v12 + 56);
      v51 = *(_WORD *)v36;
      v37 = (void **)(v10 + 120);
      v38 = (struct _CAPTUREBUF *)v10;
      if ( v51 == -1 )
      {
        if ( a5 )
        {
          ++v36;
          v42 = 3LL;
        }
        else
        {
          v42 = 4LL;
        }
      }
      else
      {
        v39 = *(_DWORD *)(v12 + 80);
        v36 = *(CHAR **)(v12 + 88);
        if ( a5 )
        {
          v40 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v36, (PCWCH)((v39 >> 1) + 1), v37, 0);
          goto LABEL_51;
        }
        v42 = v39 + 2;
      }
    }
    v40 = CaptureCallbackData(v38, v36, v42, v37);
LABEL_51:
    if ( v40 < 0 )
      goto LABEL_10;
  }
LABEL_26:
  if ( !(_DWORD)v49 )
    goto LABEL_32;
  v22 = (void **)(v10 + 128);
  v23 = *(_DWORD *)(v12 + 96);
  v24 = *(CHAR **)(v12 + 104);
  if ( *(int *)(v12 + 100) < 0 )
  {
    if ( a5 )
    {
      v25 = v23 + 1;
      goto LABEL_30;
    }
    v26 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v24, 2 * v23 + 2, v22);
  }
  else
  {
    if ( !a5 )
    {
      v25 = v23 + 2;
LABEL_30:
      v26 = CaptureCallbackData((struct _CAPTUREBUF *)v10, v24, v25, v22);
      goto LABEL_31;
    }
    v26 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v24, (PCWCH)((v23 >> 1) + 1), v22, 0);
  }
LABEL_31:
  if ( v26 < 0 )
    goto LABEL_10;
LABEL_32:
  *((_QWORD *)v10 + 18) = *(_QWORD *)(v20 + 8);
  *((_QWORD *)v10 + 19) = BugCheckParameter3[0];
  *((_DWORD *)v10 + 40) = a5;
  v27 = v53;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v53);
  v28 = RegionSize;
  v29 = *(_QWORD *)(RegionSize + 512);
  v57 = *(_OWORD *)(v29 + 64);
  v53 = *(__int64 **)(v29 + 80);
  *(_QWORD *)(*(_QWORD *)(RegionSize + 512) + 72LL) = v47;
  if ( v27 )
    v30 = *v27;
  else
    v30 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v28 + 512) + 64LL) = v30;
  if ( v27 )
    v31 = *(_QWORD *)(v27[5] + 224);
  else
    v31 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v28 + 512) + 80LL) = v31;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  EtwTraceBeginCallback(42LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v32 = KeUserModeCallback(42LL, v10, *(unsigned int *)v10, &Src, &v48);
  EtwTraceEndCallback(42LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
  v33 = *(_QWORD *)(v28 + 512);
  *(_OWORD *)(v33 + 64) = v57;
  *(_QWORD *)(v33 + 80) = v53;
  if ( v32 < 0 )
    goto LABEL_10;
  if ( v48 != 24 )
    goto LABEL_10;
  v47 = 0LL;
  RtlCopyFromUser(&v47, Src, 8uLL);
  v17 = v47;
  v63 = v47;
  v34 = *((_QWORD *)PtiCurrent() + 68);
  if ( v34 )
  {
    if ( (*(_DWORD *)(v34 + 84) & 1) != 0 && *(_OWORD **)(v34 + 96) == v64 )
      goto LABEL_10;
  }
  v35 = (void *)*((_QWORD *)Src + 2);
  memset_0(v58, 0, 0x58uLL);
  RtlCopyFromUser(v58, v35, 0x58uLL);
  v64[0] = v58[0];
  v64[1] = v58[1];
  v64[2] = v59;
  v64[3] = v60;
  v64[4] = v61;
  v65 = v62;
  *(_QWORD *)(v20 + 8) = v62;
  *(_OWORD *)(*(_QWORD *)v20 + 32LL) = v59;
LABEL_11:
  if ( v10 != (unsigned __int8 *)&v66 && v10 != v68 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v55);
  }
  return v17;
}
