/*
 * XREFs of ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01EEE90
 * Callers:
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C01C12EC (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     ?GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z @ 0x1C01EED40 (-GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z.c)
 *     ?GeneratePointerInputMessages@@YAXPEBUtagPOINTERINPUTFRAME@@KHHKKH@Z @ 0x1C01EEDC0 (-GeneratePointerInputMessages@@YAXPEBUtagPOINTERINPUTFRAME@@KHHKKH@Z.c)
 *     ?GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z @ 0x1C01EF1E8 (-GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F15E8 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     IsHungWindow @ 0x1C0059680 (IsHungWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00A9964 (IsForegroundShellFrameQueueAccessible.c)
 *     ProcessHungWindow @ 0x1C00D5348 (ProcessHungWindow.c)
 *     ?PointerFlagsToMessage@@YAII@Z @ 0x1C01F0598 (-PointerFlagsToMessage@@YAII@Z.c)
 *     GetPointerInputSource @ 0x1C01F9810 (GetPointerInputSource.c)
 */

__int64 __fastcall GeneratePointerMessage(
        const struct tagPOINTERINFONODE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        HWND a7)
{
  unsigned int v7; // r15d
  unsigned __int16 v8; // r14
  unsigned __int16 v10; // r13
  HWND v12; // rcx
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  _DWORD *v19; // r8
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  int v33; // eax
  __int64 v34; // rcx
  char v35; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+10h]
  int v37; // [rsp+B8h] [rbp+20h]

  v37 = a4;
  v36 = a2;
  v7 = a3;
  v8 = *((_WORD *)a1 + 30);
  v10 = *((_WORD *)a1 + 24);
  if ( !(_DWORD)a3 )
  {
    v7 = PointerFlagsToMessage(*((_DWORD *)a1 + 17));
    if ( !v7 )
      return 0LL;
  }
  v12 = a7;
  if ( !a7 )
  {
    v12 = (HWND)*((_QWORD *)a1 + 10);
    if ( !v12 )
      return 0LL;
  }
  v13 = a6;
  if ( a6 || (*(_DWORD *)a1 & 0x800) != 0 )
  {
    LOBYTE(a2) = 1;
    v14 = HMValidateHandleNoSecure((unsigned __int64)v12, a2, a3, a4);
  }
  else
  {
    v14 = ValidateHwnd(v12);
  }
  v16 = v14;
  if ( !v14 )
    return 0LL;
  v17 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 384LL);
  if ( !a5 )
    goto LABEL_44;
  v18 = gpqForeground;
  if ( gpqForeground )
  {
    v19 = (_DWORD *)gbEnforceUIPI;
    v15 = *(_QWORD *)(gptiCurrent + 376LL);
    v18 = *(_QWORD *)(gpqForeground + 380LL);
    v20 = *(_QWORD *)(v15 + 824);
    if ( !gbEnforceUIPI )
      goto LABEL_24;
    if ( (unsigned int)v20 > (unsigned int)v18 )
      goto LABEL_24;
    if ( (_DWORD)v20 == (_DWORD)v18 )
    {
      v21 = HIDWORD(v20);
      v18 >>= 32;
      if ( (_DWORD)v21 == (_DWORD)v18 || (_DWORD)v21 == -1 || (_DWORD)v18 == -1 )
        goto LABEL_24;
    }
    if ( *(int *)(v15 + 12) < 0 )
      goto LABEL_24;
    if ( !IsForegroundShellFrameQueueAccessible(gptiCurrent) )
    {
      EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
      return 0LL;
    }
  }
  v19 = (_DWORD *)gbEnforceUIPI;
LABEL_24:
  if ( (*(_DWORD *)a1 & 0x800) == 0 )
  {
    v18 = *(_QWORD *)(v17 + 380);
    v15 = gptiCurrent;
    v22 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
    if ( *v19 )
    {
      if ( (unsigned int)v22 <= (unsigned int)v18 )
      {
        if ( (_DWORD)v22 != (_DWORD)v18
          || (v23 = HIDWORD(v22), v18 >>= 32, (_DWORD)v23 != (_DWORD)v18) && (_DWORD)v23 != -1 && (_DWORD)v18 != -1 )
        {
          if ( !v13 )
          {
            UserSetLastError(5LL);
LABEL_33:
            EtwTraceUIPIInputError(gptiCurrent, *(_QWORD *)(v16 + 16), v17, *(_QWORD *)(v17 + 380), 8);
            return 0LL;
          }
        }
      }
    }
  }
  if ( (unsigned int)IsDwmInputThread(v18, v15) )
  {
    if ( (*(_DWORD *)a1 & 0x800) == 0 && !v13 )
    {
      LOBYTE(v24) = 19;
      v27 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 9), v24, v25, v26);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v17 + 380);
        v29 = *(_QWORD *)(*(_QWORD *)(v27 + 480) + 1512LL);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v29 <= (unsigned int)v28 )
          {
            if ( (_DWORD)v29 != (_DWORD)v28 )
              goto LABEL_33;
            v30 = HIDWORD(v29);
            v31 = HIDWORD(v28);
            if ( (_DWORD)v30 != (_DWORD)v31 && (_DWORD)v30 != -1 && (_DWORD)v31 != -1 )
              goto LABEL_33;
          }
        }
      }
    }
  }
LABEL_44:
  if ( v7 == 595 )
    v32 = v8;
  else
    v32 = v8 | (unsigned __int64)((unsigned __int16)(*((_WORD *)a1 + 34) & 0xE1F7) << 16);
  GetPointerInputSource(*((unsigned int *)a1 + 14), a5, v13, &v35);
  EtwTraceBeginPointerMessageGeneration(v10, v8);
  if ( !(unsigned int)PostInputMessage(v17, v16, v7, v32, v36, v37, *((_QWORD *)a1 + 17), 0LL, 0, &v35, 0LL, 0LL) )
  {
    EtwTraceEndPointerMessageGeneration(v10, v8);
    return 0LL;
  }
  EtwTraceEndPointerMessageGeneration(v10, v8);
  v33 = *((_DWORD *)a1 + 17);
  if ( (v33 & 0x2000) != 0 && (v33 & 0x10000) != 0 )
  {
    SetLastInputWoken(*(_QWORD *)(v16 + 16), 0LL);
    PoLatencySensitivityHint(2LL);
    v34 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 408LL);
    if ( v34 )
    {
      if ( *(_QWORD *)(v34 + 24) )
      {
        if ( IsHungWindow(v16) )
          ProcessHungWindow();
      }
    }
  }
  return 1LL;
}
