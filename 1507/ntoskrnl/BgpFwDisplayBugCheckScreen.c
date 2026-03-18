/*
 * XREFs of BgpFwDisplayBugCheckScreen @ 0x14026FAA0
 * Callers:
 *     KiDisplayBlueScreen @ 0x140202B60 (KiDisplayBlueScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x14026E1F8 (BgpClearScreen.c)
 *     BcpDisplayCriticalCharacter @ 0x14026EE94 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14026EF50 (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x14026F254 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x14026F484 (BcpDisplayProgress.c)
 *     BcpGetDisplayType @ 0x14026F638 (BcpGetDisplayType.c)
 *     BcpGetMessageOffsets @ 0x14026F668 (BcpGetMessageOffsets.c)
 *     BcpSetCursorPosition @ 0x14026F8CC (BcpSetCursorPosition.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1407FEAA8 (BcpDisplayEarlyBugCheckScreen.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckScreen(unsigned int a1, unsigned __int64 *a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int DisplayType; // ebp
  int *v11; // rdi
  unsigned int v12; // r8d
  int v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  UNICODE_STRING *v16; // rcx
  UNICODE_STRING *v17; // rdx
  int MessageOffsets; // edi
  unsigned int v19; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  int v23; // [rsp+48h] [rbp-30h]

  if ( (dword_140323CF0 & 4) != 0 )
  {
    if ( (dword_140323CF0 & 0x400000) == 0 )
      return BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
    goto LABEL_22;
  }
  if ( (dword_140323CF0 & 0x400000) != 0 || (dword_140323CF0 & 0x10) == 0 )
  {
LABEL_22:
    BgpClearScreen(-16777216);
    return 0LL;
  }
  v22 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v23 = HIDWORD(BgInternal);
  DisplayType = BcpGetDisplayType(&v22);
  v11 = (int *)((char *)&unk_14031E760 + 56 * (int)DisplayType);
  BgpClearScreen(*(_DWORD *)(*(_QWORD *)(qword_140356660 + 24) + 40LL));
  BcpSetCursorPosition(v11[3], v11[4], v11 + 4);
  if ( (dword_140323CF0 & 0x20000) == 0 )
    BcpDisplayCriticalString(word_140293388, v11[2], v12, DisplayType);
  v13 = v11[3] + v11[7];
  v14 = v11[1];
  HIDWORD(BcpCursor) = dword_140386298 + v11[8];
  LODWORD(BcpCursor) = v13;
  BcpDisplayCriticalString((__int16 *)&stru_1403565C0, v14, v12, DisplayType);
  BcpDisplayCriticalCharacter(0x20u, v11[1]);
  if ( (a5 & 1) == 0 )
  {
    if ( (a5 & 2) != 0 )
    {
      v16 = &stru_140356610;
      v17 = &stru_1403565F0;
    }
    else
    {
      v16 = &stru_140356600;
      v17 = &stru_1403565E0;
    }
    if ( (a5 & 4) == 0 )
      v16 = v17;
    BcpDisplayCriticalString((__int16 *)v16, v11[1], v15, DisplayType);
  }
  BcpDisplayCriticalCharacter(0x20u, v11[1]);
  MessageOffsets = BcpGetMessageOffsets(
                     (unsigned int *)&ProgressOffset,
                     &ErrorMessageOffset,
                     DisplayType,
                     (a5 & 4) == 0);
  if ( MessageOffsets >= 0 )
  {
    BcpSetCursorPosition(ErrorMessageOffset, dword_140323BA4, (int *)&unk_140323BA8);
    BcpDisplayErrorInformation(DisplayType, a1, a2, a3, (__int64)a4, a5);
    if ( (a5 & 4) != 0 )
    {
      if ( (a5 & 2) == 0 )
      {
        KeQueryPerformanceCounter(&PerformanceFrequency);
        KeStallExecutionProcessor(10000000 * PerformanceFrequency.QuadPart / PerformanceFrequency.QuadPart);
      }
    }
    else
    {
      BcpSetCursorPosition(ProgressOffset, dword_140323BE4, dword_140323BE8);
      BcpDisplayProgress(0, DisplayType, v19);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      BcpLastProgressDisplayed = 0;
      BcpStartTicks = PerformanceCounter.QuadPart;
      BcpLastProgressUpdateTicks = PerformanceCounter.QuadPart;
    }
    *a4 = &stru_1403565C0;
    a4[1] = &stru_1403565D0;
  }
  return (unsigned int)MessageOffsets;
}
