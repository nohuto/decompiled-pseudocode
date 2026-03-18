/*
 * XREFs of xxxClientLoadImage @ 0x1C0090238
 * Callers:
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C008EFCC (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C008F1E4 (xxxUpdateSystemCursorFromRegistry.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C008F454 (xxxSetMonitorIcoCurIndex.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01D3468 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01D34E4 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxClientLoadImage(char **a1, __int64 a2, unsigned __int16 a3, int a4, int a5, int a6)
{
  unsigned __int16 v9; // ax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned __int8 *v12; // rdi
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *v18; // rbx
  __int64 v19; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-2D8h] BYREF
  int v22; // [rsp+38h] [rbp-2D0h] BYREF
  int v23; // [rsp+40h] [rbp-2C8h]
  void *v24; // [rsp+48h] [rbp-2C0h]
  _QWORD v25[3]; // [rsp+50h] [rbp-2B8h] BYREF
  _BYTE v26[24]; // [rsp+68h] [rbp-2A0h] BYREF
  _DWORD v27[24]; // [rsp+80h] [rbp-288h] BYREF
  unsigned __int8 v28[512]; // [rsp+E0h] [rbp-228h] BYREF

  v9 = *((_WORD *)a1 + 1);
  if ( v9 )
  {
    v10 = 1;
    v11 = v9;
  }
  else
  {
    v11 = 0;
    v10 = 0;
  }
  v23 = 0;
  v24 = 0LL;
  if ( v10 )
  {
    v12 = AllocCallbackMessage(96, v10, v11, v28, 1, 0x200uLL);
    RegionSize = (ULONG_PTR)v12;
    if ( !v12 )
      return 0LL;
  }
  else
  {
    v12 = (unsigned __int8 *)v27;
    RegionSize = (ULONG_PTR)v27;
    memset(v27, 0, sizeof(v27));
    v27[0] = 96;
  }
  if ( v12 != (unsigned __int8 *)v27 && v12 != v28 )
    PushW32ThreadLock(v12, v26, Win32FreePool);
  *((_DWORD *)v12 + 10) = v23;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v12,
              (char *)v24,
              (unsigned int)(unsigned __int16)v23 + 2,
              (void **)v12 + 6) < 0 )
    goto LABEL_31;
  *((_WORD *)v12 + 28) = *(_WORD *)a1;
  v14 = *((_WORD *)a1 + 1);
  *((_WORD *)v12 + 29) = v14;
  if ( v14 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v12,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v12 + 8) < 0 )
      goto LABEL_31;
  }
  else
  {
    *((_QWORD *)v12 + 8) = a1[1];
  }
  *((_DWORD *)v12 + 18) = a3;
  *((_DWORD *)v12 + 19) = a4;
  *((_DWORD *)v12 + 20) = a5;
  *((_DWORD *)v12 + 21) = a6;
  *((_DWORD *)v12 + 22) = 0;
  if ( gdwInAtomicOperation )
  {
    v13 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v13, gdwInAtomicOperation);
  EtwTraceBeginCallback(74LL);
  *((_QWORD *)v12 + 2) = 0LL;
  v15 = KeUserModeCallback(74LL, v12, *(unsigned int *)v12, v25, &v22);
  EtwTraceEndCallback(74LL);
  EnterCrit(0LL, 1LL);
  if ( v15 >= 0 && v22 == 24 )
  {
    v18 = (__int64 *)v25[0];
    if ( (unsigned __int64)(v25[0] + 8LL) < v25[0] || (unsigned __int64)(v25[0] + 8LL) > W32UserProbeAddress )
      v18 = (__int64 *)W32UserProbeAddress;
    v19 = *v18;
    v25[1] = v19;
    if ( v19 )
    {
      LOBYTE(v16) = 3;
      v19 = HMValidateHandleNoRip(v19, v16, v17);
    }
    goto LABEL_19;
  }
LABEL_31:
  v19 = 0LL;
LABEL_19:
  if ( v12 != (unsigned __int8 *)v27 && v12 != v28 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v26);
  }
  return v19;
}
