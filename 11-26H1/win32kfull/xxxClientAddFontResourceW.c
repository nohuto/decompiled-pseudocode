/*
 * XREFs of xxxClientAddFontResourceW @ 0x14000714C
 * Callers:
 *     xxxAddFontResourceW @ 0x140007100 (xxxAddFontResourceW.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140007904 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400087BC (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxClientAddFontResourceW(void **a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 *v6; // rdi
  int v7; // ebx
  unsigned int v8; // ebx
  struct tagTHREADINFO *v10; // rax
  int v11; // [rsp+30h] [rbp-2F8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-2F0h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-2E8h] BYREF
  void *Src; // [rsp+48h] [rbp-2E0h] BYREF
  __int128 v15; // [rsp+50h] [rbp-2D8h] BYREF
  void (*v16)(void *); // [rsp+60h] [rbp-2C8h]
  __int64 v17; // [rsp+68h] [rbp-2C0h]
  unsigned __int8 v18[144]; // [rsp+80h] [rbp-2A8h] BYREF
  unsigned __int8 v19[512]; // [rsp+110h] [rbp-218h] BYREF

  memset_0(v18, 0, 0x88uLL);
  Src = 0LL;
  v11 = 0;
  v6 = (unsigned __int8 *)AllocCallbackMessage(0x88u, 1u, *((unsigned __int16 *)a1 + 1), v19, 1, 0x200uLL);
  RegionSize = (ULONG_PTR)v6;
  if ( !v6 )
    return 0LL;
  PtiCurrent();
  v15 = 0LL;
  v16 = 0LL;
  if ( v6 != v18 && v6 != v19 )
  {
    v10 = PtiCurrent();
    *(_QWORD *)&v15 = *((_QWORD *)v10 + 47);
    *((_QWORD *)v10 + 47) = &v15;
    *((_QWORD *)&v15 + 1) = v6;
    v16 = Win32FreePool;
  }
  *((_WORD *)v6 + 20) = *(_WORD *)a1;
  *((_WORD *)v6 + 21) = *((_WORD *)a1 + 1);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v6,
              a1[1],
              (unsigned int)*(unsigned __int16 *)a1 + 2,
              (void **)v6 + 6) < 0 )
    goto LABEL_15;
  *((_DWORD *)v6 + 14) = a2;
  if ( a3 && *(_DWORD *)(a3 + 4) )
  {
    *(_OWORD *)(v6 + 60) = *(_OWORD *)a3;
    *(_OWORD *)(v6 + 76) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v6 + 92) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v6 + 108) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(v6 + 124) = *(_QWORD *)(a3 + 64);
  }
  else
  {
    *((_DWORD *)v6 + 16) = 0;
  }
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v12);
  EtwTraceBeginCallback(83LL);
  *((_QWORD *)v6 + 2) = 0LL;
  v7 = KeUserModeCallback(83LL, v6, *(unsigned int *)v6, &Src, &v11);
  EtwTraceEndCallback(83LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v12);
  if ( v7 >= 0 && v11 == 24 )
  {
    v12 = 0LL;
    RtlCopyFromUser(&v12, Src, 8uLL);
    v8 = v12;
    v17 = v12;
  }
  else
  {
LABEL_15:
    v8 = 0;
  }
  if ( v6 != v18 && v6 != v19 )
  {
    if ( *((_QWORD *)v6 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v15);
  }
  return v8;
}
