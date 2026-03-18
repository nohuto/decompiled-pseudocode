/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x1C00E8704
 * Callers:
 *     xxxHkCallHook @ 0x1C006CB30 (xxxHkCallHook.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     GetThreadDesktopWindow @ 0x1C007BD60 (GetThreadDesktopWindow.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E8D78 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E8E14 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall fnHkINLPCBTCREATESTRUCT(int a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r13
  unsigned int v8; // r15d
  __int64 ThreadDesktopWindow; // rax
  __int64 v10; // r12
  unsigned __int8 *v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned __int64 v15; // r8
  unsigned int v16; // eax
  unsigned __int8 *result; // rax
  __int64 v18; // rdx
  _QWORD *v19; // r15
  _OWORD *v20; // rax
  CHAR *v21; // rdx
  void **v22; // r9
  struct _CAPTUREBUF *v23; // rcx
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  int v26; // eax
  CHAR *v27; // rax
  int v28; // r8d
  void **v29; // r9
  unsigned int v30; // r8d
  CHAR *v31; // rdx
  int v32; // eax
  unsigned int v33; // r8d
  ULONG_PTR v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // edi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  ULONG_PTR *v42; // rcx
  ULONG_PTR v43; // rdi
  unsigned __int64 v44; // rcx
  __int128 v45; // xmm5
  __int128 v46; // xmm6
  __int128 v47; // xmm2
  __int128 v48; // xmm0
  int v49; // [rsp+38h] [rbp-450h] BYREF
  CHAR v50; // [rsp+3Ch] [rbp-44Ch]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-448h] BYREF
  int v52; // [rsp+48h] [rbp-440h] BYREF
  __int16 v53; // [rsp+4Ch] [rbp-43Ch]
  __int64 v54; // [rsp+50h] [rbp-438h]
  unsigned __int64 v55; // [rsp+58h] [rbp-430h] BYREF
  __int128 v56; // [rsp+60h] [rbp-428h]
  __int64 v57; // [rsp+70h] [rbp-418h]
  _QWORD *v58; // [rsp+78h] [rbp-410h]
  _QWORD v59[5]; // [rsp+80h] [rbp-408h] BYREF
  _QWORD v60[7]; // [rsp+A8h] [rbp-3E0h] BYREF
  __int128 v61; // [rsp+E0h] [rbp-3A8h]
  __int64 v62; // [rsp+110h] [rbp-378h]
  __int128 v63; // [rsp+120h] [rbp-368h]
  __int128 v64; // [rsp+130h] [rbp-358h]
  __int128 v65; // [rsp+140h] [rbp-348h]
  __int128 v66; // [rsp+150h] [rbp-338h]
  __int128 v67; // [rsp+160h] [rbp-328h]
  __int64 v68; // [rsp+170h] [rbp-318h]
  _DWORD v69[44]; // [rsp+180h] [rbp-308h] BYREF
  unsigned __int8 v70[512]; // [rsp+230h] [rbp-258h] BYREF

  *(_QWORD *)&v56 = a4;
  v58 = a3;
  v57 = a2;
  v49 = a1;
  LODWORD(v6) = 0;
  LODWORD(v7) = 0;
  v8 = 0;
  ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
  v10 = ThreadDesktopWindow;
  v11 = (unsigned __int8 *)v69;
  RegionSize = gptiCurrent;
  if ( ThreadDesktopWindow )
    v54 = ThreadDesktopWindow - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v54 = 0LL;
  v12 = *a3;
  v13 = *(_QWORD *)(v12 + 56);
  if ( v13 && (*(_DWORD *)(v12 + 84) >> 31 != a5 || v13 >= (unsigned __int64)MmSystemRangeStart) )
  {
    v14 = *(_DWORD *)(v12 + 80);
    v6 = v14 + 2;
    if ( (unsigned int)v6 < v14 )
      goto LABEL_75;
    if ( *(int *)(v12 + 84) < 0 && !a5 )
    {
      v6 *= 2LL;
      if ( v6 > 0xFFFFFFFF )
        goto LABEL_75;
    }
    v8 = 1;
  }
  v15 = *(_QWORD *)(v12 + 64);
  if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_DWORD *)(v12 + 100) >> 31 != a5 || v15 >= (unsigned __int64)MmSystemRangeStart) )
  {
    v16 = *(_DWORD *)(v12 + 96);
    v7 = v16 + 2;
    if ( (unsigned int)v7 < v16 )
      goto LABEL_75;
    if ( *(int *)(v12 + 100) < 0 && !a5 )
    {
      v7 *= 2LL;
      if ( v7 > 0xFFFFFFFF )
        goto LABEL_75;
    }
    ++v8;
  }
  if ( (int)v6 + (int)v7 >= (unsigned int)v6 )
  {
    if ( v8 )
    {
      result = AllocCallbackMessage(168, v8, (unsigned int)(v6 + v7), v70, 1, 0x200uLL);
      v11 = result;
      if ( !result )
        return result;
    }
    else
    {
      v11 = (unsigned __int8 *)v69;
      memset(v69, 0, 0xA8uLL);
      v69[0] = 168;
    }
    if ( v11 != (unsigned __int8 *)v69 && v11 != v70 )
      PushW32ThreadLock((__int64)v11, v60, (__int64)Win32FreePool);
    *((_QWORD *)v11 + 5) = v54;
    *((_DWORD *)v11 + 12) = v49;
    *((_QWORD *)v11 + 7) = v57;
    v19 = v58;
    *(_DWORD *)(*v58 + 52LL) = 0;
    *(_DWORD *)(*v19 + 76LL) = 0;
    v20 = (_OWORD *)*v19;
    *((_OWORD *)v11 + 4) = *(_OWORD *)*v19;
    *((_OWORD *)v11 + 5) = v20[1];
    *((_OWORD *)v11 + 6) = v20[2];
    *((_OWORD *)v11 + 7) = v20[3];
    *((_OWORD *)v11 + 8) = v20[4];
    if ( !(_DWORD)v6 )
      goto LABEL_48;
    if ( *(int *)(v12 + 84) < 0 )
    {
      v27 = *(CHAR **)(v12 + 56);
      v50 = *v27;
      if ( v50 == -1 )
      {
        if ( a5 )
        {
          v24 = 3;
          v21 = v27;
        }
        else
        {
          v49 = ((unsigned __int16)(*(_DWORD *)v27 >> 8) << 16) | 0xFFFF;
          v24 = 4;
          v21 = (CHAR *)&v49;
        }
        v22 = (void **)(v11 + 120);
        v23 = (struct _CAPTUREBUF *)v11;
      }
      else
      {
        v22 = (void **)(v11 + 120);
        v28 = *(_DWORD *)(v12 + 80);
        v21 = *(CHAR **)(v12 + 88);
        v23 = (struct _CAPTUREBUF *)v11;
        if ( !a5 )
        {
          v26 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v21, 2 * v28 + 2, v22);
LABEL_45:
          if ( v26 < 0 )
            goto LABEL_75;
LABEL_48:
          if ( !(_DWORD)v7 )
          {
LABEL_58:
            *((_QWORD *)v11 + 18) = v19[1];
            *((_QWORD *)v11 + 19) = v56;
            *((_DWORD *)v11 + 40) = a5;
            v59[0] = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = v59;
            v59[1] = v10;
            if ( v10 )
              ++*(_DWORD *)(v10 + 8);
            v34 = RegionSize;
            v35 = *(_QWORD *)(RegionSize + 440);
            v56 = *(_OWORD *)(v35 + 64);
            RegionSize = *(_QWORD *)(v35 + 80);
            *(_QWORD *)(v35 + 72) = v54;
            if ( v10 )
              v36 = *(_QWORD *)v10;
            else
              v36 = 0LL;
            *(_QWORD *)(*(_QWORD *)(v34 + 440) + 64LL) = v36;
            if ( v10 )
              v37 = *(_QWORD *)(v10 + 264);
            else
              v37 = 0LL;
            *(_QWORD *)(*(_QWORD *)(v34 + 440) + 80LL) = v37;
            UserSessionSwitchLeaveCrit(v37, v18);
            EtwTraceBeginCallback(42LL);
            *((_QWORD *)v11 + 2) = 0LL;
            v38 = KeUserModeCallback(42LL, v11, *(unsigned int *)v11, &v55, &v52);
            EtwTraceEndCallback(42LL);
            EnterCrit(1LL);
            ThreadUnlock1(v40, v39);
            v41 = *(_QWORD *)(v34 + 440);
            *(_OWORD *)(v41 + 64) = v56;
            *(_QWORD *)(v41 + 80) = RegionSize;
            if ( v38 >= 0 && v52 == 24 )
            {
              v42 = (ULONG_PTR *)v55;
              if ( v55 + 8 < v55 || v55 + 8 > W32UserProbeAddress )
                v42 = (ULONG_PTR *)W32UserProbeAddress;
              v43 = *v42;
              RegionSize = *v42;
              v44 = *(_QWORD *)(v55 + 16);
              if ( v44 + 88 < v44 || v44 + 88 > W32UserProbeAddress )
                v44 = W32UserProbeAddress;
              v45 = *(_OWORD *)v44;
              v46 = *(_OWORD *)(v44 + 16);
              v61 = *(_OWORD *)(v44 + 32);
              v47 = *(_OWORD *)(v44 + 48);
              v48 = *(_OWORD *)(v44 + 64);
              v62 = *(_QWORD *)(v44 + 80);
              v63 = v45;
              v64 = v46;
              v65 = v61;
              v66 = v47;
              v67 = v48;
              v68 = v62;
              v19[1] = v62;
              *(_OWORD *)(*v19 + 32LL) = v61;
              goto LABEL_76;
            }
            goto LABEL_75;
          }
          v29 = (void **)(v11 + 128);
          v30 = *(_DWORD *)(v12 + 96);
          v31 = *(CHAR **)(v12 + 104);
          if ( *(int *)(v12 + 100) < 0 )
          {
            if ( !a5 )
            {
              v32 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v31, 2 * v30 + 2, v29);
LABEL_57:
              if ( v32 < 0 )
                goto LABEL_75;
              goto LABEL_58;
            }
            v33 = v30 + 1;
          }
          else
          {
            if ( a5 )
            {
              v32 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v31, (v30 >> 1) + 1, v29);
              goto LABEL_57;
            }
            v33 = v30 + 2;
          }
          v32 = CaptureCallbackData((struct _CAPTUREBUF *)v11, v31, v33, v29);
          goto LABEL_57;
        }
        v24 = v28 + 1;
      }
    }
    else
    {
      v21 = *(CHAR **)(v12 + 56);
      v53 = *(_WORD *)v21;
      v22 = (void **)(v11 + 120);
      v23 = (struct _CAPTUREBUF *)v11;
      if ( v53 == -1 )
      {
        if ( a5 )
        {
          ++v21;
          v24 = 3;
        }
        else
        {
          v24 = 4;
        }
      }
      else
      {
        v25 = *(_DWORD *)(v12 + 80);
        v21 = *(CHAR **)(v12 + 88);
        if ( a5 )
        {
          v26 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v21, (v25 >> 1) + 1, v22);
          goto LABEL_45;
        }
        v24 = v25 + 2;
      }
    }
    v26 = CaptureCallbackData(v23, v21, v24, v22);
    goto LABEL_45;
  }
LABEL_75:
  LODWORD(v43) = 0;
LABEL_76:
  if ( v11 != (unsigned __int8 *)v69 && v11 != v70 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v60);
  }
  return (unsigned __int8 *)(unsigned int)v43;
}
