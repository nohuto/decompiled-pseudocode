/*
 * XREFs of xxxClientLoadMenu @ 0x1C00807C4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxLoadSysMenu @ 0x1C00CBF78 (xxxLoadSysMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02323CC (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011D254 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

unsigned __int8 *__fastcall xxxClientLoadMenu(__int64 a1, void **a2)
{
  unsigned __int16 v4; // ax
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  unsigned __int8 *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 *v10; // rdi
  unsigned __int16 v11; // ax
  int v12; // ebx
  __int64 *v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-298h] BYREF
  int v17; // [rsp+38h] [rbp-290h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-288h] BYREF
  __int64 v19; // [rsp+48h] [rbp-280h]
  _QWORD v20[3]; // [rsp+58h] [rbp-270h] BYREF
  _DWORD v21[16]; // [rsp+70h] [rbp-258h] BYREF
  unsigned __int8 v22[512]; // [rsp+B0h] [rbp-218h] BYREF

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
    result = (unsigned __int8 *)AllocCallbackMessage(0x40u, v5, v6, v22, 1, 0x200uLL);
    v10 = result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v10 = (unsigned __int8 *)v21;
    RegionSize = (ULONG_PTR)v21;
    memset(v21, 0, sizeof(v21));
    v21[0] = 64;
  }
  if ( v10 != (unsigned __int8 *)v21 && v10 != v22 )
    PushW32ThreadLock((__int64)v10, v20, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = a1;
  *((_WORD *)v10 + 24) = *(_WORD *)a2;
  v11 = *((_WORD *)a2 + 1);
  *((_WORD *)v10 + 25) = v11;
  if ( v11 )
  {
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v10, a2[1], *(unsigned __int16 *)a2 + 2, (void **)v10 + 7) < 0 )
      goto LABEL_21;
  }
  else
  {
    *((_QWORD *)v10 + 7) = a2[1];
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  EtwTraceBeginCallback(75LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v12 = KeUserModeCallback(75LL, v10, *(unsigned int *)v10, &v18, &v17);
  EtwTraceEndCallback(75LL);
  EnterCrit(0LL, 1LL);
  if ( v12 >= 0 && v17 == 24 )
  {
    v13 = (__int64 *)v18;
    v14 = v18 + 8;
    if ( v18 + 8 < v18 || v14 > W32UserProbeAddress )
      v13 = (__int64 *)W32UserProbeAddress;
    v19 = *v13;
    LOBYTE(v14) = 2;
    v15 = HMValidateHandleNoRip(v19, v14);
    goto LABEL_22;
  }
LABEL_21:
  v15 = 0LL;
LABEL_22:
  if ( v10 != (unsigned __int8 *)v21 && v10 != v22 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v20);
  }
  return (unsigned __int8 *)v15;
}
