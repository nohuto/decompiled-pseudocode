/*
 * XREFs of xxxClientExpandStringW @ 0x1C0136CC0
 * Callers:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C01360E8 (xxxUpdateSystemCursorFromRegistry.c)
 * Callees:
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0059A14 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0059AA8 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientExpandStringW(struct _LARGE_STRING *a1)
{
  unsigned int v2; // eax
  unsigned __int8 *result; // rax
  unsigned __int8 *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  ULONG_PTR *v8; // rcx
  ULONG_PTR v9; // r10
  unsigned __int64 v10; // rcx
  __int64 v11; // xmm1_8
  unsigned int v12; // ebx
  int v13; // [rsp+30h] [rbp-308h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+38h] [rbp-300h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-2F0h] BYREF
  __int128 v16; // [rsp+50h] [rbp-2E8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-2D8h]
  _QWORD v18[3]; // [rsp+78h] [rbp-2C0h] BYREF
  _BYTE v19[64]; // [rsp+90h] [rbp-2A8h] BYREF
  unsigned __int8 v20[592]; // [rsp+D0h] [rbp-268h] BYREF

  v2 = *((_DWORD *)a1 + 1) & 0x7FFFFFFF;
  if ( v2 > 0x208 )
    v2 = 520;
  result = AllocCallbackMessage(56, 1u, v2, v20, 1, 0x248uLL);
  v4 = result;
  RegionSize[1] = (ULONG_PTR)result;
  if ( result )
  {
    if ( result != v19 && result != v20 )
      PushW32ThreadLock((__int64)result, v18, (__int64)Win32FreePool);
    *((_DWORD *)v4 + 10) = *(_DWORD *)a1;
    *((_DWORD *)v4 + 11) ^= (*((_DWORD *)a1 + 1) ^ *((_DWORD *)v4 + 11)) & 0x7FFFFFFF;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v4, *((char **)a1 + 1), *(_DWORD *)a1 + 2, (void **)v4 + 6) >= 0
      && (*((_DWORD *)v4 + 11) &= ~0x80000000,
          UserSessionSwitchLeaveCrit(v6, v5),
          EtwTraceBeginCallback(58LL),
          *((_QWORD *)v4 + 2) = 0LL,
          v7 = KeUserModeCallback(58LL, v4, *(unsigned int *)v4, &v15, &v13),
          EtwTraceEndCallback(58LL),
          EnterCrit(1LL),
          v7 >= 0)
      && v13 == 24 )
    {
      v8 = (ULONG_PTR *)v15;
      if ( v15 + 8 < v15 || v15 + 8 > W32UserProbeAddress )
        v8 = (ULONG_PTR *)W32UserProbeAddress;
      v9 = *v8;
      RegionSize[0] = *v8;
      v10 = v15;
      if ( v15 + 24 < v15 || v15 + 24 > W32UserProbeAddress )
        v10 = W32UserProbeAddress;
      v11 = *(_QWORD *)(v10 + 16);
      v16 = *(_OWORD *)v10;
      v17 = v11;
      v12 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v16, v9, *((_DWORD *)a1 + 1) >> 31, 0);
      RegionSize[0] = v12;
      CopyOutputString((struct _CALLBACKSTATUS *)&v16, a1, *((_DWORD *)a1 + 1) & 0x7FFFFFFF, 0);
    }
    else
    {
      v12 = 0;
    }
    if ( v4 != v19 && v4 != v20 )
    {
      if ( *((_QWORD *)v4 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v4 + 4, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v18);
    }
    return (unsigned __int8 *)v12;
  }
  return result;
}
