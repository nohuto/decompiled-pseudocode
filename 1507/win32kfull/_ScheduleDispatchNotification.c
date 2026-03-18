/*
 * XREFs of _ScheduleDispatchNotification @ 0x1C00D4620
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     StoreQMessage @ 0x1C00707A0 (StoreQMessage.c)
 *     ProcessSuspendedEventMessage @ 0x1C00E7B3C (ProcessSuspendedEventMessage.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall ScheduleDispatchNotification(LARGE_INTEGER *a1)
{
  LARGE_INTEGER v1; // rbx
  __int64 v3; // rdx
  unsigned __int64 CurrentProcessWin32Process; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  HANDLE ThreadId; // rax
  int v14; // ecx
  unsigned int v15; // ebp
  LARGE_INTEGER *v16; // rax
  LARGE_INTEGER *v17; // rdi
  LARGE_INTEGER **v18; // rax
  LARGE_INTEGER v19; // r9
  LONGLONG v20; // rax
  __int64 v21; // rcx
  int v22; // edx
  __int128 v23; // [rsp+70h] [rbp-48h]
  __int128 SystemInformation; // [rsp+80h] [rbp-38h] BYREF
  int v25; // [rsp+90h] [rbp-28h]

  v1 = a1[2];
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( *(_QWORD *)(v1.QuadPart + 384) != CurrentProcessWin32Process )
  {
    UserSetLastError(5);
    return 0LL;
  }
  if ( v1.QuadPart != gptiCurrent )
  {
    v3 = gbEnforceUIPI;
    CurrentProcessWin32Process = *(_QWORD *)(CurrentProcessWin32Process + 832);
    v6 = *(_QWORD *)(*(_QWORD *)(v1.QuadPart + 392) + 372LL);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)CurrentProcessWin32Process <= (unsigned int)v6 )
      {
        if ( (_DWORD)CurrentProcessWin32Process != (_DWORD)v6 )
          return 1LL;
        CurrentProcessWin32Process >>= 32;
        v7 = HIDWORD(v6);
        if ( (_DWORD)CurrentProcessWin32Process != (_DWORD)v7 )
        {
          v3 = 0xFFFFFFFFLL;
          if ( (_DWORD)CurrentProcessWin32Process != -1 && (_DWORD)v7 != -1 )
            return 1LL;
        }
      }
    }
  }
  v8 = *(_QWORD *)(v1.QuadPart + 392);
  if ( (*(_DWORD *)(v1.QuadPart + 448) & 1) == 0 )
  {
    v9 = *(_DWORD *)(v1.QuadPart + 1080);
    if ( (v9 & 0x2000) != 0
      && (v9 & 0x4000) == 0
      && (PsGetCurrentProcess(CurrentProcessWin32Process, v3) == gpepCSRSS
       || (unsigned int)IsDwmInputThread(gpepCSRSS, v10, v11, v12)) )
    {
      *(_QWORD *)&v23 = PsGetThreadProcessId(*(PETHREAD *)v1.QuadPart);
      ThreadId = PsGetThreadId(*(PETHREAD *)v1.QuadPart);
      v25 = 13;
      *((_QWORD *)&v23 + 1) = ThreadId;
      SystemInformation = v23;
      if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
        *(_DWORD *)(v1.QuadPart + 1080) |= 0x4000u;
    }
    if ( (*(_DWORD *)(v1.QuadPart + 1080) & 0x20) == 0
      || (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ProcessSuspendedEventMessage)(
                         (LARGE_INTEGER)v1.QuadPart,
                         9LL,
                         a1) )
    {
      if ( *(_DWORD *)(v8 + 16) < gUserPostMessageLimit )
      {
        v16 = (LARGE_INTEGER *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
        v17 = v16;
        if ( v16 )
        {
          memset(v16, 0, 0x90uLL);
          v15 = 2;
          if ( *(_DWORD *)(v8 + 20) == 2 )
            v17[11].HighPart |= 8u;
          else
            v17[11].HighPart |= 4u;
          v18 = *(LARGE_INTEGER ***)(v8 + 8);
          if ( v18 )
          {
            *v18 = v17;
            v17[1] = *(LARGE_INTEGER *)(v8 + 8);
          }
          else
          {
            *(_QWORD *)v8 = v17;
          }
          ++*(_DWORD *)(v8 + 16);
          *(_QWORD *)(v8 + 8) = v17;
          v19 = a1[2];
          v20 = *(_QWORD *)(gpsi + 3976LL);
          if ( v19.QuadPart )
          {
            v21 = *(_QWORD *)(v19.QuadPart + 416);
            if ( v21 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v21 + 8) + 260LL) & 1) != 0 )
              {
                v22 = *(_DWORD *)(*(_QWORD *)(v19.QuadPart + 384) + 776LL);
                if ( (v22 & 0x2000) != 0 )
                {
                  v20 = *(_QWORD *)(gpsi + 3960LL);
                }
                else if ( (v22 & 0x6000) == 0 )
                {
                  v20 = *(_QWORD *)(gpsi + 3952LL);
                }
              }
            }
          }
          StoreQMessage(v17, a1, 0x60u, 0LL, 0LL, 0, 0, 9u, 0LL, 0, 0LL, v20, 0LL, 0LL);
          v17[12] = v1;
          if ( (*(_DWORD *)(v1.QuadPart + 448) & 1) == 0 )
          {
            *(_WORD *)(*(_QWORD *)(v1.QuadPart + 408) + 6LL) |= 0x2040u;
            *(_WORD *)(*(_QWORD *)(v1.QuadPart + 408) + 4LL) |= 0x2040u;
            if ( (*(_WORD *)(*(_QWORD *)(v1.QuadPart + 408) + 10LL) & 0x2040) != 0 )
              KeSetEvent(*(PRKEVENT *)(v1.QuadPart + 656), 2, 0);
          }
          return v15;
        }
        v14 = 8;
      }
      else
      {
        v14 = 1816;
      }
      UserSetLastError(v14);
    }
  }
  return 0;
}
