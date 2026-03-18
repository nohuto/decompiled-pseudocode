/*
 * XREFs of xxxClientCallManipulationThread @ 0x1C020C898
 * Callers:
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F15E8 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C0229DE0 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C009129C (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     BuildManipulationInputInfo @ 0x1C01F2EA0 (BuildManipulationInputInfo.c)
 */

unsigned __int8 *__fastcall xxxClientCallManipulationThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  unsigned __int8 *result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 *v9; // rdi
  unsigned __int8 *v10; // r11
  _DWORD *v11; // r11
  __int64 v12; // rcx
  int v13; // ebx
  __int64 *v14; // rcx
  __int64 v15; // rbx
  PVOID *v16; // rdx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-2A8h] BYREF
  int v18; // [rsp+38h] [rbp-2A0h] BYREF
  _QWORD v19[4]; // [rsp+40h] [rbp-298h] BYREF
  _QWORD v20[3]; // [rsp+60h] [rbp-278h] BYREF
  unsigned __int8 v21[56]; // [rsp+78h] [rbp-260h] BYREF
  unsigned __int8 v22[512]; // [rsp+B0h] [rbp-228h] BYREF

  v3 = a3;
  v5 = glpfnManipulationThreadCallback;
  result = AllocCallbackMessage(56, 1u, a3, v22, 1, 0x200uLL);
  v9 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    if ( result != v21 && result != v22 )
      PushW32ThreadLock((__int64)result, v20, (__int64)Win32FreePool, v8);
    *((_QWORD *)v9 + 5) = v5;
    if ( (unsigned int)v3 > *((_DWORD *)v9 + 1) )
      goto LABEL_15;
    v10 = (unsigned __int8 *)*((_QWORD *)v9 + 2);
    *((_QWORD *)v9 + 2) = &v10[(v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL];
    FixupCaptureDataOffsets((struct _CAPTUREBUF *)v9, (void **)v9 + 6, v10);
    BuildManipulationInputInfo(v11, (unsigned int)v3, a2);
    if ( gdwInAtomicOperation )
    {
      v12 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v12, gdwInAtomicOperation);
    EtwTraceBeginCallback(51LL);
    *((_QWORD *)v9 + 2) = 0LL;
    v13 = KeUserModeCallback(51LL, v9, *(unsigned int *)v9, v19, &v18);
    EtwTraceEndCallback(51LL);
    EnterCrit(0LL, 1LL);
    if ( v13 >= 0 && v18 == 24 )
    {
      v14 = (__int64 *)v19[0];
      if ( (unsigned __int64)(v19[0] + 8LL) < v19[0] || (unsigned __int64)(v19[0] + 8LL) > W32UserProbeAddress )
        v14 = (__int64 *)W32UserProbeAddress;
      v15 = *v14;
      v19[1] = *v14;
    }
    else
    {
LABEL_15:
      LODWORD(v15) = 0;
    }
    if ( v9 != v21 && v9 != v22 )
    {
      v16 = (PVOID *)(v9 + 32);
      if ( *((_QWORD *)v9 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v16, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v20, (__int64)v16, v7, v8);
    }
    return (unsigned __int8 *)(unsigned int)v15;
  }
  return result;
}
