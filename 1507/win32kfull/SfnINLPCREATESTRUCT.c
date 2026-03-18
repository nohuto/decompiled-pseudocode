/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1C005A840
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E8D78 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E8E14 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
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
  __int64 v20; // rdx
  CHAR *v21; // rdx
  void **v22; // r9
  struct _CAPTUREBUF *v23; // rcx
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  int v26; // eax
  CHAR *v27; // rcx
  int v28; // r8d
  void **v29; // r9
  unsigned int v30; // r8d
  CHAR *v31; // rdx
  int v32; // eax
  unsigned int v33; // r8d
  ULONG_PTR v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // edi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 *v42; // rcx
  __int64 v43; // rdi
  int v44; // [rsp+30h] [rbp-378h] BYREF
  CHAR v45; // [rsp+34h] [rbp-374h]
  unsigned __int8 *v46; // [rsp+38h] [rbp-370h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-368h] BYREF
  int v48; // [rsp+48h] [rbp-360h] BYREF
  __int64 v49; // [rsp+50h] [rbp-358h]
  __int16 v50; // [rsp+58h] [rbp-350h]
  unsigned __int64 v51; // [rsp+60h] [rbp-348h] BYREF
  _QWORD v52[4]; // [rsp+68h] [rbp-340h] BYREF
  __int128 v53; // [rsp+88h] [rbp-320h]
  _BYTE v54[32]; // [rsp+A0h] [rbp-308h] BYREF
  _DWORD v55[44]; // [rsp+C0h] [rbp-2E8h] BYREF
  unsigned __int8 v56[512]; // [rsp+170h] [rbp-238h] BYREF

  v44 = a2;
  LODWORD(v10) = 0;
  LODWORD(v11) = 0;
  v12 = 0;
  v13 = a7 & 1;
  v14 = (unsigned __int8 *)v55;
  RegionSize = gptiCurrent;
  if ( a1 )
    v49 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v49 = 0LL;
  if ( a4 )
  {
    v15 = *(_QWORD *)(a4 + 56);
    if ( v15 && (*(_DWORD *)(a4 + 84) >> 31 != v13 || v15 >= (unsigned __int64)MmSystemRangeStart) )
    {
      v16 = *(_DWORD *)(a4 + 80);
      v10 = v16 + 2;
      if ( (unsigned int)v10 < v16 )
        goto LABEL_74;
      if ( *(int *)(a4 + 84) < 0 && (a7 & 1) == 0 )
      {
        v10 *= 2LL;
        if ( v10 > 0xFFFFFFFF )
          goto LABEL_74;
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
        goto LABEL_74;
      if ( *(int *)(a4 + 100) < 0 && (a7 & 1) == 0 )
      {
        v11 *= 2LL;
        if ( v11 > 0xFFFFFFFF )
          goto LABEL_74;
      }
      ++v12;
    }
  }
  if ( (int)v11 + (int)v10 >= (unsigned int)v10 )
  {
    if ( v12 )
    {
      result = (unsigned __int8 *)AllocCallbackMessage(0xA8u, v12, (unsigned int)(v11 + v10), v56, 1, 0x200uLL);
      v14 = result;
      v46 = result;
      if ( !result )
        return result;
    }
    else
    {
      v14 = (unsigned __int8 *)v55;
      v46 = (unsigned __int8 *)v55;
      memset(v55, 0, 0xA8uLL);
      v55[0] = 168;
    }
    if ( v14 != (unsigned __int8 *)v55 && v14 != v56 )
      PushW32ThreadLock(v14, v54, Win32FreePool);
    *((_QWORD *)v14 + 5) = v49;
    *((_DWORD *)v14 + 12) = v44;
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
        v29 = (void **)(v14 + 136);
        v30 = *(_DWORD *)(a4 + 96);
        v31 = *(CHAR **)(a4 + 104);
        if ( *(int *)(a4 + 100) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v32 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v14, v31, 2 * v30 + 2, v29);
LABEL_59:
            if ( v32 < 0 )
              goto LABEL_74;
            goto LABEL_60;
          }
          v33 = v30 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v32 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v14, (PCWCH)v31, (v30 >> 1) + 1, v29);
            goto LABEL_59;
          }
          v33 = v30 + 2;
        }
        v32 = CaptureCallbackData((struct _CAPTUREBUF *)v14, v31, v33, v29);
        goto LABEL_59;
      }
