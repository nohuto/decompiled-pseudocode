/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1C011CCC0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011D254 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011F098 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011F16C (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnINLPCREATESTRUCT(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v11; // rsi
  unsigned int v12; // r10d
  int v13; // r14d
  unsigned __int8 *v14; // rbx
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned __int64 v17; // r8
  int v18; // edx
  unsigned int v19; // eax
  unsigned __int8 *result; // rax
  __int64 v21; // rdx
  CHAR *v22; // rdx
  void **v23; // r9
  struct _CAPTUREBUF *v24; // rcx
  unsigned int v25; // r8d
  unsigned int v26; // r8d
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // r8d
  void **v30; // r9
  unsigned int v31; // r8d
  CHAR *v32; // rdx
  int v33; // eax
  unsigned int v34; // r8d
  ULONG_PTR v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // edi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 *v43; // rcx
  __int64 v44; // rdi
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-368h] BYREF
  __int16 v46; // [rsp+48h] [rbp-360h]
  int v47; // [rsp+4Ch] [rbp-35Ch] BYREF
  int v48; // [rsp+50h] [rbp-358h] BYREF
  __int64 v49; // [rsp+58h] [rbp-350h]
  __int128 v50; // [rsp+60h] [rbp-348h]
  unsigned __int64 v51; // [rsp+70h] [rbp-338h] BYREF
  _QWORD v52[5]; // [rsp+78h] [rbp-330h] BYREF
  _QWORD v53[4]; // [rsp+A0h] [rbp-308h] BYREF
  _DWORD v54[44]; // [rsp+C0h] [rbp-2E8h] BYREF
  unsigned __int8 v55[512]; // [rsp+170h] [rbp-238h] BYREF

  v7 = a4;
  LODWORD(v11) = 0;
  LODWORD(a4) = 0;
  *(_QWORD *)&v50 = 0LL;
  v12 = 0;
  v13 = a7 & 1;
  v14 = (unsigned __int8 *)v54;
  RegionSize = gptiCurrent;
  if ( a1 )
    v49 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v49 = 0LL;
  if ( v7 )
  {
    v15 = *(_QWORD *)(v7 + 56);
    if ( v15 && (*(_DWORD *)(v7 + 84) >> 31 != v13 || v15 >= (unsigned __int64)MmSystemRangeStart) )
    {
      v16 = *(_DWORD *)(v7 + 80);
      v11 = v16 + 2;
      if ( (unsigned int)v11 < v16 )
        goto LABEL_74;
      if ( *(int *)(v7 + 84) < 0 && (a7 & 1) == 0 )
      {
        v11 *= 2LL;
        if ( v11 > 0xFFFFFFFF )
          goto LABEL_74;
      }
      v12 = 1;
    }
    v17 = *(_QWORD *)(v7 + 64);
    if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v18 = *(_DWORD *)(v7 + 100) >> 31;
      if ( v18 != v13 || v17 >= (unsigned __int64)MmSystemRangeStart )
      {
        v19 = *(_DWORD *)(v7 + 96);
        a4 = v19 + 2;
        *(_QWORD *)&v50 = a4;
        if ( (unsigned int)a4 < v19 )
          goto LABEL_74;
        if ( v18 )
        {
          if ( (a7 & 1) == 0 )
          {
            a4 *= 2LL;
            *(_QWORD *)&v50 = a4;
            if ( a4 > 0xFFFFFFFF )
              goto LABEL_74;
          }
        }
        ++v12;
      }
    }
  }
  if ( (int)a4 + (int)v11 >= (unsigned int)v11 )
  {
    if ( v12 )
    {
      result = (unsigned __int8 *)AllocCallbackMessage(0xA8u, v12, (unsigned int)(a4 + v11), v55, 1, 0x200uLL);
      v14 = result;
      if ( !result )
        return result;
    }
    else
    {
      v14 = (unsigned __int8 *)v54;
      memset(v54, 0, 0xA8uLL);
      v54[0] = 168;
    }
    if ( v14 != (unsigned __int8 *)v54 && v14 != v55 )
      PushW32ThreadLock((__int64)v14, v53, (__int64)Win32FreePool);
    *((_QWORD *)v14 + 5) = v49;
    *((_DWORD *)v14 + 12) = a2;
    *((_QWORD *)v14 + 7) = a3;
    *((_QWORD *)v14 + 8) = v7;
    if ( !v7 )
      goto LABEL_60;
    *(_DWORD *)(v7 + 52) = 0;
    *(_DWORD *)(v7 + 76) = 0;
    *(_OWORD *)(v14 + 72) = *(_OWORD *)v7;
    *(_OWORD *)(v14 + 88) = *(_OWORD *)(v7 + 16);
    *(_OWORD *)(v14 + 104) = *(_OWORD *)(v7 + 32);
    *(_OWORD *)(v14 + 120) = *(_OWORD *)(v7 + 48);
    *(_OWORD *)(v14 + 136) = *(_OWORD *)(v7 + 64);
    if ( !(_DWORD)v11 )
    {
LABEL_50:
      if ( (_DWORD)v50 )
      {
        v30 = (void **)(v14 + 136);
        v31 = *(_DWORD *)(v7 + 96);
        v32 = *(CHAR **)(v7 + 104);
        if ( *(int *)(v7 + 100) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v33 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v14, v32, 2 * v31 + 2, v30);
LABEL_59:
            if ( v33 < 0 )
              goto LABEL_74;
            goto LABEL_60;
          }
          v34 = v31 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v33 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v14, (PCWCH)v32, (v31 >> 1) + 1, v30);
            goto LABEL_59;
          }
          v34 = v31 + 2;
        }
        v33 = CaptureCallbackData((struct _CAPTUREBUF *)v14, v32, v34, v30);
        goto LABEL_59;
      }
