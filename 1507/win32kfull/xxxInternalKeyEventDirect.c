/*
 * XREFs of xxxInternalKeyEventDirect @ 0x1C0048038
 * Callers:
 *     xxxSendInput @ 0x1C0047E98 (xxxSendInput.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0041278 (IsForegroundShellFrameQueueAccessible.c)
 *     xxxProcessKeyEvent @ 0x1C00482A8 (xxxProcessKeyEvent.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     VKFromVSC @ 0x1C022A3E0 (VKFromVSC.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalKeyEventDirect(unsigned __int8 a1, __int16 a2, char a3, int a4, __int64 a5)
{
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int16 v15; // cx
  __int64 v16; // rdx
  _WORD *v17; // rax
  __int16 v19; // ax
  __int16 v20; // cx
  ULONG v21; // eax
  __int16 v22; // [rsp+30h] [rbp-30h] BYREF
  __int16 v23; // [rsp+32h] [rbp-2Eh]
  int v24; // [rsp+34h] [rbp-2Ch]
  __int64 v25; // [rsp+38h] [rbp-28h]
  __int16 v26; // [rsp+40h] [rbp-20h]
  __int16 v27; // [rsp+42h] [rbp-1Eh]
  __int16 v28; // [rsp+44h] [rbp-1Ch]
  __int16 v29; // [rsp+46h] [rbp-1Ah]
  int v30; // [rsp+48h] [rbp-18h]

  if ( *(_QWORD *)(gptiCurrent + 416LL) == grpdeskRitInput
    && (PsGetCurrentProcess() == gpepCSRSS || RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 776LL), 0x20u)) )
  {
    if ( gpqForeground )
    {
      v9 = *(_QWORD *)(gptiCurrent + 384LL);
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
    LOBYTE(v22) = a2;
    v14 = 256LL;
    v25 = 0LL;
    if ( (a3 & 8) != 0 )
    {
      LOBYTE(v14) = (a3 & 1) != 0 ? 0xE0 : 0;
      a1 = VKFromVSC(&v22, v14);
      v15 = a1;
      v23 = a1;
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
      v15 = a1 | 0x2000;
      v23 = v15;
      if ( a1 == 0xA1 )
      {
        v15 |= 0x100u;
        v23 = v15;
      }
    }
    if ( (a3 & 2) != 0 )
    {
      v15 |= 0x8000u;
      v23 = v15;
    }
    if ( (a3 & 4) != 0 )
    {
      v19 = 4096;
      v22 = a2;
    }
    else
    {
      if ( (a3 & 1) != 0 )
      {
        v20 = v15 | 0x100;
LABEL_32:
        v23 = v20;
LABEL_25:
        v27 = (unsigned __int8)a2;
        v28 = (a3 & 2) != 0;
        if ( (a3 & 1) != 0 )
          v28 = ((a3 & 2) != 0) | 2;
        v26 = -2;
        v29 = 0;
        v30 = a5;
        gppiInputProvider = *(_QWORD *)(gptiCurrent + 384LL);
        v24 = a4;
        xxxProcessKeyEvent((struct tagKE *)&v22, 0LL);
        return 1LL;
      }
      if ( (unsigned __int8)(a1 - 96) > 9u && a1 != 110 )
      {
        v16 = 0LL;
        v17 = &ausNumPadCvt;
        while ( a1 != *(_BYTE *)v17 )
        {
          ++v16;
          v17 = (_WORD *)((char *)&ausNumPadCvt + 2 * v16);
          if ( !*v17 )
            goto LABEL_25;
        }
      }
      v19 = 2048;
    }
    v20 = v19 | v15;
    goto LABEL_32;
  }
  v21 = RtlNtStatusToDosError(-1073741790);
  UserSetLastError(v21);
  return 0LL;
}
