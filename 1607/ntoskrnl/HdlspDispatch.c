/*
 * XREFs of HdlspDispatch @ 0x140722DE0
 * Callers:
 *     HeadlessDispatch @ 0x14013CB10 (HeadlessDispatch.c)
 *     HdlspKernelAddLogEntry @ 0x14072371C (HdlspKernelAddLogEntry.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     strcmp @ 0x14014ED30 (strcmp.c)
 *     sprintf_s @ 0x1401530AC (sprintf_s.c)
 *     InbvPortGetByte @ 0x14023DCE4 (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x14023DE9C (InbvPortPollOnly.c)
 *     HdlspAddLogEntry @ 0x140722ADC (HdlspAddLogEntry.c)
 *     HdlspBugCheckProcessing @ 0x140722CBC (HdlspBugCheckProcessing.c)
 *     HdlspEnableTerminal @ 0x14072338C (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x140723450 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140723978 (HdlspProcessDumpCommand.c)
 *     HdlspPutData @ 0x140723BA4 (HdlspPutData.c)
 *     HdlspPutString @ 0x140723C8C (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140723DEC (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x140723EA8 (HdlspSendBlueScreenInfo.c)
 *     HdlspSendStringAtBaud @ 0x140723F44 (HdlspSendStringAtBaud.c)
 *     HdlspSetBlueScreenInformation @ 0x140723F74 (HdlspSetBlueScreenInformation.c)
 */

