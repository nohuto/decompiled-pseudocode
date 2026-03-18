/*
 * XREFs of ClientEventCallback @ 0x1C000C424
 * Callers:
 *     xxxEventWndProc @ 0x1C0080730 (xxxEventWndProc.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011D254 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall ClientEventCallback(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  unsigned __int8 *result; // rax
  unsigned __int8 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-298h] BYREF
  int v13; // [rsp+38h] [rbp-290h] BYREF
  _QWORD v14[3]; // [rsp+40h] [rbp-288h] BYREF
  _BYTE v15[24]; // [rsp+58h] [rbp-270h] BYREF
  _BYTE v16[64]; // [rsp+70h] [rbp-258h] BYREF
  unsigned __int8 v17[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = a2[3] + 8;
  result = (unsigned __int8 *)AllocCallbackMessage(0x38u, 1u, v4, v17, 1, 0x200uLL);
  v6 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    if ( result != v16 && result != v17 )
      PushW32ThreadLock(result, v15, Win32FreePool);
    *((_QWORD *)v6 + 5) = a1;
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v6, a2, v4, (void **)v6 + 6) >= 0
      && (UserSessionSwitchLeaveCrit(v8, v7),
          EtwTraceBeginCallback(64LL),
          *((_QWORD *)v6 + 2) = 0LL,
          v9 = KeUserModeCallback(64LL, v6, *(unsigned int *)v6, v14, &v13),
          EtwTraceEndCallback(64LL),
          EnterCrit(0LL, 1LL),
          v9 >= 0)
      && v13 == 24 )
    {
      v10 = (__int64 *)v14[0];
      if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || (unsigned __int64)(v14[0] + 8LL) > W32UserProbeAddress )
        v10 = (__int64 *)W32UserProbeAddress;
      v11 = *v10;
      v14[1] = *v10;
    }
    else
    {
      LODWORD(v11) = 0;
    }
    if ( v6 != v16 && v6 != v17 )
    {
      if ( *((_QWORD *)v6 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock(v15);
    }
    return (unsigned __int8 *)(unsigned int)v11;
  }
  return result;
}
