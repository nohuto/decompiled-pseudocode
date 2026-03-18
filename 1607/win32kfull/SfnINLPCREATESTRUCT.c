/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1C006FE90
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0091150 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00911EC (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     _W32ExceptionHandler @ 0x1C01BF6B8 (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnINLPCREATESTRUCT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r12
  unsigned int v12; // r10d
  int v13; // r14d
  unsigned __int8 *v14; // rbx
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned __int64 v17; // r8
  unsigned int v18; // eax
  unsigned __int8 *result; // rax
  CHAR *v20; // rdx
  void **v21; // r9
  struct _CAPTUREBUF *v22; // rcx
  unsigned int v23; // r8d
  unsigned int v24; // r8d
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // r8d
  void **v28; // r9
  unsigned int v29; // r8d
  CHAR *v30; // rdx
  int v31; // eax
  unsigned int v32; // r8d
  ULONG_PTR v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // edi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 *v41; // rcx
  __int64 v42; // rdi
  int v43; // [rsp+34h] [rbp-364h] BYREF
  unsigned __int8 *v44; // [rsp+38h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-358h] BYREF
  __int16 v46; // [rsp+48h] [rbp-350h]
  int v47; // [rsp+4Ch] [rbp-34Ch] BYREF
  __int64 v48; // [rsp+50h] [rbp-348h]
  _QWORD v49[3]; // [rsp+58h] [rbp-340h] BYREF
  __int128 v50; // [rsp+70h] [rbp-328h]
  _QWORD v51[3]; // [rsp+80h] [rbp-318h] BYREF
  _BYTE v52[24]; // [rsp+98h] [rbp-300h] BYREF
  _DWORD v53[44]; // [rsp+B0h] [rbp-2E8h] BYREF
  unsigned __int8 v54[512]; // [rsp+160h] [rbp-238h] BYREF

  v43 = a2;
  LODWORD(v10) = 0;
  LODWORD(v11) = 0;
  v12 = 0;
  v13 = a7 & 1;
  v14 = (unsigned __int8 *)v53;
  RegionSize = gptiCurrent;
  if ( a1 )
    v48 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v48 = 0LL;
  if ( a4 )
  {
    v15 = *(_QWORD *)(a4 + 56);
    if ( v15 && (*(_DWORD *)(a4 + 84) >> 31 != v13 || v15 >= (unsigned __int64)MmSystemRangeStart) )
    {
      v16 = *(_DWORD *)(a4 + 80);
      v10 = v16 + 2;
      if ( (unsigned int)v10 < v16 )
        goto LABEL_77;
      if ( *(int *)(a4 + 84) < 0 && (a7 & 1) == 0 )
      {
        v10 *= 2LL;
        if ( v10 > 0xFFFFFFFF )
          goto LABEL_77;
      }
      v12 = 1;
    }
    v17 = *(_QWORD *)(a4 + 64);
    if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0
      && (*(_DWORD *)(a4 + 100) >> 31 != v13 || v17 >= (unsigned __int64)MmSystemRangeStart) )
    {
      v18 = *(_DWORD *)(a4 + 96);
      v11 = v18 + 2;
      if ( (unsigned int)v11 < v18 )
        goto LABEL_77;
      if ( *(int *)(a4 + 100) < 0 && (a7 & 1) == 0 )
      {
        v11 *= 2LL;
        if ( v11 > 0xFFFFFFFF )
          goto LABEL_77;
      }
      ++v12;
    }
  }
  if ( (int)v11 + (int)v10 >= (unsigned int)v10 )
  {
    if ( v12 )
    {
      result = (unsigned __int8 *)AllocCallbackMessage(0xA8u, v12, (unsigned int)(v11 + v10), v54, 1, 0x200uLL);
      v14 = result;
      v44 = result;
      if ( !result )
        return result;
    }
    else
    {
      v14 = (unsigned __int8 *)v53;
      v44 = (unsigned __int8 *)v53;
      memset(v53, 0, 0xA8uLL);
      v53[0] = 168;
    }
    if ( v14 != (unsigned __int8 *)v53 && v14 != v54 )
      PushW32ThreadLock(v14, v52, Win32FreePool);
    *((_QWORD *)v14 + 5) = v48;
    *((_DWORD *)v14 + 12) = v43;
    *((_QWORD *)v14 + 7) = a3;
    *((_QWORD *)v14 + 8) = a4 != 0;
    if ( !a4 )
      goto LABEL_60;
    *(_DWORD *)(a4 + 52) = 0;
    *(_DWORD *)(a4 + 76) = 0;
    *(_OWORD *)(v14 + 72) = *(_OWORD *)a4;
    *(_OWORD *)(v14 + 88) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(v14 + 104) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)(v14 + 120) = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(v14 + 136) = *(_OWORD *)(a4 + 64);
    if ( !(_DWORD)v10 )
    {
LABEL_50:
      if ( (_DWORD)v11 )
      {
        v28 = (void **)(v14 + 136);
        v29 = *(_DWORD *)(a4 + 96);
        v30 = *(CHAR **)(a4 + 104);
        if ( *(int *)(a4 + 100) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v31 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v14, v30, 2 * v29 + 2, v28);
LABEL_59:
            if ( v31 < 0 )
              goto LABEL_77;
            goto LABEL_60;
          }
          v32 = v29 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v31 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v14, (PCWCH)v30, (v29 >> 1) + 1, v28);
            goto LABEL_59;
          }
          v32 = v29 + 2;
        }
        v31 = CaptureCallbackData((struct _CAPTUREBUF *)v14, v30, v32, v28);
        goto LABEL_59;
      }
