/*
 * XREFs of ClientLoadLibrary @ 0x140007F48
 * Callers:
 *     xxxLoadHmodIndex @ 0x1400396C0 (xxxLoadHmodIndex.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400087BC (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

ULONG_PTR __fastcall ClientLoadLibrary(void **a1, void **a2)
{
  ULONG_PTR v4; // rcx
  unsigned int *v5; // rdi
  int v6; // ebx
  ULONG_PTR v7; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rbx
  struct tagTHREADINFO *v11; // rax
  ULONG_PTR v12; // [rsp+30h] [rbp-2C8h] BYREF
  int v13; // [rsp+38h] [rbp-2C0h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-2B8h] BYREF
  _BYTE *v15; // [rsp+48h] [rbp-2B0h]
  void *Src; // [rsp+50h] [rbp-2A8h] BYREF
  __int128 v17; // [rsp+58h] [rbp-2A0h] BYREF
  void (*v18)(void *); // [rsp+68h] [rbp-290h]
  ULONG_PTR v19; // [rsp+70h] [rbp-288h]
  _BYTE v20[80]; // [rsp+80h] [rbp-278h] BYREF
  _BYTE v21[512]; // [rsp+D0h] [rbp-228h] BYREF

  memset_0(v20, 0, 0x48uLL);
  Src = 0LL;
  v13 = 0;
  v4 = (*((unsigned __int16 *)a1 + 1) + *((unsigned __int16 *)a2 + 1) + 14LL) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v4;
  if ( v4 <= 0x800 )
  {
    if ( v4 + 88 <= 0x200 )
    {
      v5 = (unsigned int *)v21;
      v15 = v21;
      memset_0(v21, 0, sizeof(v21));
LABEL_4:
      *((_QWORD *)v5 + 2) = v5 + 22;
      *((_QWORD *)v5 + 4) = 0LL;
      *v5 = RegionSize + 88;
      goto LABEL_5;
    }
    v5 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v4 + 88), 1667461973LL);
    v15 = v5;
    if ( v5 )
      goto LABEL_4;
    return 0LL;
  }
  v9 = Win32AllocPoolWithQuotaZInit(88LL, 1667461973LL);
  v5 = (unsigned int *)v9;
  v15 = (_BYTE *)v9;
  if ( !v9 )
    return 0LL;
  v10 = (_QWORD *)(v9 + 32);
  *(_QWORD *)(v9 + 32) = 0LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v9 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
  {
    Win32FreePool(v5);
    return 0LL;
  }
  *((_QWORD *)v5 + 2) = *v10;
  *v5 = 88;
LABEL_5:
  *(_QWORD *)(v5 + 1) = (unsigned int)RegionSize;
  v5[6] = 72;
  PtiCurrent();
  v17 = 0LL;
  v18 = 0LL;
  if ( v5 != (unsigned int *)v20 && v5 != (unsigned int *)v21 )
  {
    v11 = PtiCurrent();
    *(_QWORD *)&v17 = *((_QWORD *)v11 + 47);
    *((_QWORD *)v11 + 47) = &v17;
    *((_QWORD *)&v17 + 1) = v5;
    v18 = Win32FreePool;
  }
  *((_WORD *)v5 + 20) = *(_WORD *)a1;
  *((_WORD *)v5 + 21) = *((_WORD *)a1 + 1);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v5,
              a1[1],
              (unsigned int)*(unsigned __int16 *)a1 + 2,
              (void **)v5 + 6) < 0 )
    goto LABEL_23;
  *((_WORD *)v5 + 28) = *(_WORD *)a2;
  *((_WORD *)v5 + 29) = *((_WORD *)a2 + 1);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v5,
              a2[1],
              (unsigned int)*(unsigned __int16 *)a2 + 2,
              (void **)v5 + 8) < 0 )
    goto LABEL_23;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v12);
  EtwTraceBeginCallback(75LL);
  *((_QWORD *)v5 + 2) = 0LL;
  v6 = KeUserModeCallback(75LL, v5, *v5, &Src, &v13);
  EtwTraceEndCallback(75LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v12);
  if ( v6 >= 0 && v13 == 24 )
  {
    v12 = 0LL;
    RtlCopyFromUser(&v12, Src, 8uLL);
    v7 = v12;
    v19 = v12;
  }
  else
  {
LABEL_23:
    v7 = 0LL;
  }
  if ( v5 != (unsigned int *)v20 && v5 != (unsigned int *)v21 )
  {
    if ( *((_QWORD *)v5 + 4) )
    {
      v12 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, &v12, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v17);
  }
  return v7;
}