LABEL_60:
      *((_QWORD *)v14 + 19) = a5;
      *((_QWORD *)v14 + 20) = a6;
      v52[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v52;
      v52[1] = a1;
      if ( a1 )
        ++*((_DWORD *)a1 + 2);
      v34 = RegionSize;
      v35 = *(_QWORD *)(RegionSize + 440);
      v53 = *(_OWORD *)(v35 + 64);
      RegionSize = *(_QWORD *)(v35 + 80);
      *(_QWORD *)(v35 + 72) = v49;
      if ( a1 )
        v36 = *a1;
      else
        v36 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v34 + 440) + 64LL) = v36;
      if ( a1 )
        v37 = a1[33];
      else
        v37 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v34 + 440) + 80LL) = v37;
      UserSessionSwitchLeaveCrit(v37, v20);
      EtwTraceBeginCallback(10LL);
      *((_QWORD *)v14 + 2) = 0LL;
      v38 = KeUserModeCallback(10LL, v14, *(unsigned int *)v14, &v51, &v48);
      EtwTraceEndCallback(10LL);
      EnterCrit(1LL);
      ThreadUnlock1(v40, v39);
      v41 = *(_QWORD *)(v34 + 440);
      *(_OWORD *)(v41 + 64) = v53;
      *(_QWORD *)(v41 + 80) = RegionSize;
      if ( v38 >= 0 && v48 == 24 )
      {
        v42 = (__int64 *)v51;
        if ( v51 + 8 < v51 || v51 + 8 > W32UserProbeAddress )
          v42 = (__int64 *)W32UserProbeAddress;
        v43 = *v42;
        v52[3] = *v42;
        goto LABEL_75;
      }
      goto LABEL_74;
    }
    if ( *(int *)(a4 + 84) < 0 )
    {
      v27 = *(CHAR **)(a4 + 56);
      v45 = *v27;
      if ( v45 == -1 )
      {
        if ( (a7 & 1) != 0 )
        {
          v24 = 3;
          v21 = v27;
        }
        else
        {
          v44 = ((unsigned __int16)(*(_DWORD *)v27 >> 8) << 16) | 0xFFFF;
          v24 = 4;
          v21 = (CHAR *)&v44;
        }
        v22 = (void **)(v14 + 128);
        v23 = (struct _CAPTUREBUF *)v14;
      }
      else
      {
        v22 = (void **)(v14 + 128);
        v28 = *(_DWORD *)(a4 + 80);
        v21 = *(CHAR **)(a4 + 88);
        v23 = (struct _CAPTUREBUF *)v14;
        if ( (a7 & 1) == 0 )
        {
          v26 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v14, v21, 2 * v28 + 2, v22);
LABEL_47:
          if ( v26 < 0 )
            goto LABEL_74;
          goto LABEL_50;
        }
        v24 = v28 + 1;
      }
    }
    else
    {
      v21 = *(CHAR **)(a4 + 56);
      v50 = *(_WORD *)v21;
      v22 = (void **)(v14 + 128);
      v23 = (struct _CAPTUREBUF *)v14;
      if ( v50 == -1 )
      {
        if ( (a7 & 1) != 0 )
        {
          ++v21;
          v24 = 3;
        }
        else
        {
          v24 = 4;
        }
      }
      else
      {
        v25 = *(_DWORD *)(a4 + 80);
        v21 = *(CHAR **)(a4 + 88);
        if ( (a7 & 1) != 0 )
        {
          v26 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v14, (PCWCH)v21, (v25 >> 1) + 1, v22);
          goto LABEL_47;
        }
        v24 = v25 + 2;
      }
    }
    v26 = CaptureCallbackData(v23, v21, v24, v22);
    goto LABEL_47;
  }
LABEL_74:
  v43 = 0LL;
LABEL_75:
  if ( v14 != (unsigned __int8 *)v55 && v14 != v56 )
  {
    if ( *((_QWORD *)v14 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v14 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v54);
  }
  return (unsigned __int8 *)v43;
}
