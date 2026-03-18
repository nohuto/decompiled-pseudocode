/*
 * XREFs of HdlspDispatch @ 0x140759E40
 * Callers:
 *     HeadlessDispatch @ 0x14015F390 (HeadlessDispatch.c)
 *     HdlspKernelAddLogEntry @ 0x14075A844 (HdlspKernelAddLogEntry.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     strcmp @ 0x1401733C0 (strcmp.c)
 *     sprintf_s @ 0x1401777DC (sprintf_s.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     InbvPortGetByte @ 0x140272248 (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x1402723FC (InbvPortPollOnly.c)
 *     HdlspAddLogEntry @ 0x140759ADC (HdlspAddLogEntry.c)
 *     HdlspBugCheckProcessing @ 0x140759D1C (HdlspBugCheckProcessing.c)
 *     HdlspEnableTerminal @ 0x14075A430 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x14075A4F4 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x14075AAA0 (HdlspProcessDumpCommand.c)
 *     HdlspPutData @ 0x14075AD88 (HdlspPutData.c)
 *     HdlspPutString @ 0x14075AE70 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x14075AFD0 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x14075B08C (HdlspSendBlueScreenInfo.c)
 *     HdlspSendStringAtBaud @ 0x14075B128 (HdlspSendStringAtBaud.c)
 *     HdlspSetBlueScreenInformation @ 0x14075B158 (HdlspSetBlueScreenInformation.c)
 */

__int64 __fastcall HdlspDispatch(signed int a1, int *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  int v10; // r13d
  char v11; // si
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // r13
  int v14; // eax
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
  __int64 retaddr; // [rsp+C8h] [rbp+0h]

  v5 = 0;
  v10 = 1228800;
  v11 = 1;
  if ( (unsigned int)a1 <= 0x14 && _bittest(&v10, a1) )
  {
    v12 = HeadlessGlobals;
    goto LABEL_24;
  }
  v12 = HeadlessGlobals;
  if ( (*(_DWORD *)(HeadlessGlobals + 48) & 2) != 0 )
  {
    CurrentIrql = -1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)v12);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v12);
    }
    v12 = HeadlessGlobals;
  }
  v14 = *(_DWORD *)(v12 + 48);
  if ( (v14 & 0x40) == 0 )
  {
    *(_DWORD *)(v12 + 48) = v14 | 0x40;
    if ( CurrentIrql != 0xFF )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)v12, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
      __writecr8(CurrentIrql);
      v12 = HeadlessGlobals;
    }
    v10 = 1228800;
