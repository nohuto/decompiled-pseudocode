/*
 * XREFs of xxxClientAddFontResourceW @ 0x1C0119AB0
 * Callers:
 *     xxxAddFontResourceW @ 0x1C0119A78 (xxxAddFontResourceW.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011D254 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientAddFontResourceW(void **a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 *v11; // rcx
  __int64 v12; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-2E8h] BYREF
  int v14; // [rsp+38h] [rbp-2E0h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-2D8h] BYREF
  _QWORD v16[3]; // [rsp+58h] [rbp-2C0h] BYREF
  _BYTE v17[144]; // [rsp+70h] [rbp-2A8h] BYREF
  unsigned __int8 v18[512]; // [rsp+100h] [rbp-218h] BYREF

  result = (unsigned __int8 *)AllocCallbackMessage(0x88u, 1u, *((unsigned __int16 *)a1 + 1), v18, 1, 0x200uLL);
  v7 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    if ( result != v17 && result != v18 )
      PushW32ThreadLock((__int64)result, v16, (__int64)Win32FreePool);
    *((_WORD *)v7 + 20) = *(_WORD *)a1;
    *((_WORD *)v7 + 21) = *((_WORD *)a1 + 1);
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v7, a1[1], *(unsigned __int16 *)a1 + 2, (void **)v7 + 6) < 0 )
      goto LABEL_16;
    *((_DWORD *)v7 + 14) = a2;
    if ( a3 && *(_DWORD *)(a3 + 4) )
    {
      *(_OWORD *)(v7 + 60) = *(_OWORD *)a3;
      *(_OWORD *)(v7 + 76) = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(v7 + 92) = *(_OWORD *)(a3 + 32);
      *(_OWORD *)(v7 + 108) = *(_OWORD *)(a3 + 48);
      *(_QWORD *)(v7 + 124) = *(_QWORD *)(a3 + 64);
    }
    else
    {
      *((_DWORD *)v7 + 16) = 0;
    }
    UserSessionSwitchLeaveCrit(v9, v8);
    EtwTraceBeginCallback(82LL);
    *((_QWORD *)v7 + 2) = 0LL;
    v10 = KeUserModeCallback(82LL, v7, *(unsigned int *)v7, v15, &v14);
    EtwTraceEndCallback(82LL);
    EnterCrit(0LL, 1LL);
    if ( v10 >= 0 && v14 == 24 )
    {
      v11 = (__int64 *)v15[0];
      if ( (unsigned __int64)(v15[0] + 8LL) < v15[0] || (unsigned __int64)(v15[0] + 8LL) > W32UserProbeAddress )
        v11 = (__int64 *)W32UserProbeAddress;
      v12 = *v11;
      v15[1] = *v11;
    }
    else
    {
LABEL_16:
      LODWORD(v12) = 0;
    }
    if ( v7 != v17 && v7 != v18 )
    {
      if ( *((_QWORD *)v7 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v7 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v16);
    }
    return (unsigned __int8 *)(unsigned int)v12;
  }
  return result;
}
