/*
 * XREFs of xxxClientLoadMenu @ 0x1C00A99D4
 * Callers:
 *     xxxLoadSysMenu @ 0x1C0067400 (xxxLoadSysMenu.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C022B18C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxClientLoadMenu(__int64 a1, char **a2)
{
  unsigned __int16 v4; // ax
  unsigned int v5; // edx
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int8 *v8; // rdi
  __int64 v9; // r9
  unsigned __int16 v10; // ax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 *v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rbx
  PVOID *v18; // rdx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-298h] BYREF
  int v20; // [rsp+38h] [rbp-290h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-288h] BYREF
  __int64 v22; // [rsp+48h] [rbp-280h]
  _QWORD v23[3]; // [rsp+58h] [rbp-270h] BYREF
  _DWORD v24[16]; // [rsp+70h] [rbp-258h] BYREF
  unsigned __int8 v25[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = *((_WORD *)a2 + 1);
  if ( v4 )
  {
    v5 = 1;
    v6 = v4;
  }
  else
  {
    v6 = 0LL;
    v5 = 0;
  }
  if ( v5 )
  {
    v8 = AllocCallbackMessage(64, v5, v6, v25, 1, 0x200uLL);
    RegionSize = (ULONG_PTR)v8;
    if ( !v8 )
      return 0LL;
  }
  else
  {
    v8 = (unsigned __int8 *)v24;
    RegionSize = (ULONG_PTR)v24;
    memset(v24, 0, sizeof(v24));
    v24[0] = 64;
  }
  if ( v8 != (unsigned __int8 *)v24 && v8 != v25 )
    PushW32ThreadLock((__int64)v8, v23, (__int64)Win32FreePool, v9);
  *((_QWORD *)v8 + 5) = a1;
  *((_WORD *)v8 + 24) = *(_WORD *)a2;
  v10 = *((_WORD *)a2 + 1);
  *((_WORD *)v8 + 25) = v10;
  if ( v10 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v8,
                a2[1],
                (unsigned int)*(unsigned __int16 *)a2 + 2,
                (void **)v8 + 7) < 0 )
      goto LABEL_26;
  }
  else
  {
    *((_QWORD *)v8 + 7) = a2[1];
  }
  if ( gdwInAtomicOperation )
  {
    v7 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v7, gdwInAtomicOperation);
  EtwTraceBeginCallback(76LL);
  *((_QWORD *)v8 + 2) = 0LL;
  v13 = KeUserModeCallback(76LL, v8, *(unsigned int *)v8, &v21, &v20);
  EtwTraceEndCallback(76LL);
  EnterCrit(0LL, 1LL);
  if ( v13 >= 0 && v20 == 24 )
  {
    v14 = (__int64 *)v21;
    v15 = v21 + 8;
    if ( v21 + 8 < v21 || v15 > W32UserProbeAddress )
      v14 = (__int64 *)W32UserProbeAddress;
    v22 = *v14;
    LOBYTE(v15) = 2;
    v16 = HMValidateHandleNoRip(v22, v15, v11);
    goto LABEL_17;
  }
LABEL_26:
  v16 = 0LL;
LABEL_17:
  if ( v8 != (unsigned __int8 *)v24 && v8 != v25 )
  {
    v18 = (PVOID *)(v8 + 32);
    if ( *((_QWORD *)v8 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v18, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v23, (__int64)v18, v11, v12);
  }
  return v16;
}
