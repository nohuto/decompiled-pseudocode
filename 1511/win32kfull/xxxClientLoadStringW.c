/*
 * XREFs of xxxClientLoadStringW @ 0x1C0122FD8
 * Callers:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0123214 (-xxxLoadSomeStrings@@YAXXZ.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C011F134 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0122E0C (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0122F00 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientLoadStringW(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v5; // ebx
  unsigned __int8 *result; // rax
  unsigned __int8 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  ULONG_PTR *v11; // rcx
  ULONG_PTR v12; // r10
  unsigned __int64 v13; // rcx
  __int64 v14; // xmm1_8
  unsigned int v15; // ebx
  int v16; // [rsp+30h] [rbp-2D8h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+38h] [rbp-2D0h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-2C0h] BYREF
  _DWORD v19[2]; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-2B0h]
  __int128 v21; // [rsp+60h] [rbp-2A8h] BYREF
  __int64 v22; // [rsp+70h] [rbp-298h]
  _QWORD v23[3]; // [rsp+88h] [rbp-280h] BYREF
  unsigned __int8 v24[64]; // [rsp+A0h] [rbp-268h] BYREF
  unsigned __int8 v25[512]; // [rsp+E0h] [rbp-228h] BYREF

  v5 = 2 * a3;
  v20 = a2;
  v19[0] = 0;
  v19[1] = 2;
  result = AllocCallbackMessage(64, 1u, (unsigned int)(2 * a3), v25, 0, 0x200uLL);
  v7 = result;
  RegionSize[1] = (ULONG_PTR)result;
  if ( result )
  {
    if ( result != v24 && result != v25 )
      PushW32ThreadLock((__int64)result, v23, (__int64)Win32FreePool);
    *((_DWORD *)v7 + 10) = a1;
    *((_DWORD *)v7 + 11) = a3;
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v7, v5, (void **)v7 + 6) >= 0
      && (*((_DWORD *)v7 + 14) = v5,
          UserSessionSwitchLeaveCrit(v9, v8),
          EtwTraceBeginCallback(97LL),
          *((_QWORD *)v7 + 2) = 0LL,
          v10 = KeUserModeCallback(97LL, v7, *(unsigned int *)v7, &v18, &v16),
          EtwTraceEndCallback(97LL),
          EnterCrit(0LL, 1LL),
          v10 >= 0)
      && v16 == 24 )
    {
      v11 = (ULONG_PTR *)v18;
      if ( v18 + 8 < v18 || v18 + 8 > W32UserProbeAddress )
        v11 = (ULONG_PTR *)W32UserProbeAddress;
      v12 = *v11;
      RegionSize[0] = *v11;
      v13 = v18;
      if ( v18 + 24 < v18 || v18 + 24 > W32UserProbeAddress )
        v13 = W32UserProbeAddress;
      v14 = *(_QWORD *)(v13 + 16);
      v21 = *(_OWORD *)v13;
      v22 = v14;
      v15 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v21, v12, 0, 0);
      RegionSize[0] = v15;
      CopyOutputString((struct _CALLBACKSTATUS *)&v21, (struct _LARGE_STRING *)v19, a3, 0);
    }
    else
    {
      v15 = 0;
    }
    if ( v7 != v24 && v7 != v25 )
    {
      if ( *((_QWORD *)v7 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v7 + 4, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v23);
    }
    return (unsigned __int8 *)v15;
  }
  return result;
}
