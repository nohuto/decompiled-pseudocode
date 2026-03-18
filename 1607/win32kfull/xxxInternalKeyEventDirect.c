/*
 * XREFs of xxxInternalKeyEventDirect @ 0x1C00A21FC
 * Callers:
 *     xxxSendInput @ 0x1C009EC1C (xxxSendInput.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00A24AC (xxxProcessKeyEvent.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00A9964 (IsForegroundShellFrameQueueAccessible.c)
 *     VKFromVSC @ 0x1C00E8DD4 (VKFromVSC.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalKeyEventDirect(unsigned __int8 a1, __int16 a2, char a3, int a4, __int64 a5)
{
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int16 v14; // cx
  __int64 v15; // rdx
  _WORD *v16; // rax
  __int16 v18; // cx
  __int16 v19; // ax
  __int64 CurrentProcess; // rax
  __int64 v21; // rcx
  ULONG v22; // eax
  __int16 v23; // [rsp+30h] [rbp-30h] BYREF
  __int16 v24; // [rsp+32h] [rbp-2Eh]
  int v25; // [rsp+34h] [rbp-2Ch]
  __int64 v26; // [rsp+38h] [rbp-28h]
  __int16 v27; // [rsp+40h] [rbp-20h]
  __int16 v28; // [rsp+42h] [rbp-1Eh]
  __int16 v29; // [rsp+44h] [rbp-1Ch]
  __int16 v30; // [rsp+46h] [rbp-1Ah]
  int v31; // [rsp+48h] [rbp-18h]

  if ( *(_QWORD *)(gptiCurrent + 408LL) == grpdeskRitInput
    && (PsGetCurrentProcess(grpdeskRitInput) == gpepCSRSS
     || RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 776LL), 0x20u)) )
  {
    v9 = gpqForeground;
    if ( gpqForeground )
    {
      v10 = *(_QWORD *)(gptiCurrent + 376LL);
      v9 = *(_QWORD *)(gpqForeground + 380LL);
      v11 = *(_QWORD *)(v10 + 824);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v11 <= (unsigned int)v9 )
        {
          if ( (_DWORD)v11 != (_DWORD)v9
            || (v12 = HIDWORD(v11), v9 >>= 32, (_DWORD)v12 != (_DWORD)v9) && (_DWORD)v9 != -1 && (_DWORD)v12 != -1 )
          {
            if ( *(int *)(v10 + 12) >= 0 && !(unsigned int)IsForegroundShellFrameQueueAccessible(gptiCurrent) )
            {
              EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
              return 1LL;
            }
          }
        }
      }
    }
    if ( (a3 & 8) != 0
      || (unsigned __int8)(a1 + 61) > 0x17u && (unsigned __int8)(a1 + 120) > 7u
      || (CurrentProcess = PsGetCurrentProcess(v9), !(unsigned int)IsProcessDwm(CurrentProcess))
      || gpqForeground
      && (v21 = *(_QWORD *)(gpqForeground + 80LL)) != 0
      && (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 376LL))
      && (*(_DWORD *)(gpqForeground + 340LL) & 0x2000000) != 0 )
    {
      LOBYTE(v23) = a2;
      v26 = 0LL;
      v13 = 256LL;
      if ( (a3 & 8) != 0 )
      {
        LOBYTE(v13) = (a3 & 1) != 0 ? 0xE0 : 0;
        a1 = VKFromVSC(&v23, v13);
        v14 = a1;
        v24 = a1;
      }
      else
      {
        switch ( a1 )
        {
          case 0x10u:
            a1 = ((a2 & 0x7F) == 54) - 96;
            break;
          case 0x11u:
            a1 = a3 & 1 | 0xA2;
            break;
          case 0x12u:
            a1 = a3 & 1 | 0xA4;
            break;
        }
        v14 = a1 | 0x2000;
        v24 = v14;
        if ( a1 == 0xA1 )
        {
          v14 |= 0x100u;
          v24 = v14;
        }
      }
      if ( (a3 & 2) != 0 )
      {
        v14 |= 0x8000u;
        v24 = v14;
      }
      if ( (a3 & 4) != 0 )
      {
        v19 = 4096;
        v23 = a2;
      }
      else
      {
        if ( (a3 & 1) != 0 )
        {
          v18 = v14 | 0x100;
          goto LABEL_33;
        }
        if ( (unsigned __int8)(a1 - 96) > 9u && a1 != 110 )
        {
          v15 = 0LL;
          v16 = &ausNumPadCvt;
          while ( a1 != *(_BYTE *)v16 )
          {
            ++v15;
            v16 = (_WORD *)((char *)&ausNumPadCvt + 2 * v15);
            if ( !*v16 )
              goto LABEL_28;
          }
        }
        v19 = 2048;
      }
      v18 = v19 | v14;
LABEL_33:
      v24 = v18;
LABEL_28:
      v28 = (unsigned __int8)a2;
      v29 = (a3 & 2) != 0;
      if ( (a3 & 1) != 0 )
        v29 = ((a3 & 2) != 0) | 2;
      v27 = -2;
      v30 = 0;
      v31 = a5;
      gppiInputProvider = *(_QWORD *)(gptiCurrent + 376LL);
      v25 = a4;
      xxxProcessKeyEvent((struct tagKE *)&v23, 0LL);
      return 1LL;
    }
  }
  else
  {
    v22 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v22);
  }
  return 0LL;
}
