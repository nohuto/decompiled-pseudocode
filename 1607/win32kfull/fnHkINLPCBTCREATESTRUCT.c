/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x1C010FDF0
 * Callers:
 *     xxxHkCallHook @ 0x1C0084730 (xxxHkCallHook.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0091150 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00911EC (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     GetThreadDesktopWindow @ 0x1C01066F8 (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall fnHkINLPCBTCREATESTRUCT(int a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  unsigned __int64 v6; // rsi
  unsigned int v7; // r15d
  __int64 ThreadDesktopWindow; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  unsigned __int8 *v12; // rbx
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  int v16; // edx
  unsigned int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r15
  _OWORD **v20; // rcx
  _OWORD *v21; // rax
  void **v22; // r9
  unsigned int v23; // r8d
  CHAR *v24; // rdx
  unsigned int v25; // r8d
  int v26; // eax
  _QWORD *v27; // rsi
  ULONG_PTR v28; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // edi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 *v36; // rcx
  __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  __int128 v39; // xmm5
  __int128 v40; // xmm6
  __int128 v41; // xmm2
  __int128 v42; // xmm0
  int v44; // ecx
  unsigned int v45; // eax
  CHAR *v46; // rdx
  void **v47; // r9
  struct _CAPTUREBUF *v48; // rcx
  unsigned int v49; // r8d
  unsigned int v50; // r8d
  int v51; // eax
  _DWORD *v52; // rax
  int v53; // r8d
  PVOID *v54; // rdx
  int v55; // [rsp+3Ch] [rbp-4DCh] BYREF
  unsigned int v56; // [rsp+40h] [rbp-4D8h]
  unsigned int v57; // [rsp+44h] [rbp-4D4h]
  unsigned __int64 v58; // [rsp+48h] [rbp-4D0h]
  __int16 v59; // [rsp+50h] [rbp-4C8h]
  int v60[6]; // [rsp+70h] [rbp-4A8h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-490h] BYREF
  _QWORD *v62; // [rsp+90h] [rbp-488h]
  unsigned __int64 v63; // [rsp+98h] [rbp-480h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-478h]
  int v65; // [rsp+A8h] [rbp-470h]
  __int64 v66; // [rsp+C0h] [rbp-458h]
  __int64 v67; // [rsp+C8h] [rbp-450h]
  __int64 v68; // [rsp+D8h] [rbp-440h]
  __int128 v69; // [rsp+E0h] [rbp-438h]
  __int64 v70; // [rsp+F0h] [rbp-428h]
  _QWORD v71[3]; // [rsp+130h] [rbp-3E8h] BYREF
  _QWORD v72[7]; // [rsp+148h] [rbp-3D0h] BYREF
  __int128 v73; // [rsp+180h] [rbp-398h]
  __int64 v74; // [rsp+1B0h] [rbp-368h]
  __int128 v75; // [rsp+1C0h] [rbp-358h]
  __int128 v76; // [rsp+1D0h] [rbp-348h]
  __int128 v77; // [rsp+1E0h] [rbp-338h]
  __int128 v78; // [rsp+1F0h] [rbp-328h]
  __int128 v79; // [rsp+200h] [rbp-318h]
  __int64 v80; // [rsp+210h] [rbp-308h]
  _DWORD v81[44]; // [rsp+220h] [rbp-2F8h] BYREF
  unsigned __int8 v82[512]; // [rsp+2D0h] [rbp-248h] BYREF

  v67 = a4;
  v62 = a3;
  v66 = a2;
  v55 = a1;
  LODWORD(v6) = 0;
  v56 = 0;
  v58 = 0LL;
  v57 = 0;
  v7 = 0;
  ThreadDesktopWindow = GetThreadDesktopWindow(0LL, a2, (__int64)a3, a4);
  v11 = ThreadDesktopWindow;
  v12 = (unsigned __int8 *)v81;
  v68 = 0LL;
  RegionSize = gptiCurrent;
  if ( ThreadDesktopWindow )
    v64 = ThreadDesktopWindow - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v64 = 0LL;
  v13 = *a3;
  v14 = *(_QWORD *)(v13 + 56);
  if ( v14 )
  {
    v44 = *(_DWORD *)(v13 + 84) >> 31;
    if ( v44 != a5 || v14 >= (unsigned __int64)MmSystemRangeStart )
    {
      v45 = *(_DWORD *)(v13 + 80);
      v6 = v45 + 2;
      if ( (unsigned int)v6 < v45 )
        goto LABEL_58;
      v56 = v45 + 2;
      if ( v44 && !a5 )
      {
        v6 *= 2LL;
        if ( v6 > 0xFFFFFFFF )
          goto LABEL_58;
        v56 = v6;
      }
      v7 = 1;
    }
  }
  v15 = *(_QWORD *)(v13 + 64);
  if ( (v15 & 0xFFFFFFFFFFFF0000uLL) == 0
    || (v16 = *(_DWORD *)(v13 + 100) >> 31, v16 == a5) && v15 < (unsigned __int64)MmSystemRangeStart )
  {
    v9 = v58;
  }
  else
  {
    v17 = *(_DWORD *)(v13 + 96);
    v9 = v17 + 2;
    v58 = v9;
    if ( (unsigned int)v9 < v17 )
      goto LABEL_58;
    v57 = v17 + 2;
    if ( v16 && !a5 )
    {
      v9 *= 2LL;
      v58 = v9;
      if ( v9 > 0xFFFFFFFF )
        goto LABEL_58;
      v57 = v9;
    }
    ++v7;
  }
  if ( (int)v9 + (int)v6 < (unsigned int)v6 )
    goto LABEL_58;
  v65 = v9 + v6;
  if ( v7 )
  {
    v12 = AllocCallbackMessage(168, v7, (unsigned int)(v9 + v6), v82, 1, 0x200uLL);
    if ( !v12 )
      return 0LL;
  }
  else
  {
    v12 = (unsigned __int8 *)v81;
    memset(v81, 0, 0xA8uLL);
    v81[0] = 168;
  }
  if ( v12 != (unsigned __int8 *)v81 && v12 != v82 )
    PushW32ThreadLock((__int64)v12, v72, (__int64)Win32FreePool, v18);
  v19 = v64;
  *((_QWORD *)v12 + 5) = v64;
  *((_DWORD *)v12 + 12) = v55;
  *((_QWORD *)v12 + 7) = v66;
  v20 = (_OWORD **)v62;
  *(_DWORD *)(*v62 + 52LL) = 0;
  *((_DWORD *)*v20 + 19) = 0;
  v21 = *v20;
  *((_OWORD *)v12 + 4) = **v20;
  *((_OWORD *)v12 + 5) = v21[1];
  *((_OWORD *)v12 + 6) = v21[2];
  *((_OWORD *)v12 + 7) = v21[3];
  *((_OWORD *)v12 + 8) = v21[4];
  if ( (_DWORD)v6 )
  {
    if ( *(int *)(v13 + 84) < 0 )
    {
      v52 = *(_DWORD **)(v13 + 56);
      if ( *(_BYTE *)v52 == 0xFF )
      {
        if ( a5 )
        {
          v50 = 3;
          v46 = *(CHAR **)(v13 + 56);
        }
        else
        {
          v55 = ((unsigned __int16)(*v52 >> 8) << 16) | 0xFFFF;
          v50 = 4;
          v46 = (CHAR *)&v55;
        }
        v47 = (void **)(v12 + 120);
        v48 = (struct _CAPTUREBUF *)v12;
        goto LABEL_56;
      }
      v47 = (void **)(v12 + 120);
      v53 = *(_DWORD *)(v13 + 80);
      v46 = *(CHAR **)(v13 + 88);
      v48 = (struct _CAPTUREBUF *)v12;
      if ( a5 )
      {
        v50 = v53 + 1;
        goto LABEL_56;
      }
      v51 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v46, 2 * v53 + 2, v47);
    }
    else
    {
      v46 = *(CHAR **)(v13 + 56);
      v59 = *(_WORD *)v46;
      v47 = (void **)(v12 + 120);
      v48 = (struct _CAPTUREBUF *)v12;
      if ( v59 == -1 )
      {
        if ( a5 )
        {
          ++v46;
          v50 = 3;
        }
        else
        {
          v50 = 4;
        }
        goto LABEL_56;
      }
      v49 = *(_DWORD *)(v13 + 80);
      v46 = *(CHAR **)(v13 + 88);
      if ( !a5 )
      {
        v50 = v49 + 2;
LABEL_56:
        v51 = CaptureCallbackData(v48, v46, v50, v47);
        goto LABEL_57;
      }
      v51 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v46, (v49 >> 1) + 1, v47);
    }
LABEL_57:
    if ( v51 < 0 )
      goto LABEL_58;
  }
  if ( (_DWORD)v58 )
  {
    v22 = (void **)(v12 + 128);
    v23 = *(_DWORD *)(v13 + 96);
    v24 = *(CHAR **)(v13 + 104);
    if ( *(int *)(v13 + 100) < 0 )
    {
      if ( a5 )
      {
        v25 = v23 + 1;
        goto LABEL_21;
      }
      v26 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v24, 2 * v23 + 2, v22);
    }
    else
    {
      if ( !a5 )
      {
        v25 = v23 + 2;
LABEL_21:
        v26 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v24, v25, v22);
        goto LABEL_22;
      }
      v26 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v24, (v23 >> 1) + 1, v22);
    }
