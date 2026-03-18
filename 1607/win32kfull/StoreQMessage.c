/*
 * XREFs of StoreQMessage @ 0x1C0080C10
 * Callers:
 *     _PostThreadMessageEx @ 0x1C0057D1C (_PostThreadMessageEx.c)
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0085350 (xxxProcessNotifyWinEvent.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01DD958 (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C007CE28 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     IsCurrentDesktopComposed @ 0x1C00DF580 (IsCurrentDesktopComposed.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0113860 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     LogQMsg @ 0x1C01CB178 (LogQMsg.c)
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
  LARGE_INTEGER v18; // rbp
  int v19; // eax
  unsigned __int64 v20; // rcx
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 QuadPart_low; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int LowPart; // r10d
  char v25; // r9
  LONG HighPart; // r8d
  DWORD *v27; // rcx
  LARGE_INTEGER *v28; // rdx
  __int64 result; // rax
  unsigned __int64 v30; // r8
  const struct tagINPUT_TRANSFORM *v31; // r9
  LARGE_INTEGER *v32; // rax
  LARGE_INTEGER v33; // rax

  if ( a2 )
    v17 = *(LARGE_INTEGER *)a2;
  else
    v17.QuadPart = 0LL;
  v18 = a5;
  a1[2] = v17;
  v19 = a6;
  a1[3].LowPart = a3;
  a1[4] = a4;
  a1[5] = v18;
  if ( v19 )
    LODWORD(v20) = v19;
  else
    v20 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  a1[6].LowPart = v20;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  a1[18].LowPart = a1[6].LowPart;
  QuadPart_low = a3 - 512;
  a1[16] = PerformanceCounter;
  if ( (unsigned int)QuadPart_low <= 0xE && (unsigned int)IsCurrentDesktopComposed() )
  {
    QuadPart_low = (unsigned int)SLOWORD(v18.QuadPart);
    a1[7].LowPart = SHIWORD(v18.u.LowPart);
    a1[6].HighPart = QuadPart_low;
  }
  else
  {
    *(LONGLONG *)((char *)&a1[6].QuadPart + 4) = a12;
  }
  a1[12].LowPart = a8;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(QuadPart_low);
  LowPart = a9.LowPart;
  v25 = a10;
  a1[9] = a9;
  a1[12].HighPart ^= (a1[12].HighPart ^ (CurrentProcessWow64Process != 0)) & 1;
  HighPart = a1[12].HighPart;
  a1[10] = *(LARGE_INTEGER *)(gpsi + 5368LL);
  a1[11] = *(LARGE_INTEGER *)(gpsi + 5360LL);
  v27 = a11;
  v28 = a1 + 15;
  a1[12].HighPart = HighPart ^ ((unsigned __int8)HighPart ^ (unsigned __int8)(2 * ((v25 & 1) != 0))) & 2;
  if ( v27 )
  {
    v28->LowPart = *v27;
    a1[15].HighPart = v27[1];
  }
  else
  {
    v28->QuadPart = 0LL;
  }
  a1[17] = a13;
  if ( (v25 & 2) == 0 && (a1 == (LARGE_INTEGER *)-120LL || a3 - 512 > 0xE || ((v28->LowPart - 4) & 0xFFFFFFFB) != 0) )
  {
    a1[12].HighPart &= ~0x800u;
  }
  else
  {
    v32 = a14;
    if ( !a14 )
      v32 = (LARGE_INTEGER *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
    v33 = *v32;
    a1[12].HighPart |= 0x800u;
    a1[14] = v33;
  }
  if ( a1 != (LARGE_INTEGER *)-120LL && a3 - 512 <= 0xE && ((v28->LowPart - 4) & 0xFFFFFFFB) == 0 )
  {
    a1[9].QuadPart = (unsigned __int8)LowPart | 0xFF515700LL;
    a1[18].LowPart = a1[6].LowPart - (LowPart >> 8);
  }
  if ( (gbEnableDwmTouchProcessing || gbEnableDwmMouseProcessing)
    && (a1[12].HighPart & 8) != 0
    && a2
    && (unsigned int)CWindowProp::GetProp<CInputQueueProp>((__int64)a2, &a5) )
  {
    InputTransform::OnInput(a2, (struct tagWND *)PerformanceCounter.QuadPart, v30, v31);
  }
  result = EtwTraceQueueMessage(a1);
  if ( gMsgQLog )
    return LogQMsg(a1);
  return result;
}
