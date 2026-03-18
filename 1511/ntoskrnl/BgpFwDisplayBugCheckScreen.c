/*
 * XREFs of BgpFwDisplayBugCheckScreen @ 0x140220678
 * Callers:
 *     KiDisplayBlueScreen @ 0x1401C6018 (KiDisplayBlueScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x14021EDD0 (BgpClearScreen.c)
 *     BcpDisplayCriticalCharacter @ 0x14021FA6C (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14021FB28 (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x14021FE2C (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x14022005C (BcpDisplayProgress.c)
 *     BcpGetDisplayType @ 0x140220210 (BcpGetDisplayType.c)
 *     BcpGetMessageOffsets @ 0x140220240 (BcpGetMessageOffsets.c)
 *     BcpSetCursorPosition @ 0x1402204A4 (BcpSetCursorPosition.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140788F20 (BcpDisplayEarlyBugCheckScreen.c)
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

  if ( (dword_1402D4BB0 & 4) != 0 )
  {
    if ( (dword_1402D4BB0 & 0x400000) == 0 )
      return BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
    goto LABEL_22;
  }
  if ( (dword_1402D4BB0 & 0x400000) != 0 || (dword_1402D4BB0 & 0x10) == 0 )
  {
LABEL_22:
    BgpClearScreen(-16777216);
    return 0LL;
  }
  v22 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v23 = HIDWORD(BgInternal);
  DisplayType = BcpGetDisplayType(&v22);
  v11 = (int *)((char *)&unk_1402CF700 + 56 * (int)DisplayType);
  BgpClearScreen(*(_DWORD *)(*(_QWORD *)(qword_140306360 + 24) + 40LL));
  BcpSetCursorPosition(v11[3], v11[4], v11 + 4);
  if ( (dword_1402D4BB0 & 0x20000) == 0 )
    BcpDisplayCriticalString(word_14023F728, v11[2], v12, DisplayType);
  v13 = v11[3] + v11[7];
  v14 = v11[1];
  HIDWORD(BcpCursor) = dword_1403352A0 + v11[8];
  LODWORD(BcpCursor) = v13;
  BcpDisplayCriticalString((__int16 *)&stru_1403062C0, v14, v12, DisplayType);
  BcpDisplayCriticalCharacter(0x20u, v11[1]);
  if ( (a5 & 1) == 0 )
  {
    if ( (a5 & 2) != 0 )
    {
      v16 = &stru_140306310;
      v17 = &stru_1403062F0;
    }
    else
    {
      v16 = &stru_140306300;
      v17 = &stru_1403062E0;
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
    BcpSetCursorPosition(ErrorMessageOffset, dword_1402D4A74, (int *)&unk_1402D4A78);
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
      BcpSetCursorPosition(ProgressOffset, dword_1402D4AB4, (int *)&unk_1402D4AB8);
      BcpDisplayProgress(0, DisplayType, v19);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      BcpLastProgressDisplayed = 0;
      BcpStartTicks = PerformanceCounter.QuadPart;
      BcpLastProgressUpdateTicks = PerformanceCounter.QuadPart;
    }
    *a4 = &stru_1403062C0;
    a4[1] = &stru_1403062D0;
  }
  return (unsigned int)MessageOffsets;
}
