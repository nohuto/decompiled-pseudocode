/*
 * XREFs of ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C006B340
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     xxxSleepThread2 @ 0x1C006B230 (xxxSleepThread2.c)
 *     xxxInterSendMsgEx @ 0x1C006E0C0 (xxxInterSendMsgEx.c)
 * Callees:
 *     IsMulDestroyBrushInternalSupported @ 0x1C0008D50 (IsMulDestroyBrushInternalSupported.c)
 *     LogMDAQueueOp @ 0x1C00433CC (LogMDAQueueOp.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00465E4 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     zzzWakeInputIdle @ 0x1C006B920 (zzzWakeInputIdle.c)
 *     xxxReceiveMessage @ 0x1C006D6A0 (xxxReceiveMessage.c)
 *     xxxDoSysExpunge @ 0x1C00EBC3C (xxxDoSysExpunge.c)
 *     ClientDeliverUserApc @ 0x1C00FA764 (ClientDeliverUserApc.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ProcessDeviceChanges @ 0x1C01DFB10 (ProcessDeviceChanges.c)
 */

__int64 __fastcall xxxRealSleepThread(unsigned int a1, __int64 a2, int a3, int a4, enum SLEEP_STATUS *a5)
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
  void *v16; // rcx
  ULONG v17; // esi
  struct tagTERMINAL *v18; // rax
  struct _KEVENT *v19; // rcx
  __int64 v20; // rax
  __int64 CurrentProcessWin32Process; // rsi
  int WaitMode; // [rsp+20h] [rbp-C8h]
  int v25; // [rsp+44h] [rbp-A4h]
  __int16 v26; // [rsp+48h] [rbp-A0h]
  int v27; // [rsp+4Ch] [rbp-9Ch]
  int v28; // [rsp+60h] [rbp-88h] BYREF
  union _LARGE_INTEGER v29; // [rsp+68h] [rbp-80h] BYREF
  __int64 v30; // [rsp+78h] [rbp-70h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-60h] BYREF
  _BYTE v32[8]; // [rsp+98h] [rbp-50h] BYREF
  PVOID Object[3]; // [rsp+A0h] [rbp-48h] BYREF

  v27 = a4;
  v5 = a3;
  v6 = a1;
  v7 = a5;
  v8 = 0;
  v9 = 0;
  v10 = a1 & 0x8000;
  v25 = v10;
  v28 = 0;
  if ( !gfShellFrameHangResilient || !a5 )
    v7 = (enum SLEEP_STATUS *)&v28;
  *(_DWORD *)v7 = 0;
  if ( (a1 & 0x8000) != 0 )
    v6 = a1 & 0xFFFF7FFF;
  if ( (_DWORD)a2 )
  {
    v29.QuadPart = -10000LL * (int)a2;
    Timeout = &v29;
  }
  else
  {
    Timeout = 0LL;
  }
  v30 = gptiCurrent;
  v26 = *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 10LL);
