/*
 * XREFs of SfnIMECONTROL @ 0x140214380
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140007904 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400087BC (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?THREAD_CODEPAGE@@YAGXZ @ 0x14003CF24 (-THREAD_CODEPAGE@@YAGXZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     WCSToMBEx @ 0x140129570 (WCSToMBEx.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x140129D3C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     ?CopyLogFontAtoW@@YAXPEAUtagLOGFONTW@@PEAUtagLOGFONTA@@@Z @ 0x1402D4C70 (-CopyLogFontAtoW@@YAXPEAUtagLOGFONTW@@PEAUtagLOGFONTA@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall SfnIMECONTROL(
        ULONG_PTR a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 *v10; // r14
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rcx
  ULONG_PTR v14; // r13
  __int64 v15; // rbx
  unsigned int v16; // edx
  unsigned int v17; // esi
  unsigned __int8 *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // r14
  unsigned __int64 v27; // rax
  struct tagTHREADINFO *v28; // rax
  size_t v29; // r8
  char *v30; // rdx
  int *v31; // rbx
  _DWORD *v32; // rax
  __int64 v33; // rcx
  void *v34; // r13
  int v35; // r12d
  int v36; // r12d
  _WORD *v37; // r14
  signed __int64 v38; // r15
  unsigned __int16 v39; // ax
  __int16 v40; // ax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // r14d
  __int64 v45; // rcx
  struct tagLOGFONTA *v46; // rbx
  struct tagLOGFONTA *v47; // rdx
  void *v48; // rcx
  ULONG v49; // [rsp+28h] [rbp-3D0h]
  int v50; // [rsp+30h] [rbp-3C8h] BYREF
  unsigned __int8 *v51; // [rsp+38h] [rbp-3C0h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-3B8h] BYREF
  __int128 v53; // [rsp+48h] [rbp-3B0h] BYREF
  int v54; // [rsp+58h] [rbp-3A0h] BYREF
  void *Src; // [rsp+60h] [rbp-398h] BYREF
  _DWORD *v56; // [rsp+68h] [rbp-390h]
  __int64 v57; // [rsp+C0h] [rbp-338h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+C8h] [rbp-330h] BYREF
  volatile void *Address; // [rsp+D8h] [rbp-320h]
  __int128 v60; // [rsp+E0h] [rbp-318h] BYREF
  void (*v61)(void *); // [rsp+F0h] [rbp-308h]
  __int64 v62; // [rsp+F8h] [rbp-300h]
  _DWORD v63[28]; // [rsp+110h] [rbp-2E8h] BYREF
  _OWORD v64[4]; // [rsp+180h] [rbp-278h] BYREF
  unsigned __int8 v65[512]; // [rsp+1C0h] [rbp-238h] BYREF

  v54 = a2;
  v10 = (__int64 *)a1;
  BugCheckParameter3[0] = a1;
  memset_0(v63, 0, 0x68uLL);
  Src = 0LL;
  v50 = 0;
  v12 = PtiCurrent(v11);
  v14 = (ULONG_PTR)v12;
  RegionSize = (ULONG_PTR)v12;
  if ( v10 )
    v15 = v10[5] - *((_QWORD *)v12 + 63);
  else
    v15 = 0LL;
  v57 = v15;
  switch ( a3 )
  {
    case 7LL:
    case 8LL:
      v17 = 32;
LABEL_13:
      v16 = 1;
      break;
    case 9LL:
    case 10LL:
      goto LABEL_46;
    case 11LL:
    case 12LL:
      v17 = 28;
      goto LABEL_13;
    case 17LL:
LABEL_46:
      v16 = 1;
      v17 = 32 * ((a7 & 1) == 0) + 60;
      break;
    case 24LL:
      v16 = 1;
      v27 = (unsigned __int64)*a4 << 9;
      v13 = 0xFFFFFFFFLL;
      if ( v27 > 0xFFFFFFFF )
        return 0LL;
      v17 = v27 + 4;
      if ( (int)v27 + 4 < (unsigned int)v27 )
        return 0LL;
      break;
    default:
      v16 = 0;
      v17 = 0;
      break;
  }
  if ( v16 )
  {
    v18 = AllocCallbackMessage(104, v16, v17, v65, 1, 0x200uLL);
    v51 = v18;
    if ( v18 )
      goto LABEL_16;
    return 0LL;
  }
  v18 = (unsigned __int8 *)v63;
  v51 = (unsigned __int8 *)v63;
  v63[0] = 104;
LABEL_16:
  PtiCurrent(v13);
  v60 = 0LL;
  v61 = 0LL;
  if ( v18 != (unsigned __int8 *)v63 && v18 != v65 )
  {
    v28 = PtiCurrent(v19);
    *(_QWORD *)&v60 = *((_QWORD *)v28 + 47);
    *((_QWORD *)v28 + 47) = &v60;
    *((_QWORD *)&v60 + 1) = v18;
    v61 = Win32FreePool;
  }
  *((_QWORD *)v18 + 5) = v15;
  *((_DWORD *)v18 + 12) = v54;
  *((_QWORD *)v18 + 7) = a3;
  *((_QWORD *)v18 + 8) = a4;
  *((_QWORD *)v18 + 9) = a5;
  *((_QWORD *)v18 + 10) = a6;
  if ( a3 != 7 )
  {
    if ( a3 == 8 )
      goto LABEL_49;
    if ( a3 != 9 )
    {
      if ( a3 == 10 )
        goto LABEL_49;
      if ( a3 != 11 )
      {
        if ( a3 == 12 )
          goto LABEL_49;
        if ( a3 != 17 )
        {
          if ( a3 != 24 )
            goto LABEL_25;
LABEL_49:
          switch ( a3 )
          {
            case 8LL:
              v29 = 32LL;
              break;
            case 12LL:
              v29 = 28LL;
              break;
            case 10LL:
              if ( (a7 & 1) != 0 )
              {
                memset(&v64[1], 0, 44);
                *(_QWORD *)&v53 = (char *)&v64[1] + 12;
                v64[0] = *(_OWORD *)a4;
                *(_QWORD *)&v64[1] = *((_QWORD *)a4 + 2);
                DWORD2(v64[1]) = a4[6];
                WCSToMBEx(0, (WCHAR *)a4 + 14, -1, (PCHAR *)&v53, 32, v49);
                v29 = 60LL;
                v30 = (char *)v64;
                goto LABEL_69;
              }
              v29 = 92LL;
              break;
            default:
              if ( (a7 & 1) != 0 )
              {
                v31 = &v54;
                *(_QWORD *)&v53 = &v54;
                v32 = (_DWORD *)Win32AllocPoolZInit(v17, 1835627349LL);
                v34 = v32;
                v56 = v32;
                if ( v32 )
                {
                  v35 = *a4;
                  *v32 = *a4;
                  v36 = v35 << 8;
                  if ( v36 )
                  {
                    v37 = v32 + 1;
                    v38 = (char *)a4 - (char *)(v32 + 1);
                    do
                    {
                      --v36;
                      *((_BYTE *)v31 + 1) = 0;
                      v39 = THREAD_CODEPAGE(v33);
                      WCSToMBEx(v39, (_WORD *)((char *)v37 + v38 + 4), 1, (PCHAR *)&v53, 2, v49);
                      v31 = (int *)v53;
                      v40 = *(unsigned __int8 *)(v53 + 1);
                      v33 = *(unsigned __int8 *)v53;
                      if ( (_BYTE)v40 )
                        LOWORD(v33) = v40 | ((_WORD)v33 << 8);
                      *v37++ = v33;
                    }
                    while ( v36 );
                    v10 = (__int64 *)BugCheckParameter3[0];
                    v34 = v56;
                  }
                  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v18, (char *)v34, v17, (void **)v18 + 8) >= 0 )
                  {
                    Win32FreePool(v34);
                    v14 = RegionSize;
                    goto LABEL_25;
                  }
                }
LABEL_35:
                v25 = 0LL;
                goto LABEL_36;
              }
              v29 = v17;
              break;
          }
          v30 = (char *)a4;
LABEL_69:
          if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v18, v30, v29, (void **)v18 + 8) >= 0 )
          {
LABEL_25:
            Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v10);
            v20 = *(_QWORD *)(v14 + 512);
            v53 = *(_OWORD *)(v20 + 64);
            v56 = *(_DWORD **)(v20 + 80);
            *(_QWORD *)(*(_QWORD *)(v14 + 512) + 72LL) = v57;
            if ( v10 )
              v21 = *v10;
            else
              v21 = 0LL;
            *(_QWORD *)(*(_QWORD *)(v14 + 512) + 64LL) = v21;
            if ( v10 )
              v22 = *(_QWORD *)(v10[5] + 224);
            else
              v22 = 0LL;
            *(_QWORD *)(*(_QWORD *)(v14 + 512) + 80LL) = v22;
            LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
            EtwTraceBeginCallback(94LL);
            *((_QWORD *)v18 + 2) = 0LL;
            v23 = KeUserModeCallback(94LL, v18, *(unsigned int *)v18, &Src, &v50);
            EtwTraceEndCallback(94LL);
            LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
            v24 = *(_QWORD *)(v14 + 512);
            *(_OWORD *)(v24 + 64) = v53;
            *(_QWORD *)(v24 + 80) = v56;
            if ( v23 >= 0 && v50 == 24 )
            {
              *(_QWORD *)&v53 = 0LL;
              RtlCopyFromUser(&v53, Src, 8uLL);
              v25 = v53;
              v62 = v53;
              goto LABEL_36;
            }
            goto LABEL_35;
          }
          goto LABEL_35;
        }
      }
    }
  }
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v18, v17, (void **)v18 + 11) < 0 )
    goto LABEL_35;
  *((_DWORD *)v18 + 24) = v17;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v10);
  v41 = *(_QWORD *)(v14 + 512);
  v53 = *(_OWORD *)(v41 + 64);
  v56 = *(_DWORD **)(v41 + 80);
  *(_QWORD *)(*(_QWORD *)(v14 + 512) + 72LL) = v57;
  v42 = v10 ? *v10 : 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 512) + 64LL) = v42;
  v43 = v10 ? *(_QWORD *)(v10[5] + 224) : 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 512) + 80LL) = v43;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  EtwTraceBeginCallback(94LL);
  *((_QWORD *)v18 + 2) = 0LL;
  v44 = KeUserModeCallback(94LL, v18, *(unsigned int *)v18, &Src, &v50);
  EtwTraceEndCallback(94LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v45 = *(_QWORD *)(v14 + 512);
  *(_OWORD *)(v45 + 64) = v53;
  *(_QWORD *)(v45 + 80) = v56;
  if ( v44 < 0 || v50 != 24 )
    goto LABEL_35;
  *(_QWORD *)&v53 = 0LL;
  RtlCopyFromUser(&v53, Src, 8uLL);
  v25 = v53;
  v62 = v53;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_36;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  Address = 0LL;
  RtlCopyFromUser(BugCheckParameter3, Src, 0x18uLL);
  v46 = (struct tagLOGFONTA *)Address;
  ProbeForRead(Address, v17, 4u);
  if ( a3 == 7 || a3 == 11 )
  {
    v47 = v46;
    v48 = a4;
  }
  else
  {
    v47 = v46;
    v48 = a4;
    if ( (a7 & 1) != 0 )
    {
      *((_BYTE *)v46 + v17 - 1) = 0;
      CopyLogFontAtoW((struct tagLOGFONTW *)a4, v46);
      goto LABEL_36;
    }
  }
  memmove(v48, v47, v17);
LABEL_36:
  if ( v18 != (unsigned __int8 *)v63 && v18 != v65 )
  {
    if ( *((_QWORD *)v18 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v18 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v60);
  }
  return v25;
}
