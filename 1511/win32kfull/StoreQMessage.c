/*
 * XREFs of StoreQMessage @ 0x1C0060180
 * Callers:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C005FAE0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0060EC0 (xxxProcessNotifyWinEvent.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     _PostThreadMessageEx @ 0x1C0065470 (_PostThreadMessageEx.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E7198 (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     IsCurrentDesktopComposed @ 0x1C00874C0 (IsCurrentDesktopComposed.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F4384 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall StoreQMessage(
        LARGE_INTEGER *a1,
        InputTransform *a2,
        DWORD a3,
        LARGE_INTEGER a4,
        LARGE_INTEGER a5,
        int a6,
        __int64 a7,
        DWORD a8,
        LARGE_INTEGER a9,
        char a10,
        DWORD *a11,
        LONGLONG a12,
        LARGE_INTEGER a13,
        LARGE_INTEGER *a14)
{
  LARGE_INTEGER v17; // rax
  unsigned __int64 v18; // rcx
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 QuadPart_low; // rcx
  __int64 CurrentProcessWow64Process; // rax
  LARGE_INTEGER *v22; // rdx
  LARGE_INTEGER *v23; // rax
  LARGE_INTEGER v24; // rax
  unsigned __int64 v25; // r8
  const struct tagINPUT_TRANSFORM *v26; // r9

  if ( a2 )
    v17 = *(LARGE_INTEGER *)a2;
  else
    v17.QuadPart = 0LL;
  a1[2] = v17;
  a1[3].LowPart = a3;
  a1[4] = a4;
  a1[5] = a5;
  if ( a6 )
    LODWORD(v18) = a6;
  else
    v18 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  a1[6].LowPart = v18;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  a1[17].LowPart = a1[6].LowPart;
  QuadPart_low = a3 - 512;
  a1[15] = PerformanceCounter;
  if ( (unsigned int)QuadPart_low <= 0xE && (unsigned int)IsCurrentDesktopComposed() )
  {
    QuadPart_low = (unsigned int)SLOWORD(a5.QuadPart);
    a1[7].LowPart = SHIWORD(a5.u.LowPart);
    a1[6].HighPart = QuadPart_low;
  }
  else
  {
    *(LONGLONG *)((char *)&a1[6].QuadPart + 4) = a12;
  }
  a1[11].LowPart = a8;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(QuadPart_low);
  v22 = a1 + 14;
  a1[9] = a9;
  a1[11].HighPart ^= (a1[11].HighPart ^ (CurrentProcessWow64Process != 0)) & 1;
  a1[10] = *(LARGE_INTEGER *)(gpsi + 3976LL);
  a1[11].HighPart ^= (a1[11].HighPart ^ (2 * (a10 & 1))) & 2;
  if ( a11 )
  {
    v22->LowPart = *a11;
    a1[14].HighPart = a11[1];
  }
  else
  {
    v22->QuadPart = 0LL;
  }
  a1[16] = a13;
  if ( (a10 & 2) == 0 && (a1 == (LARGE_INTEGER *)-112LL || a3 - 512 > 0xE || ((v22->LowPart - 4) & 0xFFFFFFFB) != 0) )
  {
    a1[11].HighPart &= ~0x800u;
  }
  else
  {
    v23 = a14;
    if ( !a14 )
      v23 = (LARGE_INTEGER *)(*(_QWORD *)(gptiCurrent + 376LL) + 832LL);
    v24 = *v23;
    a1[11].HighPart |= 0x800u;
    a1[13] = v24;
  }
  if ( a1 != (LARGE_INTEGER *)-112LL && a3 - 512 <= 0xE && ((v22->LowPart - 4) & 0xFFFFFFFB) == 0 )
  {
    a1[9].QuadPart = LOBYTE(a9.LowPart) | 0xFF515700LL;
    a1[17].LowPart = a1[6].LowPart - ((int)a9.LowPart >> 8);
  }
  if ( (gbEnableDwmTouchProcessing || gbEnableDwmMouseProcessing)
    && (a1[11].HighPart & 8) != 0
    && a2
    && (unsigned int)IsCompositionInputWindow(a2) )
  {
    InputTransform::OnInput(a2, (struct tagWND *)PerformanceCounter.QuadPart, v25, v26);
  }
  return EtwTraceQueueMessage(a1);
}