LABEL_60:
      *((_QWORD *)v14 + 19) = a5;
      *((_QWORD *)v14 + 20) = a6;
      v52[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v52;
      v52[1] = a1;
      if ( a1 )
        ++*((_DWORD *)a1 + 2);
      v35 = RegionSize;
      v36 = *(_QWORD *)(RegionSize + 432);
      v50 = *(_OWORD *)(v36 + 64);
      RegionSize = *(_QWORD *)(v36 + 80);
      *(_QWORD *)(v36 + 72) = v49;
      if ( a1 )
        v37 = *a1;
      else
        v37 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v35 + 432) + 64LL) = v37;
      if ( a1 )
        v38 = a1[33];
      else
        v38 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v35 + 432) + 80LL) = v38;
      UserSessionSwitchLeaveCrit(v38, v21);
      EtwTraceBeginCallback(10LL);
      *((_QWORD *)v14 + 2) = 0LL;
      v39 = KeUserModeCallback(10LL, v14, *(unsigned int *)v14, &v51, &v47);
      EtwTraceEndCallback(10LL);
      EnterCrit(0LL, 1LL);
      ThreadUnlock1(v41, v40);
      v42 = *(_QWORD *)(v35 + 432);
      *(_OWORD *)(v42 + 64) = v50;
      *(_QWORD *)(v42 + 80) = RegionSize;
      if ( v39 >= 0 && v47 == 24 )
      {
        v43 = (__int64 *)v51;
        if ( v51 + 8 < v51 || v51 + 8 > W32UserProbeAddress )
          v43 = (__int64 *)W32UserProbeAddress;
        v44 = *v43;
        v52[4] = *v43;
        goto LABEL_75;
      }
      goto LABEL_74;
    }
    if ( *(int *)(v7 + 84) < 0 )
    {
      v28 = *(_DWORD **)(v7 + 56);
      if ( *(_BYTE *)v28 == 0xFF )
      {
        if ( (a7 & 1) != 0 )
        {
          v25 = 3;
          v22 = *(CHAR **)(v7 + 56);
        }
        else
        {
          v48 = ((unsigned __int16)(*v28 >> 8) << 16) | 0xFFFF;
          v25 = 4;
          v22 = (CHAR *)&v48;
        }
        v23 = (void **)(v14 + 128);
        v24 = (struct _CAPTUREBUF *)v14;
      }
      else
      {
        v23 = (void **)(v14 + 128);
        v29 = *(_DWORD *)(v7 + 80);
        v22 = *(CHAR **)(v7 + 88);
        v24 = (struct _CAPTUREBUF *)v14;
        if ( (a7 & 1) == 0 )
        {
          v27 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v14, v22, 2 * v29 + 2, v23);
LABEL_47:
          if ( v27 < 0 )
            goto LABEL_74;
          goto LABEL_50;
        }
        v25 = v29 + 1;
      }
    }
    else
    {
      v22 = *(CHAR **)(v7 + 56);
      v46 = *(_WORD *)v22;
      v23 = (void **)(v14 + 128);
      v24 = (struct _CAPTUREBUF *)v14;
      if ( v46 == -1 )
      {
        if ( (a7 & 1) != 0 )
        {
          ++v22;
          v25 = 3;
        }
        else
        {
          v25 = 4;
        }
      }
      else
      {
        v26 = *(_DWORD *)(v7 + 80);
        v22 = *(CHAR **)(v7 + 88);
        if ( (a7 & 1) != 0 )
        {
          v27 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v14, (PCWCH)v22, (v26 >> 1) + 1, v23);
          goto LABEL_47;
        }
        v25 = v26 + 2;
      }
    }
    v27 = CaptureCallbackData(v24, v22, v25, v23);
    goto LABEL_47;
  }
LABEL_74:
  v44 = 0LL;
LABEL_75:
  if ( v14 != (unsigned __int8 *)v54 && v14 != v55 )
  {
    if ( *((_QWORD *)v14 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v14 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v53);
  }
  return (unsigned __int8 *)v44;
}