LABEL_24:
    if ( a1 <= 16 )
    {
      if ( a1 == 16 )
      {
        if ( a4 && a5 && *a5 >= 0x20uLL )
        {
          *(_DWORD *)a4 = 1;
          *(_BYTE *)(a4 + 8) = 1;
          *(_BYTE *)(a4 + 9) = (*(_DWORD *)(v12 + 48) & 8) != 0;
          *(_DWORD *)(a4 + 24) = *(_DWORD *)(v12 + 52);
          v23 = *(_DWORD *)(v12 + 48);
          v24 = (v23 >> 9) & 7;
          if ( v24 || (v23 & 8) != 0 )
          {
            *(_DWORD *)(a4 + 12) = v24;
            *(_QWORD *)(a4 + 16) = *(_QWORD *)(v12 + 64);
          }
          else
          {
            *(_DWORD *)(a4 + 12) = 0;
            *(_QWORD *)(a4 + 16) = 0LL;
          }
          *(_BYTE *)(a4 + 28) = *(_BYTE *)(v12 + 84);
          goto LABEL_144;
        }
        goto LABEL_44;
      }
      if ( a1 > 11 )
      {
        if ( a1 == 12 )
        {
          if ( !a4 || !a5 || *a5 != 1LL )
            goto LABEL_44;
          if ( (*(_DWORD *)(v12 + 48) & 1) != 0 )
          {
            if ( InbvPortPollOnly(*(_DWORD *)(v12 + 56), (unsigned int)(a1 - 12), 2LL, a4) )
            {
              InbvPortGetByte(*(_DWORD *)(HeadlessGlobals + 56), a4, v22);
              goto LABEL_58;
            }
            v12 = HeadlessGlobals;
          }
          goto LABEL_96;
        }
        if ( a1 != 13 )
        {
          if ( a1 == 14 )
          {
            *(_DWORD *)(v12 + 48) = *(_DWORD *)(v12 + 48) & 0xFFFFFFBD | 2;
          }
          else if ( (*(_DWORD *)(v12 + 48) & 1) != 0 )
          {
            HdlspBugCheckProcessing();
          }
          return v5;
        }
        if ( !a4 || !a5 || *a5 < 2uLL )
          goto LABEL_44;
        if ( (*(_DWORD *)(v12 + 48) & 1) == 0 )
          goto LABEL_96;
        Line = HdlspGetLine((void *)(a4 + 1), *a5 - 1LL);
      }
      else
      {
        if ( a1 != 11 )
        {
          if ( a1 != 1 )
          {
            if ( a1 != 2 )
            {
              if ( a1 != 3 )
              {
                if ( (unsigned int)(a1 - 4) > 6 )
                {
LABEL_40:
                  v5 = -1073741811;
                  goto LABEL_142;
                }
                if ( (*(_DWORD *)(v12 + 48) & 1) == 0 )
                {
LABEL_142:
                  if ( (unsigned int)a1 <= 0x14 && _bittest(&v10, a1) )
                    return v5;
                  goto LABEL_144;
                }
                switch ( a1 )
                {
                  case 4:
                    v19 = "\x1B[2J";
                    goto LABEL_54;
                  case 5:
                    v19 = "\x1B[0J";
                    goto LABEL_54;
                  case 6:
                    v19 = "\x1B[0K";
                    goto LABEL_54;
                  case 7:
                    v19 = "\x1B[0m";
                    goto LABEL_54;
                  case 8:
                    v19 = "\x1B[7m";
                    goto LABEL_54;
                  case 9:
                    if ( a2 && a3 == 8 )
                    {
                      v17 = *a2;
                      v16 = "\x1B[%d;%dm";
                      v18 = (unsigned int)a2[1];
                      goto LABEL_48;
                    }
                    break;
                  case 10:
                    if ( a2 && a3 == 8 )
                    {
                      v16 = "\x1B[%d;%dH";
                      v17 = *a2 + 1;
                      v18 = (unsigned int)(a2[1] + 1);
LABEL_48:
                      sprintf_s(DstBuf, 0x50uLL, v16, v18, v17);
                      v19 = DstBuf;
LABEL_54:
                      HdlspSendStringAtBaud(v19);
LABEL_141:
                      v12 = HeadlessGlobals;
                      goto LABEL_142;
                    }
                    break;
                  default:
                    goto LABEL_40;
                }
                goto LABEL_44;
              }
              if ( a2 )
              {
                if ( (*(_DWORD *)(v12 + 48) & 1) == 0 )
                  goto LABEL_144;
                HdlspPutString(a2, a2, 2LL);
LABEL_58:
                v12 = HeadlessGlobals;
                goto LABEL_144;
              }
LABEL_44:
              v5 = -1073741811;
LABEL_144:
              *(_DWORD *)(v12 + 48) &= ~0x40u;
              return v5;
            }
            if ( !a4 || !a5 || *a5 != 1LL )
              goto LABEL_44;
            if ( (*(_DWORD *)(v12 + 48) & 1) != 0 )
            {
              if ( (unsigned __int8)HdlspGetLine(DstBuf, 0x50uLL) )
              {
                if ( strcmp(DstBuf, "reboot") && strcmp(DstBuf, "shutdown") )
                  v11 = 0;
                *(_BYTE *)a4 = v11;
              }
              goto LABEL_58;
            }
LABEL_96:
            *(_BYTE *)a4 = 0;
            goto LABEL_144;
          }
          if ( !a2 || a3 != 1 )
            goto LABEL_44;
          LOBYTE(v12) = *(_BYTE *)a2;
          v20 = HdlspEnableTerminal(v12, a2, 2LL);
LABEL_71:
          v5 = v20;
          goto LABEL_58;
        }
        if ( !a4 || !a5 || *a5 != 1LL )
          goto LABEL_44;
        if ( (*(_DWORD *)(v12 + 48) & 1) == 0 )
          goto LABEL_96;
        Line = InbvPortPollOnly(*(_DWORD *)(v12 + 56), (__int64)a2, 2LL, a4);
      }
      *(_BYTE *)a4 = Line;
      goto LABEL_58;
    }
    switch ( a1 )
    {
      case 17:
        if ( a2 )
        {
          HdlspAddLogEntry(a2);
          goto LABEL_141;
        }
        return (unsigned int)-1073741811;
      case 18:
        if ( a2 && a3 == 1 )
        {
          LOBYTE(v12) = *(_BYTE *)a2;
          HdlspProcessDumpCommand(v12);
          goto LABEL_58;
        }
        goto LABEL_44;
      case 19:
        if ( a2 )
        {
          v20 = HdlspSetBlueScreenInformation(a2, a3, 2LL);
          goto LABEL_71;
        }
        return 3221225485LL;
      case 20:
        if ( (*(_BYTE *)(v12 + 48) & 3) == 3 )
        {
          if ( a2 && a3 == 4 )
          {
            HdlspSendBlueScreenInfo((unsigned int)*a2, (unsigned int)(a1 - 20), 2LL);
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
              *(_OWORD *)a4 = *(_OWORD *)(v12 + 100);
              goto LABEL_144;
            }
            goto LABEL_44;
          case 22:
            if ( a2 && a3 )
            {
              if ( (*(_DWORD *)(v12 + 48) & 1) == 0 )
                goto LABEL_144;
              HdlspPutData(a2, a3, 2LL);
              goto LABEL_58;
            }
            break;
          case 23:
            if ( a2 )
            {
              if ( (*(_DWORD *)(v12 + 48) & 1) == 0 )
                goto LABEL_144;
              HdlspPutWideString(a2, (unsigned int)(a1 - 23), 2LL);
              goto LABEL_58;
            }
            break;
          case 24:
            if ( a4 && a5 && *a5 >= 0xCuLL )
            {
              *(_QWORD *)a4 = *(_QWORD *)(v12 + 118);
              *(_DWORD *)(a4 + 8) = *(_DWORD *)(v12 + 126);
              goto LABEL_144;
            }
            goto LABEL_44;
          default:
            goto LABEL_40;
        }
        goto LABEL_44;
    }
    return v5;
  }
  if ( CurrentIrql != 0xFF )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v12, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
    __writecr8(CurrentIrql);
  }
  return 3221225473LL;
}
