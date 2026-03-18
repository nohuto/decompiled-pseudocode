/*
 * XREFs of xxxClientFindMnemChar @ 0x1C020D498
 * Callers:
 *     xxxMNFindChar @ 0x1C02353D4 (xxxMNFindChar.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientFindMnemChar(char **a1, __int16 a2)
{
  unsigned __int8 *result; // rax
  __int64 v5; // r9
  unsigned __int8 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 *v11; // rcx
  __int64 v12; // rbx
  PVOID *v13; // rdx
  int v14; // [rsp+30h] [rbp-2A8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2A0h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-298h] BYREF
  _QWORD v17[3]; // [rsp+58h] [rbp-280h] BYREF
  _BYTE v18[80]; // [rsp+70h] [rbp-268h] BYREF
  unsigned __int8 v19[512]; // [rsp+C0h] [rbp-218h] BYREF

  result = AllocCallbackMessage(72, 1u, *((unsigned __int16 *)a1 + 1), v19, 1, 0x200uLL);
  v6 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    if ( result != v18 && result != v19 )
      PushW32ThreadLock((__int64)result, v17, (__int64)Win32FreePool, v5);
    *((_WORD *)v6 + 28) = a2;
    *((_DWORD *)v6 + 15) = 1;
    *((_DWORD *)v6 + 16) = 1;
    *((_WORD *)v6 + 20) = *(_WORD *)a1;
    *((_WORD *)v6 + 21) = *((_WORD *)a1 + 1);
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v6,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v6 + 6) < 0 )
      goto LABEL_15;
    if ( gdwInAtomicOperation )
    {
      v7 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v7, gdwInAtomicOperation);
    EtwTraceBeginCallback(66LL);
    *((_QWORD *)v6 + 2) = 0LL;
    v10 = KeUserModeCallback(66LL, v6, *(unsigned int *)v6, v16, &v14);
    EtwTraceEndCallback(66LL);
    EnterCrit(0LL, 1LL);
    if ( v10 >= 0 && v14 == 24 )
    {
      v11 = (__int64 *)v16[0];
      if ( (unsigned __int64)(v16[0] + 8LL) < v16[0] || (unsigned __int64)(v16[0] + 8LL) > W32UserProbeAddress )
        v11 = (__int64 *)W32UserProbeAddress;
      v12 = *v11;
      v16[1] = *v11;
    }
    else
    {
LABEL_15:
      LODWORD(v12) = 0;
    }
    if ( v6 != v18 && v6 != v19 )
    {
      v13 = (PVOID *)(v6 + 32);
      if ( *((_QWORD *)v6 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v13, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v17, (__int64)v13, v8, v9);
    }
    return (unsigned __int8 *)(unsigned int)v12;
  }
  return result;
}