LABEL_22:
    if ( v26 < 0 )
      goto LABEL_58;
  }
  v27 = v62;
  *((_QWORD *)v12 + 18) = v62[1];
  *((_QWORD *)v12 + 19) = v67;
  *((_DWORD *)v12 + 40) = a5;
  v71[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v71;
  v71[1] = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v28 = RegionSize;
  v29 = *(_QWORD *)(RegionSize + 432);
  v69 = *(_OWORD *)(v29 + 64);
  v70 = *(_QWORD *)(v29 + 80);
  *(_QWORD *)(v29 + 72) = v19;
  if ( v11 )
    v30 = *(_QWORD *)v11;
  else
    v30 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v28 + 432) + 64LL) = v30;
  if ( v11 )
    v31 = *(_QWORD *)(v11 + 264);
  else
    v31 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v28 + 432) + 80LL) = v31;
  if ( gdwInAtomicOperation )
  {
    v31 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v31, gdwInAtomicOperation);
  EtwTraceBeginCallback(42LL);
  *((_QWORD *)v12 + 2) = 0LL;
  v32 = KeUserModeCallback(42LL, v12, *(unsigned int *)v12, &v63, v60);
  EtwTraceEndCallback(42LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v34, v33);
  v35 = *(_QWORD *)(v28 + 432);
  *(_OWORD *)(v35 + 64) = v69;
  *(_QWORD *)(v35 + 80) = v70;
  if ( v32 >= 0 && v60[0] == 24 )
  {
    v36 = (__int64 *)v63;
    if ( v63 + 8 < v63 || v63 + 8 > W32UserProbeAddress )
      v36 = (__int64 *)W32UserProbeAddress;
    v37 = *v36;
    v68 = *v36;
    v38 = *(_QWORD *)(v63 + 16);
    if ( v38 + 88 < v38 || v38 + 88 > W32UserProbeAddress )
      v38 = W32UserProbeAddress;
    v39 = *(_OWORD *)v38;
    v40 = *(_OWORD *)(v38 + 16);
    v73 = *(_OWORD *)(v38 + 32);
    v41 = *(_OWORD *)(v38 + 48);
    v42 = *(_OWORD *)(v38 + 64);
    v74 = *(_QWORD *)(v38 + 80);
    v75 = v39;
    v76 = v40;
    v77 = v73;
    v78 = v41;
    v79 = v42;
    v80 = v74;
    v27[1] = v74;
    *(_OWORD *)(*v27 + 32LL) = v73;
    goto LABEL_41;
  }
LABEL_58:
  LODWORD(v37) = 0;
LABEL_41:
  if ( v12 != (unsigned __int8 *)v81 && v12 != v82 )
  {
    v54 = (PVOID *)(v12 + 32);
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v54, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v72, (__int64)v54, v9, v10);
  }
  return (unsigned int)v37;
}
