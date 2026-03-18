/*
 * XREFs of xxxClientLoadStringW @ 0x1C0090818
 * Callers:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0090730 (-xxxLoadSomeStrings@@YAXXZ.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0090FDC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00910A4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0091118 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientLoadStringW(int a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  unsigned __int8 *v6; // rdi
  __int64 v7; // rcx
  int v8; // ebx
  ULONG_PTR *v9; // rcx
  ULONG_PTR v10; // r10
  __int128 *v11; // rcx
  __int64 v12; // xmm1_8
  unsigned int v13; // ebx
  int v15; // [rsp+30h] [rbp-2D8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2D0h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-2C8h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-2B0h]
  __int128 v20; // [rsp+60h] [rbp-2A8h] BYREF
  __int64 v21; // [rsp+70h] [rbp-298h]
  _BYTE v22[24]; // [rsp+88h] [rbp-280h] BYREF
  unsigned __int8 v23[64]; // [rsp+A0h] [rbp-268h] BYREF
  unsigned __int8 v24[512]; // [rsp+E0h] [rbp-228h] BYREF

  v5 = 2 * a3;
  v19 = a2;
  v18[0] = 0;
  v18[1] = 2;
  v6 = AllocCallbackMessage(64, 1u, 2 * a3, v24, 0, 0x200uLL);
  v17[1] = v6;
  if ( !v6 )
    return 0LL;
  if ( v6 != v23 && v6 != v24 )
    PushW32ThreadLock(v6, v22, Win32FreePool);
  *((_DWORD *)v6 + 10) = a1;
  *((_DWORD *)v6 + 11) = a3;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v6, v5, (void **)v6 + 6) < 0 )
    goto LABEL_20;
  *((_DWORD *)v6 + 14) = v5;
  if ( gdwInAtomicOperation )
  {
    v7 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v7, gdwInAtomicOperation);
  EtwTraceBeginCallback(98LL);
  *((_QWORD *)v6 + 2) = 0LL;
  v8 = KeUserModeCallback(98LL, v6, *(unsigned int *)v6, v17, &v15);
  EtwTraceEndCallback(98LL);
  EnterCrit(0LL, 1LL);
  if ( v8 >= 0 && v15 == 24 )
  {
    v9 = (ULONG_PTR *)v17[0];
    if ( (unsigned __int64)(v17[0] + 8LL) < v17[0] || (unsigned __int64)(v17[0] + 8LL) > W32UserProbeAddress )
      v9 = (ULONG_PTR *)W32UserProbeAddress;
    v10 = *v9;
    RegionSize = *v9;
    v11 = (__int128 *)v17[0];
    if ( (unsigned __int64)(v17[0] + 24LL) < v17[0] || (unsigned __int64)(v17[0] + 24LL) > W32UserProbeAddress )
      v11 = (__int128 *)W32UserProbeAddress;
    v12 = *((_QWORD *)v11 + 2);
    v20 = *v11;
    v21 = v12;
    v13 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v20, v10, 0, 0);
    RegionSize = v13;
    CopyOutputString((struct _CALLBACKSTATUS *)&v20, (struct _LARGE_STRING *)v18, a3, 0);
  }
  else
  {
LABEL_20:
    v13 = 0;
  }
  if ( v6 != v23 && v6 != v24 )
  {
    if ( *((_QWORD *)v6 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v22);
  }
  return v13;
}
