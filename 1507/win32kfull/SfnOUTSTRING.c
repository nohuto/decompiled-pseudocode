/*
 * XREFs of SfnOUTSTRING @ 0x1C005A340
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0059A14 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0059AA8 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C005A7F0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnOUTSTRING(
        __int64 *a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v10; // rdi
  __int64 v11; // r15
  unsigned int v12; // eax
  unsigned __int64 v13; // rsi
  unsigned __int8 *result; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  __int64 v27; // xmm1_8
  _WORD *v28; // rax
  int v29; // [rsp+30h] [rbp-358h]
  unsigned int v30; // [rsp+40h] [rbp-348h]
  int v31; // [rsp+44h] [rbp-344h]
  __int64 v34; // [rsp+50h] [rbp-338h]
  int v35; // [rsp+58h] [rbp-330h] BYREF
  unsigned __int64 v36; // [rsp+60h] [rbp-328h] BYREF
  __int64 v37; // [rsp+68h] [rbp-320h]
  ULONG_PTR RegionSize[2]; // [rsp+70h] [rbp-318h] BYREF
  _QWORD v39[3]; // [rsp+80h] [rbp-308h] BYREF
  __int128 v40; // [rsp+98h] [rbp-2F0h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-2E0h]
  _QWORD v42[5]; // [rsp+B8h] [rbp-2D0h] BYREF
  unsigned __int8 v43[96]; // [rsp+E0h] [rbp-2A8h] BYREF
  unsigned __int8 v44[512]; // [rsp+140h] [rbp-248h] BYREF

  v31 = a7 & 1;
  v29 = 0;
  v10 = v43;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v11 = 0LL;
  v12 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v13 = v12 + 2;
  if ( (unsigned int)v13 < v12 )
    goto LABEL_45;
  v30 = v12 + 2;
  if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x8000000) == 0 && *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
  {
    v13 *= 2LL;
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_45;
    v30 = v13;
  }
  result = (unsigned __int8 *)AllocCallbackMessage(0x60u, 1u, (unsigned int)v13, v44, 0, 0x200uLL);
  v10 = result;
  if ( !result )
    return result;
  if ( result != v43 && result != v44 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v39[0] = *(_QWORD *)(ThreadWin32Thread + 16);
    *(_QWORD *)(ThreadWin32Thread + 16) = v39;
    v39[1] = v10;
    v39[2] = Win32FreePool;
    LODWORD(v13) = v30;
  }
  *((_QWORD *)v10 + 5) = v11;
  *((_DWORD *)v10 + 12) = a2;
  if ( (a7 & 1) == 0 )
  {
    if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x8000000) != 0 )
    {
      *((_QWORD *)v10 + 7) = a3 >> 1;
      *(_DWORD *)(gptiCurrent + 448LL) &= ~0x8000000u;
      goto LABEL_21;
    }
LABEL_20:
    *((_QWORD *)v10 + 7) = a3;
    goto LABEL_21;
  }
  if ( *(int *)(a4 + 4) < 0 )
    goto LABEL_20;
  *((_QWORD *)v10 + 7) = 2 * a3;
  *(_DWORD *)(gptiCurrent + 448LL) |= 0x8000000u;
  v29 = 1;
LABEL_21:
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v10, v13, (void **)v10 + 10) >= 0 )
  {
    *((_DWORD *)v10 + 22) = v13;
    v42[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v42;
    v42[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v17 = *(_QWORD *)(gptiCurrent + 440LL);
    *(_OWORD *)RegionSize = *(_OWORD *)(v17 + 64);
    v34 = *(_QWORD *)(v17 + 80);
    *(_QWORD *)(v17 + 72) = v11;
    v18 = 0LL;
    if ( a1 )
      v18 = *a1;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v18;
    v19 = 0LL;
    if ( a1 )
      v19 = a1[33];
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v19;
    UserSessionSwitchLeaveCrit(v19, v16);
    EtwTraceBeginCallback(35LL);
    *((_QWORD *)v10 + 2) = 0LL;
    v20 = KeUserModeCallback(35LL, v10, *(unsigned int *)v10, &v36, &v35);
    EtwTraceEndCallback(35LL);
    EnterCrit(1LL);
    ThreadUnlock1(v22, v21);
    v23 = *(_QWORD *)(gptiCurrent + 440LL);
    *(_OWORD *)(v23 + 64) = *(_OWORD *)RegionSize;
    *(_QWORD *)(v23 + 80) = v34;
    if ( v20 >= 0 && v35 == 24 )
    {
      v24 = (__int64 *)v36;
      if ( v36 + 8 < v36 || v36 + 8 > W32UserProbeAddress )
        v24 = (__int64 *)W32UserProbeAddress;
      v25 = *v24;
      v37 = *v24;
      if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      {
        if ( v25 )
        {
          v26 = v36;
          if ( v36 + 24 < v36 || v36 + 24 > W32UserProbeAddress )
            v26 = W32UserProbeAddress;
          v27 = *(_QWORD *)(v26 + 16);
          v40 = *(_OWORD *)v26;
          v41 = v27;
          v25 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v40, v25, *(_DWORD *)(a4 + 4) >> 31, v31);
          v37 = v25;
          CopyOutputString((struct _CALLBACKSTATUS *)&v40, (struct _LARGE_STRING *)a4, a3, v31);
        }
        else if ( a3 )
        {
          v28 = *(_WORD **)(a4 + 8);
          if ( *(int *)(a4 + 4) >= 0 )
            *v28 = 0;
          else
            *(_BYTE *)v28 = 0;
        }
      }
      goto LABEL_46;
    }
  }
LABEL_45:
  v25 = 0LL;
LABEL_46:
  if ( v10 != v43 && v10 != v44 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v39);
  }
  if ( v29 )
    *(_DWORD *)(gptiCurrent + 448LL) &= ~0x8000000u;
  return (unsigned __int8 *)v25;
}
