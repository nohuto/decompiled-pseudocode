/*
 * XREFs of BgpFwDisplayBugCheckProgressUpdate @ 0x14026F8E8
 * Callers:
 *     KiBugCheckProgress @ 0x140202A44 (KiBugCheckProgress.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14026F8E8 (BgpFwDisplayBugCheckProgressUpdate.c)
 * Callees:
 *     BcpConvertProgressToString @ 0x14026EDAC (BcpConvertProgressToString.c)
 *     BcpDisplayProgress @ 0x14026F484 (BcpDisplayProgress.c)
 *     BcpGetDisplayType @ 0x14026F638 (BcpGetDisplayType.c)
 *     BcpSetCursorPosition @ 0x14026F8CC (BcpSetCursorPosition.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14026F8E8 (BgpFwDisplayBugCheckProgressUpdate.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckProgressUpdate(unsigned int a1, UNICODE_STRING **a2, char a3)
{
  LARGE_INTEGER v6; // rax
  LONGLONG v7; // r9
  LONGLONG v8; // rdx
  LARGE_INTEGER v9; // rsi
  LONGLONG v10; // r8
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // r8d
  int v14; // r10d
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER v16; // r8
  UNICODE_STRING *v18; // rax
  UNICODE_STRING *v19; // rax
  unsigned __int64 v20; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+28h] [rbp-20h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+20h] BYREF

  if ( (dword_140323CF0 & 0x400000) != 0 || (dword_140323CF0 & 0x10) == 0 )
    return 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = v6.QuadPart - BcpLastProgressUpdateTicks;
  v8 = v6.QuadPart - BcpStartTicks;
  v9.QuadPart = 2 * PerformanceFrequency.QuadPart;
  v10 = 10 * PerformanceFrequency.QuadPart;
  if ( a3 && v8 < v10 )
    v11 = 100 * v8 / v10;
  else
    LODWORD(v11) = 100;
  v12 = BcpLastProgressDisplayed;
  if ( a1 <= (unsigned int)v11 )
    LODWORD(v11) = a1;
  if ( v7 < v9.QuadPart || (unsigned int)v11 < BcpLastProgressDisplayed )
  {
    LODWORD(v11) = BcpLastProgressDisplayed;
  }
  else
  {
    v20 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
    v21 = HIDWORD(BgInternal);
    BcpGetDisplayType(&v20);
    BcpSetCursorPosition(ProgressOffset, dword_140323BE4, dword_140323BE8);
    BcpDisplayProgress(v11, v14, v13);
    BcpLastProgressUpdateTicks = KeQueryPerformanceCounter(0LL).QuadPart;
    v12 = v11;
    BcpLastProgressDisplayed = v11;
  }
  if ( a1 != 100 || v12 == 100 )
  {
    v18 = &stru_1403565E0;
    if ( !a3 )
      v18 = &stru_1403565F0;
    *a2 = v18;
    BcpConvertProgressToString(v11, (__int64)(a2 + 3));
    if ( a1 == 1 )
    {
      a2[1] = &stru_140356620;
      v19 = &stru_140356630;
    }
    else
    {
      a2[1] = &stru_140356640;
      v19 = &stru_140356650;
    }
    a2[2] = v19;
    return 0LL;
  }
  v15.QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - BcpLastProgressUpdateTicks;
  if ( v15.QuadPart < v9.QuadPart )
    KeStallExecutionProcessor(1000000 * (v9.QuadPart - v15.QuadPart) / PerformanceFrequency.QuadPart);
  LOBYTE(v16.LowPart) = a3;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgpFwDisplayBugCheckProgressUpdate)(
           100LL,
           a2,
           (LARGE_INTEGER)v16.QuadPart);
}
