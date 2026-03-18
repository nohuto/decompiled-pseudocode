/*
 * XREFs of xxxClientExpandStringW @ 0x1C00904EC
 * Callers:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C008F1E4 (xxxUpdateSystemCursorFromRegistry.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0090FDC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00910A4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientExpandStringW(struct _LARGE_STRING *a1)
{
  unsigned int v2; // eax
  unsigned __int8 *v3; // rax
  unsigned __int8 *v4; // rdi
  __int64 v5; // rcx
  int v6; // ebx
  ULONG_PTR *v7; // rcx
  ULONG_PTR v8; // r10
  __int128 *v9; // rcx
  __int64 v10; // xmm1_8
  unsigned int v11; // ebx
  int v13; // [rsp+30h] [rbp-308h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-300h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-2F8h] BYREF
  __int128 v16; // [rsp+50h] [rbp-2E8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-2D8h]
  _BYTE v18[24]; // [rsp+78h] [rbp-2C0h] BYREF
  _BYTE v19[64]; // [rsp+90h] [rbp-2A8h] BYREF
  unsigned __int8 v20[592]; // [rsp+D0h] [rbp-268h] BYREF

  v2 = *((_DWORD *)a1 + 1) & 0x7FFFFFFF;
  if ( v2 > 0x208 )
    v2 = 520;
  v3 = AllocCallbackMessage(56, 1u, v2, v20, 1, 0x248uLL);
  v4 = v3;
  v15[1] = v3;
  if ( !v3 )
    return 0LL;
  if ( v3 != v19 && v3 != v20 )
    PushW32ThreadLock(v3, v18, Win32FreePool);
  *((_DWORD *)v4 + 10) = *(_DWORD *)a1;
  *((_DWORD *)v4 + 11) ^= (*((_DWORD *)a1 + 1) ^ *((_DWORD *)v4 + 11)) & 0x7FFFFFFF;
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v4, *((char **)a1 + 1), *(_DWORD *)a1 + 2, (void **)v4 + 6) < 0 )
    goto LABEL_22;
  *((_DWORD *)v4 + 11) &= ~0x80000000;
  if ( gdwInAtomicOperation )
  {
    v5 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v5, gdwInAtomicOperation);
  EtwTraceBeginCallback(59LL);
  *((_QWORD *)v4 + 2) = 0LL;
  v6 = KeUserModeCallback(59LL, v4, *(unsigned int *)v4, v15, &v13);
  EtwTraceEndCallback(59LL);
  EnterCrit(0LL, 1LL);
  if ( v6 >= 0 && v13 == 24 )
  {
    v7 = (ULONG_PTR *)v15[0];
    if ( (unsigned __int64)(v15[0] + 8LL) < v15[0] || (unsigned __int64)(v15[0] + 8LL) > W32UserProbeAddress )
      v7 = (ULONG_PTR *)W32UserProbeAddress;
    v8 = *v7;
    RegionSize = *v7;
    v9 = (__int128 *)v15[0];
    if ( (unsigned __int64)(v15[0] + 24LL) < v15[0] || (unsigned __int64)(v15[0] + 24LL) > W32UserProbeAddress )
      v9 = (__int128 *)W32UserProbeAddress;
    v10 = *((_QWORD *)v9 + 2);
    v16 = *v9;
    v17 = v10;
    v11 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v16, v8, *((_DWORD *)a1 + 1) >> 31, 0);
    RegionSize = v11;
    CopyOutputString((struct _CALLBACKSTATUS *)&v16, a1, *((_DWORD *)a1 + 1) & 0x7FFFFFFF, 0);
  }
  else
  {
LABEL_22:
    v11 = 0;
  }
  if ( v4 != v19 && v4 != v20 )
  {
    if ( *((_QWORD *)v4 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v4 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v18);
  }
  return v11;
}
