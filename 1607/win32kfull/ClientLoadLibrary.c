/*
 * XREFs of ClientLoadLibrary @ 0x1C0109848
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C0109684 (xxxLoadHmodIndex.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall ClientLoadLibrary(char **a1, char **a2)
{
  unsigned __int8 *v4; // rax
  __int64 v5; // r9
  unsigned __int8 *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // ebx
  __int64 *v11; // rcx
  __int64 v12; // rbx
  PVOID *v14; // rdx
  int v15; // [rsp+30h] [rbp-2A8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2A0h] BYREF
  _QWORD v17[3]; // [rsp+40h] [rbp-298h] BYREF
  _QWORD v18[3]; // [rsp+58h] [rbp-280h] BYREF
  unsigned __int8 v19[80]; // [rsp+70h] [rbp-268h] BYREF
  unsigned __int8 v20[512]; // [rsp+C0h] [rbp-218h] BYREF

  v4 = AllocCallbackMessage(72, 2u, *((unsigned __int16 *)a1 + 1) + *((unsigned __int16 *)a2 + 1), v20, 1, 0x200uLL);
  v6 = v4;
  RegionSize = (ULONG_PTR)v4;
  if ( !v4 )
    return 0LL;
  if ( v4 != v19 && v4 != v20 )
    PushW32ThreadLock((__int64)v4, v18, (__int64)Win32FreePool, v5);
  *((_WORD *)v6 + 20) = *(_WORD *)a1;
  *((_WORD *)v6 + 21) = *((_WORD *)a1 + 1);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v6,
              a1[1],
              (unsigned int)*(unsigned __int16 *)a1 + 2,
              (void **)v6 + 6) < 0 )
    goto LABEL_18;
  *((_WORD *)v6 + 28) = *(_WORD *)a2;
  *((_WORD *)v6 + 29) = *((_WORD *)a2 + 1);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v6,
              a2[1],
              (unsigned int)*(unsigned __int16 *)a2 + 2,
              (void **)v6 + 8) < 0 )
    goto LABEL_18;
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation);
  EtwTraceBeginCallback(75LL);
  *((_QWORD *)v6 + 2) = 0LL;
  v10 = KeUserModeCallback(75LL, v6, *(unsigned int *)v6, v17, &v15);
  EtwTraceEndCallback(75LL);
  EnterCrit(0LL, 1LL);
  if ( v10 >= 0 && v15 == 24 )
  {
    v11 = (__int64 *)v17[0];
    if ( (unsigned __int64)(v17[0] + 8LL) < v17[0] || (unsigned __int64)(v17[0] + 8LL) > W32UserProbeAddress )
      v11 = (__int64 *)W32UserProbeAddress;
    v12 = *v11;
    v17[1] = *v11;
  }
  else
  {
LABEL_18:
    v12 = 0LL;
  }
  if ( v6 != v19 && v6 != v20 )
  {
    v14 = (PVOID *)(v6 + 32);
    if ( *((_QWORD *)v6 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v14, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v18, (__int64)v14, v7, v8);
  }
  return v12;
}
