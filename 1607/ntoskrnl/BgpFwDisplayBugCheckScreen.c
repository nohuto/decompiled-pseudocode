/*
 * XREFs of BgpFwDisplayBugCheckScreen @ 0x14023A6D0
 * Callers:
 *     KiDisplayBlueScreen @ 0x1401D4F98 (KiDisplayBlueScreen.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x140127A94 (BgpGxDrawRectangle.c)
 *     BgpClearScreen @ 0x1402392C4 (BgpClearScreen.c)
 *     BgpGxIsRectangleValid @ 0x140239708 (BgpGxIsRectangleValid.c)
 *     BcpDisplayCriticalCharacter @ 0x140239920 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x1402399E4 (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x140239D28 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x14023A008 (BcpDisplayProgress.c)
 *     BcpGetComponentOffsets @ 0x14023A1F4 (BcpGetComponentOffsets.c)
 *     BcpGetDisplayType @ 0x14023A370 (BcpGetDisplayType.c)
 *     BcpSetCursorPosition @ 0x14023A4FC (BcpSetCursorPosition.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1407D5260 (BcpDisplayEarlyBugCheckScreen.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckScreen(__int64 a1, unsigned __int64 *a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int DisplayType; // esi
  unsigned int v9; // r8d
  int v10; // eax
  int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  UNICODE_STRING *v14; // rcx
  UNICODE_STRING *v15; // rax
  __int64 v16; // r9
  bool IsRectangleValid; // r15
  int v18; // ecx
  int ComponentOffsets; // r12d
  unsigned int v20; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-20h] BYREF
  int v23; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  int v25; // [rsp+48h] [rbp-8h]
  int v26; // [rsp+90h] [rbp+40h]

  v26 = a1;
  if ( (dword_1402F9F90 & 4) != 0 )
  {
    if ( (dword_1402F9F90 & 0x400000) == 0 )
      return BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
    goto LABEL_27;
  }
  if ( (dword_1402F9F90 & 0x400000) != 0 || (dword_1402F9F90 & 0x10) == 0 )
  {
LABEL_27:
    BgpClearScreen(-16777216);
    return 0LL;
  }
  v24 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v25 = HIDWORD(BgInternal);
  DisplayType = BcpGetDisplayType(&v24);
  BgpClearScreen(*(_DWORD *)(*(_QWORD *)(qword_1403293F0 + 24) + 40LL));
  BcpSetCursorPosition(
    dword_1402F6930[18 * DisplayType + 4],
    dword_1402F6930[18 * DisplayType + 5],
    &dword_1402F6930[18 * DisplayType + 5]);
  if ( (dword_1402F9F90 & 0x20000) == 0 )
    BcpDisplayCriticalString(word_14025AE70, dword_1402F6930[18 * DisplayType + 3], v9, DisplayType);
  v10 = dword_1402F6930[18 * DisplayType + 4] + dword_1402F6930[18 * DisplayType + 8];
  v11 = dword_1402F6930[18 * DisplayType + 2];
  HIDWORD(BcpCursor) = dword_140358298 + dword_1402F6930[18 * DisplayType + 9];
  LODWORD(BcpCursor) = v10;
  BcpDisplayCriticalString((__int16 *)&stru_140329320, v11, v9, DisplayType);
  BcpDisplayCriticalCharacter(v12, dword_1402F6930[18 * DisplayType + 2]);
  if ( (a5 & 1) == 0 )
  {
    if ( (a5 & 2) != 0 )
    {
      v14 = &stru_140329370;
      v15 = &stru_140329350;
    }
    else
    {
      v14 = &stru_140329360;
      v15 = &stru_140329340;
    }
    if ( (a5 & 4) == 0 )
      v14 = v15;
    BcpDisplayCriticalString((__int16 *)v14, dword_1402F6930[18 * DisplayType + 2], v13, DisplayType);
  }
  IsRectangleValid = BgpGxIsRectangleValid(qword_1402FA018);
  if ( IsRectangleValid )
    v18 = *(_DWORD *)(v16 + 4);
  else
    v18 = 0;
  ComponentOffsets = BcpGetComponentOffsets(
                       (unsigned int *)&BcpProgressOffset,
                       &BcpErrorMessageOffset,
                       &v23,
                       DisplayType,
                       v18,
                       (a5 & 4) == 0);
  if ( ComponentOffsets >= 0 )
  {
    BcpSetCursorPosition(BcpErrorMessageOffset, dword_1402F9ED4, (int *)&unk_1402F9ED8);
    BcpDisplayErrorInformation(DisplayType, v26, a2, a3, (__int64)a4, a5);
    if ( IsRectangleValid )
      BgpGxDrawRectangle(qword_1402FA018, (__int64)&v23);
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
      BcpSetCursorPosition(BcpProgressOffset, dword_1402F9EC4, (int *)&unk_1402F9EC8);
      BcpDisplayProgress(0, DisplayType, v20);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      BcpLastProgressDisplayed = 0;
      BcpStartTicks = PerformanceCounter.QuadPart;
      BcpLastProgressUpdateTicks = PerformanceCounter.QuadPart;
    }
    *a4 = &stru_140329320;
    a4[1] = &stru_140329330;
  }
  return (unsigned int)ComponentOffsets;
}
