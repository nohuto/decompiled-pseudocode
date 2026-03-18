/*
 * XREFs of AddInertiaInfo @ 0x1C023981C
 * Callers:
 *     NtUserReportInertia @ 0x1C000CB80 (NtUserReportInertia.c)
 * Callees:
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C02295DC (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 */

__int64 __fastcall AddInertiaInfo(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        __int64 a5,
        double a6,
        __int128 *a7,
        __int128 *a8)
{
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v13; // rdx
  LARGE_INTEGER v14; // r8
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // ecx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v13 = qword_1C032F1D0;
  v14 = PerformanceCounter;
  if ( !qword_1C032F1D0 )
  {
    v13 = 100 * gliQpcFreq.QuadPart / 1000;
    qword_1C032F1D0 = v13;
  }
  if ( (dword_1C032B998 & 1) != 0
    && gInertiaInfo == a1
    && PerformanceCounter.QuadPart - qword_1C032B990 <= v13
    && a6 <= *(double *)&qword_1C032B930 )
  {
    return 0LL;
  }
  gInertiaInfo = a1;
  qword_1C032B918 = a2;
  qword_1C032B920 = *(_QWORD *)a5;
  v16 = *(_DWORD *)(a5 + 8);
  qword_1C032B930 = *(_QWORD *)&a6;
  dword_1C032B928 = v16;
  if ( a3 )
    qword_1C032B988 = *a3;
  else
    qword_1C032B988 = 0LL;
  qword_1C032B990 = v14.QuadPart;
  dword_1C032B998 ^= ((unsigned __int8)dword_1C032B998 ^ (unsigned __int8)(8 * a4)) & 8;
  v17 = ((unsigned __int8)dword_1C032B998 ^ (unsigned __int8)(2 * (a1 != a3[2]))) & 2 ^ dword_1C032B998;
  dword_1C032B998 = v17;
  if ( a7 )
  {
    v18 = v17 | 4;
    xmmword_1C032B938 = *a7;
    xmmword_1C032B948 = *a8;
    xmmword_1C032B958 = a8[1];
    xmmword_1C032B968 = a8[2];
    xmmword_1C032B978 = a8[3];
  }
  else
  {
    v18 = v17 & 0xFFFFFFFB;
  }
  dword_1C032B998 = v18 | 1;
  Edgy::ProcessEdgyInertia((Edgy *)&gInertiaInfo, (const struct INERTIA_INFO_INTERNAL *)v13);
  return 1LL;
}