LABEL_60:
      *((_QWORD *)v14 + 19) = a5;
      *((_QWORD *)v14 + 20) = a6;
      v51[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v51;
      v51[1] = a1;
      if ( a1 )
        ++*((_DWORD *)a1 + 2);
      v33 = RegionSize;
      v34 = *(_QWORD *)(RegionSize + 432);
      v50 = *(_OWORD *)(v34 + 64);
      RegionSize = *(_QWORD *)(v34 + 80);
      *(_QWORD *)(v34 + 72) = v48;
      if ( a1 )
        v35 = *a1;
      else
        v35 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v33 + 432) + 64LL) = v35;
      if ( a1 )
        v36 = a1[33];
      else
        v36 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v33 + 432) + 80LL) = v36;
      if ( gdwInAtomicOperation )
      {
        v36 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v36, gdwInAtomicOperation);
      EtwTraceBeginCallback(10LL);
      *((_QWORD *)v14 + 2) = 0LL;
      v37 = KeUserModeCallback(10LL, v14, *(unsigned int *)v14, v49, &v47);
      EtwTraceEndCallback(10LL);
      EnterCrit(0LL, 1LL);
      ThreadUnlock1(v39, v38);
      v40 = *(_QWORD *)(v33 + 432);
      *(_OWORD *)(v40 + 64) = v50;
      *(_QWORD *)(v40 + 80) = RegionSize;
      if ( v37 >= 0 && v47 == 24 )
      {
        v41 = (__int64 *)v49[0];
        if ( (unsigned __int64)(v49[0] + 8LL) < v49[0] || (unsigned __int64)(v49[0] + 8LL) > W32UserProbeAddress )
          v41 = (__int64 *)W32UserProbeAddress;
        v42 = *v41;
        v49[1] = *v41;
        goto LABEL_78;
      }
      goto LABEL_77;
    }
    if ( *(int *)(a4 + 84) < 0 )
    {
      v26 = *(_DWORD **)(a4 + 56);
      if ( *(_BYTE *)v26 == 0xFF )
      {
        if ( (a7 & 1) != 0 )
        {
          v23 = 3;
          v20 = *(CHAR **)(a4 + 56);
        }
        else
        {
          v43 = ((unsigned __int16)(*v26 >> 8) << 16) | 0xFFFF;
          v23 = 4;
          v20 = (CHAR *)&v43;
        }
        v21 = (void **)(v14 + 128);
        v22 = (struct _CAPTUREBUF *)v14;
      }
      else
      {
        v21 = (void **)(v14 + 128);
        v27 = *(_DWORD *)(a4 + 80);
        v20 = *(CHAR **)(a4 + 88);
        v22 = (struct _CAPTUREBUF *)v14;
        if ( (a7 & 1) == 0 )
        {
          v25 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v14, v20, 2 * v27 + 2, v21);
LABEL_47:
          if ( v25 < 0 )
            goto LABEL_77;
          goto LABEL_50;
        }
        v23 = v27 + 1;
      }
    }
    else
    {
      v20 = *(CHAR **)(a4 + 56);
      v46 = *(_WORD *)v20;
      v21 = (void **)(v14 + 128);
      v22 = (struct _CAPTUREBUF *)v14;
      if ( v46 == -1 )
      {
        if ( (a7 & 1) != 0 )
        {
          ++v20;
          v23 = 3;
        }
        else
        {
          v23 = 4;
        }
      }
      else
      {
        v24 = *(_DWORD *)(a4 + 80);
        v20 = *(CHAR **)(a4 + 88);
        if ( (a7 & 1) != 0 )
        {
          v25 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v14, (PCWCH)v20, (v24 >> 1) + 1, v21);
          goto LABEL_47;
        }
        v23 = v24 + 2;
      }
    }
    v25 = CaptureCallbackData(v22, v20, v23, v21);
    goto LABEL_47;
  }
LABEL_77:
  v42 = 0LL;
LABEL_78:
  if ( v14 != (unsigned __int8 *)v53 && v14 != v54 )
  {
    if ( *((_QWORD *)v14 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v14 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v52);
  }
  return (unsigned __int8 *)v42;
}
