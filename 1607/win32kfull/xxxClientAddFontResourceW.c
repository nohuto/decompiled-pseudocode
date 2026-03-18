/*
 * XREFs of xxxClientAddFontResourceW @ 0x1C00EB084
 * Callers:
 *     xxxAddFontResourceW @ 0x1C00EB04C (xxxAddFontResourceW.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientAddFontResourceW(char **a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 *v6; // rax
  __int64 v7; // r9
  unsigned __int8 *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 *v13; // rcx
  __int64 v14; // rbx
  PVOID *v16; // rdx
  int v17; // [rsp+30h] [rbp-2E8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2E0h] BYREF
  _QWORD v19[3]; // [rsp+40h] [rbp-2D8h] BYREF
  _QWORD v20[3]; // [rsp+58h] [rbp-2C0h] BYREF
  _BYTE v21[144]; // [rsp+70h] [rbp-2A8h] BYREF
  unsigned __int8 v22[512]; // [rsp+100h] [rbp-218h] BYREF

  v6 = AllocCallbackMessage(136, 1u, *((unsigned __int16 *)a1 + 1), v22, 1, 0x200uLL);
  v8 = v6;
  RegionSize = (ULONG_PTR)v6;
  if ( !v6 )
    return 0LL;
  if ( v6 != v21 && v6 != v22 )
    PushW32ThreadLock((__int64)v6, v20, (__int64)Win32FreePool, v7);
  *((_WORD *)v8 + 20) = *(_WORD *)a1;
  *((_WORD *)v8 + 21) = *((_WORD *)a1 + 1);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v8,
              a1[1],
              (unsigned int)*(unsigned __int16 *)a1 + 2,
              (void **)v8 + 6) < 0 )
    goto LABEL_19;
  *((_DWORD *)v8 + 14) = a2;
  if ( a3 && *(_DWORD *)(a3 + 4) )
  {
    *(_OWORD *)(v8 + 60) = *(_OWORD *)a3;
    *(_OWORD *)(v8 + 76) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v8 + 92) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v8 + 108) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(v8 + 124) = *(_QWORD *)(a3 + 64);
  }
  else
  {
    *((_DWORD *)v8 + 16) = 0;
  }
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation);
  EtwTraceBeginCallback(83LL);
  *((_QWORD *)v8 + 2) = 0LL;
  v12 = KeUserModeCallback(83LL, v8, *(unsigned int *)v8, v19, &v17);
  EtwTraceEndCallback(83LL);
  EnterCrit(0LL, 1LL);
  if ( v12 >= 0 && v17 == 24 )
  {
    v13 = (__int64 *)v19[0];
    if ( (unsigned __int64)(v19[0] + 8LL) < v19[0] || (unsigned __int64)(v19[0] + 8LL) > W32UserProbeAddress )
      v13 = (__int64 *)W32UserProbeAddress;
    v14 = *v13;
    v19[1] = *v13;
  }
  else
  {
LABEL_19:
    LODWORD(v14) = 0;
  }
  if ( v8 != v21 && v8 != v22 )
  {
    v16 = (PVOID *)(v8 + 32);
    if ( *((_QWORD *)v8 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v16, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v20, (__int64)v16, v10, v11);
  }
  return (unsigned int)v14;
}
