/*
 * XREFs of ClientLoadLibrary @ 0x1C011B6D0
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C011ACB4 (xxxLoadHmodIndex.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011D254 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall ClientLoadLibrary(void **a1, void **a2)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 *v9; // rcx
  __int64 v10; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-2A8h] BYREF
  int v12; // [rsp+38h] [rbp-2A0h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-298h] BYREF
  _QWORD v14[3]; // [rsp+58h] [rbp-280h] BYREF
  unsigned __int8 v15[80]; // [rsp+70h] [rbp-268h] BYREF
  unsigned __int8 v16[512]; // [rsp+C0h] [rbp-218h] BYREF

  result = (unsigned __int8 *)AllocCallbackMessage(
                                0x48u,
                                2u,
                                *((unsigned __int16 *)a1 + 1) + *((unsigned __int16 *)a2 + 1),
                                v16,
                                1,
                                0x200uLL);
  v5 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    if ( result != v15 && result != v16 )
      PushW32ThreadLock((__int64)result, v14, (__int64)Win32FreePool);
    *((_WORD *)v5 + 20) = *(_WORD *)a1;
    *((_WORD *)v5 + 21) = *((_WORD *)a1 + 1);
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v5, a1[1], *(unsigned __int16 *)a1 + 2, (void **)v5 + 6) < 0 )
      goto LABEL_13;
    *((_WORD *)v5 + 28) = *(_WORD *)a2;
    *((_WORD *)v5 + 29) = *((_WORD *)a2 + 1);
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v5, a2[1], *(unsigned __int16 *)a2 + 2, (void **)v5 + 8) < 0 )
      goto LABEL_13;
    UserSessionSwitchLeaveCrit(v7, v6);
    EtwTraceBeginCallback(74LL);
    *((_QWORD *)v5 + 2) = 0LL;
    v8 = KeUserModeCallback(74LL, v5, *(unsigned int *)v5, v13, &v12);
    EtwTraceEndCallback(74LL);
    EnterCrit(0LL, 1LL);
    if ( v8 >= 0 && v12 == 24 )
    {
      v9 = (__int64 *)v13[0];
      if ( (unsigned __int64)(v13[0] + 8LL) < v13[0] || (unsigned __int64)(v13[0] + 8LL) > W32UserProbeAddress )
        v9 = (__int64 *)W32UserProbeAddress;
      v10 = *v9;
      v13[1] = *v9;
    }
    else
    {
LABEL_13:
      v10 = 0LL;
    }
    if ( v5 != v15 && v5 != v16 )
    {
      if ( *((_QWORD *)v5 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v14);
    }
    return (unsigned __int8 *)v10;
  }
  return result;
}