LABEL_10:
  v12 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( (*(_WORD *)(v12 + 4) & (unsigned __int16)v6) != 0 || a4 && ((unsigned __int16)v6 & *(_WORD *)(v12 + 6)) != 0 )
  {
    v8 = 1;
  }
  else
  {
    if ( *(_DWORD *)v7 == 2 )
      goto LABEL_78;
    if ( !v10 && (*(_BYTE *)(v12 + 6) & 0x40) != 0 )
    {
      do
      {
        xxxReceiveMessage(gptiCurrent, a2);
        v13 = *(_QWORD *)(gptiCurrent + 408LL);
      }
      while ( (*(_BYTE *)(v13 + 6) & 0x40) != 0 );
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 4LL) |= *(_WORD *)(gptiCurrent + 760LL) & *(_WORD *)(v13 + 6);
      *(_WORD *)(gptiCurrent + 760LL) = 0;
    }
    v14 = *(_QWORD *)(gptiCurrent + 384LL);
    if ( *(_DWORD *)(v14 + 376) != gcSysExpunge )
    {
      *(_DWORD *)(v14 + 376) = gcSysExpunge;
      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 380LL) & gdwSysExpungeMask) != 0 )
        xxxDoSysExpunge(gptiCurrent);
    }
    v15 = 64;
    if ( v25 )
      v15 = 0;
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 10LL) = v6 | v15;
    KeClearEvent(*(PRKEVENT *)(gptiCurrent + 656LL));
    if ( v9 == 258 )
    {
      UserSetLastError(1460);
      *(_DWORD *)v7 = 1;
      goto LABEL_78;
    }
    if ( v9 == 192 )
    {
      ClientDeliverUserApc();
      goto LABEL_78;
    }
    if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 10LL) & *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 4LL)) != 0 )
      goto LABEL_74;
    if ( !v5 )
      goto LABEL_35;
    if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x400) == 0 || (int)CheckProcessForeground(gptiCurrent) >= 0 )
    {
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8LL) = 0LL;
      if ( gptiCurrent == gptiForeground
        && ((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x1000) != 0 )
      {
        xxxCallHook(0, 0, 0LL, 0xBu);
      }
      zzzWakeInputIdle(gptiCurrent);
LABEL_35:
      IsMulDestroyBrushInternalSupported();
      v16 = *(void **)(gptiCurrent + 656LL);
      Object[0] = v16;
      v17 = 1;
      if ( gptiCurrent == *((_QWORD *)&gTermIO + 2) && (v6 & 0x200) != 0 && !Timeout )
      {
        v16 = aDeviceTemplate[24] ? *(void **)&aDeviceTemplate[70] : *(void **)&aDeviceTemplate[20];
        Object[1] = v16;
        v17 = 2;
        if ( aDeviceTemplate[24] )
        {
          Object[2] = *(PVOID *)&aDeviceTemplate[80];
          v17 = 3;
        }
      }
      if ( gfShellFrameHangResilient )
      {
        v16 = *(void **)(gptiCurrent + 1224LL);
        if ( v16 )
        {
          if ( (v6 & 0xFFFF7DFF) != 0 )
            Object[v17++] = v16;
        }
      }
      while ( 1 )
      {
        UserSessionSwitchLeaveCrit(v16, a2);
        v9 = KeWaitForMultipleObjects(v17, Object, WaitAny, WrUserRequest, 1, 0, Timeout, 0LL);
        EnterCrit(1LL);
        v16 = *(void **)aDeviceTemplate;
        if ( v9 == 1 )
          break;
        if ( aDeviceTemplate[24] )
        {
          v18 = gTermIO;
          if ( gptiCurrent == *((_QWORD *)&gTermIO + 2) && v9 == 2 )
            goto LABEL_53;
        }
LABEL_61:
        if ( v9 != 1 )
        {
          if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x1000) != 0 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 544LL) + 24LL) )
            {
              EtwTraceSleepInputIdle(0LL, gptiCurrent);
              a2 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 544LL) + 24LL);
              v19 = *(struct _KEVENT **)(a2 + 32);
              if ( v19 == (struct _KEVENT *)-1LL )
              {
                *(_QWORD *)(a2 + 32) = 0LL;
                v5 = a3;
                v10 = v25;
                a4 = v27;
                goto LABEL_10;
              }
              if ( v19 )
              {
LABEL_67:
                KeClearEvent(v19);
                v5 = a3;
                v10 = v25;
                a4 = v27;
                goto LABEL_10;
              }
            }
          }
          else
          {
            v20 = *(_QWORD *)(gptiCurrent + 384LL);
            if ( !*(_QWORD *)(v20 + 304) )
              *(_QWORD *)(v20 + 304) = gptiCurrent;
            if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 304LL) == gptiCurrent )
            {
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
              EtwTraceSleepInputIdle(0LL, gptiCurrent);
              v19 = *(struct _KEVENT **)(CurrentProcessWin32Process + 16);
              if ( v19 == (struct _KEVENT *)-1LL )
              {
                *(_QWORD *)(CurrentProcessWin32Process + 16) = 0LL;
              }
              else if ( v19 )
              {
                goto LABEL_67;
              }
            }
          }
          v5 = a3;
LABEL_74:
          v10 = v25;
          a4 = v27;
          goto LABEL_10;
        }
      }
      v18 = gTermIO;
LABEL_53:
      if ( gptiCurrent == *((_QWORD *)v18 + 2) )
      {
        if ( v9 == 1 )
        {
          if ( aDeviceTemplate[24] )
          {
            RtlInitUnicodeString(&DestinationString, 0LL);
            LOBYTE(WaitMode) = 0;
            aDeviceTemplate[74] = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                                    *(_QWORD *)&aDeviceTemplate[26],
                                    &DestinationString,
                                    0LL,
                                    ghRemoteMouseChannel,
                                    WaitMode,
                                    v32);
            KeSetEvent(*(PRKEVENT *)&aDeviceTemplate[72], 1, 0);
          }
          else
          {
            ProcessDeviceChanges(0LL);
          }
        }
        else
        {
          RIMDirectPnpRemoveDevicesOfType(*(_QWORD *)&aDeviceTemplate[26], 0LL);
          KeSetEvent(*(PRKEVENT *)&aDeviceTemplate[86], 1, 0);
        }
      }
      else if ( gfShellFrameHangResilient )
      {
        *(_DWORD *)v7 = 2;
        LogMDAQueueOp(0xC6u, 0LL, 0LL, 0);
        v29.QuadPart = -100000LL;
      }
      goto LABEL_61;
    }
  }
LABEL_78:
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 10LL) = v26;
  if ( v8 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 408LL) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return v8;
}
