/*
 * XREFs of xxxClientFindMnemChar @ 0x1402D7F58
 * Callers:
 *     xxxMNFindChar @ 0x1402FC18C (xxxMNFindChar.c)
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

unsigned __int8 *__fastcall xxxClientFindMnemChar(char **a1, __int16 a2)
{
  unsigned __int8 *result; // rax
  __int64 v5; // rcx
  unsigned __int8 *v6; // rdi
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  int v9; // ebx
  unsigned int v10; // ebx
  int v11; // [rsp+30h] [rbp-2B8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-2A8h] BYREF
  void *Src; // [rsp+48h] [rbp-2A0h] BYREF
  __int128 v15; // [rsp+50h] [rbp-298h] BYREF
  void (*v16)(void *); // [rsp+60h] [rbp-288h]
  __int64 v17; // [rsp+68h] [rbp-280h]
  unsigned __int8 v18[80]; // [rsp+80h] [rbp-268h] BYREF
  unsigned __int8 v19[512]; // [rsp+D0h] [rbp-218h] BYREF

  memset_0(v18, 0, 0x48uLL);
  Src = 0LL;
  v11 = 0;
  result = AllocCallbackMessage(72, 1u, *((unsigned __int16 *)a1 + 1), v19, 1, 0x200uLL);
  v6 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrent(v5);
    v15 = 0LL;
    v16 = 0LL;
    if ( v6 != v18 && v6 != v19 )
    {
      v8 = PtiCurrent(v7);
      *(_QWORD *)&v15 = *((_QWORD *)v8 + 47);
      *((_QWORD *)v8 + 47) = &v15;
      *((_QWORD *)&v15 + 1) = v6;
      v16 = Win32FreePool;
    }
    *((_WORD *)v6 + 28) = a2;
    *((_DWORD *)v6 + 15) = 1;
    *((_DWORD *)v6 + 16) = 1;
    *((_WORD *)v6 + 20) = *(_WORD *)a1;
    *((_WORD *)v6 + 21) = *((_WORD *)a1 + 1);
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v6,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v6 + 6) >= 0
      && (LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v12),
          EtwTraceBeginCallback(66LL),
          *((_QWORD *)v6 + 2) = 0LL,
          v9 = KeUserModeCallback(66LL, v6, *(unsigned int *)v6, &Src, &v11),
          EtwTraceEndCallback(66LL),
          LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v12),
          v9 >= 0)
      && v11 == 24 )
    {
      v12 = 0LL;
      RtlCopyFromUser(&v12, Src, 8uLL);
      v10 = v12;
      v17 = v12;
    }
    else
    {
      v10 = 0;
    }
    if ( v6 != v18 && v6 != v19 )
    {
      if ( *((_QWORD *)v6 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v15);
    }
    return (unsigned __int8 *)v10;
  }
  return result;
}
