/*
 * XREFs of SfnINLPMDICREATESTRUCT @ 0x1C014D360
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0091150 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00911EC (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

unsigned __int8 *__fastcall SfnINLPMDICREATESTRUCT(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned int v11; // r10d
  __int64 v12; // r9
  int v13; // r15d
  unsigned __int8 *v14; // rbx
  __int64 v15; // r13
  unsigned __int64 v16; // rcx
  __int64 v17; // r9
  ULONG_PTR v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rdi
  unsigned __int8 *result; // rax
  unsigned int v29; // eax
  unsigned int v30; // eax
  void **v31; // r9
  unsigned int v32; // r8d
  CHAR *v33; // rdx
  int v34; // eax
  unsigned int v35; // r8d
  unsigned int v36; // r8d
  void **v37; // r9
  CHAR *v38; // rdx
  int v39; // eax
  unsigned int v40; // r8d
  PVOID *v41; // rdx
  _DWORD v43[5]; // [rsp+44h] [rbp-374h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-360h] BYREF
  __int64 v45; // [rsp+60h] [rbp-358h]
  int v46; // [rsp+68h] [rbp-350h]
  __int64 v47; // [rsp+78h] [rbp-340h]
  unsigned __int64 v48; // [rsp+80h] [rbp-338h] BYREF
  __int64 v49; // [rsp+88h] [rbp-330h]
  __int128 v50; // [rsp+90h] [rbp-328h]
  __int64 v51; // [rsp+A0h] [rbp-318h]
  _QWORD v52[3]; // [rsp+C0h] [rbp-2F8h] BYREF
  _QWORD v53[3]; // [rsp+D8h] [rbp-2E0h] BYREF
  _DWORD v54[36]; // [rsp+F0h] [rbp-2C8h] BYREF
  unsigned __int8 v55[512]; // [rsp+180h] [rbp-238h] BYREF

  v47 = a3;
  LODWORD(v9) = 0;
  LODWORD(v10) = 0;
  v11 = 0;
  v12 = 1LL;
  v13 = a7 & 1;
  v14 = (unsigned __int8 *)v54;
  v49 = 0LL;
  RegionSize = gptiCurrent;
  if ( a1 )
    v15 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v15 = 0LL;
  v45 = v15;
  v16 = *(_QWORD *)(a4 + 8);
  if ( v16 && (v16 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 60) >> 31 != v13) )
  {
    v29 = *(_DWORD *)(a4 + 56);
    v9 = v29 + 2;
    if ( (unsigned int)v9 < v29 )
      goto LABEL_32;
    if ( *(int *)(a4 + 60) < 0 && (a7 & 1) == 0 )
    {
      v9 *= 2LL;
      if ( v9 > 0xFFFFFFFF )
        goto LABEL_32;
    }
    v11 = 1;
  }
  if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_QWORD *)a4 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 76) >> 31 != v13) )
  {
    v30 = *(_DWORD *)(a4 + 72);
    v10 = v30 + 2;
    if ( (unsigned int)v10 < v30 )
      goto LABEL_32;
    if ( *(int *)(a4 + 76) < 0 && (a7 & 1) == 0 )
    {
      v10 *= 2LL;
      if ( v10 > 0xFFFFFFFF )
        goto LABEL_32;
    }
    ++v11;
  }
  if ( (int)v10 + (int)v9 >= (unsigned int)v9 )
  {
    v46 = v10 + v9;
    if ( v11 )
    {
      result = AllocCallbackMessage(144, v11, (unsigned int)(v10 + v9), v55, 1, 0x200uLL);
      v14 = result;
      if ( !result )
        return result;
    }
    else
    {
      v14 = (unsigned __int8 *)v54;
      memset(v54, 0, sizeof(v54));
      v54[0] = 144;
    }
    if ( v14 != (unsigned __int8 *)v54 && v14 != v55 )
      PushW32ThreadLock((__int64)v14, v53, (__int64)Win32FreePool, v17);
    *((_QWORD *)v14 + 5) = v15;
    *((_DWORD *)v14 + 12) = a2;
    *((_QWORD *)v14 + 7) = v47;
    *(_DWORD *)(a4 + 44) = 0;
    *((_OWORD *)v14 + 4) = *(_OWORD *)a4;
    *((_OWORD *)v14 + 5) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)v14 + 6) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)v14 + 14) = *(_QWORD *)(a4 + 48);
    if ( !(_DWORD)v9 )
      goto LABEL_14;
    v31 = (void **)(v14 + 72);
    v32 = *(_DWORD *)(a4 + 56);
    v33 = *(CHAR **)(a4 + 64);
    if ( *(int *)(a4 + 60) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v34 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v14, v33, 2 * v32 + 2, v31);
LABEL_56:
        if ( v34 < 0 )
          goto LABEL_32;
LABEL_14:
        if ( !(_DWORD)v10 )
        {
LABEL_15:
          *((_QWORD *)v14 + 15) = a5;
          *((_QWORD *)v14 + 16) = a6;
          v52[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v52;
          v52[1] = a1;
          if ( a1 )
            ++*((_DWORD *)a1 + 2);
          v18 = RegionSize;
          v19 = *(_QWORD *)(RegionSize + 432);
          v50 = *(_OWORD *)(v19 + 64);
          v51 = *(_QWORD *)(v19 + 80);
          *(_QWORD *)(v19 + 72) = v45;
          if ( a1 )
            v20 = *a1;
          else
            v20 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v18 + 432) + 64LL) = v20;
          if ( a1 )
            v21 = a1[33];
          else
            v21 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v18 + 432) + 80LL) = v21;
          if ( gdwInAtomicOperation )
          {
            v21 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v21, gdwInAtomicOperation);
          EtwTraceBeginCallback(15LL);
          *((_QWORD *)v14 + 2) = 0LL;
          v22 = KeUserModeCallback(15LL, v14, *(unsigned int *)v14, &v48, v43);
          EtwTraceEndCallback(15LL);
          EnterCrit(0LL, 1LL);
          ThreadUnlock1(v24, v23);
          v25 = *(_QWORD *)(v18 + 432);
          *(_OWORD *)(v25 + 64) = v50;
          *(_QWORD *)(v25 + 80) = v51;
          if ( v22 >= 0 && v43[0] == 24 )
          {
            v26 = (__int64 *)v48;
            if ( v48 + 8 < v48 || v48 + 8 > W32UserProbeAddress )
              v26 = (__int64 *)W32UserProbeAddress;
            v27 = *v26;
            v49 = *v26;
            goto LABEL_30;
          }
          goto LABEL_32;
        }
        v36 = *(_DWORD *)(a4 + 72);
        v37 = (void **)(v14 + 64);
        v38 = *(CHAR **)(a4 + 80);
        if ( *(int *)(a4 + 76) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v39 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v14, v38, 2 * v36 + 2, v37);
LABEL_66:
            if ( v39 < 0 )
              goto LABEL_32;
            goto LABEL_15;
          }
          v40 = v36 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v39 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v14, (PCWCH)v38, (v36 >> 1) + 1, v37);
            goto LABEL_66;
          }
          v40 = v36 + 2;
        }
        v39 = CaptureCallbackData((struct _CAPTUREBUF *)v14, v38, v40, v37);
        goto LABEL_66;
      }
      v35 = v32 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v34 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v14, (PCWCH)v33, (v32 >> 1) + 1, v31);
        goto LABEL_56;
      }
      v35 = v32 + 2;
    }
    v34 = CaptureCallbackData((struct _CAPTUREBUF *)v14, v33, v35, v31);
    goto LABEL_56;
  }
LABEL_32:
  v27 = 0LL;
LABEL_30:
  if ( v14 != (unsigned __int8 *)v54 && v14 != v55 )
  {
    v41 = (PVOID *)(v14 + 32);
    if ( *((_QWORD *)v14 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v41, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v53, (__int64)v41, a3, v12);
  }
  return (unsigned __int8 *)v27;
}
