/*
 * XREFs of ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14017AF60
 * Callers:
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140032BC8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     DesktopAlloc @ 0x14012D510 (DesktopAlloc.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x14017AE94 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     CreateInputContext @ 0x1401DE0D0 (CreateInputContext.c)
 */

struct tagWND *__fastcall xxxCreateDefaultImeWindow(struct tagWND *a1, __int16 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // r9
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rbx
  PVOID *v13; // r15
  __int64 v14; // rax
  _WORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 UserSessionState; // rax
  struct tagWND *Window; // rbx
  HANDLE v29; // rbx
  int v30; // [rsp+98h] [rbp-90h] BYREF
  int v31; // [rsp+9Ch] [rbp-8Ch]
  __int64 v32; // [rsp+A0h] [rbp-88h]
  __int64 v33; // [rsp+A8h] [rbp-80h]
  __int64 v34; // [rsp+B0h] [rbp-78h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v36[3]; // [rsp+D0h] [rbp-58h] BYREF
  _BYTE v37[24]; // [rsp+E8h] [rbp-40h] BYREF
  _DWORD **Address; // [rsp+148h] [rbp+20h]
  _DWORD *Addressa; // [rsp+148h] [rbp+20h]

  v31 = 0;
  v8 = PtiCurrent((__int64)a1);
  if ( !*((_QWORD *)v8 + 103) )
  {
    v29 = *(HANDLE *)(W32GetUserSessionState(v7, v6) + 63536);
    if ( PsGetThreadProcessId(*(PETHREAD *)v8) == v29 )
      CreateInputContext(0LL);
  }
  if ( !*((_QWORD *)v8 + 103) )
    return 0LL;
  if ( a2 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19904) + 898LL) )
    return 0LL;
  v10 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 10LL) & 1) != 0 )
    return 0LL;
  v11 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v11 + 31) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 16LL) + 456LL) != *((_QWORD *)v8 + 57)
    && (*(_DWORD *)(v11 + 28) & 0x10000000) == 0 )
  {
    return 0LL;
  }
  v12 = *((_QWORD *)v8 + 61);
  v13 = (PVOID *)(v12 + 136);
  v34 = v12 + 136;
  if ( !*(_QWORD *)(v12 + 136) )
    return 0LL;
  v14 = DesktopAlloc(v12, 24LL, 9LL, v9);
  v15 = (_WORD *)v14;
  v33 = v14;
  if ( !v14 )
    return 0LL;
  *(_OWORD *)v14 = xmmword_140361EF8;
  *(_QWORD *)(v14 + 16) = 0x45004D0049LL;
  v32 = v14;
  v16 = -1LL;
  do
    ++v16;
  while ( v15[v16] );
  v30 = 2 * v16;
  v31 = (2 * v16 + 2) & 0x7FFFFFFF;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v37, v12);
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
  if ( !CurrentProcessWin32Process
    || (-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process) == 0 )
  {
    goto LABEL_25;
  }
  v19 = PsGetCurrentProcessWin32Process(-*(_QWORD *)CurrentProcessWin32Process);
  v20 = v19;
  if ( v19 )
    v20 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)v19 >> 64) & v19;
  if ( !(unsigned int)IsImmersiveAppRestricted(v20) )
LABEL_25:
    v10 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v36, 0);
  v23 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 19904);
  v24 = *(unsigned __int16 *)(v23 + 898);
  UserSessionState = W32GetUserSessionState(v23, v25);
  Window = (struct tagWND *)xxxCreateWindowEx(
                              0,
                              *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19904) + 898LL),
                              v24,
                              (int)&v30,
                              -2013265920,
                              0,
                              0,
                              0,
                              0,
                              a1,
                              (__int64)v36,
                              a3,
                              0LL,
                              0,
                              1024,
                              v10,
                              0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v36);
  if ( Window )
  {
    Address = (_DWORD **)unsafe_cast_fnid_or_class_to_PIMEWND(Window);
    if ( Address )
      Addressa = *Address;
    else
      Addressa = 0LL;
    if ( Addressa )
    {
      ProbeForWrite(Addressa, 0x38uLL, 4u);
      Addressa[11] |= 8u;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40
        && *(struct tagTHREADINFO **)(*((_QWORD *)a1 + 13) + 16LL) != v8 )
      {
        Addressa[11] |= 0x10u;
      }
    }
    else
    {
      xxxDestroyWindow(Window);
      Window = 0LL;
    }
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  RtlFreeHeap(*v13, 0, v15);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v37);
  return Window;
}
