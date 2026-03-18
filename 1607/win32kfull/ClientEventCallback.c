/*
 * XREFs of ClientEventCallback @ 0x1C000D754
 * Callers:
 *     xxxEventWndProc @ 0x1C00A9CF0 (xxxEventWndProc.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall ClientEventCallback(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  unsigned __int8 *v5; // rdi
  __int64 v6; // rcx
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rbx
  int v11; // [rsp+30h] [rbp-298h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-290h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-288h] BYREF
  _BYTE v14[24]; // [rsp+58h] [rbp-270h] BYREF
  _BYTE v15[64]; // [rsp+70h] [rbp-258h] BYREF
  unsigned __int8 v16[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = a2[3] + 8;
  v5 = (unsigned __int8 *)AllocCallbackMessage(0x38u, 1u, v4, v16, 1, 0x200uLL);
  RegionSize = (ULONG_PTR)v5;
  if ( !v5 )
    return 0LL;
  if ( v5 != v15 && v5 != v16 )
    PushW32ThreadLock(v5, v14, Win32FreePool);
  *((_QWORD *)v5 + 5) = a1;
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v5, a2, v4, (void **)v5 + 6) < 0 )
    goto LABEL_17;
  if ( gdwInAtomicOperation )
  {
    v6 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation);
  EtwTraceBeginCallback(65LL);
  *((_QWORD *)v5 + 2) = 0LL;
  v7 = KeUserModeCallback(65LL, v5, *(unsigned int *)v5, v13, &v11);
  EtwTraceEndCallback(65LL);
  EnterCrit(0LL, 1LL);
  if ( v7 >= 0 && v11 == 24 )
  {
    v8 = (__int64 *)v13[0];
    if ( (unsigned __int64)(v13[0] + 8LL) < v13[0] || (unsigned __int64)(v13[0] + 8LL) > W32UserProbeAddress )
      v8 = (__int64 *)W32UserProbeAddress;
    v9 = *v8;
    v13[1] = *v8;
  }
  else
  {
LABEL_17:
    LODWORD(v9) = 0;
  }
  if ( v5 != v15 && v5 != v16 )
  {
    if ( *((_QWORD *)v5 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v14);
  }
  return (unsigned int)v9;
}