__int64 __fastcall HdlspDispatch(signed int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  int *v8; // r14
  int v10; // r13d
  PKSPIN_LOCK v11; // rcx
  KIRQL v12; // al
  int v13; // edx
  bool v15; // di
  const char *v16; // r8
  int v17; // eax
  __int64 v18; // r9
  char *v19; // rcx
  unsigned int v20; // eax
  char Line; // al
  __int64 v22; // r8
  unsigned int v23; // edx
  int v24; // eax
  char DstBuf[80]; // [rsp+30h] [rbp-98h] BYREF

  v5 = 0;
  v8 = (int *)a2;
  v10 = 1228800;
  if ( (unsigned int)a1 <= 0x14 && _bittest(&v10, a1) )
    goto LABEL_12;
  v11 = HeadlessGlobals;
  if ( (HeadlessGlobals[6] & 2) != 0 )
  {
    v12 = -1;
  }
  else
  {
    v12 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
    v11 = HeadlessGlobals;
  }
  v13 = *((_DWORD *)v11 + 12);
  if ( (v13 & 0x40) == 0 )
  {
    a2 = v13 | 0x40u;
    *((_DWORD *)v11 + 12) = a2;
    if ( v12 == 0xFF )
      goto LABEL_13;
    KeReleaseSpinLock(v11, v12);
LABEL_12:
    v11 = HeadlessGlobals;
LABEL_13:
    if ( a1 <= 16 )
    {
      if ( a1 == 16 )
      {
        if ( a4 && a5 && *a5 >= 0x20uLL )
        {
          *(_DWORD *)a4 = 1;
          *(_BYTE *)(a4 + 8) = 1;
          *(_BYTE *)(a4 + 9) = (v11[6] & 8) != 0;
          *(_DWORD *)(a4 + 24) = *((_DWORD *)v11 + 13);
          v23 = *((_DWORD *)v11 + 12);
          v24 = (v23 >> 9) & 7;
          if ( v24 || (v23 & 8) != 0 )
          {
            *(_DWORD *)(a4 + 12) = v24;
            *(_QWORD *)(a4 + 16) = v11[8];
          }
          else
          {
            *(_DWORD *)(a4 + 12) = 0;
            *(_QWORD *)(a4 + 16) = 0LL;
          }
          *(_BYTE *)(a4 + 28) = *((_BYTE *)v11 + 84);
          goto LABEL_132;
        }
        goto LABEL_33;
      }
      if ( a1 > 11 )
      {
        if ( a1 == 12 )
        {
          if ( !a4 || !a5 || *a5 != 1LL )
            goto LABEL_33;
          if ( (v11[6] & 1) != 0 )
          {
            if ( InbvPortPollOnly(*((_DWORD *)v11 + 14), (unsigned int)(a1 - 12), a3, a4) )
            {
              InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), a4, v22);
              goto LABEL_47;
            }
            v11 = HeadlessGlobals;
          }
          goto LABEL_84;
        }
        if ( a1 != 13 )
        {
          if ( a1 == 14 )
          {
            *((_DWORD *)v11 + 12) = v11[6] & 0xFFFFFFBD | 2;
          }
          else if ( (v11[6] & 1) != 0 )
          {
            HdlspBugCheckProcessing();
          }
          return v5;
        }
        if ( !a4 || !a5 || *a5 < 2uLL )
          goto LABEL_33;
        if ( (v11[6] & 1) == 0 )
          goto LABEL_84;
        Line = HdlspGetLine((void *)(a4 + 1), *a5 - 1LL);
      }
      else
      {
        if ( a1 != 11 )
        {
          v15 = 1;
          if ( a1 != 1 )
          {
            if ( a1 != 2 )
            {
              if ( a1 != 3 )
              {
                if ( (unsigned int)(a1 - 4) > 6 )
                {
LABEL_29:
                  v5 = -1073741811;
                  goto LABEL_130;
                }
                if ( (v11[6] & 1) == 0 )
                {
LABEL_130:
                  if ( (unsigned int)a1 <= 0x14 && _bittest(&v10, a1) )
                    return v5;
                  goto LABEL_132;
                }
                switch ( a1 )
                {
                  case 4:
                    v19 = "\x1B[2J";
                    goto LABEL_43;
                  case 5:
                    v19 = "\x1B[0J";
                    goto LABEL_43;
                  case 6:
                    v19 = "\x1B[0K";
                    goto LABEL_43;
                  case 7:
                    v19 = "\x1B[0m";
                    goto LABEL_43;
                  case 8:
                    v19 = "\x1B[7m";
                    goto LABEL_43;
                  case 9:
                    if ( v8 && a3 == 8 )
                    {
                      v17 = *v8;
                      v16 = "\x1B[%d;%dm";
                      v18 = (unsigned int)v8[1];
                      goto LABEL_37;
                    }
                    break;
                  case 10:
                    if ( v8 && a3 == 8 )
                    {
                      v16 = "\x1B[%d;%dH";
                      v17 = *v8 + 1;
                      v18 = (unsigned int)(v8[1] + 1);
LABEL_37:
                      sprintf_s(DstBuf, 0x50uLL, v16, v18, v17);
                      v19 = DstBuf;
LABEL_43:
                      HdlspSendStringAtBaud(v19);
LABEL_129:
                      v11 = HeadlessGlobals;
                      goto LABEL_130;
                    }
                    break;
                  default:
                    goto LABEL_29;
                }
                goto LABEL_33;
              }
              if ( v8 )
              {
                if ( (v11[6] & 1) == 0 )
                  goto LABEL_132;
                HdlspPutString(v8);
LABEL_47:
                v11 = HeadlessGlobals;
                goto LABEL_132;
              }
LABEL_33:
              v5 = -1073741811;
LABEL_132:
              *((_DWORD *)v11 + 12) &= ~0x40u;
              return v5;
            }
            if ( !a4 || !a5 || *a5 != 1LL )
              goto LABEL_33;
            if ( (v11[6] & 1) != 0 )
            {
              if ( (unsigned __int8)HdlspGetLine(DstBuf, 0x50uLL) )
              {
                if ( strcmp(DstBuf, "reboot") )
                  v15 = strcmp(DstBuf, "shutdown") == 0;
                *(_BYTE *)a4 = v15;
              }
              goto LABEL_47;
            }
LABEL_84:
            *(_BYTE *)a4 = 0;
            goto LABEL_132;
          }
          if ( !v8 || a3 != 1 )
            goto LABEL_33;
          LOBYTE(v11) = *(_BYTE *)v8;
          v20 = HdlspEnableTerminal(v11);
LABEL_59:
          v5 = v20;
          goto LABEL_47;
        }
        if ( !a4 || !a5 || *a5 != 1LL )
          goto LABEL_33;
        if ( (v11[6] & 1) == 0 )
          goto LABEL_84;
        Line = InbvPortPollOnly(*((_DWORD *)v11 + 14), a2, a3, a4);
      }
      *(_BYTE *)a4 = Line;
      goto LABEL_47;
    }
    switch ( a1 )
    {
      case 17:
        if ( v8 )
        {
          HdlspAddLogEntry(v8);
          goto LABEL_129;
        }
        return (unsigned int)-1073741811;
      case 18:
        if ( v8 && a3 == 1 )
        {
          LOBYTE(v11) = *(_BYTE *)v8;
          HdlspProcessDumpCommand(v11);
          goto LABEL_47;
        }
        goto LABEL_33;
      case 19:
        if ( v8 )
        {
          v20 = HdlspSetBlueScreenInformation(v8, a3);
          goto LABEL_59;
        }
        return 3221225485LL;
      case 20:
        if ( (v11[6] & 3) == 3 )
        {
          if ( v8 && a3 == 4 )
          {
            HdlspSendBlueScreenInfo((unsigned int)*v8);
            HdlspSendStringAtBaud("\n\r!SAC>");
            return v5;
          }
          return 3221225485LL;
        }
        break;
      default:
        switch ( a1 )
        {
          case 21:
            if ( a4 && a5 && *a5 >= 0x10uLL )
            {
              *(_OWORD *)a4 = *(_OWORD *)((char *)v11 + 100);
              goto LABEL_132;
            }
            goto LABEL_33;
          case 22:
            if ( v8 && a3 )
            {
              if ( (v11[6] & 1) == 0 )
                goto LABEL_132;
              HdlspPutData(v8, a3);
              goto LABEL_47;
            }
            break;
          case 23:
            if ( v8 )
            {
              if ( (v11[6] & 1) == 0 )
                goto LABEL_132;
              HdlspPutWideString(v8);
              goto LABEL_47;
            }
            break;
          case 24:
            if ( a4 && a5 && *a5 >= 0xCuLL )
            {
              *(_QWORD *)a4 = *(PKSPIN_LOCK)((char *)v11 + 118);
              *(_DWORD *)(a4 + 8) = *(_DWORD *)((char *)v11 + 126);
              goto LABEL_132;
            }
            goto LABEL_33;
          default:
            goto LABEL_29;
        }
        goto LABEL_33;
    }
    return v5;
  }
  if ( v12 != 0xFF )
    KeReleaseSpinLock(v11, v12);
  return 3221225473LL;
}
