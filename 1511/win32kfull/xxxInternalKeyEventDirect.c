/*
 * XREFs of xxxInternalKeyEventDirect @ 0x1C0082B5C
 * Callers:
 *     xxxSendInput @ 0x1C0082A04 (xxxSendInput.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0003224 (IsForegroundShellFrameQueueAccessible.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxProcessKeyEvent @ 0x1C00830F4 (xxxProcessKeyEvent.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C0114D38 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     VKFromVSC @ 0x1C022A6E0 (VKFromVSC.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalKeyEventDirect(unsigned __int8 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // r12d
  char v7; // si
  __int16 v8; // r15
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int16 v17; // cx
  __int16 v18; // ax
  __int16 v19; // cx
  __int64 v20; // rdx
  _WORD *v21; // rax
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

  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( *(_QWORD *)(gptiCurrent + 408LL) == grpdeskRitInput
    && (PsGetCurrentProcess(grpdeskRitInput, a2, a3, a4) == gpepCSRSS
     || RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 768LL), 0x20u)) )
  {
    if ( gpqForeground )
    {
      v9 = *(_QWORD *)(gptiCurrent + 376LL);
      v10 = *(_QWORD *)(gpqForeground + 372LL);
      v11 = *(_QWORD *)(v9 + 832);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v11 <= (unsigned int)v10 )
        {
          if ( (_DWORD)v11 != (_DWORD)v10
            || (v12 = HIDWORD(v11), v13 = HIDWORD(v10), (_DWORD)v12 != (_DWORD)v13)
            && (_DWORD)v12 != -1
            && (_DWORD)v13 != -1 )
          {
            if ( *(int *)(v9 + 12) >= 0 && !IsForegroundShellFrameQueueAccessible(gptiCurrent) )
            {
              EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 1);
              return 1LL;
            }
          }
        }
      }
    }
    if ( (v7 & 8) != 0
      || (unsigned __int8)(a1 + 61) > 0x17u && (unsigned __int8)(a1 + 120) > 7u
      || !(unsigned int)IsCurrentProcessDwm()
      || gpqForeground
      && (v15 = *(_QWORD *)(gpqForeground + 72LL)) != 0
      && (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 376LL))
      && (*(_DWORD *)(gpqForeground + 332LL) & 0x2000000) != 0 )
    {
      LOBYTE(v23) = v8;
      v26 = 0LL;
      v16 = 256LL;
      if ( (v7 & 8) != 0 )
      {
        LOBYTE(v16) = (v7 & 1) != 0 ? 0xE0 : 0;
        a1 = VKFromVSC(&v23, v16);
        v17 = a1;
        v24 = a1;
      }
      else
      {
        switch ( a1 )
        {
          case 0x10u:
            a1 = ((v8 & 0x7F) == 54) - 96;
            break;
          case 0x11u:
            a1 = v7 & 1 | 0xA2;
            break;
          case 0x12u:
            a1 = v7 & 1 | 0xA4;
            break;
        }
        v17 = a1 | 0x2000;
        v24 = v17;
        if ( a1 == 0xA1 )
        {
          v17 |= 0x100u;
          v24 = v17;
        }
      }
      if ( (v7 & 2) != 0 )
      {
        v17 |= 0x8000u;
        v24 = v17;
      }
      if ( (v7 & 4) != 0 )
      {
        v18 = 4096;
        v23 = v8;
      }
      else
      {
        if ( (v7 & 1) != 0 )
        {
          v19 = v17 | 0x100;
          goto LABEL_47;
        }
        if ( (unsigned __int8)(a1 - 96) > 9u && a1 != 110 )
        {
          v20 = 0LL;
          v21 = &ausNumPadCvt;
          while ( a1 != *(_BYTE *)v21 )
          {
            ++v20;
            v21 = (_WORD *)((char *)&ausNumPadCvt + 2 * v20);
            if ( !*v21 )
              goto LABEL_48;
          }
        }
        v18 = 2048;
      }
      v19 = v18 | v17;
LABEL_47:
      v24 = v19;
LABEL_48:
      v28 = (unsigned __int8)v8;
      v29 = (v7 & 2) != 0;
      if ( (v7 & 1) != 0 )
        v29 = ((v7 & 2) != 0) | 2;
      v27 = -2;
      v30 = 0;
      v31 = a5;
      gppiInputProvider = *(_QWORD *)(gptiCurrent + 376LL);
      v25 = v6;
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
