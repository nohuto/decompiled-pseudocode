/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1402D52D0
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140007904 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x140129D3C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x140129D94 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x140129E80 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRINGNULL(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rbx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  struct tagTHREADINFO *v14; // r15
  __int64 v15; // r14
  unsigned int v16; // eax
  unsigned __int64 v17; // rdi
  unsigned __int8 *result; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // rax
  __int64 v22; // rax
  __m128i *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // edi
  __m128i *v27; // rcx
  ULONG_PTR v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // [rsp+30h] [rbp-358h] BYREF
  int v32; // [rsp+34h] [rbp-354h]
  ULONG_PTR RegionSize[2]; // [rsp+38h] [rbp-350h] BYREF
  unsigned int v34[2]; // [rsp+48h] [rbp-340h] BYREF
  void *Src; // [rsp+70h] [rbp-318h] BYREF
  unsigned int v36[2]; // [rsp+78h] [rbp-310h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp-308h] BYREF
  __int64 v38; // [rsp+90h] [rbp-2F8h]
  __m128i v39; // [rsp+98h] [rbp-2F0h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-2E0h]
  __int128 v41; // [rsp+B0h] [rbp-2D8h] BYREF
  void (*v42)(void *); // [rsp+C0h] [rbp-2C8h]
  unsigned __int8 v43[96]; // [rsp+E0h] [rbp-2A8h] BYREF
  unsigned __int8 v44[512]; // [rsp+140h] [rbp-248h] BYREF

  *(_QWORD *)v36 = a3;
  v32 = a7 & 1;
  memset_0(v43, 0, sizeof(v43));
  v11 = v43;
  Src = 0LL;
  v31 = 0;
  v13 = PtiCurrent(v12);
  v14 = v13;
  if ( a1 )
    v15 = a1[5] - *((_QWORD *)v13 + 63);
  else
    v15 = 0LL;
  v16 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v17 = v16 + 2;
  if ( (unsigned int)v17 < v16 )
    goto LABEL_31;
  if ( *(int *)(a4 + 4) < 0 && !v32 )
  {
    v17 *= 2LL;
    if ( v17 > 0xFFFFFFFF )
      goto LABEL_31;
  }
  result = AllocCallbackMessage(96, 1u, (unsigned int)v17, v44, 0, 0x200uLL);
  v11 = result;
  RegionSize[1] = (ULONG_PTR)result;
  if ( !result )
    return result;
  PtiCurrent(v19);
  v41 = 0LL;
  v42 = 0LL;
  if ( v11 != v43 && v11 != v44 )
  {
    v21 = PtiCurrent(v20);
    *(_QWORD *)&v41 = *((_QWORD *)v21 + 47);
    *((_QWORD *)v21 + 47) = &v41;
    *((_QWORD *)&v41 + 1) = v11;
    v42 = Win32FreePool;
  }
  v22 = *(_QWORD *)v36;
  if ( *(_QWORD *)v36 < 2uLL )
    goto LABEL_31;
  *((_QWORD *)v11 + 5) = v15;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = v22;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v17, (void **)v11 + 10) < 0 )
    goto LABEL_31;
  *((_DWORD *)v11 + 22) = v17;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v23 = (__m128i *)*((_QWORD *)v14 + 64);
  v39 = v23[4];
  RegionSize[0] = v23[5].m128i_u64[0];
  *(_QWORD *)(*((_QWORD *)v14 + 64) + 72LL) = v15;
  v24 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*((_QWORD *)v14 + 64) + 64LL) = v24;
  v25 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*((_QWORD *)v14 + 64) + 80LL) = v25;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v34);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v26 = KeUserModeCallback(8LL, v11, *(unsigned int *)v11, &Src, &v31);
  EtwTraceEndCallback(8LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v34);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v27 = (__m128i *)*((_QWORD *)v14 + 64);
  v27[4] = v39;
  v27[5].m128i_i64[0] = RegionSize[0];
  if ( v26 < 0 || v31 != 24 )
    goto LABEL_31;
  *(_QWORD *)v34 = 0LL;
  RtlCopyFromUser(v34, Src, 8uLL);
  v28 = *(_QWORD *)v34;
  RegionSize[0] = *(_QWORD *)v34;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 )
    goto LABEL_32;
  if ( (a7 & 2) != 0 )
    goto LABEL_32;
  v39 = 0LL;
  v40 = 0LL;
  RtlCopyFromUser(&v39, Src, 0x18uLL);
  *(__m128i *)BugCheckParameter3 = v39;
  v38 = v40;
  if ( !_mm_cvtsi128_si32(_mm_srli_si128(v39, 8)) )
    goto LABEL_32;
  v30 = *((_QWORD *)PtiCurrent(v29) + 68);
  if ( v30 && (*(_DWORD *)(v30 + 84) & 1) != 0 && *(_QWORD *)(v30 + 96) == a4 )
  {
LABEL_31:
    v28 = 0LL;
  }
  else
  {
    v28 = (unsigned int)CalcOutputStringSize(
                          (struct _CALLBACKSTATUS *)BugCheckParameter3,
                          v28,
                          *(_DWORD *)(a4 + 4) >> 31,
                          v32);
    RegionSize[0] = v28;
    CopyOutputString((volatile void **)BugCheckParameter3, (struct _LARGE_STRING *)a4, v36[0], v32);
  }
LABEL_32:
  if ( v11 != v43 && v11 != v44 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v41);
  }
  return (unsigned __int8 *)v28;
}
