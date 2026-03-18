/*
 * XREFs of ClientGetListboxString @ 0x1401296BC
 * Callers:
 *     SfnOUTCBOXSTRING @ 0x1400462F0 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x140129FE0 (SfnOUTLBOXSTRING.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x140129D3C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x140129D94 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x140129E80 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall ClientGetListboxString(
        _QWORD *a1,
        unsigned int a2,
        ULONG_PTR a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9)
{
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // r13
  __int64 v14; // r14
  unsigned int v15; // eax
  unsigned __int64 v16; // rdi
  ULONG_PTR v17; // rcx
  _DWORD *v18; // rbx
  __int64 v19; // rcx
  _DWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // esi
  int v32; // r8d
  unsigned int v33; // r8d
  unsigned int v34; // eax
  _BYTE *v35; // rcx
  __int64 v37; // rcx
  void *v38; // rdx
  __int64 v39; // rax
  _QWORD *v40; // r12
  struct tagTHREADINFO *v41; // rax
  struct tagTHREADINFO *v42; // rax
  ULONG_PTR v43; // [rsp+30h] [rbp-358h] BYREF
  unsigned int v44[2]; // [rsp+38h] [rbp-350h] BYREF
  int v45; // [rsp+40h] [rbp-348h] BYREF
  int v46[2]; // [rsp+48h] [rbp-340h] BYREF
  void *Src; // [rsp+50h] [rbp-338h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-310h] BYREF
  PVOID *v49; // [rsp+80h] [rbp-308h]
  __int128 v50; // [rsp+88h] [rbp-300h] BYREF
  void (*v51)(void *); // [rsp+98h] [rbp-2F0h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A0h] [rbp-2E8h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-2D8h]
  __int128 v54; // [rsp+B8h] [rbp-2D0h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-2C0h]
  _BYTE v56[96]; // [rsp+F0h] [rbp-298h] BYREF
  _BYTE v57[512]; // [rsp+150h] [rbp-238h] BYREF

  v43 = a3;
  v44[0] = a2;
  v46[0] = a7 & 1;
  memset_0(v56, 0, sizeof(v56));
  v49 = (PVOID *)v56;
  Src = 0LL;
  v45 = 0;
  v12 = PtiCurrent(v11);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 63);
  else
    v14 = 0LL;
  v15 = a4[1] & 0x7FFFFFFF;
  v16 = v15 + 2;
  if ( (unsigned int)v16 < v15 )
    goto LABEL_46;
  if ( a4[1] < 0 && (a7 & 1) == 0 )
  {
    v16 *= 2LL;
    if ( v16 > 0xFFFFFFFF )
      goto LABEL_46;
  }
  v17 = ((unsigned int)v16 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v17;
  if ( v17 > 0x800 )
  {
    v39 = Win32AllocPoolWithQuotaZInit(104LL, 1667461973LL);
    v18 = (_DWORD *)v39;
    if ( v39 )
    {
      v40 = (_QWORD *)(v39 + 32);
      *(_QWORD *)(v39 + 32) = 0LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v39 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        v20 = (_DWORD *)*v40;
        goto LABEL_9;
      }
      Win32FreePool(v18);
    }
  }
  else
  {
    if ( v17 + 104 <= 0x200 )
    {
      v18 = v57;
      memset_0(v57, 0, sizeof(v57));
LABEL_8:
      v20 = v18 + 26;
      *((_QWORD *)v18 + 4) = 0LL;
LABEL_9:
      *v18 = 104;
      *((_QWORD *)v18 + 2) = v20;
      *(_QWORD *)(v18 + 1) = (unsigned int)RegionSize;
      v18[6] = 96;
      goto LABEL_10;
    }
    v18 = (_DWORD *)Win32AllocPoolWithQuotaZInit((unsigned int)(v17 + 104), 1667461973LL);
    if ( v18 )
      goto LABEL_8;
  }
  v18 = 0LL;
LABEL_10:
  v49 = (PVOID *)v18;
  if ( !v18 )
    return 0LL;
  PtiCurrent(v19);
  v50 = 0LL;
  v51 = 0LL;
  if ( v18 != (_DWORD *)v56 && v18 != (_DWORD *)v57 )
  {
    v42 = PtiCurrent(v21);
    *(_QWORD *)&v50 = *((_QWORD *)v42 + 47);
    *((_QWORD *)v42 + 47) = &v50;
    *((_QWORD *)&v50 + 1) = v18;
    v51 = Win32FreePool;
  }
  *((_QWORD *)v18 + 5) = v14;
  v18[12] = v44[0];
  *((_QWORD *)v18 + 7) = v43;
  *((_QWORD *)v18 + 8) = a5;
  *((_QWORD *)v18 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v18, v16, (void **)v18 + 10) < 0 )
    goto LABEL_46;
  v18[22] = v16;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v22 = *((_QWORD *)v13 + 64);
  v54 = *(_OWORD *)(v22 + 64);
  *(_QWORD *)v44 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 72LL) = v14;
  v23 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 64LL) = v23;
  v24 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 80LL) = v24;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v43);
  EtwTraceBeginCallback(72LL);
  *((_QWORD *)v18 + 2) = 0LL;
  v25 = KeUserModeCallback(72LL, v18, (unsigned int)*v18, &Src, &v45);
  EtwTraceEndCallback(72LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v43);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v26 = *((_QWORD *)v13 + 64);
  *(_OWORD *)(v26 + 64) = v54;
  *(_QWORD *)(v26 + 80) = *(_QWORD *)v44;
  if ( v25 < 0 || v45 != 24 )
    goto LABEL_46;
  *(_QWORD *)v44 = 0LL;
  RtlCopyFromUser(v44, Src, 8uLL);
  v28 = *(_QWORD *)v44;
  v43 = *(_QWORD *)v44;
  if ( (v44[0] & 0x80000000) == 0 )
  {
    if ( a9 && (*(_DWORD *)(a9 + 84) & 5) != 0 || (a7 & 2) != 0 )
      goto LABEL_41;
    if ( a8 )
    {
      v37 = *((_QWORD *)PtiCurrent(v27) + 68);
      if ( v37 && (*(_DWORD *)(v37 + 84) & 1) != 0 && *(_QWORD *)(v37 + 96) == *((_QWORD *)a4 + 1) )
        goto LABEL_46;
      v38 = (void *)*((_QWORD *)Src + 2);
      *(_QWORD *)v46 = 0LL;
      RtlCopyFromUser(v46, v38, 8uLL);
      **((_QWORD **)a4 + 1) = *(_QWORD *)v46;
    }
    else
    {
      v54 = 0LL;
      v55 = 0LL;
      RtlCopyFromUser(&v54, Src, 0x18uLL);
      *(_OWORD *)BugCheckParameter3 = v54;
      v53 = v55;
      v30 = *((_QWORD *)PtiCurrent(v29) + 68);
      if ( v30 && (*(_DWORD *)(v30 + 84) & 1) != 0 && *(int **)(v30 + 96) == a4 )
      {
LABEL_46:
        LODWORD(v28) = 0;
        goto LABEL_41;
      }
      v31 = v46[0];
      v28 = CalcOutputStringSize((struct _CALLBACKSTATUS *)BugCheckParameter3, v28, (unsigned int)a4[1] >> 31, v46[0]);
      v43 = v28;
      v32 = a4[1];
      if ( v32 < 0 )
        v33 = v32 & 0x7FFFFFFF;
      else
        v33 = ((unsigned int)v32 >> 1) & 0x3FFFFFFF;
      CopyOutputString((struct _CALLBACKSTATUS *)BugCheckParameter3, (struct _LARGE_STRING *)a4, v33, v31);
    }
    if ( !a8 && v28 != -1LL )
    {
      v34 = (unsigned int)*a4 >> 1;
      if ( a4[1] < 0 )
        v34 = *a4;
      if ( v28 > v34 )
        LODWORD(v28) = v34;
    }
    goto LABEL_41;
  }
  LODWORD(v28) = v44[0];
LABEL_41:
  if ( v49 != (PVOID *)v56 )
  {
    v35 = v57;
    if ( v49 != (PVOID *)v57 )
    {
      if ( v49[4] )
      {
        v43 = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v49 + 4, &v43, 0x8000u);
      }
      v41 = PtiCurrent((__int64)v35);
      *((_QWORD *)v41 + 47) = v50;
      ((void (__fastcall *)(_QWORD))v51)(*((_QWORD *)&v50 + 1));
    }
  }
  return (unsigned int)v28;
}
