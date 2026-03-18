/*
 * XREFs of ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0082AD0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     xxxSleepThread2 @ 0x1C0082990 (xxxSleepThread2.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 * Callees:
 *     IsMulDestroyBrushInternalSupported @ 0x1C000E5F0 (IsMulDestroyBrushInternalSupported.c)
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 *     zzzWakeInputIdle @ 0x1C0083110 (zzzWakeInputIdle.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00A8094 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     xxxDoSysExpunge @ 0x1C0109A1C (xxxDoSysExpunge.c)
 *     ClientDeliverUserApc @ 0x1C0125DA4 (ClientDeliverUserApc.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxRealSleepThread(unsigned int a1, int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // esi
  unsigned int v6; // r12d
  enum SLEEP_STATUS *v7; // r15
  unsigned int v8; // r14d
  NTSTATUS v9; // edi
  int v10; // r8d
  union _LARGE_INTEGER *Timeout; // r13
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int16 v15; // dx
  struct tagTERMINAL *v16; // rcx
  ULONG v17; // esi
  struct _KWAIT_BLOCK *WaitBlockArray; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  struct _KEVENT *v21; // rcx
  __int64 v22; // rax
  __int64 CurrentProcessWin32Process; // rsi
  int WaitMode; // [rsp+20h] [rbp-E8h]
  int v27; // [rsp+44h] [rbp-C4h]
  __int16 v28; // [rsp+48h] [rbp-C0h]
  int v29; // [rsp+4Ch] [rbp-BCh]
  PKWAIT_BLOCK v30; // [rsp+58h] [rbp-B0h]
  _DWORD v31[6]; // [rsp+60h] [rbp-A8h] BYREF
  union _LARGE_INTEGER v32; // [rsp+78h] [rbp-90h] BYREF
  __int64 v33; // [rsp+88h] [rbp-80h]
  _BYTE v34[8]; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  PVOID Object[4]; // [rsp+B0h] [rbp-58h] BYREF

  v29 = a4;
  v5 = a3;
  v6 = a1;
  v7 = a5;
  v8 = 0;
  v9 = 0;
  v10 = a1 & 0x8000;
  v27 = v10;
  v31[4] = 0;
  v30 = 0LL;
  v31[0] = 0;
  if ( !gfShellFrameHangResilient || !a5 )
    v7 = (enum SLEEP_STATUS *)v31;
  *(_DWORD *)v7 = 0;
  if ( (a1 & 0x8000) != 0 )
    v6 = a1 & 0xFFFF7FFF;
  if ( a2 )
  {
    v32.QuadPart = -10000LL * a2;
    Timeout = &v32;
  }
  else
  {
    Timeout = 0LL;
  }
  v33 = gptiCurrent;
  v28 = *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL);
  while ( 1 )
  {
    v12 = *(_QWORD *)(gptiCurrent + 400LL);
    if ( (*(_WORD *)(v12 + 4) & (unsigned __int16)v6) != 0 || a4 && ((unsigned __int16)v6 & *(_WORD *)(v12 + 6)) != 0 )
      break;
    if ( *(_DWORD *)v7 == 2 )
      goto LABEL_77;
    if ( !v10 && (*(_BYTE *)(v12 + 6) & 0x40) != 0 )
    {
      do
      {
        xxxReceiveMessage(gptiCurrent);
        v13 = *(_QWORD *)(gptiCurrent + 400LL);
      }
      while ( (*(_BYTE *)(v13 + 6) & 0x40) != 0 );
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 4LL) |= *(_WORD *)(gptiCurrent + 760LL) & *(_WORD *)(v13 + 6);
      *(_WORD *)(gptiCurrent + 760LL) = 0;
    }
    v14 = *(_QWORD *)(gptiCurrent + 376LL);
    if ( *(_DWORD *)(v14 + 368) != gcSysExpunge )
    {
      *(_DWORD *)(v14 + 368) = gcSysExpunge;
      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 372LL) & gdwSysExpungeMask) != 0 )
        xxxDoSysExpunge(gptiCurrent);
    }
    v15 = 64;
    if ( v27 )
      v15 = 0;
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = v6 | v15;
    KeClearEvent(*(PRKEVENT *)(gptiCurrent + 648LL));
    if ( v9 == 258 )
    {
      UserSetLastError(1460LL);
      *(_DWORD *)v7 = 1;
      goto LABEL_77;
    }
    if ( v9 == 192 )
    {
      ClientDeliverUserApc();
      goto LABEL_77;
    }
    if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) & *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 4LL)) != 0 )
    {
LABEL_73:
      v10 = v27;
      a4 = v29;
    }
    else
    {
      if ( v5 )
      {
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x400) != 0 && (int)CheckProcessForeground(gptiCurrent) < 0 )
          goto LABEL_77;
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) = 0LL;
        if ( gptiCurrent == gptiForeground
          && ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x1000) != 0 )
        {
          xxxCallHook(0LL, 0LL, 0LL, 11LL);
        }
        zzzWakeInputIdle(gptiCurrent);
      }
      IsMulDestroyBrushInternalSupported();
      v16 = *(struct tagTERMINAL **)(gptiCurrent + 648LL);
      Object[0] = v16;
      v17 = 1;
      if ( gptiCurrent == *((_QWORD *)&gTermIO + 2) && (v6 & 0x200) != 0 && !Timeout )
      {
        v16 = (struct tagTERMINAL *)aDeviceTemplate;
        Object[1] = *((PVOID *)&aDeviceTemplate + 34);
        Object[2] = *((PVOID *)&aDeviceTemplate + 39);
        Object[3] = *((PVOID *)&aDeviceTemplate + 51);
        v17 = 4;
        WaitBlockArray = gpDTIOMouseEventWaitObjectArray;
        v30 = gpDTIOMouseEventWaitObjectArray;
      }
      else
      {
        WaitBlockArray = v30;
      }
      if ( gfShellFrameHangResilient )
      {
        v16 = *(struct tagTERMINAL **)(gptiCurrent + 1240LL);
        if ( v16 )
        {
          if ( (v6 & 0xFFFF7DFF) != 0 )
            Object[v17++] = v16;
        }
      }
      while ( 1 )
      {
        if ( gdwInAtomicOperation )
        {
          v16 = (struct tagTERMINAL *)gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v16, gdwInAtomicOperation);
        v9 = KeWaitForMultipleObjects(v17, Object, WaitAny, WrUserRequest, 1, 0, Timeout, WaitBlockArray);
        EnterCrit(0LL, 1LL);
        v16 = gTermIO;
        if ( v9 == 1 || gptiCurrent == *((_QWORD *)&gTermIO + 2) && (unsigned int)(v9 - 2) <= 1 )
        {
          if ( gptiCurrent == *((_QWORD *)&gTermIO + 2) )
          {
            switch ( v9 )
            {
              case 1:
                RtlInitUnicodeString(&DestinationString, 0LL);
                LOBYTE(WaitMode) = 0;
                *((_DWORD *)&aDeviceTemplate + 72) = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                                                       *((_QWORD *)&aDeviceTemplate + 12),
                                                       &DestinationString,
                                                       0LL,
                                                       ghRemoteMouseChannel,
                                                       WaitMode,
                                                       v34);
                KeSetEvent(*((PRKEVENT *)&aDeviceTemplate + 35), 1, 0);
                break;
              case 2:
                RIMDirectPnpRemoveDevicesOfType(*((_QWORD *)&aDeviceTemplate + 12), 0LL);
                KeSetEvent(*((PRKEVENT *)&aDeviceTemplate + 42), 1, 0);
                break;
              case 3:
                RIMDirectStartDeviceClassNotifications(*((_QWORD *)&aDeviceTemplate + 12), gpWin32kDriverObject);
                KeSetEvent(*((PRKEVENT *)&aDeviceTemplate + 54), 1, 0);
                break;
            }
          }
          else if ( gfShellFrameHangResilient )
          {
            *(_DWORD *)v7 = 2;
            v32.QuadPart = -100000LL;
          }
        }
        if ( v9 != 1 )
          break;
        WaitBlockArray = v30;
      }
      if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x1000) != 0 )
      {
        if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL) )
          goto LABEL_72;
        EtwTraceSleepInputIdle(0LL, gptiCurrent);
        v20 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL);
        v21 = *(struct _KEVENT **)(v20 + 32);
        if ( v21 != (struct _KEVENT *)-1LL )
        {
          if ( v21 )
            goto LABEL_66;
          goto LABEL_72;
        }
        *(_QWORD *)(v20 + 32) = 0LL;
        v5 = a3;
        v10 = v27;
        a4 = v29;
      }
      else
      {
        v22 = *(_QWORD *)(gptiCurrent + 376LL);
        if ( !*(_QWORD *)(v22 + 296) )
          *(_QWORD *)(v22 + 296) = gptiCurrent;
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 296LL) != gptiCurrent )
          goto LABEL_72;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16, v19);
        EtwTraceSleepInputIdle(0LL, gptiCurrent);
        v21 = *(struct _KEVENT **)(CurrentProcessWin32Process + 16);
        if ( v21 == (struct _KEVENT *)-1LL )
        {
          *(_QWORD *)(CurrentProcessWin32Process + 16) = 0LL;
LABEL_72:
          v5 = a3;
          goto LABEL_73;
        }
        if ( !v21 )
          goto LABEL_72;
LABEL_66:
        KeClearEvent(v21);
        v5 = a3;
        v10 = v27;
        a4 = v29;
      }
    }
  }
  v8 = 1;
LABEL_77:
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = v28;
  if ( v8 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return v8;
}
