/*
 * XREFs of xxxClientCallManipulationThread @ 0x1C0213CD4
 * Callers:
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C011F21C (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     BuildManipulationInputInfo @ 0x1C01FBB38 (BuildManipulationInputInfo.c)
 */

unsigned __int8 *__fastcall xxxClientCallManipulationThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v7; // rdi
  unsigned __int8 *v8; // r11
  _DWORD *v9; // r11
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 *v13; // rcx
  __int64 v14; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-2A8h] BYREF
  int v16; // [rsp+38h] [rbp-2A0h] BYREF
  _QWORD v17[4]; // [rsp+40h] [rbp-298h] BYREF
  _QWORD v18[3]; // [rsp+60h] [rbp-278h] BYREF
  unsigned __int8 v19[56]; // [rsp+78h] [rbp-260h] BYREF
  unsigned __int8 v20[512]; // [rsp+B0h] [rbp-228h] BYREF

  v3 = a3;
  v5 = glpfnManipulationThreadCallback;
  result = AllocCallbackMessage(56, 1u, a3, v20, 1, 0x200uLL);
  v7 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    if ( result != v19 && result != v20 )
      PushW32ThreadLock((__int64)result, v18, (__int64)Win32FreePool);
    *((_QWORD *)v7 + 5) = v5;
    if ( (unsigned int)v3 > *((_DWORD *)v7 + 1) )
      goto LABEL_12;
    v8 = (unsigned __int8 *)*((_QWORD *)v7 + 2);
    *((_QWORD *)v7 + 2) = &v8[(v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL];
    FixupCaptureDataOffsets((struct _CAPTUREBUF *)v7, (void **)v7 + 6, v8);
    BuildManipulationInputInfo(v9, (unsigned int)v3, a2);
    UserSessionSwitchLeaveCrit(v11, v10);
    EtwTraceBeginCallback(51LL);
    *((_QWORD *)v7 + 2) = 0LL;
    v12 = KeUserModeCallback(51LL, v7, *(unsigned int *)v7, v17, &v16);
    EtwTraceEndCallback(51LL);
    EnterCrit(0LL, 1LL);
    if ( v12 < 0 )
      goto LABEL_12;
    if ( v16 == 24 )
    {
      v13 = (__int64 *)v17[0];
      if ( (unsigned __int64)(v17[0] + 8LL) < v17[0] || (unsigned __int64)(v17[0] + 8LL) > W32UserProbeAddress )
        v13 = (__int64 *)W32UserProbeAddress;
      v14 = *v13;
      v17[2] = *v13;
    }
    else
    {
LABEL_12:
      LODWORD(v14) = 0;
    }
    if ( v7 != v19 && v7 != v20 )
    {
      if ( *((_QWORD *)v7 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v7 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v18);
    }
    return (unsigned __int8 *)(unsigned int)v14;
  }
  return result;
}
