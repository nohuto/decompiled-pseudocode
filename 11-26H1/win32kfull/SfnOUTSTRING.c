/*
 * XREFs of SfnOUTSTRING @ 0x140035930
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x140129E80 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

ULONG_PTR __fastcall SfnOUTSTRING(
        __int64 *a1,
        ULONG a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v10; // rbx
  _DWORD *v11; // rdi
  __int64 v12; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  struct _LARGE_STRING *v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r12
  unsigned int v17; // eax
  unsigned __int64 v18; // rsi
  _QWORD *v19; // rax
  ULONG_PTR v20; // rcx
  __int64 v21; // rcx
  _DWORD *v22; // rax
  struct tagTHREADINFO *v23; // rax
  _QWORD *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rcx
  int v33; // esi
  ULONG_PTR v34; // r14
  int v35; // r12d
  unsigned __int64 v36; // rsi
  int v37; // r13d
  const WCHAR *v38; // r15
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r8
  __int64 *v41; // rax
  _BYTE *v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // r14
  ULONG BytesInMultiByteString[2]; // [rsp+30h] [rbp-378h] BYREF
  int v47; // [rsp+38h] [rbp-370h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-368h] BYREF
  struct _LARGE_STRING *v49; // [rsp+48h] [rbp-360h]
  int v50; // [rsp+50h] [rbp-358h] BYREF
  int v51; // [rsp+54h] [rbp-354h]
  unsigned int v52[2]; // [rsp+58h] [rbp-350h]
  _DWORD *v53; // [rsp+60h] [rbp-348h]
  void *Src; // [rsp+88h] [rbp-320h] BYREF
  SIZE_T Length[2]; // [rsp+90h] [rbp-318h] BYREF
  volatile void *Address; // [rsp+A0h] [rbp-308h]
  ULONG_PTR v57; // [rsp+A8h] [rbp-300h] BYREF
  __int128 v58; // [rsp+B0h] [rbp-2F8h] BYREF
  void (*v59)(void *); // [rsp+C0h] [rbp-2E8h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+C8h] [rbp-2E0h] BYREF
  volatile void *v61; // [rsp+D8h] [rbp-2D0h]
  _BYTE v62[96]; // [rsp+100h] [rbp-2A8h] BYREF
  _BYTE v63[512]; // [rsp+160h] [rbp-248h] BYREF

  v49 = (struct _LARGE_STRING *)a4;
  *(_QWORD *)v52 = a3;
  BytesInMultiByteString[0] = a2;
  v47 = a7 & 1;
  v10 = 0LL;
  v51 = 0;
  memset_0(v62, 0, sizeof(v62));
  v11 = v62;
  Src = 0LL;
  v50 = 0;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v12);
  if ( CurrentThreadWin32Thread )
    v15 = *CurrentThreadWin32Thread;
  else
    v15 = 0LL;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(v15 + 504);
  else
    v16 = 0LL;
  v17 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v18 = v17 + 2;
  if ( (unsigned int)v18 >= v17 )
  {
    v19 = (_QWORD *)PsGetCurrentThreadWin32Thread(v14);
    v14 = v19 ? (struct _LARGE_STRING *)*v19 : 0LL;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v14 + 130, 0, 0) & 0x8000000) != 0
      || *(int *)(a4 + 4) >= 0
      || v47
      || (v18 *= 2LL, v18 <= 0xFFFFFFFF) )
    {
      RegionSize = (unsigned int)v18;
      v20 = ((unsigned int)v18 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
      v57 = v20;
      if ( v20 > 0x800 )
      {
        v44 = Win32AllocPoolWithQuotaZInit(104LL, 1667461973LL);
        v11 = (_DWORD *)v44;
        if ( v44 )
        {
          v45 = (_QWORD *)(v44 + 32);
          *(_QWORD *)(v44 + 32) = 0LL;
          if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v44 + 32), 0LL, &v57, 0x1000u, 4u) >= 0 )
          {
            v22 = (_DWORD *)*v45;
            goto LABEL_14;
          }
          Win32FreePool(v11);
        }
      }
      else
      {
        if ( v20 + 104 <= 0x200 )
        {
          v11 = v63;
          memset_0(v63, 0, sizeof(v63));
LABEL_13:
          v22 = v11 + 26;
          *((_QWORD *)v11 + 4) = 0LL;
LABEL_14:
          *v11 = 104;
          *((_QWORD *)v11 + 2) = v22;
          v11[1] = v57;
          v11[2] = 0;
          v11[6] = 96;
          goto LABEL_15;
        }
        v11 = (_DWORD *)Win32AllocPoolWithQuotaZInit((unsigned int)(v20 + 104), 1667461973LL);
        if ( v11 )
          goto LABEL_13;
      }
      v11 = 0LL;
LABEL_15:
      v53 = v11;
      if ( !v11 )
        return 0LL;
      PsGetCurrentThreadWin32Thread(v21);
      v58 = 0LL;
      v59 = 0LL;
      if ( v11 != (_DWORD *)v62 && v11 != (_DWORD *)v63 )
      {
        v23 = PtiCurrent();
        *(_QWORD *)&v58 = *((_QWORD *)v23 + 47);
        *((_QWORD *)v23 + 47) = &v58;
        *((_QWORD *)&v58 + 1) = v11;
        v59 = Win32FreePool;
      }
      *((_QWORD *)v11 + 5) = v16;
      v11[12] = BytesInMultiByteString[0];
      v14 = (struct _LARGE_STRING *)(unsigned int)v47;
      if ( v47 )
      {
        if ( *((int *)v49 + 1) >= 0 )
        {
          *((_QWORD *)v11 + 7) = 2LL * *(_QWORD *)v52;
          _InterlockedOr((volatile signed __int32 *)PtiCurrent() + 130, 0x8000000u);
          v51 = 1;
          goto LABEL_22;
        }
      }
      else
      {
        v14 = PtiCurrent();
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)v14 + 130, 0, 0) & 0x8000000) != 0 )
        {
          *((_QWORD *)v11 + 7) = *(_QWORD *)v52 >> 1;
          _InterlockedAnd((volatile signed __int32 *)PtiCurrent() + 130, 0xF7FFFFFF);
LABEL_22:
          *((_QWORD *)v11 + 8) = a5;
          *((_QWORD *)v11 + 9) = a6;
          v24 = v11 + 20;
          if ( (unsigned int)v18 > v11[1] )
            goto LABEL_63;
          v25 = *((_QWORD *)v11 + 2);
          *((_QWORD *)v11 + 2) = v25 + ((RegionSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          if ( *((_QWORD *)v11 + 4) )
          {
            *v24 = v25;
          }
          else
          {
            *v24 = v25 - (_QWORD)v11;
            *(_DWORD *)((char *)&v11[v11[2]++] + (unsigned int)v11[6]) = 80;
          }
          v11[22] = v18;
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
          v27 = *(_QWORD *)(v15 + 512);
          *(_OWORD *)Length = *(_OWORD *)(v27 + 64);
          RegionSize = *(_QWORD *)(v27 + 80);
          *(_QWORD *)(*(_QWORD *)(v15 + 512) + 72LL) = v16;
          v28 = 0LL;
          if ( a1 )
            v28 = *a1;
          *(_QWORD *)(*(_QWORD *)(v15 + 512) + 64LL) = v28;
          if ( a1 )
            v29 = *(_QWORD *)(a1[5] + 224);
          else
            v29 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v15 + 512) + 80LL) = v29;
          BytesInMultiByteString[0] = GET_USERCRIT_DISPOSITION(v29, v26);
          BytesInMultiByteString[1] = 1;
          if ( BytesInMultiByteString[0] )
          {
            v31 = (__int64 *)PsGetCurrentThreadWin32Thread(v30);
            if ( v31 )
              v32 = *v31;
            else
              v32 = 0LL;
            BytesInMultiByteString[1] = *(_BYTE *)(v32 + 1708) != 1;
            UserSessionSwitchLeaveCrit(v32);
          }
          EtwTraceBeginCallback(35LL);
          *((_QWORD *)v11 + 2) = 0LL;
          v33 = KeUserModeCallback(35LL, v11, (unsigned int)*v11, &Src, &v50);
          EtwTraceEndCallback(35LL);
          LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)BytesInMultiByteString);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
          v14 = *(struct _LARGE_STRING **)(v15 + 512);
          *((_OWORD *)v14 + 4) = *(_OWORD *)Length;
          *((_QWORD *)v14 + 10) = RegionSize;
          if ( v33 < 0 || v50 != 24 )
            goto LABEL_63;
          *(_QWORD *)BytesInMultiByteString = 0LL;
          RtlCopyFromUser(BytesInMultiByteString, Src, 8uLL);
          v34 = *(_QWORD *)BytesInMultiByteString;
          RegionSize = *(_QWORD *)BytesInMultiByteString;
          if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
            goto LABEL_64;
          if ( !*(_QWORD *)BytesInMultiByteString )
          {
            if ( *(_QWORD *)v52 )
            {
              v14 = v49;
              v43 = (_BYTE *)*((_QWORD *)v49 + 1);
              if ( *((int *)v49 + 1) < 0 )
                *v43 = 0;
              else
                *(_WORD *)v43 = 0;
            }
            goto LABEL_64;
          }
          *(_OWORD *)Length = 0LL;
          Address = 0LL;
          RtlCopyFromUser(Length, Src, 0x18uLL);
          *(_OWORD *)BugCheckParameter3 = *(_OWORD *)Length;
          v61 = Address;
          v14 = (struct _LARGE_STRING *)*((_QWORD *)PtiCurrent() + 68);
          if ( v14 )
          {
            if ( (*((_DWORD *)v14 + 21) & 1) != 0 && *((struct _LARGE_STRING **)v14 + 12) == v49 )
              goto LABEL_63;
          }
          v35 = *((_DWORD *)v49 + 1);
          BytesInMultiByteString[0] = 0;
          v36 = LODWORD(Length[1]);
          v37 = v47;
          if ( LODWORD(Length[1]) )
          {
            v38 = (const WCHAR *)Address;
            ProbeForRead(Address, LODWORD(Length[1]), (v47 ^ 1) + 1);
          }
          else
          {
            *(_BYTE *)MmUserProbeAddress = 0;
            v38 = (const WCHAR *)Address;
          }
          if ( v35 < 0 )
          {
            if ( !v37 )
            {
              v40 = 2LL * (unsigned int)v34;
              if ( v40 >= v36 )
                LODWORD(v40) = v36;
              RtlUnicodeToMultiByteSize(BytesInMultiByteString, v38, v40);
              LODWORD(v39) = BytesInMultiByteString[0];
              goto LABEL_62;
            }
            if ( (unsigned int)v34 < (unsigned int)v36 )
              LODWORD(v36) = v34;
            LODWORD(v39) = v36;
          }
          else if ( v37 )
          {
            if ( (unsigned int)v34 < (unsigned int)v36 )
              LODWORD(v36) = v34;
            RtlMultiByteToUnicodeSize(BytesInMultiByteString, (const CHAR *)v38, v36);
            LODWORD(v39) = BytesInMultiByteString[0] >> 1;
          }
          else if ( (unsigned int)v34 >= (unsigned int)v36 >> 1 )
          {
            v39 = v36 >> 1;
          }
          else
          {
            LODWORD(v39) = v34;
          }
          BytesInMultiByteString[0] = v39;
LABEL_62:
          v34 = (unsigned int)v39;
          RegionSize = (unsigned int)v39;
          CopyOutputString((struct _CALLBACKSTATUS *)BugCheckParameter3, v49, v52[0], v37);
          goto LABEL_64;
        }
      }
      *((_QWORD *)v11 + 7) = *(_QWORD *)v52;
      goto LABEL_22;
    }
  }
LABEL_63:
  v34 = 0LL;
LABEL_64:
  if ( v11 != (_DWORD *)v62 && v11 != (_DWORD *)v63 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    *((_QWORD *)PtiCurrent() + 47) = v58;
    ((void (__fastcall *)(_QWORD))v59)(*((_QWORD *)&v58 + 1));
  }
  if ( v51 )
  {
    v41 = (__int64 *)PsGetCurrentThreadWin32Thread(v14);
    if ( v41 )
      v10 = *v41;
    _InterlockedAnd((volatile signed __int32 *)(v10 + 520), 0xF7FFFFFF);
  }
  return v34;
}
